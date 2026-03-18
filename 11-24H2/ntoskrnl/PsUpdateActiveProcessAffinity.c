/*
 * XREFs of PsUpdateActiveProcessAffinity @ 0x140774758
 * Callers:
 *     KeStartDynamicProcessor @ 0x14073C4E0 (KeStartDynamicProcessor.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeIsSubsetAffinityEx @ 0x1403B34F0 (KeIsSubsetAffinityEx.c)
 *     PspUpdateSingleProcessAffinity @ 0x1407754B0 (PspUpdateSingleProcessAffinity.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 */

_QWORD *PsUpdateActiveProcessAffinity()
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi
  unsigned __int16 *v4; // rdi
  __int64 v5; // rcx
  struct _KAFFINITY_EX *v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 NextProcess; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&PspAffinityUpdateLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&PspAffinityUpdateLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&PspAffinityUpdateLock, (__int64)v1, (__int64)&PspAffinityUpdateLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = PspLastUpdateAffinityMask;
  if ( !(unsigned int)KeIsSubsetAffinityEx(&KeActiveProcessors.Count, PspLastUpdateAffinityMask) )
  {
    v5 = 2LL;
    v6 = &KeActiveProcessors;
    do
    {
      v7 = *(_OWORD *)&v6->StaticBitmap[1];
      *(_OWORD *)v4 = *(_OWORD *)&v6->Count;
      v8 = *(_OWORD *)&v6->StaticBitmap[3];
      *((_OWORD *)v4 + 1) = v7;
      v9 = *(_OWORD *)&v6->StaticBitmap[5];
      *((_OWORD *)v4 + 2) = v8;
      v10 = *(_OWORD *)&v6->StaticBitmap[7];
      *((_OWORD *)v4 + 3) = v9;
      v11 = *(_OWORD *)&v6->StaticBitmap[9];
      *((_OWORD *)v4 + 4) = v10;
      v12 = *(_OWORD *)&v6->StaticBitmap[11];
      *((_OWORD *)v4 + 5) = v11;
      v13 = *(_OWORD *)&v6->StaticBitmap[13];
      v6 = (struct _KAFFINITY_EX *)((char *)v6 + 128);
      *((_OWORD *)v4 + 6) = v12;
      v4 += 64;
      *((_OWORD *)v4 - 1) = v13;
      --v5;
    }
    while ( v5 );
    *(_QWORD *)v4 = *(_QWORD *)&v6->Count;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess((PVOID)v5);
      v15 = NextProcess;
      if ( !NextProcess )
        break;
      PspUpdateSingleProcessAffinity(CurrentThread, NextProcess, &KeActiveProcessors);
      v5 = v15;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspAffinityUpdateLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspAffinityUpdateLock);
  KeAbPostRelease((ULONG_PTR)&PspAffinityUpdateLock);
  return KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v16, v17, v18);
}
