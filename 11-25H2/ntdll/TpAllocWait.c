/*
 * XREFs of TpAllocWait @ 0x18003CCE0
 * Callers:
 *     EtwpRegisterTpNotificationOnce @ 0x180001008 (EtwpRegisterTpNotificationOnce.c)
 *     RtlRegisterWait @ 0x18003C400 (RtlRegisterWait.c)
 *     RtlpWnfRegisterTpNotification @ 0x1800F90FC (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18007F694 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x180164C50 (NtCreateWaitCompletionPacket.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpAllocWait(
        PTP_WAIT *WaitReturn,
        PTP_WAIT_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r12d
  PTP_WAIT *v7; // r14
  _TP_WAIT *Heap; // rbx
  int WaitCompletionPacket; // esi
  unsigned int Flags; // r9d
  _TP_POOL *Pool; // rcx
  int v12; // eax
  _TP_POOL *v13; // r15
  unsigned __int8 *p_IdealProcessor; // r12
  unsigned __int8 Number; // cl
  int v16; // r13d
  unsigned __int16 Group; // r9
  unsigned int SelectedCpuSetCount; // eax
  unsigned int i; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  void *WaitPkt; // rcx
  void *WorkerFactory; // rcx
  unsigned __int16 v25; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+70h] [rbp+8h] BYREF

  v5 = (int)Context;
  v7 = WaitReturn;
  if ( !WaitReturn
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || (WaitReturn = (PTP_WAIT *)NtCurrentPeb()->Ldr, *((_BYTE *)WaitReturn + 72)) )
  {
    TppRaiseInvalidParameter(WaitReturn);
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
                                   (_DWORD)Heap,
                                   v5,
                                   (_DWORD)CallbackEnviron,
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
        TppCleanupGroupAddMember(Heap);
      v13 = Heap->Timer.Work.CleanupGroupMember.Pool;
      Heap->Direct.Callback = (void (__fastcall *)(_TP_CALLBACK_INSTANCE *, _TP_DIRECT *, void *, _IO_STATUS_BLOCK *))TppWaitCompletion;
      WaitCompletionPacket = 0;
      p_IdealProcessor = &Heap->Direct.IdealProcessor;
      if ( v13 )
      {
        Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
        v16 = TppNumberNodes;
        LOBYTE(WorkerFactoryInformation) = Number;
        Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
        SelectedCpuSetCount = v13->SelectedCpuSetCount;
        v25 = Group;
        if ( !SelectedCpuSetCount )
          SelectedCpuSetCount = MEMORY[0x7FFE03C0];
        if ( v13->LastProcCount != SelectedCpuSetCount )
        {
          RtlAcquireSRWLockExclusive(&v13->Lock);
          TppAdjustRunningThreadGoalWithLock(v13);
          RtlReleaseSRWLockExclusive(&v13->Lock);
          Number = WorkerFactoryInformation;
          Group = v25;
        }
        for ( i = 0; i < TppNumberNodes; ++i )
        {
          v20 = (__int64)&v13->ProximityInfo[TppMaximumGroups * i + Group];
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
      *v7 = Heap;
    }
    return WaitCompletionPacket;
  }
}
