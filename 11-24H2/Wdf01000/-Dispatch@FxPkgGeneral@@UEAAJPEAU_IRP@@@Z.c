/*
 * XREFs of ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1400373A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1400374F0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140038290 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140038A40 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_qqcq @ 0x14005950C (WPP_IFR_SF_qqcq.c)
 *     ?OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1400AAC98 (-OnShutdown@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 */

int __fastcall FxPkgGeneral::Dispatch(FxPkgGeneral *this, _IRP *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IRP *m_Irp; // rax
  unsigned __int8 MajorFunction; // dl
  FxDeviceBase *m_DeviceBase; // r10
  const void *_a1; // r8
  FxIrp fxIrp; // [rsp+60h] [rbp+8h] BYREF

  fxIrp.m_Irp = Irp;
  m_Globals = this->m_Globals;
  m_Irp = Irp;
  if ( m_Globals->FxTrackDriverForMiniDumpLog )
  {
    *(_QWORD *)((unsigned int)(unk_1400C8080 * HIDWORD(KeGetPcr()[1].LockArray)) + unk_1400C8070) = m_Globals;
    m_Irp = fxIrp.m_Irp;
  }
  if ( m_Globals->FxVerboseOn )
  {
    m_DeviceBase = this->m_DeviceBase;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_DeviceBase->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqcq(
      m_Globals,
      5u,
      0xDu,
      0x14u,
      WPP_FxPkgGeneral_cpp_Traceguids,
      _a1,
      m_DeviceBase->m_DeviceObject.m_DeviceObject,
      m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
      Irp);
    m_Irp = fxIrp.m_Irp;
  }
  MajorFunction = m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction;
  switch ( MajorFunction )
  {
    case 0u:
      return FxPkgGeneral::OnCreate(this, &fxIrp);
    case 2u:
      return FxPkgGeneral::OnClose(this, &fxIrp);
    case 0x12u:
      return FxPkgGeneral::OnCleanup(this, &fxIrp);
    case 0x10u:
      return FxPkgGeneral::OnShutdown(this, &fxIrp);
  }
  m_Irp->IoStatus.Status = -1073741637;
  IofCompleteRequest(fxIrp.m_Irp, 0);
  return -1073741637;
}
