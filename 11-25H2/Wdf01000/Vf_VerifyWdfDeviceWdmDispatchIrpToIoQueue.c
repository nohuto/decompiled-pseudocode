/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1400E41E4
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x14002A6F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z @ 0x1400593C0 (-GetDispatchPackage@FxDevice@@QEAAPEAVFxPackage@@E@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x14005F334 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     WPP_IFR_SF_Dd @ 0x140080544 (WPP_IFR_SF_Dd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqcDq @ 0x1400912B0 (WPP_IFR_SF_qqcDq.c)
 *     WPP_IFR_SF_qqcDqd @ 0x1400913EC (WPP_IFR_SF_qqcDqd.c)
 */

__int64 __fastcall Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDevice *device,
        _IRP *Irp,
        FxIoQueue *queue,
        unsigned int Flags)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v9; // r14d
  _WDF_REQUEST_TYPE _a5; // r12d
  unsigned int MinorFunction; // r13d
  unsigned __int16 *p_m_ObjectSize; // r15
  const void *v13; // rdi
  const void *_a3; // rcx
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  const void *v17; // r10
  const void *v18; // r11
  unsigned __int16 v19; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *v21; // rbp
  FxDevice *m_ParentDevice; // rax
  FxDevice *m_Device; // rcx
  unsigned __int16 v24; // r9
  FxPkgPnp *m_PkgPnp; // rax
  unsigned __int16 v26; // ax
  const void *v27; // rcx
  const _GUID *_a2; // [rsp+20h] [rbp-68h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v9 = 0;
  _a5 = CurrentStackLocation->MajorFunction;
  MinorFunction = CurrentStackLocation->MinorFunction;
  p_m_ObjectSize = &device->m_ObjectSize;
  v13 = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( FxDriverGlobals->FxVerboseOn )
  {
    _a3 = (const void *)((unsigned __int64)device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*p_m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qqcDq(
      FxDriverGlobals,
      (unsigned __int8)WPP_FxDeviceApi_cpp_Traceguids,
      (unsigned int)Irp,
      0x3Fu,
      WPP_FxDeviceApi_cpp_Traceguids,
      _a3,
      device->m_DeviceObject.m_DeviceObject,
      _a5,
      MinorFunction,
      Irp);
  }
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    v9 = -1073741811;
    WPP_IFR_SF_Dd(FxDriverGlobals, 2u, 0xDu, 0x40u, WPP_FxDeviceApi_cpp_Traceguids, Flags, -1073741811);
LABEL_29:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return v9;
  }
  if ( FxDevice::GetDispatchPackage(device, _a5) != device->m_PkgIo )
  {
    v19 = 65;
LABEL_9:
    v9 = -1073741811;
    m_ObjectSize = queue->m_ObjectSize;
    if ( *p_m_ObjectSize <= (unsigned __int16)v17 )
      v13 = v17;
    v21 = (const void *)((unsigned __int64)queue ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v21 = v17;
    WPP_IFR_SF_qqcDqd(FxDriverGlobals, v15, v16, v19, _a2, v21, v18, _a5, MinorFunction, v13);
    goto LABEL_29;
  }
  if ( !FxIoQueue::IsIoEventHandlerRegistered(queue, _a5) )
  {
    v19 = 66;
    goto LABEL_9;
  }
  m_ParentDevice = device->m_ParentDevice;
  m_Device = queue->m_Device;
  if ( m_ParentDevice == m_Device )
  {
    if ( !m_ParentDevice )
    {
      v9 = -1073741811;
      v24 = 67;
LABEL_19:
      if ( *p_m_ObjectSize <= (unsigned __int16)v17 )
        v13 = v17;
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, v24, WPP_FxDeviceApi_cpp_Traceguids, v13, v9);
      goto LABEL_29;
    }
    m_PkgPnp = device->m_PkgPnp;
    if ( m_PkgPnp && BYTE3(m_PkgPnp[1].m_DisposeSingleEntry.Next) == (_BYTE)v17 )
    {
      v9 = -1073741808;
      v24 = 68;
      goto LABEL_19;
    }
  }
  else if ( device != m_Device )
  {
    v9 = -1073741811;
    v26 = m_Device->m_ObjectSize;
    v27 = (const void *)((unsigned __int64)m_Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v26 )
      v27 = v17;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x45u, WPP_FxDeviceApi_cpp_Traceguids, v27, -1073741811);
    goto LABEL_29;
  }
  return v9;
}
