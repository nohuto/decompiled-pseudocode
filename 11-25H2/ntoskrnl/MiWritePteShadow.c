/*
 * XREFs of MiWritePteShadow @ 0x1403FDC5C
 * Callers:
 *     MiRewritePteWithLockBit @ 0x1402110AC (MiRewritePteWithLockBit.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140226334 (MiRewriteTrimPteAsDemandZero.c)
 *     MiTerminateWsle @ 0x140231080 (MiTerminateWsle.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiMakePteClean @ 0x140239F0C (MiMakePteClean.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiResolveProtoPteFault @ 0x140240060 (MiResolveProtoPteFault.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140247E00 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiClearPteAccessed @ 0x1402493D0 (MiClearPteAccessed.c)
 *     MiAllocateWsle @ 0x14024B590 (MiAllocateWsle.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiRestoreTransitionPte @ 0x14024EBD8 (MiRestoreTransitionPte.c)
 *     MiWriteValidPteNewProtection @ 0x1402B83C0 (MiWriteValidPteNewProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiSwapHardFaultPage @ 0x1402D11D4 (MiSwapHardFaultPage.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402FBBD4 (MiUnlockNestedPageTableWritePte.c)
 *     MiSetProtectionOnTransitionPte @ 0x14037F4E0 (MiSetProtectionOnTransitionPte.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiSwapNumaStandbyPage @ 0x1403B905C (MiSwapNumaStandbyPage.c)
 *     MiInsertLargeVadMapping @ 0x1403EC828 (MiInsertLargeVadMapping.c)
 *     MiWriteEnclavePte @ 0x1403FD570 (MiWriteEnclavePte.c)
 *     MiMakeFaultPfnActive @ 0x1403FD984 (MiMakeFaultPfnActive.c)
 *     MiShadowTopLevelPxes @ 0x1403FE210 (MiShadowTopLevelPxes.c)
 *     MiTradeActivePage @ 0x1403FE5A0 (MiTradeActivePage.c)
 *     MiWriteValidPteNewPage @ 0x1403FF2B0 (MiWriteValidPteNewPage.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x14040FC0C (MiReadWriteAnyLevelShadowPte.c)
 *     MiInvalidateCollidedIos @ 0x1404192CC (MiInvalidateCollidedIos.c)
 *     MiWriteRepurposedTransitionPte @ 0x1404A6730 (MiWriteRepurposedTransitionPte.c)
 *     MiProtectAweRegion @ 0x1404C3BAC (MiProtectAweRegion.c)
 *     MiSplitDirectMapPage @ 0x1404D1400 (MiSplitDirectMapPage.c)
 *     MiDbgReleaseAddress @ 0x1406738A0 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140673E54 (MiDbgWriteCheck.c)
 *     MiTransformValidPteViaIpi @ 0x1406787F8 (MiTransformValidPteViaIpi.c)
 *     MiCreateHardwareEnclave @ 0x1407E730C (MiCreateHardwareEnclave.c)
 *     MiUpdateUserMappings @ 0x140B5A94C (MiUpdateUserMappings.c)
 *     MiMapDummyPages @ 0x140C3EA3C (MiMapDummyPages.c)
 *     MxZeroBootMappings @ 0x140C3F394 (MxZeroBootMappings.c)
 *     MiClearStaleSecurePageMapping @ 0x140C3FD28 (MiClearStaleSecurePageMapping.c)
 *     MiFillGapPtes @ 0x140C43B10 (MiFillGapPtes.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiPteHasShadow @ 0x14024B550 (MiPteHasShadow.c)
 */

char MiWritePteShadow()
{
  _KPROCESS *v0; // rax
  __int64 v1; // rdx
  unsigned __int64 v2; // r8
  unsigned __int64 KernelWaitTime; // r9

  v0 = MiPteHasShadow();
  if ( v0 )
  {
    KernelWaitTime = v0[2].KernelWaitTime;
    if ( KernelWaitTime )
    {
      LOBYTE(v0) = -(v1 & 1);
      *(_QWORD *)(KernelWaitTime + 8 * ((v2 >> 3) & 0x1FF)) = v1 & 0x7FFFFFFFFFFFFFFFLL & -(__int64)((v1 & 1) != 0);
    }
  }
  return (char)v0;
}
