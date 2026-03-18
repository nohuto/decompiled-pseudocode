/*
 * XREFs of KseShimDatabaseOpen @ 0x14095C42C
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
 *     KsepDeletePatchSdb @ 0x14073FE58 (KsepDeletePatchSdb.c)
 *     KsepSdbUnmapFromMemory @ 0x14095CBB4 (KsepSdbUnmapFromMemory.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 */

__int64 __fastcall KseShimDatabaseOpen(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  signed __int8 v4; // cf
  _QWORD *v5; // rdi
  int v6; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((__int64)&KsepShimDbLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&KsepShimDbLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&KsepShimDbLock, (__int64)v3, (__int64)&KsepShimDbLock);
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
    _InterlockedIncrement(&dword_140F0F2F0);
  }
  else if ( KsepShimDbHandle )
  {
    ++KsepShimDbRefCount;
    v6 = 0;
    *a1 = KsepShimDbHandle;
    _InterlockedIncrement(&dword_140F0F2F8);
  }
  else
  {
    v6 = KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvmain.sdb");
    if ( v6 < 0 )
    {
      *a1 = 0LL;
      _InterlockedIncrement(&dword_140F0F2FC);
LABEL_9:
      v6 = -1073741823;
      goto LABEL_10;
    }
    if ( (int)KsepSdbMapToMemory(L"\\SystemRoot\\AppPatch\\drvpatch.sdb") >= 0
      && dword_140F0F7F0 >= (unsigned int)dword_140F0F828 )
    {
      KsepSdbUnmapFromMemory(qword_140F0F7F8);
      KsepDeletePatchSdb();
    }
    ++KsepShimDbRefCount;
    KsepShimDbHandle = (__int64)KsepShimDb;
    *a1 = KsepShimDb;
    _InterlockedIncrement(&dword_140F0F2F4);
  }
LABEL_10:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
