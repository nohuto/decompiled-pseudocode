/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x140404438
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140404108 (MmOutSwapVirtualAddresses.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x140404528 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x140404630 (MmOutSwapWorkingSet.c)
 *     MiHotPatchProcess @ 0x1407F2D08 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1407F634C (MmCheckForSafeExecution.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 *     MiLockVadRange @ 0x1408E8B10 (MiLockVadRange.c)
 *     MmIsFileMapped @ 0x1408EF744 (MmIsFileMapped.c)
 *     MiMapAllImageScpPages @ 0x1408F9404 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x1408F9980 (MiCommitInitialVadMetadataBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140967B50 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiFreeLargePageView @ 0x1409B0830 (MiFreeLargePageView.c)
 *     MmCleanProcessAddressSpace @ 0x140A06E44 (MmCleanProcessAddressSpace.c)
 *     MiCreateLargePageVad @ 0x140A82E50 (MiCreateLargePageVad.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rsi
  _QWORD *v4; // rbx
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v2 = (signed __int64 *)(a2 + 600);
  v4 = KeAbPreAcquire(a2 + 600, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v4, (__int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  result = *(_DWORD *)(a1 + 1448) | 2u;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
