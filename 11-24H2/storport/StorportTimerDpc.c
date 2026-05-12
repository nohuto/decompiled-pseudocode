/*
 * XREFs of StorportTimerDpc @ 0x140027020
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall StorportTimerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  void (__fastcall *v6)(__int64, __int64); // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v4 = *(_QWORD *)DeferredContext;
  v5 = *((_QWORD *)DeferredContext + 18);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)v4 != 1094997074 )
    v4 = 0LL;
  v6 = (void (__fastcall *)(__int64, __int64))_InterlockedExchange64((volatile __int64 *)DeferredContext + 17, 0LL);
  if ( v6 && v4 )
  {
    if ( *(_DWORD *)(v4 + 872) )
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 864), &LockHandle);
    else
      LOBYTE(LockHandle.LockQueue.Next) = RaidAdapterAcquireInterruptLock(v4);
    v6(*(_QWORD *)(v4 + 616) + 16LL, v5);
    if ( *(_DWORD *)(v4 + 872) )
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    else
      RaidAdapterReleaseInterruptLock(v4, LOBYTE(LockHandle.LockQueue.Next));
  }
}
