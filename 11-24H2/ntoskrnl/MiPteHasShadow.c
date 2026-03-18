/*
 * XREFs of MiPteHasShadow @ 0x1402141A0
 * Callers:
 *     MiReducePteUseCount @ 0x140212920 (MiReducePteUseCount.c)
 *     MiIsPteEvaluated @ 0x140212B2C (MiIsPteEvaluated.c)
 *     MiCleanupLazyStampedPageTable @ 0x140212BFC (MiCleanupLazyStampedPageTable.c)
 *     MiGetPfnProtection @ 0x140212E10 (MiGetPfnProtection.c)
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiClearPageFileReservation @ 0x140213DEC (MiClearPageFileReservation.c)
 *     MiAccessCheck @ 0x140213E80 (MiAccessCheck.c)
 *     MiSharedVaToPartition @ 0x140214100 (MiSharedVaToPartition.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiSanitizeShadowPxe @ 0x140233C54 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x140233CD4 (MiWritePteShadow.c)
 *     MiTerminateWsle @ 0x1402856F0 (MiTerminateWsle.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x1402869A0 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiEmptyWorkingSetHelper @ 0x140287320 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140287AF0 (MiEmptyPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiComputePxeWalkAction @ 0x1402DE580 (MiComputePxeWalkAction.c)
 *     MiAddWorkingSetEntries @ 0x1402E0980 (MiAddWorkingSetEntries.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiResolvePrivateZeroFault @ 0x1402FE070 (MiResolvePrivateZeroFault.c)
 *     MiResolveSharedZeroFault @ 0x1402FFD60 (MiResolveSharedZeroFault.c)
 *     MiQueryAddressState @ 0x140300420 (MiQueryAddressState.c)
 *     MiGetPageProtection @ 0x1403019B0 (MiGetPageProtection.c)
 * Callees:
 *     <none>
 */

_KPROCESS *MiPteHasShadow()
{
  _KPROCESS *result; // rax

  if ( (MiFlags & 0x600000) == 0 )
    return 0LL;
  result = KeGetCurrentThread()->ApcState.Process;
  if ( result->AddressPolicy == 1 )
    return 0LL;
  return result;
}
