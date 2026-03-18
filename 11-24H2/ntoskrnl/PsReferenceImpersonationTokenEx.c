/*
 * XREFs of PsReferenceImpersonationTokenEx @ 0x140989D20
 * Callers:
 *     SepReferenceTokenByHandle @ 0x140359440 (SepReferenceTokenByHandle.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     FsRtlpOplockGetThreadIntegrityLevel @ 0x14070BA40 (FsRtlpOplockGetThreadIntegrityLevel.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
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
  struct _KTHREAD *CurrentThread; // r12
  __int64 v13; // r13
  signed __int64 *v14; // r15
  _QWORD *v15; // rsi
  void *v16; // rdi
  char v17; // al

  if ( (*(_DWORD *)(a1 + 1440) & 8) == 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = *(_QWORD *)(a1 + 544);
  v14 = (signed __int64 *)(a1 + 1424);
  --CurrentThread->KernelApcDisable;
  v15 = KeAbPreAcquire(a1 + 1424, 0LL);
  if ( _InterlockedCompareExchange64(v14, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v14, 0, v15, (__int64)v14);
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
      *a7 = *(_BYTE *)(v13 + 1530);
  }
  else
  {
    v16 = 0LL;
  }
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v14);
  KeAbPostRelease((ULONG_PTR)v14);
  KeLeaveCriticalRegionThread();
  return v16;
}
