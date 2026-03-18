/*
 * XREFs of EtwpCoverageSamplerUnloadImage @ 0x140A0C120
 * Callers:
 *     PerfLogImageUnload @ 0x140A0BE8C (PerfLogImageUnload.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     EtwpCovSampProcessRemoveModule @ 0x14090BB08 (EtwpCovSampProcessRemoveModule.c)
 *     EtwpCovSampReleaseSamplerRundown @ 0x14090C614 (EtwpCovSampReleaseSamplerRundown.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x14090D080 (EtwpCovSampAcquireSamplerRundown.c)
 */

__int64 __fastcall EtwpCoverageSamplerUnloadImage(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rax
  __int64 *v9; // rbp
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
      v6 = qword_140EFE8F8 + 1264;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire(v6 + 8, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 8), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v6 + 8), v8, v6 + 8);
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
