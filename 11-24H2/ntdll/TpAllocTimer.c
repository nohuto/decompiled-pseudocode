/*
 * XREFs of TpAllocTimer @ 0x1800896F0
 * Callers:
 *     RtlCreateTimer @ 0x180089920 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x1800F1B08 (RtlpInitializeWnf.c)
 *     RtlpHpGCTimerEnable @ 0x1801408D0 (RtlpHpGCTimerEnable.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     TppWorkInitialize @ 0x1800470B0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x1800491C0 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180163660 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpAllocTimer(
        PTP_TIMER *Timer,
        PTP_TIMER_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // ebp
  _TP_TIMER *Heap; // rbx
  unsigned int Flags; // r9d
  NTSTATUS result; // eax
  _TP_POOL *Pool; // rcx
  int v12; // eax
  void *WorkerFactory; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+50h] [rbp+8h] BYREF

  v5 = (int)Context;
  if ( !Timer
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    Heap = (_TP_TIMER *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8, 0x168uLL);
    if ( Heap )
    {
      Heap->Work.CleanupGroupMember.AllocCaller.ReturnAddress = retaddr;
      if ( CallbackEnviron )
        Flags = CallbackEnviron->u.Flags;
      else
        Flags = 0;
      result = TppWorkInitialize(
                 (__int64)Heap,
                 v5,
                 (int)CallbackEnviron,
                 Flags,
                 (__int64)TppTimerpCleanupGroupMemberVFuncs,
                 (__int64)&TppTimerpTaskVFuncs);
      if ( result >= 0 )
      {
        Pool = Heap->Work.CleanupGroupMember.Pool;
        v12 = _InterlockedExchangeAdd(&Pool->BindingCount, 1u);
        if ( v12 <= 0 && v12 + 1 > 0 )
        {
          WorkerFactory = Pool->WorkerFactory;
          WorkerFactoryInformation = 1;
          NtSetInformationWorkerFactory(WorkerFactory, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
        }
        Heap->Lock.Value = 0LL;
        Heap->WaitTimer = 0;
        if ( CallbackEnviron )
          Heap->Work.CleanupGroupMember.FinalizationCallback = CallbackEnviron->FinalizationCallback;
        if ( Heap->Work.CleanupGroupMember.CleanupGroup )
          TppCleanupGroupAddMember((__int64)Heap);
        Heap->Work.CleanupGroupMember.Callback = Callback;
        result = 0;
        *Timer = Heap;
      }
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
