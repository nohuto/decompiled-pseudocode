/*
 * XREFs of EtwpCoverageSamplerClose @ 0x1407B2E90
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpCoverageSamplerStop @ 0x140ADC310 (EtwpCoverageSamplerStop.c)
 */

void __fastcall EtwpCoverageSamplerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // bp
  char *v7; // rax
  signed __int8 v8; // cf
  char *v9; // rsi
  int v10; // eax

  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
    --CurrentThread->KernelApcDisable;
    v7 = (char *)KeAbPreAcquire((__int64)&EtwpCovSampGlobals, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCovSampGlobals, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&EtwpCovSampGlobals, v7, (__int64)&EtwpCovSampGlobals);
    if ( v9 )
      v9[10] = 1;
    qword_140EFEF88 = (__int64)KeGetCurrentThread();
    v10 = *(_DWORD *)(a2 + 1728);
    if ( (v10 & 1) == 0 )
    {
      v6 = 1;
      *(_DWORD *)(a2 + 1728) = v10 | 1;
    }
    qword_140EFEF88 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegion();
    if ( v6 )
      EtwpCoverageSamplerStop(a2);
  }
}
