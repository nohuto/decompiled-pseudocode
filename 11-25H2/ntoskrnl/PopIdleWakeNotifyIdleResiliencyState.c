/*
 * XREFs of PopIdleWakeNotifyIdleResiliencyState @ 0x1404A9A0C
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PopIdleWakeInsertTimeInterval @ 0x1404A9938 (PopIdleWakeInsertTimeInterval.c)
 */

void __fastcall PopIdleWakeNotifyIdleResiliencyState(char a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // r14
  unsigned int v5; // edx
  BOOL v6; // ecx
  unsigned __int64 v7; // rbp
  int v8; // eax
  __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v3 = PopIdleWakeContext;
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
        RtlGetInterruptTimePrecise(&v11);
        v7 = v11;
        v8 = *(_DWORD *)v3;
        v9 = v11 - v3[1];
        if ( (*(_DWORD *)v3 & 8) == 0 )
        {
          v10 = v11 - v3[6];
          if ( v10 > PopIdleWakeSourceSpuriousThresholdQpc )
            *(_DWORD *)v3 = v8 | 4;
          PopIdleWakeInsertTimeInterval(
            v10,
            6u,
            (__int64)PopIdleWakeContext + 72,
            (__int64)PopIdleWakeContext + 96,
            (__int64)&PopIdleSpuriousWakeBucketLimitsQpc);
          *(_DWORD *)v3 |= 8u;
          v8 = *(_DWORD *)v3;
        }
        if ( a1 )
        {
          v3[2] += v9;
        }
        else if ( (v8 & 1) != 0 )
        {
          v3[3] += v9;
        }
        else
        {
          v3[4] += v9;
        }
        v3[1] = v7;
      }
    }
  }
  KeReleaseSpinLock(&PopIdleWakeContextLock, v4);
}
