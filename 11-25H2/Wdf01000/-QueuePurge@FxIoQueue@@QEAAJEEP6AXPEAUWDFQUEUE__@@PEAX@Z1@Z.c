/*
 * XREFs of ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x14001577C
 * Callers:
 *     ?QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ @ 0x140015354 (-QueuePurgeSynchronously@FxIoQueue@@QEAAJXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x140015500 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     imp_WdfIoQueuePurge @ 0x1400171E0 (imp_WdfIoQueuePurge.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x14001C2C0 (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     imp_WdfIoQueueDrain @ 0x1400A07E0 (imp_WdfIoQueueDrain.c)
 *     ?QueueDrainSynchronously@FxIoQueue@@QEAAJXZ @ 0x1400A1174 (-QueueDrainSynchronously@FxIoQueue@@QEAAJXZ.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x14000E050 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x140011A74 (WPP_IFR_SF_qq.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x140015C70 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x140015DB0 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1400483B8 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x14004861C (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x14006A560 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueuePurge(
        FxIoQueue *this,
        unsigned __int8 CancelQueueRequests,
        unsigned __int8 CancelDriverRequests,
        void (__fastcall *PurgeComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  char m_ObjectFlags; // al
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 v11; // r8
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned __int64 *p_m_Lock; // r12
  unsigned __int8 v14; // r8
  FxVerifierLock **p_m_DbgFlagIsInitialized; // rsi
  unsigned __int8 v16; // di
  unsigned __int64 NextRequest; // rax
  unsigned __int8 v18; // r8
  FxRequest *v19; // r13
  unsigned __int8 v20; // si
  FxRequest *v21; // rax
  unsigned __int8 v22; // r8
  FxRequest *v23; // rdi
  unsigned __int8 v24; // al
  unsigned __int16 v25; // r9
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rdx
  const void *_a1; // rcx
  unsigned int v29; // edi
  unsigned __int8 v30; // r8
  FxVerifierLock *v31; // rcx
  FxVerifierLock *v32; // rcx
  FxVerifierLock *v33; // rcx
  FxVerifierLock *v34; // rcx
  unsigned int v35; // eax
  FxTagTracker *v36; // rcx
  FxVerifierLock *v37; // rcx
  const void *v38; // rdx
  const void *v39; // rax
  unsigned int v40; // edx
  FxTagTracker *Blink; // rcx
  const void *v42; // rdx
  const void *v43; // rcx
  const void *v44; // rcx
  unsigned __int8 irql; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int8 v46; // [rsp+90h] [rbp+50h]

  v46 = CancelDriverRequests;
  m_ObjectFlags = this->m_ObjectFlags;
  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_ObjectFlags < 0 && (v31 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Lock(v31, &irql, CancelDriverRequests);
  else
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  if ( this->m_Deleted )
  {
    v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v29 = -1073741738;
    if ( !this->m_ObjectSize )
      v42 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x46u, WPP_FxIoQueue_cpp_Traceguids, v42, -1073741738);
    goto LABEL_37;
  }
  if ( !PurgeComplete )
    goto LABEL_5;
  _a2 = this->m_PurgeComplete.Method;
  if ( _a2 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v29 = -1073741808;
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x47u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2, 0xC0000010);
LABEL_37:
    FxNonPagedObject::Unlock(this, irql, v30);
    return v29;
  }
  this->m_PurgeCompleteContext = Context;
  this->m_PurgeComplete.Method = PurgeComplete;
LABEL_5:
  FxIoQueue::SetState(this, FxIoQueueClearAcceptRequests);
  if ( CancelQueueRequests )
  {
    if ( CancelDriverRequests )
    {
      WdfBindInfo = m_Globals->WdfBindInfo;
      if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
        this->m_CancelDispatchedRequests = 1;
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized,
        (v34 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL) )
  {
    FxVerifierLock::Unlock(v34, irql, v11);
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
  }
  if ( CancelQueueRequests )
  {
    while ( 1 )
    {
      if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
      {
        FxVerifierLock::Lock(*p_m_DbgFlagIsInitialized, &irql, v14);
        v16 = irql;
      }
      else
      {
        v16 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
        irql = v16;
      }
      NextRequest = (unsigned __int64)FxRequest::GetNextRequest(&this->m_Queue);
      v19 = (FxRequest *)NextRequest;
      if ( !NextRequest )
        break;
      v38 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v38 = 0LL;
      v39 = (const void *)(NextRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v19->m_ObjectSize )
        v39 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x49u, WPP_FxIoQueue_cpp_Traceguids, v39, v38);
      v40 = _InterlockedIncrement(&v19->m_Refcnt);
      if ( SLOBYTE(v19->m_ObjectFlags) < 0 )
      {
        Blink = (FxTagTracker *)v19[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            Blink,
            (void *)0x75657551,
            4048,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
            TagAddRef,
            v40);
      }
      FxIoQueue::CancelForQueue(this, v19, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v43 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x48u, WPP_FxIoQueue_cpp_Traceguids, v43);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && *p_m_DbgFlagIsInitialized )
      FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, v16, v18);
    else
      KeReleaseSpinLock(p_m_Lock, v16);
  }
  if ( v46 )
  {
    while ( 1 )
    {
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v33 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v33, &irql, v14);
        v20 = irql;
      }
      else
      {
        v20 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
        irql = v20;
      }
      v21 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v23 = v21;
      if ( !v21 )
        break;
      v21->m_Canceled = 1;
      FxNonPagedObject::Unlock(this, v20, v22);
      v35 = _InterlockedIncrement(&v23->m_Refcnt);
      if ( SLOBYTE(v23->m_ObjectFlags) < 0 )
      {
        v36 = (FxTagTracker *)v23[-1].m_OwnerListEntry2.Blink;
        if ( v36 )
          FxTagTracker::UpdateTagHistory(
            v36,
            (void *)0x75657551,
            4093,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
            TagAddRef,
            v35);
      }
      FxIoQueue::CancelForDriver(this, v23);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v44 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v44 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x4Au, WPP_FxIoQueue_cpp_Traceguids, v44);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v37 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v37, v20, v22);
    }
    else
    {
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, v20);
    }
  }
  if ( this->m_SupportForwardProgress )
    FxIoQueue::PurgeForwardProgressIrps(this, 0LL);
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v32 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v32, &irql, v14);
    v24 = irql;
  }
  else
  {
    v24 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  FxIoQueue::DispatchEvents(this, v24, 0LL, v25);
  return 0LL;
}
