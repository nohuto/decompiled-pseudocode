/*
 * XREFs of EtwpCoverageSamplerUnloadImage @ 0x140A0E7A0
 * Callers:
 *     PerfLogImageUnload @ 0x140A0E50C (PerfLogImageUnload.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwpCovSampProcessRemoveModule @ 0x140922348 (EtwpCovSampProcessRemoveModule.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x140922E54 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1409238C0 (EtwpCovSampAcquireSamplerRundown.c)
 */

__int64 __fastcall EtwpCoverageSamplerUnloadImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rax
  char *v9; // rbp
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&v11) >= 0 )
  {
    if ( a2 < 0xFFFF800000000000uLL )
    {
      v6 = *(_QWORD *)(a1 + 1904);
      if ( !v6 )
        return EtwpCovSampReleaseSamplerRundown(v11);
    }
    else
    {
      v6 = qword_140EFEF98 + 1264;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (char *)KeAbPreAcquire(v6 + 8, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 8), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 8), v8, v6 + 8);
    if ( v9 )
      v9[10] = 1;
    *(_QWORD *)(v6 + 16) = KeGetCurrentThread();
    EtwpCovSampProcessRemoveModule(v6, a2, a3);
    *(_QWORD *)(v6 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 8));
    KeAbPostRelease(v6 + 8);
    KeLeaveCriticalRegion();
  }
  return EtwpCovSampReleaseSamplerRundown(v11);
}
