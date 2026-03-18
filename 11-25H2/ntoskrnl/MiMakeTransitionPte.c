/*
 * XREFs of MiMakeTransitionPte @ 0x140339DF0
 * Callers:
 *     MiOutPageSingleKernelStack @ 0x140228F50 (MiOutPageSingleKernelStack.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiDuplicateCloneLeaf @ 0x1402D08F8 (MiDuplicateCloneLeaf.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MmOutSwapProcess @ 0x1402F1C40 (MmOutSwapProcess.c)
 *     MiBuildMdlForMappedFileFault @ 0x140339828 (MiBuildMdlForMappedFileFault.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiExclusiveInsertPfnChainInList @ 0x1403E65C4 (MiExclusiveInsertPfnChainInList.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MmProtectMdlSystemAddress @ 0x1404107F0 (MmProtectMdlSystemAddress.c)
 *     MiInitializeTransitionPfn @ 0x140453E64 (MiInitializeTransitionPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x1404A0378 (MiMakeVaRangeNoAccess.c)
 *     MiTrimSystemImagePages @ 0x1404A70E0 (MiTrimSystemImagePages.c)
 *     MiSwitchToTransition @ 0x1404AC960 (MiSwitchToTransition.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiPageBootRegistry @ 0x14065D9FC (MiPageBootRegistry.c)
 *     MiInitializeNewPfns @ 0x140660094 (MiInitializeNewPfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiMakeTransitionPte(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = 32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFFLL) << 7) | 0x40);
  if ( !qword_140E2D940 )
    return v2;
  if ( (qword_140E2D940 & v2) != 0 )
    return v2 | 0x10;
  return v2 | qword_140E2D940;
}
