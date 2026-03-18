/*
 * XREFs of MiMakeTransitionPte @ 0x1402E67B0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x1402E604C (MiBuildMdlForMappedFileFault.c)
 *     MiInitializeTransitionPfn @ 0x14031359C (MiInitializeTransitionPfn.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiDuplicateCloneLeaf @ 0x140396854 (MiDuplicateCloneLeaf.c)
 *     MiOutPageSingleKernelStack @ 0x14039F510 (MiOutPageSingleKernelStack.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1403EF1A0 (MiExclusiveInsertPfnChainInList.c)
 *     MmProtectMdlSystemAddress @ 0x14040E150 (MmProtectMdlSystemAddress.c)
 *     MmOutSwapProcess @ 0x14042D50C (MmOutSwapProcess.c)
 *     MiMakeVaRangeNoAccess @ 0x140498B94 (MiMakeVaRangeNoAccess.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiTrimSystemImagePages @ 0x1404A7A78 (MiTrimSystemImagePages.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiSwitchToTransition @ 0x1404F1388 (MiSwitchToTransition.c)
 *     MiPageBootRegistry @ 0x140669520 (MiPageBootRegistry.c)
 *     MiInitializeNewPfns @ 0x14066BBD4 (MiInitializeNewPfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = 32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFFLL) << 7) | 0x40);
  if ( !qword_140E2DB80 )
    return v2;
  if ( (qword_140E2DB80 & v2) != 0 )
    return v2 | 0x10;
  return v2 | qword_140E2DB80;
}
