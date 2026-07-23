/*
 * XREFs of TpAllocTimer @ 0x1800461E0
 * Callers:
 *     RtlCreateTimer @ 0x18003B9A0 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x1800F9018 (RtlpInitializeWnf.c)
 *     RtlpHpGCTimerEnable @ 0x180143E10 (RtlpHpGCTimerEnable.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppCleanupGroupAddMember @ 0x1800469E0 (TppCleanupGroupAddMember.c)
 *     TppWorkInitialize @ 0x180047FD0 (TppWorkInitialize.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
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
                 (_DWORD)Heap,
                 v5,
                 (_DWORD)CallbackEnviron,
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
          TppCleanupGroupAddMember(Heap);
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
