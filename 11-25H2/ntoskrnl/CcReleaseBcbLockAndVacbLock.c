/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1403B6E80
 * Callers:
 *     CcUnmapVacbArray @ 0x1402C3F10 (CcUnmapVacbArray.c)
 *     CcPinFileData @ 0x1402D7150 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x1402D8300 (CcGetVirtualAddress.c)
 *     CcGetVacbMiss @ 0x1403B3D50 (CcGetVacbMiss.c)
 *     CcUnmapInactiveViewsInternal @ 0x1403B5BF0 (CcUnmapInactiveViewsInternal.c)
 *     CcExtendVacbArray @ 0x1403B6928 (CcExtendVacbArray.c)
 *     CcSetFileSizesEx @ 0x1404A5BD0 (CcSetFileSizesEx.c)
 *     CcDereferenceFileOffset @ 0x1404D6A7C (CcDereferenceFileOffset.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
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
