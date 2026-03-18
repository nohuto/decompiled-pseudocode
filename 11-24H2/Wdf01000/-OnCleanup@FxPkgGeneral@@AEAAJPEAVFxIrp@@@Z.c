/*
 * XREFs of ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140038A40
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1400373A0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x140005AE0 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x140038ED8 (-FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

NTSTATUS __fastcall FxPkgGeneral::OnCleanup(FxPkgGeneral *this, FxIrp *FxIrp)
{
  unsigned __int64 v4; // r15
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  _FILE_OBJECT *_a1; // rsi
  FxDeviceBase *m_DeviceBase; // r14
  int Next; // r12d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v10; // eax
  char m_ObjectFlags; // al
  FxDeviceBase_vtbl *FsContext; // rbp
  unsigned __int8 v13; // r8
  KIRQL v14; // r13
  FxDeviceBase *v15; // rcx
  FxDeviceBase_vtbl *v16; // rdx
  FxDeviceBase_vtbl *v17; // rax
  NTSTATUS v18; // esi
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *j; // r14
  _FILE_OBJECT *FileObject; // rdx
  _IRP *m_Irp; // rcx
  NTSTATUS result; // eax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v25; // rcx
  FxVerifierLock *m_DeviceObject; // rcx
  FxVerifierLock *v27; // rcx
  void (__fastcall *_a2)(FxDeviceBase *, FxDeviceInfoFlags); // rax
  unsigned int v29; // edx
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *globals; // [rsp+88h] [rbp+10h]

  v4 = 0LL;
  CurrentStackLocation = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
  _a1 = CurrentStackLocation->FileObject;
  if ( _a1 && (_a1->Flags & 0x100) != 0 )
  {
    v18 = 0;
    goto $Passthru_0;
  }
  m_DeviceBase = this->m_DeviceBase;
  Next = (int)m_DeviceBase[1].m_DisposeSingleEntry.Next;
  m_Globals = m_DeviceBase->m_Globals;
  v10 = Next & 0x7FFFFFFF;
  globals = m_Globals;
  if ( (Next & 0x7FFFFFFF) == 1 )
    goto LABEL_15;
  if ( _a1 )
  {
    if ( v10 == 2 )
    {
      FsContext = (FxDeviceBase_vtbl *)_a1->FsContext;
      goto LABEL_20;
    }
    if ( v10 == 3 )
    {
      FsContext = (FxDeviceBase_vtbl *)_a1->FsContext2;
      goto LABEL_20;
    }
  }
  else if ( !BYTE4(m_DeviceBase[1].m_Globals) || v10 != 4 )
  {
    if ( Next < 0 )
    {
LABEL_15:
      v18 = 0;
      goto LABEL_22;
    }
    WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xEu, WPP_FxFileObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
    v18 = -1073741823;
LABEL_22:
    for ( i = this->m_FileObjectInfoHeadList.Blink; i != &this->m_FileObjectInfoHeadList; i = i->Blink )
    {
      if ( !LODWORD(i[9].Flink) && i[2].Blink )
      {
        i = i->Blink;
        goto LABEL_24;
      }
    }
    goto LABEL_24;
  }
  m_ObjectFlags = m_DeviceBase->m_ObjectFlags;
  FsContext = 0LL;
  PreviousIrql = 0;
  if ( m_ObjectFlags < 0 && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, (unsigned __int8)CurrentStackLocation);
    v14 = PreviousIrql;
  }
  else
  {
    v14 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
  }
  v15 = m_DeviceBase + 2;
  v16 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  v17 = v16;
  if ( _a1 )
  {
    while ( v17 != (FxDeviceBase_vtbl *)v15 )
    {
      if ( (_FILE_OBJECT *)v17[-1].SetDeviceTelemetryInfoFlags == _a1 )
        goto LABEL_16;
      v17 = (FxDeviceBase_vtbl *)v17->SelfDestruct;
    }
    goto LABEL_48;
  }
LABEL_16:
  FsContext = v17 - 1;
  if ( v17 == (FxDeviceBase_vtbl *)144 )
  {
LABEL_48:
    if ( BYTE4(m_DeviceBase[1].m_Globals)
      && m_DeviceBase->m_DeviceObject.m_DeviceObject->DeviceType == 27
      && v16 != (FxDeviceBase_vtbl *)v15 )
    {
      FsContext = v16 - 1;
      if ( v16 == (FxDeviceBase_vtbl *)144 )
        _a2 = 0LL;
      else
        _a2 = FsContext->SetDeviceTelemetryInfoFlags;
      WPP_IFR_SF_qq(globals, 3u, 0x12u, 0xFu, WPP_FxFileObject_cpp_Traceguids, _a1, _a2);
      WPP_IFR_SF_(globals, 3u, 0x12u, 0x10u, WPP_FxFileObject_cpp_Traceguids);
    }
  }
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (v27 = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Unlock(v27, v14, v13);
  }
  else
  {
    KeReleaseSpinLock(&m_DeviceBase->m_NPLock.m_Lock, v14);
  }
  m_Globals = globals;
LABEL_20:
  if ( !FsContext && Next >= 0 )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x11u, WPP_FxFileObject_cpp_Traceguids, _a1);
    WPP_IFR_SF_(globals, 2u, 0x12u, 0x12u, WPP_FxFileObject_cpp_Traceguids);
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(globals, v29, 9u) )
    {
      FxVerifierDbgBreakPoint(m_DeviceBase->m_Globals);
      goto LABEL_15;
    }
  }
  v18 = 0;
  if ( !FsContext )
    goto LABEL_22;
  if ( WORD1(FsContext->~FxObject) )
    v4 = (unsigned __int64)FsContext ^ 0xFFFFFFFFFFFFFFF8uLL;
  i = (_LIST_ENTRY *)FsContext->GetDefaultIoTarget;
  if ( !i )
    i = &this->m_FileObjectInfoHeadList;
LABEL_24:
  for ( j = i->Flink; j != &this->m_FileObjectInfoHeadList; j = j->Flink )
  {
    if ( j[3].Blink )
    {
      Flink = j[3].Flink;
      PreviousIrql = 0;
      if ( Flink )
        ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *))Flink->Flink[1].Flink)(Flink, &PreviousIrql);
      ((void (__fastcall *)(unsigned __int64))j[3].Blink)(v4);
      v25 = j[3].Flink;
      if ( v25 )
        ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v25->Flink[1].Blink)(v25, PreviousIrql);
    }
  }
  FileObject = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  if ( FileObject )
    FxPkgIo::FlushAllQueuesByFileObject((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, FileObject);
$Passthru_0:
  m_Irp = FxIrp->m_Irp;
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    ++m_Irp->CurrentLocation;
    ++m_Irp->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    m_Irp->IoStatus.Status = v18;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    result = v18;
    FxIrp->m_Irp = 0LL;
  }
  return result;
}
