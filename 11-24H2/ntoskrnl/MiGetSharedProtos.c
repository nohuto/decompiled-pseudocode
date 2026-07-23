/*
 * XREFs of MiGetSharedProtos @ 0x14030CC0C
 * Callers:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiMakePerSessionProtoPte @ 0x140269F88 (MiMakePerSessionProtoPte.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiComputeImagePteIndex @ 0x140350C54 (MiComputeImagePteIndex.c)
 *     MiTrimSection @ 0x1403612B0 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x140361C90 (MiViewMayContainPage.c)
 *     MiAddMappedPtes @ 0x140391F90 (MiAddMappedPtes.c)
 *     MiFaultGetFileExtents @ 0x140426C40 (MiFaultGetFileExtents.c)
 *     MiStartingOffsetNeedLock @ 0x140432804 (MiStartingOffsetNeedLock.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x14093A89C (MiPfAllocateMdls.c)
 * Callees:
 *     MiGetSharedProtosAtDpc @ 0x14041B454 (MiGetSharedProtosAtDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiGetSharedProtos(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdx
  __int64 SharedProtosAtDpc; // rdi

  v5 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  SharedProtosAtDpc = MiGetSharedProtosAtDpc(v5, a2, a3);
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(CurrentIrql);
  return SharedProtosAtDpc;
}
