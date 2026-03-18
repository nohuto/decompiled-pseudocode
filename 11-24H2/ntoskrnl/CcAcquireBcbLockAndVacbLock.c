/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1403F8E34
 * Callers:
 *     CcUnmapVacbArray @ 0x14023F290 (CcUnmapVacbArray.c)
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x140273EF0 (CcGetVirtualAddress.c)
 *     CcExtendVacbArray @ 0x1403F6E60 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     CcReferenceFileOffset @ 0x1404CFBE0 (CcReferenceFileOffset.c)
 *     CcDereferenceFileOffset @ 0x1404D616C (CcDereferenceFileOffset.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall CcAcquireBcbLockAndVacbLock(int a1, __int64 a2)
{
  unsigned __int64 *v3; // rdi
  __int64 result; // rax
  __int64 v5; // rbx

  if ( a1 )
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a2 + 288));
  v3 = (unsigned __int64 *)(a2 + 104);
  result = (__int64)KeAbPreAcquire((__int64)v3, 0LL);
  v5 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(v3, result, (__int64)v3);
  if ( v5 )
    *(_BYTE *)(v5 + 10) = 1;
  return result;
}
