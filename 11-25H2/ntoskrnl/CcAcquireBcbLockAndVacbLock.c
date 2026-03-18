/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1403B6E14
 * Callers:
 *     CcUnmapVacbArray @ 0x1402C3F10 (CcUnmapVacbArray.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcExtendVacbArray @ 0x1403B6928 (CcExtendVacbArray.c)
 *     CcSetFileSizesEx @ 0x1404A5BD0 (CcSetFileSizesEx.c)
 *     CcDereferenceFileOffset @ 0x1404D6A7C (CcDereferenceFileOffset.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 */

__int64 *__fastcall CcAcquireBcbLockAndVacbLock(int a1, __int64 a2)
{
  unsigned __int64 *v3; // rdi
  __int64 *result; // rax
  __int64 *v5; // rbx

  if ( a1 )
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a2 + 288));
  v3 = (unsigned __int64 *)(a2 + 104);
  result = KeAbPreAcquire((__int64)v3, 0LL);
  v5 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(v3, result, (__int64)v3);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  return result;
}
