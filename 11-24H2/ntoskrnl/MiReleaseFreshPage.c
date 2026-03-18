/*
 * XREFs of MiReleaseFreshPage @ 0x140221FC0
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140220F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiClaimPhysicalRun @ 0x14022B3F0 (MiClaimPhysicalRun.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiDeleteUltraMapContext @ 0x1402D1B78 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x1402D1CC4 (MiManageUltraSpacePageTable.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiMakePageAvoidRead @ 0x1402EF168 (MiMakePageAvoidRead.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiGetPage @ 0x1402F41B0 (MiGetPage.c)
 *     MiTradeTransitionPage @ 0x1402F718C (MiTradeTransitionPage.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiSharePages @ 0x1402FA880 (MiSharePages.c)
 *     MiReplaceLockedPage @ 0x14039F10C (MiReplaceLockedPage.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiFreeLargeZeroPages @ 0x1403A67F0 (MiFreeLargeZeroPages.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403C6C4C (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1403C6DB8 (MiReplenishUltraPageTables.c)
 *     MiAllocateMdlPagesByLists @ 0x140412C40 (MiAllocateMdlPagesByLists.c)
 *     MiAllocateMostlyContiguousPagesForMdl @ 0x140413798 (MiAllocateMostlyContiguousPagesForMdl.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     MiMakeDriverPagesPrivate @ 0x140436EA8 (MiMakeDriverPagesPrivate.c)
 *     MiFreePageChain @ 0x14045AD80 (MiFreePageChain.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MiEstablishDefragSlabEntries @ 0x14068781C (MiEstablishDefragSlabEntries.c)
 *     MiFreeReadListPages @ 0x140956090 (MiFreeReadListPages.c)
 * Callees:
 *     MiReleaseFreshPageAtDpc @ 0x140222030 (MiReleaseFreshPageAtDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReleaseFreshPage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
  MiReleaseFreshPageAtDpc(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
