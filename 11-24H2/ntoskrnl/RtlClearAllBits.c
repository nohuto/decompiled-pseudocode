/*
 * XREFs of RtlClearAllBits @ 0x140441080
 * Callers:
 *     HalpIrtExtendRemappingRange @ 0x1406FF200 (HalpIrtExtendRemappingRange.c)
 *     SepInitializeLowBoxNumberTable @ 0x140794D3C (SepInitializeLowBoxNumberTable.c)
 *     SmcStoreResize @ 0x14079DE40 (SmcStoreResize.c)
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x1407FC698 (MiExpandPartitionIds.c)
 *     MmStoreRegister @ 0x1407FDB18 (MmStoreRegister.c)
 *     HvStoreModifiedData @ 0x140966BFC (HvStoreModifiedData.c)
 *     HvResetDirtyData @ 0x140967654 (HvResetDirtyData.c)
 *     EtwpUpdateStackTracing @ 0x1409D1388 (EtwpUpdateStackTracing.c)
 *     MiInitializePrivateFixupBitmap @ 0x1409D7C08 (MiInitializePrivateFixupBitmap.c)
 *     SepAddLuidToIndexEntry @ 0x140A270DC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A42C4C (SepGetLowBoxNumberEntry.c)
 *     MiCaptureImageExceptionValues @ 0x140A8FDB8 (MiCaptureImageExceptionValues.c)
 *     HvpPerformLogFileRecovery @ 0x140AAB57C (HvpPerformLogFileRecovery.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 *     CmCheckRegistry @ 0x140AE4CC0 (CmCheckRegistry.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B50948 (HalpCheckLowMemoryPreSleep.c)
 *     HalpIommuInitializeAll @ 0x140B70010 (HalpIommuInitializeAll.c)
 *     ViAllocateContiguousMemory @ 0x140B89CF0 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140BB3634 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset_0(
    BitMapHeader->Buffer,
    0,
    4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
