/*
 * XREFs of CcSlowReferenceSharedCacheMapFileObject @ 0x140450944
 * Callers:
 *     CcReferenceSharedCacheMapFileObject @ 0x1402C235C (CcReferenceSharedCacheMapFileObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 */

unsigned __int64 __fastcall CcSlowReferenceSharedCacheMapFileObject(__int64 a1)
{
  __int64 *v2; // rbx
  unsigned __int64 v3; // rbx

  v2 = KeAbPreAcquire((__int64)&CcChangeSharedCacheMapFileLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&CcChangeSharedCacheMapFileLock,
      0,
      v2,
      (unsigned __int64)&CcChangeSharedCacheMapFileLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  v3 = *(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v3 )
    ObfReferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL), 0x63536343u);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CcChangeSharedCacheMapFileLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&CcChangeSharedCacheMapFileLock);
  KeAbPostRelease((ULONG_PTR)&CcChangeSharedCacheMapFileLock);
  return v3;
}
