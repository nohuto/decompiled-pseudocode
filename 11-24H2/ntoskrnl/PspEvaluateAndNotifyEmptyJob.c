/*
 * XREFs of PspEvaluateAndNotifyEmptyJob @ 0x140860B78
 * Callers:
 *     PspTerminateAllProcessesInJobHierarchy @ 0x14085C7FC (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspNotifyEmptyJobsInJobChain @ 0x1408FED4C (PspNotifyEmptyJobsInJobChain.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PspHardDereferenceSiloWorker @ 0x1403B33A0 (PspHardDereferenceSiloWorker.c)
 *     PspLockJobExclusive @ 0x14085CC60 (PspLockJobExclusive.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     PspSendReliableJobNotification @ 0x140861974 (PspSendReliableJobNotification.c)
 */

void __fastcall PspEvaluateAndNotifyEmptyJob(PRKEVENT Event, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _LIST_ENTRY **p_Blink; // rcx

  CurrentThread = KeGetCurrentThread();
  PspLockJobExclusive((__int64)Event, (__int64)CurrentThread);
  p_Blink = &Event[60].Header.WaitListHead.Blink;
  if ( a2 )
    --*(_DWORD *)p_Blink;
  if ( !*(_DWORD *)p_Blink )
  {
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 7u) )
      KeSetEvent(Event, 0, 0);
    if ( !_interlockedbittestandset((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 0x15u) )
    {
      if ( a3 && *(_QWORD *)&Event[23].Header.Lock && (Event[46].Header.LockNV & 0x10) != 0 )
        PspSendReliableJobNotification(Event);
      if ( ((__int64)Event[10].Header.WaitListHead.Blink & 0x400000) != 0
        && !_interlockedbittestandset((volatile signed __int32 *)&Event[64].Header.WaitListHead.Blink, 0x1Du)
        && ((__int64)Event[64].Header.WaitListHead.Blink & 0x40000000) != 0 )
      {
        PspHardDereferenceSiloWorker((__int64)Event);
      }
    }
  }
  PspUnlockJob((__int64)Event, (__int64)CurrentThread);
}
