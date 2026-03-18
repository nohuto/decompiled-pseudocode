/*
 * XREFs of MiGetSharedProtos @ 0x1403025FC
 * Callers:
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiAddMappedPtes @ 0x140243C60 (MiAddMappedPtes.c)
 *     MiStartingOffset @ 0x140244020 (MiStartingOffset.c)
 *     MiTrimSection @ 0x1402B9B70 (MiTrimSection.c)
 *     MiViewMayContainPage @ 0x1402BA550 (MiViewMayContainPage.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiFaultGetFileExtents @ 0x14036F4C8 (MiFaultGetFileExtents.c)
 *     MiComputeImagePteIndex @ 0x140398504 (MiComputeImagePteIndex.c)
 *     MiStartingOffsetNeedLock @ 0x14043E114 (MiStartingOffsetNeedLock.c)
 *     MiMakePerSessionProtoPte @ 0x14046D870 (MiMakePerSessionProtoPte.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 *     MiPfAllocateMdls @ 0x140956EEC (MiPfAllocateMdls.c)
 * Callees:
 *     MiGetSharedProtosAtDpc @ 0x1404272D0 (MiGetSharedProtosAtDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
