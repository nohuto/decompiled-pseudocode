/*
 * XREFs of RtlSetAllBits @ 0x140347620
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x140347688 (MiBuildMdlForMappedFileFault.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140375DFC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140486280 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiChangePagingFileMaximum @ 0x14067AF90 (MiChangePagingFileMaximum.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406FD3A4 (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x14072E31C (PnprMmAddRange.c)
 *     SmcStoreResize @ 0x14079DE40 (SmcStoreResize.c)
 *     CmpLoadHiveThread @ 0x1407CB550 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x1407EE570 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImage @ 0x1407F5C30 (MiPrepareToHotPatchImage.c)
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 *     MiCaptureImageExceptionValues @ 0x140A8FDB8 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x140AC4284 (PopAllocateHiberContext.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 *     HalpPowerInitDiscard @ 0x140C10460 (HalpPowerInitDiscard.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140C12B98 (HalpDmaInitializeMasterAdapter.c)
 *     VfInitBootDriversLoaded @ 0x140C3D398 (VfInitBootDriversLoaded.c)
 *     MiCreateBootSlabEntries @ 0x140C5B16C (MiCreateBootSlabEntries.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  unsigned int *Buffer; // r8
  unsigned __int64 v2; // rdx

  Buffer = BitMapHeader->Buffer;
  v2 = (unsigned __int64)(4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5))) >> 2;
  if ( v2 )
  {
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      *Buffer = -1;
      if ( !--v2 )
        return;
      ++Buffer;
    }
    memset(Buffer, 0xFFu, 8 * (v2 >> 1));
    if ( (v2 & 1) != 0 )
      Buffer[v2 - 1] = -1;
  }
}
