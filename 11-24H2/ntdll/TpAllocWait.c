/*
 * XREFs of TpAllocWait @ 0x18008B0C0
 * Callers:
 *     RtlRegisterWait @ 0x18008A7E0 (RtlRegisterWait.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800E54C4 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F1BEC (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     TppWorkInitialize @ 0x1800470B0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x1800491C0 (TppCleanupGroupAddMember.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x180051CB4 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x180161A80 (NtCreateWaitCompletionPacket.c)
 *     NtSetInformationWorkerFactory @ 0x180163660 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpAllocWait(
        PTP_WAIT *WaitReturn,
        PTP_WAIT_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r12d
  _TP_WAIT *Heap; // rbx
  NTSTATUS WaitCompletionPacket; // esi
  unsigned int Flags; // r9d
  _TP_POOL *Pool; // rcx
  int v12; // eax
  __int64 v13; // r15
  unsigned __int8 *p_IdealProcessor; // r12
  unsigned __int8 Number; // cl
  int v16; // r13d
  unsigned __int16 Group; // r9
  int v18; // eax
  unsigned int i; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  void *WaitPkt; // rcx
  void *WorkerFactory; // rcx
  unsigned __int16 v25; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+70h] [rbp+8h] BYREF

  v5 = (int)Context;
  if ( !WaitReturn
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    Heap = (_TP_WAIT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8, 0x1D8uLL);
    if ( !Heap )
      return -1073741801;
    Heap->Timer.Work.CleanupGroupMember.AllocCaller.ReturnAddress = retaddr;
    WaitCompletionPacket = NtCreateWaitCompletionPacket(&Heap->WaitPkt, 1u, 0LL);
    if ( WaitCompletionPacket < 0
      || (!CallbackEnviron ? (Flags = 0) : (Flags = CallbackEnviron->u.Flags),
          WaitCompletionPacket = TppWorkInitialize(
                                   (__int64)Heap,
                                   v5,
                                   (int)CallbackEnviron,
                                   Flags,
                                   (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                   (__int64)&TppWaitpTaskVFuncs),
          WaitCompletionPacket < 0) )
    {
      WaitPkt = Heap->WaitPkt;
      if ( WaitPkt )
        NtClose(WaitPkt);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, Heap);
    }
    else
    {
      Pool = Heap->Timer.Work.CleanupGroupMember.Pool;
      v12 = _InterlockedExchangeAdd(&Pool->BindingCount, 1u);
      if ( v12 <= 0 && v12 + 1 > 0 )
      {
        WorkerFactory = Pool->WorkerFactory;
        WorkerFactoryInformation = 1;
        NtSetInformationWorkerFactory(WorkerFactory, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
      }
      Heap->Timer.Lock.Value = 0LL;
      Heap->Timer.WaitTimer = 1;
      if ( CallbackEnviron )
        Heap->Timer.Work.CleanupGroupMember.FinalizationCallback = CallbackEnviron->FinalizationCallback;
      if ( Heap->Timer.Work.CleanupGroupMember.CleanupGroup )
        TppCleanupGroupAddMember((__int64)Heap);
      v13 = (__int64)Heap->Timer.Work.CleanupGroupMember.Pool;
      Heap->Direct.Callback = (void (__fastcall *)(_TP_CALLBACK_INSTANCE *, _TP_DIRECT *, void *, _IO_STATUS_BLOCK *))TppWaitCompletion;
      WaitCompletionPacket = 0;
      p_IdealProcessor = &Heap->Direct.IdealProcessor;
      if ( v13 )
      {
        Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
        v16 = TppNumberNodes;
        LOBYTE(WorkerFactoryInformation) = Number;
        Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
        v18 = *(_DWORD *)(v13 + 440);
        v25 = Group;
        if ( !v18 )
          v18 = MEMORY[0x7FFE03C0];
        if ( *(_DWORD *)(v13 + 424) != v18 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v13 + 72));
          TppAdjustRunningThreadGoalWithLock(v13);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v13 + 72));
          Number = WorkerFactoryInformation;
          Group = v25;
        }
        for ( i = 0; i < TppNumberNodes; ++i )
        {
          v20 = *(_QWORD *)(v13 + 48) + 16LL * (TppMaximumGroups * i + Group);
          if ( *(_WORD *)(v20 + 8) == Group )
          {
            v21 = *(_QWORD *)v20;
            if ( _bittest64(&v21, Number) )
            {
              v16 = i;
              break;
            }
          }
        }
        Heap->Direct.NumaNode = v16;
        if ( Heap != (_TP_WAIT *)-460LL )
          *p_IdealProcessor = WorkerFactoryInformation;
      }
      else
      {
        Heap->Direct.NumaNode = 0;
        *p_IdealProcessor = 0;
      }
      Heap->Direct.Lock = 0LL;
      Heap->Direct.IoCompletionInformationList.Blink = &Heap->Direct.IoCompletionInformationList;
      Heap->Direct.IoCompletionInformationList.Flink = &Heap->Direct.IoCompletionInformationList;
      Heap->Direct.Task.Callbacks = (const _TP_TASK_CALLBACKS *)&TppDirectTaskVFuncs;
      Heap->Direct.Task.NumaNode = Heap->Direct.NumaNode;
      Heap->Direct.Task.IdealProcessor = Heap->Direct.IdealProcessor;
      Heap->Timer.Work.CleanupGroupMember.Callback = Callback;
      *WaitReturn = Heap;
    }
    return WaitCompletionPacket;
  }
}
