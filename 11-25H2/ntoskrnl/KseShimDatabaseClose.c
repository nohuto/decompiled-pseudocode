/*
 * XREFs of KseShimDatabaseClose @ 0x14082A294
 * Callers:
 *     KsepDbGetShimInfo @ 0x140732594 (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShims @ 0x1408296B0 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x14082A190 (KsepDbCacheReadDevice.c)
 *     KseInitialize @ 0x140C1A2FC (KseInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     RtlAssert @ 0x1405DD1F0 (RtlAssert.c)
 *     KsepSdbUnmapFromMemory @ 0x14082ABC4 (KsepSdbUnmapFromMemory.c)
 *     KseShimDatabaseBootRelease @ 0x140AA9AE4 (KseShimDatabaseBootRelease.c)
 */

void __fastcall KseShimDatabaseClose(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  int v6; // eax
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v3, (__int64)&KsepShimDbLock);
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
        KsepSdbUnmapFromMemory(&KsepShimDb);
        KsepSdbUnmapFromMemory(&unk_140F0F0F8);
        KsepShimDbHandle = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
    KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
    KeLeaveCriticalRegion();
  }
}
