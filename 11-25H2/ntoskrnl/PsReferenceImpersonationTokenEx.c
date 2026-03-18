/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x140910D20
 * Callers:
 *     SepReferenceTokenByHandle @ 0x140361130 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x1406FFB60 (FsRtlpOplockGetThreadIntegrityLevel.c)
 *     CmpOpenHiveFile @ 0x14090F91C (CmpOpenHiveFile.c)
 *     CmpCmdHiveOpen @ 0x140911900 (CmpCmdHiveOpen.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

void *__fastcall PsReferenceImpersonationTokenEx(
        __int64 a1,
        char a2,
        ULONG a3,
        _BYTE *a4,
        bool *a5,
        int *a6,
        _BYTE *a7)
{
  signed __int64 *v12; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v14; // r13
  __int64 *v15; // rbp
  void *v16; // rsi
  char v17; // al

  if ( (*(_DWORD *)(a1 + 1440) & 8) == 0 )
    return 0LL;
  v12 = (signed __int64 *)(a1 + 1424);
  CurrentThread = KeGetCurrentThread();
  v14 = *(_QWORD *)(a1 + 544);
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire(a1 + 1424, 0LL);
  if ( _InterlockedCompareExchange64(v12, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v12, 0, v15, (unsigned __int64)v12);
  if ( v15 )
    *((_BYTE *)v15 + 10) = 1;
  if ( (*(_DWORD *)(a1 + 1440) & 8) != 0 )
  {
    if ( (a2 & 1) != 0 && (v16 = *(void **)(a1 + 1608)) != 0LL )
    {
      v17 = 0;
    }
    else
    {
      v16 = (void *)(*(_QWORD *)(a1 + 1336) & 0xFFFFFFFFFFFFFFF8uLL);
      v17 = BYTE1(*(_DWORD *)(a1 + 1440)) & 1;
    }
    *a4 = v17;
    ObfReferenceObjectWithTag(v16, a3);
    *a6 = *(_DWORD *)(a1 + 1336) & 3;
    *a5 = (*(_BYTE *)(a1 + 1336) & 4) != 0;
    if ( a7 )
      *a7 = *(_BYTE *)(v14 + 1530);
  }
  else
  {
    v16 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v16;
}
