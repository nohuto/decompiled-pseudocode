/*
 * XREFs of PfSnPrefetchScenario @ 0x14094A830
 * Callers:
 *     PfSnBeginScenario @ 0x140948770 (PfSnBeginScenario.c)
 * Callees:
 *     ExfWaitForRundownProtectionRelease @ 0x1402BB63C (ExfWaitForRundownProtectionRelease.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x1402E24A0 (KeQueryPriorityThread.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     PfSnAsyncContextInitialize @ 0x14094A918 (PfSnAsyncContextInitialize.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnPrefetchScenario(PVOID P, unsigned int a2)
{
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v5; // rsi
  unsigned int v6; // ebx
  unsigned __int64 v8; // rtt
  KPRIORITY PriorityThread; // eax
  unsigned __int64 v10; // rax
  struct _EX_RUNDOWN_REF RunRef; // [rsp+40h] [rbp+8h] BYREF

  RunRef.Count = 0LL;
  Pool2 = ExAllocatePool2(0x40uLL, 0xF8uLL, 0x61506343u);
  v5 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    PfSnAsyncContextInitialize(Pool2, P, &RunRef, (a2 >> 4) & 1);
    _m_prefetchw(&RunRef);
    v8 = RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v8 != _InterlockedCompareExchange64(
                 (volatile signed __int64 *)&RunRef,
                 (RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                 RunRef.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfAcquireRundownProtection(&RunRef);
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    ExQueueWorkItem(v5, (WORK_QUEUE_TYPE)(PriorityThread + 32));
    v6 = 0;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)&RunRef, 1LL, 0LL);
    if ( v10 >= 2 )
      ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&RunRef, v10);
  }
  else
  {
    v6 = -1073741670;
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v6;
}
