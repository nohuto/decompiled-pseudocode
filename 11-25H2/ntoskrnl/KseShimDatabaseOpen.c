/*
 * XREFs of KseShimDatabaseOpen @ 0x14082A43C
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
 *     KsepDeletePatchSdb @ 0x140733E38 (KsepDeletePatchSdb.c)
 *     KsepSdbUnmapFromMemory @ 0x14082ABC4 (KsepSdbUnmapFromMemory.c)
 *     KsepSdbMapToMemory @ 0x14082B4A8 (KsepSdbMapToMemory.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rdi
  int v6; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, v3, (__int64)&KsepShimDbLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
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
    _InterlockedIncrement(&dword_140F0EC10);
  }
  else if ( KsepShimDbHandle )
  {
    ++KsepShimDbRefCount;
    v6 = 0;
    *a1 = KsepShimDbHandle;
    _InterlockedIncrement(&dword_140F0EC18);
  }
  else
  {
    v6 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
    if ( v6 < 0 )
    {
      *a1 = 0LL;
      _InterlockedIncrement(&dword_140F0EC1C);
LABEL_9:
      v6 = -1073741823;
      goto LABEL_10;
    }
    if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0
      && dword_140F0F0F0 >= (unsigned int)dword_140F0F128 )
    {
      KsepSdbUnmapFromMemory(&unk_140F0F0F8);
      KsepDeletePatchSdb();
    }
    ++KsepShimDbRefCount;
    KsepShimDbHandle = (__int64)&KsepShimDb;
    *a1 = &KsepShimDb;
    _InterlockedIncrement(&dword_140F0EC14);
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
