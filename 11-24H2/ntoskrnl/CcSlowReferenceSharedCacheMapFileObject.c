/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x140446C84
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x1402091EC (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

unsigned __int64 __fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1)
{
  char *v2; // rbx
  unsigned __int64 v3; // rbx

  v2 = (char *)KeAbPreAcquire((__int64)&CcChangeSharedCacheMapFileLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CcChangeSharedCacheMapFileLock,
      0,
      v2,
      (__int64)&CcChangeSharedCacheMapFileLock);
  if ( v2 )
    v2[10] = 1;
  v3 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v3 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536343u);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  return v3;
}
