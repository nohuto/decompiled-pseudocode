/*
 * XREFs of ?Vf_VerifyForwardRequestToParent@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1400E440C
 * Callers:
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x14003DD1C (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400843B4 (-VerifyRequestIsDriverOwned@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DC304 (-Vf_VerifyRequestIsNotCancelable@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxIoQueue::Vf_VerifyForwardRequestToParent(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxIoQueue *DestQueue,
        FxRequest *Request)
{
  FxDeviceBase *m_DeviceBase; // rax
  int IsDriverOwned; // edi
  FxDeviceBase *v10; // rcx
  unsigned __int16 v11; // r9
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v13; // r15
  unsigned __int8 v14; // r8
  unsigned __int16 v15; // ax
  const void *_a1; // rbp
  FxDeviceBase *v17; // r8
  unsigned __int16 v18; // ax
  const void *v19; // r8
  unsigned __int16 v20; // ax
  const void *_a2; // r8
  bool v22; // zf
  unsigned __int16 v23; // ax
  const void *v24; // rbx
  __int64 v25; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v27; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  m_DeviceBase = this->m_DeviceBase;
  irql = 0;
  if ( !*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags )
  {
    IsDriverOwned = -1073741808;
    v10 = DestQueue->m_DeviceBase;
    v11 = 32;
LABEL_29:
    m_ObjectSize = v10->m_ObjectSize;
    v27 = (const void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v27 = 0LL;
    WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, v11, WPP_FxIoQueue_cpp_Traceguids, v27, -1073741808);
LABEL_32:
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return (unsigned int)IsDriverOwned;
  }
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 && (Flink = Request[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, (unsigned __int8)DestQueue);
    v13 = irql;
  }
  else
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&Request->m_NPLock.m_Lock);
  }
  IsDriverOwned = FxRequest::VerifyRequestIsDriverOwned(Request, FxDriverGlobals);
  if ( IsDriverOwned >= 0 )
  {
    if ( FxDriverGlobals->FxVerifierOn )
      IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(Request, FxDriverGlobals);
    else
      IsDriverOwned = 0;
  }
  FxNonPagedObject::Unlock(Request, v13, v14);
  if ( IsDriverOwned >= 0 )
  {
    if ( DestQueue == this )
    {
      IsDriverOwned = -1073741808;
      v15 = this->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v15 )
        _a1 = 0LL;
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x21u, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
      goto LABEL_32;
    }
    v10 = this->m_DeviceBase;
    v17 = DestQueue->m_DeviceBase;
    if ( *(FxDeviceBase **)&v10[1].m_ObjectFlags != v17 )
    {
      IsDriverOwned = -1073741808;
      v18 = v17->m_ObjectSize;
      v19 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v18 )
        v19 = 0LL;
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0xDu, 0x22u, WPP_FxIoQueue_cpp_Traceguids, v19, -1073741808);
      goto LABEL_32;
    }
    if ( Request->m_Reserved )
    {
      IsDriverOwned = -1073741808;
      v20 = v17->m_ObjectSize;
      _a2 = (const void *)((unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL);
      v22 = v20 == 0;
      v23 = Request->m_ObjectSize;
      if ( v22 )
        _a2 = 0LL;
      v24 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v23 )
        v24 = 0LL;
      WPP_IFR_SF_qqd(FxDriverGlobals, 2u, 0xDu, 0x23u, WPP_FxIoQueue_cpp_Traceguids, v24, _a2, 0xC0000010);
      goto LABEL_32;
    }
    v25 = *(_QWORD *)&v10[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v25 )
    {
      if ( !*(_BYTE *)(v25 + 1787) )
      {
        v11 = 36;
        IsDriverOwned = -1073741808;
        goto LABEL_29;
      }
    }
  }
  return (unsigned int)IsDriverOwned;
}
