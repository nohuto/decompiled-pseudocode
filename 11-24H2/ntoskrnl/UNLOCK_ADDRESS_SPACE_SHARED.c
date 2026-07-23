/*
 * XREFs of UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x1403C64C8 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1403C6F10 (MmOutSwapWorkingSet.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C752C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 *     MmCheckForSafeExecution @ 0x1407F6AC0 (MmCheckForSafeExecution.c)
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 *     MmIsFileMapped @ 0x140860F44 (MmIsFileMapped.c)
 *     MiUnlockVadRange @ 0x1408D9210 (MiUnlockVadRange.c)
 *     MiMapAllImageScpPages @ 0x14091BCE0 (MiMapAllImageScpPages.c)
 *     MiCommitInitialVadMetadataBits @ 0x14091C25C (MiCommitInitialVadMetadataBits.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1409505E0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiFreeLargePageView @ 0x14099A530 (MiFreeLargePageView.c)
 *     MmCleanProcessAddressSpace @ 0x140A03374 (MmCleanProcessAddressSpace.c)
 *     MiCreateLargePageVad @ 0x140A7D970 (MiCreateLargePageVad.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall UNLOCK_ADDRESS_SPACE_SHARED(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  _QWORD *result; // rax

  v2 = a2 + 600;
  *(_DWORD *)(a1 + 1448) &= ~2u;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 600), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a2 + 600));
  result = (_QWORD *)KeAbPostRelease(v2);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
