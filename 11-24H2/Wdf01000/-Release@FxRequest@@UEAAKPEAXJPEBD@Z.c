/*
 * XREFs of ?Release@FxRequest@@UEAAKPEAXJPEBD@Z @ 0x14001CA30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?ClearFieldsForReuse@FxRequestBase@@QEAAXXZ @ 0x14001CF04 (-ClearFieldsForReuse@FxRequestBase@@QEAAXXZ.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x140026430 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x140026780 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x14004BA58 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x14004BB00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ?AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z @ 0x140053950 (-AssignMemoryBuffers@FxRequest@@AEAAXW4_WDF_DEVICE_IO_TYPE@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x140081770 (-PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082404 (--1FxTagTracker@@QEAA@XZ.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x140082928 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140082FF0 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequest::Release(FxRequest *this, void *Tag, __int64 Line, const char *File)
{
  char m_ObjectFlags; // al
  unsigned __int8 m_CanComplete; // r14
  unsigned __int8 m_Reserved; // di
  unsigned __int8 m_IrpAllocation; // r12
  unsigned __int32 v9; // esi
  FxIoQueue *m_ForwardProgressQueue; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  KIRQL v13; // r8
  _LIST_ENTRY *p_m_PendedIrpList; // rcx
  _LIST_ENTRY *j; // rdx
  _LIST_ENTRY **p_Blink; // r14
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // ax
  _LIST_ENTRY *v19; // r14
  _QWORD *i; // r15
  void (__fastcall *v21)(unsigned __int64, void *, __int64, const char *); // rax
  void (__fastcall *v22)(unsigned __int64, void *, __int64, const char *); // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // r15
  unsigned __int8 m_CompletionState; // di
  FxIoQueue *m_IoQueue; // rbp
  _IRP *m_Irp; // rcx
  CCHAR m_PriorityBoost; // dl
  unsigned __int8 v29; // r8
  char v30; // al
  unsigned __int8 v31; // r8
  _LIST_ENTRY *Blink; // rcx
  FxVerifierLock *v33; // rcx
  FxObjectExcessiveAllocation *ObjectExcessiveAllocation; // rcx
  FxVerifierLock *v35; // rcx
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v37; // rax
  FxRequestBase *v38; // rcx
  unsigned __int8 PreviousIrql; // [rsp+70h] [rbp+8h] BYREF

  m_ObjectFlags = this->m_ObjectFlags;
  m_CanComplete = this->m_CanComplete;
  m_Reserved = this->m_Reserved;
  m_IrpAllocation = this->m_IrpAllocation;
  PreviousIrql = m_CanComplete;
  if ( m_ObjectFlags < 0 )
  {
    Blink = this[-1].m_OwnerListEntry2.Blink;
    if ( Blink )
      FxTagTracker::UpdateTagHistory((FxTagTracker *)Blink, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v9 = _InterlockedDecrement(&this->m_Refcnt);
  if ( !v9 )
  {
    v17 = this->m_ObjectFlags;
    if ( (v17 & 0x20) != 0 || (v17 & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    }
    else
    {
      v18 = this->m_ObjectFlags;
      if ( (v18 & 0x80u) != 0 )
      {
        v19 = this[-1].m_OwnerListEntry2.Blink;
        if ( v19 )
        {
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_OwnerListEntry2.Blink);
          v18 = this->m_ObjectFlags;
        }
      }
      else
      {
        v19 = 0LL;
      }
      if ( this->m_ObjectSize && (v18 & 8) != 0 )
      {
        for ( i = (FxRequest_vtbl **)((char *)&this->__vftable + this->m_ObjectSize); i; i = (_QWORD *)i[1] )
        {
          v21 = (void (__fastcall *)(unsigned __int64, void *, __int64, const char *))i[2];
          if ( v21 )
          {
            v21((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
            i[2] = 0LL;
          }
          v22 = (void (__fastcall *)(unsigned __int64, void *, __int64, const char *))i[3];
          if ( v22 )
          {
            v22((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
            i[3] = 0LL;
          }
        }
        LOBYTE(Tag) = 1;
        if ( this->m_ObjectSize )
        {
          v23 = (FxRequest_vtbl **)((char *)&this->__vftable + this->m_ObjectSize);
          if ( v23 )
          {
            do
            {
              v24 = (_QWORD *)v23[1];
              if ( !(_BYTE)Tag )
                FxPoolFree(v23);
              LOBYTE(Tag) = 0;
              v23 = v24;
            }
            while ( v24 );
          }
        }
      }
      if ( (this->m_ObjectFlags & 0x40) != 0 )
      {
        ObjectExcessiveAllocation = this->m_Globals->ObjectExcessiveAllocation;
        _InterlockedDecrement(&ObjectExcessiveAllocation->ObjectCnt);
        if ( this->m_Type == 4098 && _InterlockedExchangeAdd(&ObjectExcessiveAllocation->DeviceCnt, 0xFFFFFFFF) != 1 )
          _InterlockedAdd(&ObjectExcessiveAllocation->LimitScaled, -ObjectExcessiveAllocation->Limit);
      }
      if ( v19 )
      {
        this[-1].m_OwnerListEntry2.Blink = 0LL;
        FxTagTracker::~FxTagTracker((FxTagTracker *)v19);
        FxPoolFree(v19);
      }
      ((void (__fastcall *)(FxRequest *, void *, __int64, const char *))this->SelfDestruct)(this, Tag, Line, File);
      m_CanComplete = PreviousIrql;
    }
  }
  if ( m_Reserved && v9 == 1 && this->m_Completed )
  {
    m_ForwardProgressQueue = this->m_ForwardProgressQueue;
    m_Globals = m_ForwardProgressQueue->m_Globals;
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags(this, 1024);
    v13 = KeAcquireSpinLockRaiseToDpc(&m_ForwardProgressQueue->m_FwdProgContext->m_PendedReserveLock.m_Lock);
    p_m_PendedIrpList = &m_ForwardProgressQueue->m_FwdProgContext->m_PendedIrpList;
    for ( j = p_m_PendedIrpList->Flink; ; j = Flink )
    {
      p_Blink = 0LL;
      if ( j == p_m_PendedIrpList )
        break;
      Flink = j->Flink;
      p_Blink = &j[-11].Blink;
      if ( j->Flink->Blink != j || (v37 = j->Blink, v37->Flink != j) )
        __fastfail(3u);
      v37->Flink = Flink;
      Flink->Blink = v37;
      j->Blink = j;
      j->Flink = j;
      if ( _InterlockedExchange64((volatile __int64 *)p_Blink + 13, 0LL) )
      {
        p_Blink[18] = 0LL;
        break;
      }
    }
    KeReleaseSpinLock(&m_ForwardProgressQueue->m_FwdProgContext->m_PendedReserveLock.m_Lock, v13);
    this->m_SystemBuffer.m_Buffer = 0LL;
    this->m_OutputBuffer.m_Buffer = 0LL;
    FxRequestBase::ClearFieldsForReuse(this);
    if ( p_Blink )
    {
      this->m_Irp.m_Irp = (_IRP *)p_Blink;
      FxRequest::AssignMemoryBuffers(this, (_WDF_DEVICE_IO_TYPE)m_ForwardProgressQueue->m_DeviceBase[1].m_Refcnt);
      if ( m_Globals->FxVerifierOn )
        FxRequestBase::SetVerifierFlags(v38, 1024);
      FxIoQueue::QueueRequest(m_ForwardProgressQueue, this);
    }
    else
    {
      FxIoQueue::PutBackReservedRequest(m_ForwardProgressQueue, this);
    }
  }
  else if ( m_IrpAllocation )
  {
    if ( m_CanComplete )
    {
      if ( v9 == 1 )
      {
        if ( this->m_Completed )
        {
          m_CompletionState = this->m_CompletionState;
          m_IoQueue = this->m_IoQueue;
          m_Irp = this->m_Irp.m_Irp;
          m_PriorityBoost = this->m_PriorityBoost;
          this->m_CompletionState = 0;
          this->m_IoQueue = 0LL;
          this->m_Irp.m_Irp = 0LL;
          IofCompleteRequest(m_Irp, m_PriorityBoost);
          if ( m_CompletionState == 1 )
          {
            v30 = m_IoQueue->m_ObjectFlags;
            PreviousIrql = 0;
            if ( v30 < 0 && (v33 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
              FxVerifierLock::Lock(v33, &PreviousIrql, v29);
            else
              PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
            --m_IoQueue->m_TwoPhaseCompletions;
            --m_IoQueue->m_DriverIoCount;
            if ( m_IoQueue->m_Dispatching )
            {
              if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
                && (v35 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
              {
                FxVerifierLock::Unlock(v35, PreviousIrql, v31);
              }
              else
              {
                KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
              }
            }
            else
            {
              FxIoQueue::DispatchEvents(m_IoQueue, PreviousIrql, 0LL);
            }
          }
        }
      }
    }
  }
  return v9;
}
