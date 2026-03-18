/*
 * XREFs of RtlClearAllBits @ 0x140448960
 * Callers:
 *     HalpIrtExtendRemappingRange @ 0x1407015C0 (HalpIrtExtendRemappingRange.c)
 *     SepInitializeLowBoxNumberTable @ 0x140794CB4 (SepInitializeLowBoxNumberTable.c)
 *     SmcStoreResize @ 0x14079DD30 (SmcStoreResize.c)
 *     MiPrepareToHotPatchImage @ 0x1407F5540 (MiPrepareToHotPatchImage.c)
 *     MiExpandPartitionIds @ 0x1407FBF28 (MiExpandPartitionIds.c)
 *     MmStoreRegister @ 0x1407FD3A8 (MmStoreRegister.c)
 *     EtwpUpdateStackTracing @ 0x1408310EC (EtwpUpdateStackTracing.c)
 *     HvStoreModifiedData @ 0x14097E3EC (HvStoreModifiedData.c)
 *     HvResetDirtyData @ 0x14097EE44 (HvResetDirtyData.c)
 *     MiInitializePrivateFixupBitmap @ 0x1409DE038 (MiInitializePrivateFixupBitmap.c)
 *     SepAddLuidToIndexEntry @ 0x140A330CC (SepAddLuidToIndexEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x140A4BEEC (SepGetLowBoxNumberEntry.c)
 *     MiCaptureImageExceptionValues @ 0x140A93608 (MiCaptureImageExceptionValues.c)
 *     HvpPerformLogFileRecovery @ 0x140AB060C (HvpPerformLogFileRecovery.c)
 *     PopAllocateHiberContext @ 0x140AC688C (PopAllocateHiberContext.c)
 *     CmCheckRegistry @ 0x140AE33E0 (CmCheckRegistry.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140B4E8F8 (HalpCheckLowMemoryPreSleep.c)
 *     HalpIommuInitializeAll @ 0x140B6B2A0 (HalpIommuInitializeAll.c)
 *     ViAllocateContiguousMemory @ 0x140B87CF0 (ViAllocateContiguousMemory.c)
 *     BgpFwInitializeReservePool @ 0x140BB1634 (BgpFwInitializeReservePool.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __stdcall RtlClearAllBits(PRTL_BITMAP BitMapHeader)
{
  memset_0(
    BitMapHeader->Buffer,
    0,
    4 * ((BitMapHeader->SizeOfBitMap >> 5) + ((BitMapHeader->SizeOfBitMap & 0x1F) != 0)));
}
