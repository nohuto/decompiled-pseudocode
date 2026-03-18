/*
 * XREFs of MiSanitizeShadowPxe @ 0x140233C54
 * Callers:
 *     MiRewritePteWithLockBit @ 0x14020CBCC (MiRewritePteWithLockBit.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiAllocateWsle @ 0x14021F980 (MiAllocateWsle.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiClearPteAccessed @ 0x1402307A0 (MiClearPteAccessed.c)
 *     MiSetProtectionOnTransitionPte @ 0x1402386B4 (MiSetProtectionOnTransitionPte.c)
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402666A8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiRestoreTransitionPte @ 0x140271094 (MiRestoreTransitionPte.c)
 *     MiTerminateWsle @ 0x1402856F0 (MiTerminateWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140285DE4 (MiUnlockNestedPageTableWritePte.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402869A0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MiWriteRepurposedTransitionPte @ 0x14036D574 (MiWriteRepurposedTransitionPte.c)
 *     MiInvalidateCollidedIos @ 0x14036FA08 (MiInvalidateCollidedIos.c)
 *     MiShadowTopLevelPxes @ 0x140393EB0 (MiShadowTopLevelPxes.c)
 *     MiSwapHardFaultPage @ 0x140394570 (MiSwapHardFaultPage.c)
 *     MiSwapNumaStandbyPage @ 0x14039474C (MiSwapNumaStandbyPage.c)
 *     MiTradeActivePage @ 0x1403A0758 (MiTradeActivePage.c)
 *     MiWriteValidPteNewPage @ 0x1403A28B8 (MiWriteValidPteNewPage.c)
 *     MiInsertLargeVadMapping @ 0x1403F3B88 (MiInsertLargeVadMapping.c)
 *     MiMakePteClean @ 0x1404326A0 (MiMakePteClean.c)
 *     MiMakeFaultPfnActive @ 0x140462FB4 (MiMakeFaultPfnActive.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x14046511C (MiRewriteTrimPteAsDemandZero.c)
 *     MiWriteEnclavePte @ 0x1404743C4 (MiWriteEnclavePte.c)
 *     MiProtectAweRegion @ 0x1404C2558 (MiProtectAweRegion.c)
 *     MiSplitDirectMapPage @ 0x1404D14D0 (MiSplitDirectMapPage.c)
 *     MiDbgReleaseAddress @ 0x14067F0C0 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x14067F674 (MiDbgWriteCheck.c)
 *     MiCreateHardwareEnclave @ 0x1407F719C (MiCreateHardwareEnclave.c)
 *     MiUpdateUserMappings @ 0x140B6A44C (MiUpdateUserMappings.c)
 *     MiMapDummyPages @ 0x140C4FC6C (MiMapDummyPages.c)
 *     MxZeroBootMappings @ 0x140C505C4 (MxZeroBootMappings.c)
 *     MiClearStaleSecurePageMapping @ 0x140C50F58 (MiClearStaleSecurePageMapping.c)
 *     MiFillGapPtes @ 0x140C54D90 (MiFillGapPtes.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 */

__int64 MiSanitizeShadowPxe()
{
  _QWORD *v0; // rdx
  unsigned int v1; // r9d

  if ( MiPteHasShadow() )
  {
    v1 = 1;
    if ( !HIBYTE(word_140E2ED84) && (*v0 & 1) != 0 )
      *v0 |= 0x8000000000000000uLL;
  }
  else if ( (KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0
         && (*v0 & 1) != 0 )
  {
    *v0 |= 0x8000000000000000uLL;
  }
  return v1;
}
