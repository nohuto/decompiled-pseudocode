/*
 * XREFs of RtlClearAllBits @ 0x14044A700
 * Callers:
 *     HalpIrtExtendRemappingRange @ 0x1406F57D0 (HalpIrtExtendRemappingRange.c)
 *     SepInitializeLowBoxNumberTable @ 0x1407858E4 (SepInitializeLowBoxNumberTable.c)
 *     SmcStoreResize @ 0x14078E970 (SmcStoreResize.c)
 *     MiPrepareToHotPatchImage @ 0x1407E56B0 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x1407EC098 (MiExpandPartitionIds.c)
 *     MmStoreRegister @ 0x1407ED518 (MmStoreRegister.c)
 *     HvStoreModifiedData @ 0x14088302C (HvStoreModifiedData.c)
 *     CmCheckRegistry @ 0x140995590 (CmCheckRegistry.c)
 *     MiInitializePrivateFixupBitmap @ 0x1409D86AC (MiInitializePrivateFixupBitmap.c)
 *     HvpPerformLogFileRecovery @ 0x1409FA6B8 (HvpPerformLogFileRecovery.c)
 *     SepAddLuidToIndexEntry @ 0x140A0D124 (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A0DE40 (SepGetLowBoxNumberEntry.c)
 *     EtwpUpdateStackTracing @ 0x140A386E8 (EtwpUpdateStackTracing.c)
 *     HvResetDirtyData @ 0x140A4DDD0 (HvResetDirtyData.c)
 *     MiCaptureImageExceptionValues @ 0x140A8EB18 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B3E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpIommuInitializeAll @ 0x140B5B7A0 (HalpIommuInitializeAll.c)
 *     ViAllocateContiguousMemory @ 0x140B77D10 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140BA1634 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset_0(
    BitMapHeader->Buffer,
    0,
    4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
