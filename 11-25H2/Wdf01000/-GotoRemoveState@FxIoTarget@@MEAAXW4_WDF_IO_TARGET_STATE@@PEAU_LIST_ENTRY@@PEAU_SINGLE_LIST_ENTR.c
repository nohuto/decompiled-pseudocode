/*
 * XREFs of ?GotoRemoveState@FxIoTarget@@MEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x14005F490
 * Callers:
 *     ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x14009DCE0 (-GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x140022C80 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z @ 0x140064D68 (-ClearCompletedRequestVerifierFlags@FxIoTarget@@AEAAXPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxIoTarget::GotoRemoveState(
        FxIoTarget *this,
        _WDF_IO_TARGET_STATE NewState,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 Lock,
        unsigned __int8 *Wait)
{
  unsigned __int8 v10; // di
  unsigned __int8 *v11; // r12
  FxIrpQueue *p_m_PendedQueue; // rsi
  FxIrpQueue *i; // rcx
  int *p_m_RequestCount; // rax
  FxIrpQueue **v15; // rdx
  FxIrpQueue *v16; // r8
  _LIST_ENTRY *v17; // rcx
  _LIST_ENTRY *v18; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *p_m_SentIoListHead; // r14
  _LIST_ENTRY *v22; // r13
  _SINGLE_LIST_ENTRY *j; // rdi
  _LIST_ENTRY *p_m_IgnoredIoListHead; // rsi
  _LIST_ENTRY *v25; // rbp
  _SINGLE_LIST_ENTRY *k; // rdi
  unsigned int RefCount; // edx
  FxTagTracker *Next; // rcx
  unsigned int v29; // edx
  FxTagTracker *v30; // rcx
  _DEVICE_OBJECT *m_TargetDevice; // rcx
  const void *v32; // rdx
  unsigned __int8 v33; // r8
  unsigned __int8 v34; // r8
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0;
  irql = 0;
  if ( Lock )
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_TargetDevice = this[-1].m_TargetDevice) != 0LL )
    {
      FxVerifierLock::Lock((FxVerifierLock *)m_TargetDevice, &irql, (unsigned __int8)PendedRequestListHead);
      v10 = irql;
    }
    else
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      irql = v10;
    }
  }
  if ( this->m_WaitingForSentIo )
  {
    v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v32 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 3u, 0xEu, 0x17u, WPP_FxIoTarget_cpp_Traceguids, v32);
    FxNonPagedObject::Unlock(this, v10, v33);
    this->WaitForSentIoToComplete(this);
    FxNonPagedObject::Lock(this, &irql, v34);
  }
  v11 = Wait;
  p_m_PendedQueue = &this->m_PendedQueue;
  *Wait = 0;
  this->m_State = NewState;
LABEL_4:
  for ( i = (FxIrpQueue *)p_m_PendedQueue->m_Queue.Flink; ; i = *v15 )
  {
    p_m_RequestCount = &i[-5].m_RequestCount;
    if ( i == p_m_PendedQueue )
      p_m_RequestCount = 0LL;
    if ( !p_m_RequestCount )
      break;
    v15 = (FxIrpQueue **)(p_m_RequestCount + 42);
    if ( _InterlockedExchange64((volatile __int64 *)p_m_RequestCount + 13, 0LL) )
    {
      v16 = *v15;
      if ( (FxIrpQueue **)(*v15)->m_Queue.Blink != v15 )
        goto LABEL_37;
      v17 = (_LIST_ENTRY *)*((_QWORD *)p_m_RequestCount + 22);
      if ( (FxIrpQueue **)v17->Flink != v15 )
        goto LABEL_37;
      v17->Flink = &v16->m_Queue;
      v16->m_Queue.Blink = v17;
      *((_QWORD *)p_m_RequestCount + 22) = p_m_RequestCount + 42;
      *v15 = (FxIrpQueue *)v15;
      --this->m_PendedQueue.m_RequestCount;
      v18 = (_LIST_ENTRY *)*((_QWORD *)p_m_RequestCount + 18);
      *((_QWORD *)p_m_RequestCount + 18) = 0LL;
      v18->Blink = v18;
      v18->Flink = v18;
      Flink = v18[2].Flink;
      ++BYTE3(Flink[4].Flink);
      Flink[11].Blink = (_LIST_ENTRY *)((char *)Flink[11].Blink + 72);
      BYTE4(v18[5].Blink) &= ~2u;
      FxIoTarget::ClearCompletedRequestVerifierFlags(this, (FxRequestBase *)&v18[-8].Blink);
      Blink = PendedRequestListHead->Blink;
      if ( Blink->Flink != PendedRequestListHead )
LABEL_37:
        __fastfail(3u);
      v18->Flink = PendedRequestListHead;
      v18->Blink = Blink;
      Blink->Flink = v18;
      PendedRequestListHead->Blink = v18;
      goto LABEL_4;
    }
  }
  if ( (unsigned int)(NewState - 3) <= 2 )
  {
    p_m_SentIoListHead = &this->m_SentIoListHead;
    v22 = this->m_SentIoListHead.Flink;
    for ( j = (_SINGLE_LIST_ENTRY *)this->m_SentIoListHead.Blink;
          j != (_SINGLE_LIST_ENTRY *)p_m_SentIoListHead;
          j = j[1].Next )
    {
      RefCount = _InterlockedIncrement((volatile signed __int32 *)&j[-14].Next + 1);
      if ( SLOBYTE(j[-12].Next) < 0 )
      {
        Next = (FxTagTracker *)j[-21].Next;
        if ( Next )
          FxTagTracker::UpdateTagHistory(
            Next,
            (void *)0x6C636E43,
            608,
            "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
            TagAddRef,
            RefCount);
      }
      j[3].Next = SentRequestListHead->Next;
      SentRequestListHead->Next = j + 3;
    }
    p_m_IgnoredIoListHead = &this->m_IgnoredIoListHead;
    v25 = this->m_IgnoredIoListHead.Flink;
    for ( k = (_SINGLE_LIST_ENTRY *)this->m_IgnoredIoListHead.Blink;
          k != (_SINGLE_LIST_ENTRY *)p_m_IgnoredIoListHead;
          k = k[1].Next )
    {
      v29 = _InterlockedIncrement((volatile signed __int32 *)&k[-14].Next + 1);
      if ( SLOBYTE(k[-12].Next) < 0 )
      {
        v30 = (FxTagTracker *)k[-21].Next;
        if ( v30 )
          FxTagTracker::UpdateTagHistory(
            v30,
            (void *)0x6C636E43,
            608,
            "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
            TagAddRef,
            v29);
      }
      k[3].Next = SentRequestListHead->Next;
      SentRequestListHead->Next = k + 3;
    }
    if ( v22 == p_m_SentIoListHead && v25 == p_m_IgnoredIoListHead )
    {
      this->ClearTargetPointers(this);
      KeSetEvent(&this->m_SentIoEvent.m_Event.m_Event, 0, 0);
    }
    else
    {
      this->m_Removing = 1;
      *v11 = 1;
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
    }
  }
  if ( Lock )
    FxNonPagedObject::Unlock(this, irql, (unsigned __int8)PendedRequestListHead);
}
