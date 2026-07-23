/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1403EEFB0
 * Callers:
 *     CcUnmapVacbArray @ 0x1402073E0 (CcUnmapVacbArray.c)
 *     CcPinFileData @ 0x1402282C0 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x140229480 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x140356790 (CcGetVacbMiss.c)
 *     CcExtendVacbArray @ 0x1403ED180 (CcExtendVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403EE88C (CcUnmapInactiveViewsInternal.c)
 *     CcSetFileSizesEx @ 0x1404A10D0 (CcSetFileSizesEx.c)
 *     CcReferenceFileOffset @ 0x1404C8C90 (CcReferenceFileOffset.c)
 *     CcDereferenceFileOffset @ 0x1404CF5BC (CcDereferenceFileOffset.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
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
