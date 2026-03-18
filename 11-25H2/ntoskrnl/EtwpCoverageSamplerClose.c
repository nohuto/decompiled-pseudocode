/*
 * XREFs of EtwpCoverageSamplerClose @ 0x1407A3670
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpCoverageSamplerStop @ 0x140ACFEE0 (EtwpCoverageSamplerStop.c)
 */

void __fastcall EtwpCoverageSamplerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // bp
  __int64 *v7; // rax
  signed __int8 v8; // cf
  __int64 *v9; // rsi
  int v10; // eax

  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = 0;
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((__int64)&EtwpCovSampGlobals, 0LL);
    v8 = _interlockedbittestandset64((volatile signed __int32 *)&EtwpCovSampGlobals, 0LL);
    v9 = v7;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(&EtwpCovSampGlobals, v7, (__int64)&EtwpCovSampGlobals);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    qword_140EFE8E8 = (__int64)KeGetCurrentThread();
    v10 = *(_DWORD *)(a2 + 1728);
    if ( (v10 & 1) == 0 )
    {
      v6 = 1;
      *(_DWORD *)(a2 + 1728) = v10 | 1;
    }
    qword_140EFE8E8 = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EtwpCovSampGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EtwpCovSampGlobals);
    KeAbPostRelease((ULONG_PTR)&EtwpCovSampGlobals);
    KeLeaveCriticalRegion();
    if ( v6 )
      EtwpCoverageSamplerStop(a2);
  }
}
