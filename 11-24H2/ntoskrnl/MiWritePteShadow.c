/*
 * XREFs of MiWritePteShadow @ 0x1402038A0
 * Callers:
 *     MiRewriteTrimPteAsDemandZero @ 0x140200A7C (MiRewriteTrimPteAsDemandZero.c)
 *     MiMakePteClean @ 0x140200C78 (MiMakePteClean.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140201590 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiTerminateWsle @ 0x140201850 (MiTerminateWsle.c)
 *     MiUnlockNestedPageTableWritePte @ 0x1402023A0 (MiUnlockNestedPageTableWritePte.c)
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiSetProtectionOnTransitionPte @ 0x140212844 (MiSetProtectionOnTransitionPte.c)
 *     MiWriteValidPteNewPage @ 0x140217188 (MiWriteValidPteNewPage.c)
 *     MiTradeActivePage @ 0x1402172BC (MiTradeActivePage.c)
 *     MiRestoreTransitionPte @ 0x140226624 (MiRestoreTransitionPte.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiAllocateWsle @ 0x14024C6D0 (MiAllocateWsle.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiMakeFaultPfnActive @ 0x14025A13C (MiMakeFaultPfnActive.c)
 *     MiReadWriteAnyLevelShadowPte @ 0x1402EE8E8 (MiReadWriteAnyLevelShadowPte.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiRewritePteWithLockBit @ 0x140335F2C (MiRewritePteWithLockBit.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiShadowTopLevelPxes @ 0x14038D4CC (MiShadowTopLevelPxes.c)
 *     MiSwapHardFaultPage @ 0x14038DB8C (MiSwapHardFaultPage.c)
 *     MiSwapNumaStandbyPage @ 0x1403F7A6C (MiSwapNumaStandbyPage.c)
 *     MiWriteEnclavePte @ 0x14046E030 (MiWriteEnclavePte.c)
 *     MiInvalidateCollidedIos @ 0x14049B72C (MiInvalidateCollidedIos.c)
 *     MiWriteRepurposedTransitionPte @ 0x1404A19F0 (MiWriteRepurposedTransitionPte.c)
 *     MiProtectAweRegion @ 0x1404BDA90 (MiProtectAweRegion.c)
 *     MiSplitDirectMapPage @ 0x1404CA510 (MiSplitDirectMapPage.c)
 *     MiInsertLargeVadMapping @ 0x1404CE7F4 (MiInsertLargeVadMapping.c)
 *     MiDbgReleaseAddress @ 0x1406802C0 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x140680874 (MiDbgWriteCheck.c)
 *     MiTransformValidPteViaIpi @ 0x1406851A8 (MiTransformValidPteViaIpi.c)
 *     MiCreateHardwareEnclave @ 0x1407F7910 (MiCreateHardwareEnclave.c)
 *     MiUpdateUserMappings @ 0x140B6BB5C (MiUpdateUserMappings.c)
 *     MiMapDummyPages @ 0x140C51DFC (MiMapDummyPages.c)
 *     MxZeroBootMappings @ 0x140C52754 (MxZeroBootMappings.c)
 *     MiClearStaleSecurePageMapping @ 0x140C530E8 (MiClearStaleSecurePageMapping.c)
 *     MiFillGapPtes @ 0x140C56F20 (MiFillGapPtes.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 */

char __fastcall MiWritePteShadow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 HasShadow; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // r9

  HasShadow = MiPteHasShadow(a1, a2, a1, a4);
  if ( HasShadow )
  {
    v7 = *(_QWORD *)(HasShadow + 1288);
    if ( v7 )
    {
      LOBYTE(HasShadow) = -(v5 & 1);
      *(_QWORD *)(v7 + 8 * ((v6 >> 3) & 0x1FF)) = v5 & 0x7FFFFFFFFFFFFFFFLL & -(__int64)((v5 & 1) != 0);
    }
  }
  return HasShadow;
}
