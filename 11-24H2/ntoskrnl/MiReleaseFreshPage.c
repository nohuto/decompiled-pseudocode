/*
 * XREFs of MiReleaseFreshPage @ 0x14024ED10
 * Callers:
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x1402158AC (MiReplaceLockedPage.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x14021C6C4 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiFreePageChain @ 0x14021DC64 (MiFreePageChain.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x14024DC50 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMakePageAvoidRead @ 0x140253334 (MiMakePageAvoidRead.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiFreeLargeZeroPages @ 0x14026DAE0 (MiFreeLargeZeroPages.c)
 *     MiClaimPhysicalRun @ 0x1402FED00 (MiClaimPhysicalRun.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiGetPage @ 0x14033BF40 (MiGetPage.c)
 *     MiTradeTransitionPage @ 0x14033F5E8 (MiTradeTransitionPage.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiSharePages @ 0x140343830 (MiSharePages.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiDeleteUltraMapContext @ 0x140352DF0 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x140352F3C (MiManageUltraSpacePageTable.c)
 *     MiAllocateMdlPagesByLists @ 0x140395080 (MiAllocateMdlPagesByLists.c)
 *     MiCreateUltraThreadContextHelper @ 0x140412880 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1404129EC (MiReplenishUltraPageTables.c)
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 *     MiMakeDriverPagesPrivate @ 0x140429928 (MiMakeDriverPagesPrivate.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MiEstablishDefragSlabEntries @ 0x14068894C (MiEstablishDefragSlabEntries.c)
 *     MiFreeReadListPages @ 0x140939A40 (MiFreeReadListPages.c)
 * Callees:
 *     MiReleaseFreshPageAtDpc @ 0x14024ED80 (MiReleaseFreshPageAtDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  MiReleaseFreshPageAtDpc(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
