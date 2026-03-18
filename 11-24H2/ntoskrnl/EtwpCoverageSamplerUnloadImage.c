/*
 * XREFs of EtwpCoverageSamplerUnloadImage @ 0x1408E6A9C
 * Callers:
 *     PerfLogImageUnload @ 0x1408E6808 (PerfLogImageUnload.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwpCovSampProcessRemoveModule @ 0x1408FFA68 (EtwpCovSampProcessRemoveModule.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x140900574 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140900FE0 (EtwpCovSampAcquireSamplerRundown.c)
 */

__int64 __fastcall EtwpCoverageSamplerUnloadImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
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
      v6 = qword_140EFEC78 + 1264;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire(v6 + 8, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 8), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 8), (__int64)v8, v6 + 8);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
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
