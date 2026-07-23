/*
 * XREFs of PopIdleWakeNotifyIdleResiliencyState @ 0x1404A4D20
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     PopIdleWakeInsertTimeInterval @ 0x1404A4828 (PopIdleWakeInsertTimeInterval.c)
 */

void __fastcall PopIdleWakeNotifyIdleResiliencyState(char a1)
{
  KIRQL v2; // al
  LARGE_INTEGER *v3; // rbx
  KIRQL v4; // r14
  unsigned int v5; // edx
  BOOL v6; // ecx
  LARGE_INTEGER v7; // rbp
  ULONG LowPart; // eax
  LONGLONG v9; // rdi
  unsigned __int64 v10; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp+10h] BYREF

  PerformanceCounter.QuadPart = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v3 = (LARGE_INTEGER *)PopIdleWakeContext;
  v4 = v2;
  if ( PopIdleWakeContext )
  {
    v5 = *(_DWORD *)PopIdleWakeContext;
    if ( (*(_DWORD *)PopIdleWakeContext & 0x10) != 0 )
    {
      v6 = a1 == 0;
      if ( ((v5 >> 1) & 1) != v6 )
      {
        *(_DWORD *)PopIdleWakeContext = v5 & 0xFFFFFFFD | (2 * v6);
        RtlGetInterruptTimePrecise(&PerformanceCounter);
        v7 = PerformanceCounter;
        LowPart = v3->LowPart;
        v9 = PerformanceCounter.QuadPart - v3[1].QuadPart;
        if ( (v3->LowPart & 8) == 0 )
        {
          v10 = PerformanceCounter.QuadPart - v3[6].QuadPart;
          if ( v10 > PopIdleWakeSourceSpuriousThresholdQpc )
            v3->LowPart = LowPart | 4;
          PopIdleWakeInsertTimeInterval(
            v10,
            6u,
            (__int64)PopIdleWakeContext + 72,
            (__int64)PopIdleWakeContext + 96,
            (__int64)&PopIdleSpuriousWakeBucketLimitsQpc);
          v3->LowPart |= 8u;
          LowPart = v3->LowPart;
        }
        if ( a1 )
        {
          v3[2].QuadPart += v9;
        }
        else if ( (LowPart & 1) != 0 )
        {
          v3[3].QuadPart += v9;
        }
        else
        {
          v3[4].QuadPart += v9;
        }
        v3[1] = v7;
      }
    }
  }
  KeReleaseSpinLock(&PopIdleWakeContextLock, v4);
}
