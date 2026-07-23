/*
 * XREFs of PspNotifyThreadCreation @ 0x140921518
 * Callers:
 *     PspUserThreadStartup @ 0x1409212E0 (PspUserThreadStartup.c)
 *     PspSecureThreadStartup @ 0x140A90820 (PspSecureThreadStartup.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x14036D140 (KeQuerySystemTimePrecise.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     DbgkCreateThread @ 0x140921604 (DbgkCreateThread.c)
 *     PfProcessCreateNotification @ 0x140948348 (PfProcessCreateNotification.c)
 */

__int64 __fastcall PspNotifyThreadCreation(__int64 a1)
{
  __int64 v1; // rbx
  struct _KPRCB *CurrentPrcb; // rdi
  ULONG LowPart; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r8d
  unsigned __int64 v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  v1 = *(_QWORD *)(a1 + 544);
  DbgkCreateThread();
  if ( (*(_DWORD *)(v1 + 500) & 0x80000) == 0
    && !_interlockedbittestandset((volatile signed __int32 *)(v1 + 500), 0x13u) )
  {
    PfProcessCreateNotification(v1, *(_QWORD *)(v1 + 680));
  }
  while ( !MEMORY[0xFFFFF78000000330] )
  {
    KeQuerySystemTimePrecise(&v10);
    CurrentPrcb = KeGetCurrentPrcb();
    LowPart = KeQueryPerformanceCounter(0LL).LowPart;
    v8 = ExGenRandom(1, v5, v6, v7);
    v9 = __rdtsc();
    _InterlockedCompareExchange(
      (volatile signed __int32 *)(MmWriteableSharedUserData + 816),
      v10 ^ HIDWORD(v10) ^ LowPart ^ v9 ^ v8 ^ CurrentPrcb->MmPageFaultCount ^ CurrentPrcb->InterruptCount ^ CurrentPrcb->InterruptTime,
      0);
  }
  return 0LL;
}
