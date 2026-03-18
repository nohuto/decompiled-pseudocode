/*
 * XREFs of KseShimDatabaseClose @ 0x14095C27C
 * Callers:
 *     KsepDbGetShimInfo @ 0x14073E5B4 (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShims @ 0x14095B0A8 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x14095C178 (KsepDbCacheReadDevice.c)
 *     KseInitialize @ 0x140C2B3FC (KseInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     RtlAssert @ 0x1405E9340 (RtlAssert.c)
 *     KseShimDatabaseBootRelease @ 0x14095A670 (KseShimDatabaseBootRelease.c)
 *     KsepSdbUnmapFromMemory @ 0x14095CBB4 (KsepSdbUnmapFromMemory.c)
 */

void __fastcall KseShimDatabaseClose(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  int v6; // eax
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, (__int64)v3, (__int64)&KsepShimDbLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( a1 != KsepShimDbHandle )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = -1073740768;
    KsepHistoryErrors[2 * v7] = 590387;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("DbHandleIn == KsepShimDbHandle", "minkernel\\ntos\\kshim\\ksesdb.c", 0x233u, 0LL);
  }
  if ( KsepShimDbDuringBoot )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    KeLeaveCriticalRegion();
    KseShimDatabaseBootRelease();
  }
  else
  {
    if ( KsepShimDbHandle )
    {
      v6 = KsepShimDbRefCount;
      if ( !KsepShimDbRefCount || (--KsepShimDbRefCount, v6 == 1) )
      {
        KsepSdbUnmapFromMemory(KsepShimDb);
        KsepSdbUnmapFromMemory(qword_140F0F7F8);
        KsepShimDbHandle = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    KeLeaveCriticalRegion();
  }
}
