/*
 * XREFs of LOCK_ADDRESS_SPACE_SHARED @ 0x1403D887C
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403D8A60 (MmOutSwapVirtualAddresses.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403D8D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MmOutSwapWorkingSet @ 0x1403D8E1C (MmOutSwapWorkingSet.c)
 *     MiHotPatchProcess @ 0x1407E2E80 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1407E64BC (MmCheckForSafeExecution.c)
 *     MiAllocateUserPhysicalPages @ 0x1407E8638 (MiAllocateUserPhysicalPages.c)
 *     MiLockVadRange @ 0x1408D98A0 (MiLockVadRange.c)
 *     MiMapAllImageScpPages @ 0x1409045F8 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x140906C50 (MiCommitInitialVadMetadataBits.c)
 *     MmIsFileMapped @ 0x140986274 (MmIsFileMapped.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409F5620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MmCleanProcessAddressSpace @ 0x140A04D48 (MmCleanProcessAddressSpace.c)
 *     MiCreateLargePageVad @ 0x140A7F47C (MiCreateLargePageVad.c)
 *     MiFreeLargePageView @ 0x140A9CC88 (MiFreeLargePageView.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall LOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rsi
  __int64 *v4; // rbx
  __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v2 = (signed __int64 *)(a2 + 600);
  v4 = KeAbPreAcquire(a2 + 600, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v4, (unsigned __int64)v2);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  result = *(_DWORD *)(a1 + 1448) | 2u;
  *(_DWORD *)(a1 + 1448) = result;
  return result;
}
