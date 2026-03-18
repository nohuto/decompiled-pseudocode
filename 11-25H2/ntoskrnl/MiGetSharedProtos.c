/*
 * XREFs of MiGetSharedProtos @ 0x140322970
 * Callers:
 *     MiComputeImagePteIndex @ 0x140209024 (MiComputeImagePteIndex.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiMakePerSessionProtoPte @ 0x1402CF61C (MiMakePerSessionProtoPte.c)
 *     MiTrimSection @ 0x140320A50 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x140321440 (MiViewMayContainPage.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     MiAddMappedPtes @ 0x140323A90 (MiAddMappedPtes.c)
 *     MiStartingOffsetNeedLock @ 0x140323EDC (MiStartingOffsetNeedLock.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiFaultGetFileExtents @ 0x14046FAA0 (MiFaultGetFileExtents.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x1409CA7D8 (MiPfAllocateMdls.c)
 * Callees:
 *     MiGetSharedProtosAtDpc @ 0x1403E0B9C (MiGetSharedProtosAtDpc.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
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
