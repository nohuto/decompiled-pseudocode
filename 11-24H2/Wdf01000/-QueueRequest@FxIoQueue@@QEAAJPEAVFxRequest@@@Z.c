/*
 * XREFs of ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x140026430
 * Callers:
 *     ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14001CA30 (-Release@FxRequest@@UEAAKPEAXJPEBD@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1400374F0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qiid @ 0x1400028A4 (WPP_IFR_SF_qiid.c)
 *     WPP_IFR_SF_qLsqd @ 0x1400230F0 (WPP_IFR_SF_qLsqd.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x140023300 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1400258C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140056F48 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoQueue::QueueRequest(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  char m_ObjectFlags; // al
  FxRequest *v4; // rdi
  unsigned __int8 v6; // si
  unsigned __int8 v7; // r8
  _FX_IO_QUEUE_STATE _a4; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v11; // r10
  unsigned __int8 v12; // r8
  FxDeviceBase *m_DeviceBase; // rbx
  _FX_DRIVER_GLOBALS *v14; // rcx
  char m_Globals_high; // al
  FxVerifierLock *v16; // rcx
  FxVerifierLock *v17; // rcx
  const void *v18; // r11
  const char *_a5; // r8
  const void *_a3; // rdx
  const void *v21; // rdx
  const void *v22; // rbp
  const void *v23; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF
  FxRequest *Request; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+18h] BYREF

  Request = pRequest;
  m_ObjectFlags = this->m_ObjectFlags;
  v4 = pRequest;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v16 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v16, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v6;
  }
  if ( v4->m_Reserved )
    FxObject::AddRef(v4, (void *)0x50647746, 2311, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  _a4 = this->m_QueueState;
  if ( (_a4 & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v22 = 0LL;
      v23 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v23 = 0LL;
      if ( v4->m_ObjectSize )
        v22 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Au, WPP_FxIoQueue_cpp_Traceguids, v22, v23);
    }
    if ( v4->m_Globals->FxVerifierIO )
    {
      PreviousIrql = 0;
      FxNonPagedObject::Lock(v4, &PreviousIrql);
      FxRequest::VerifyRequestIsNotCompleted(v4, v4->m_Globals);
      FxNonPagedObject::Unlock(v4, PreviousIrql);
    }
    v4->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    if ( v4->m_Reserved )
    {
      if ( this->m_Dispatching )
      {
        FxIoQueue::InsertNewRequestLocked(this, &Request, irql);
        FxNonPagedObject::Unlock(this, irql);
        return 259LL;
      }
      v4 = Request;
      v6 = irql;
    }
    FxIoQueue::DispatchEvents(this, v6, v4);
    return 259LL;
  }
  v11 = this->m_Globals;
  if ( v11->FxVerboseOn )
  {
    if ( v4->m_ObjectSize )
      v18 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v18 = 0LL;
    _a5 = "power stopping (Drain) in progress,";
    if ( (_a4 & 0x10000) == 0 )
      _a5 = a5;
    _a3 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a3 = 0LL;
    WPP_IFR_SF_qLsqd(v11, 5u, (unsigned int)_a5, 0x29u, traceGuid, _a3, _a4, _a5, v18, -1073741436);
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v17 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v17, v6, v7);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, v6);
  }
  v4->m_Irp.m_Irp->IoStatus.Information = 0LL;
  m_DeviceBase = v4->m_DeviceBase;
  v14 = v4->m_Globals;
  if ( v14->FxVerboseOn )
  {
    v21 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v4->m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_qiid(
      v14,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      v21,
      v4->m_Irp.m_Irp,
      v4->m_Irp.m_Irp->IoStatus.Information,
      -1073741436);
  }
  if ( m_DeviceBase )
    m_Globals_high = HIBYTE(m_DeviceBase[1].m_Globals);
  else
    m_Globals_high = 0;
  v4->m_PriorityBoost = m_Globals_high;
  FxRequest::CompleteInternal(v4, 0xC0000184, v12);
  v4->Release(v4, (void *)1886220099, 2338, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  return 3221225860LL;
}
