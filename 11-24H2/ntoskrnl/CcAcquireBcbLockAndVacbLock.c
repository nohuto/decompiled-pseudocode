/*
 * XREFs of CcAcquireBcbLockAndVacbLock @ 0x1403EEF44
 * Callers:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcExtendVacbArray @ 0x1403ED180 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 *     CcReferenceFileOffset @ 0x1404C8C90 (CcReferenceFileOffset.c)
 *     CcDereferenceFileOffset @ 0x1404CF5BC (CcDereferenceFileOffset.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall CcAcquireBcbLockAndVacbLock(int a1, __int64 a2)
{
  unsigned __int64 *v3; // rdi
  char *result; // rax
  char *v5; // rbx

  if ( a1 )
    ExAcquireFastMutex((PKGUARDED_MUTEX)(a2 + 288));
  v3 = (unsigned __int64 *)(a2 + 104);
  result = (char *)KeAbPreAcquire((__int64)v3, 0LL);
  v5 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(v3, result, (__int64)v3);
  if ( v5 )
    v5[10] = 1;
  return result;
}
