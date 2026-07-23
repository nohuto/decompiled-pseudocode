/*
 * XREFs of KseShimDatabaseOpen @ 0x140943EEC
 * Callers:
 *     KsepDbGetShimInfo @ 0x14073C4E4 (KsepDbGetShimInfo.c)
 *     KsepDbGetDriverShims @ 0x140942B68 (KsepDbGetDriverShims.c)
 *     KsepDbCacheReadDevice @ 0x140943C38 (KsepDbCacheReadDevice.c)
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KsepDeletePatchSdb @ 0x14073DD88 (KsepDeletePatchSdb.c)
 *     KsepSdbUnmapFromMemory @ 0x140944674 (KsepSdbUnmapFromMemory.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rdi
  int v6; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (char *)KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v3, (__int64)&KsepShimDbLock);
  if ( v5 )
    v5[10] = 1;
  if ( KsepShimDbDuringBoot )
  {
    if ( !KsepShimDbHandle )
    {
      *a1 = 0LL;
      goto LABEL_9;
    }
    ++KsepShimDbRefCount;
    v6 = 0;
    *a1 = KsepShimDbHandle;
    _InterlockedIncrement(&dword_140F0F5F0);
  }
  else if ( KsepShimDbHandle )
  {
    ++KsepShimDbRefCount;
    v6 = 0;
    *a1 = KsepShimDbHandle;
    _InterlockedIncrement(&dword_140F0F5F8);
  }
  else
  {
    v6 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
    if ( v6 < 0 )
    {
      *a1 = 0LL;
      _InterlockedIncrement(&dword_140F0F5FC);
LABEL_9:
      v6 = -1073741823;
      goto LABEL_10;
    }
    if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0
      && dword_140F0FAD0 >= (unsigned int)dword_140F0FB08 )
    {
      KsepSdbUnmapFromMemory(qword_140F0FAD8);
      KsepDeletePatchSdb();
    }
    ++KsepShimDbRefCount;
    KsepShimDbHandle = (__int64)KsepShimDb;
    *a1 = KsepShimDb;
    _InterlockedIncrement(&dword_140F0F5F4);
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
