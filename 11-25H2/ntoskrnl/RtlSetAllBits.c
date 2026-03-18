/*
 * XREFs of RtlSetAllBits @ 0x1403397C0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x140339828 (MiBuildMdlForMappedFileFault.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1403939EC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140434EE8 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiChangePagingFileMaximum @ 0x14066E504 (MiChangePagingFileMaximum.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406F3974 (HalpDmaAllocateLocalContiguousPool.c)
 *     PnprMmAddRange @ 0x14072438C (PnprMmAddRange.c)
 *     SmcStoreResize @ 0x14078E970 (SmcStoreResize.c)
 *     CmpLoadHiveThread @ 0x1407BB850 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407BC620 (CmpMountPreloadedHives.c)
 *     MiCreatePagefile @ 0x1407DE100 (MiCreatePagefile.c)
 *     MiPrepareToHotPatchImage @ 0x1407E56B0 (MiPrepareToHotPatchImage.c)
 *     MiReserveDriverPtes @ 0x140A5B530 (MiReserveDriverPtes.c)
 *     MiCaptureImageExceptionValues @ 0x140A8EB18 (MiCaptureImageExceptionValues.c)
 *     PopAllocateHiberContext @ 0x140ABEFAC (PopAllocateHiberContext.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 *     HalpPowerInitDiscard @ 0x140BFD460 (HalpPowerInitDiscard.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140BFFB18 (HalpDmaInitializeMasterAdapter.c)
 *     VfInitBootDriversLoaded @ 0x140C29F60 (VfInitBootDriversLoaded.c)
 *     MiCreateBootSlabEntries @ 0x140C47CFC (MiCreateBootSlabEntries.c)
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
