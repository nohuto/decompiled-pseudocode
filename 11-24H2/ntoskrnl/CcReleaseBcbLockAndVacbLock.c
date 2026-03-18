/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1403F8EA0
 * Callers:
 *     CcUnmapVacbArray @ 0x14023F290 (CcUnmapVacbArray.c)
 *     CcPinFileData @ 0x140272D30 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x140273EF0 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x1402D5510 (CcGetVacbMiss.c)
 *     CcExtendVacbArray @ 0x1403F6E60 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403F877C (CcUnmapInactiveViewsInternal.c)
 *     CcSetFileSizesEx @ 0x1404A6800 (CcSetFileSizesEx.c)
 *     CcReferenceFileOffset @ 0x1404CFBE0 (CcReferenceFileOffset.c)
 *     CcDereferenceFileOffset @ 0x1404D616C (CcDereferenceFileOffset.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, __int64 a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rdx

  _m_prefetchw((const void *)(a2 + 104));
  v4 = *(_QWORD *)(a2 + 104);
  v5 = v4 - 16;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 104), v5, v4) )
    ExfReleasePushLock((_QWORD *)(a2 + 104));
  KeAbPostRelease(a2 + 104);
  if ( a1 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 288));
}
