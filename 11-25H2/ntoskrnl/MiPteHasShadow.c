/*
 * XREFs of MiPteHasShadow @ 0x14024B550
 * Callers:
 *     MiTerminateWsle @ 0x140231080 (MiTerminateWsle.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140247E00 (MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED.c)
 *     MiSetVaAgeList @ 0x140249BE0 (MiSetVaAgeList.c)
 *     MiIsPteEvaluated @ 0x14024A588 (MiIsPteEvaluated.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MiRemoveWsleList @ 0x14024AF10 (MiRemoveWsleList.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MI_CLEAR_PTE_BITS_FOR_READ_CLUSTER @ 0x14037C8A0 (MI_CLEAR_PTE_BITS_FOR_READ_CLUSTER.c)
 *     MiEmptyWorkingSetHelper @ 0x1403808F0 (MiEmptyWorkingSetHelper.c)
 *     MiEmptyPte @ 0x140380E70 (MiEmptyPte.c)
 *     MiAccessCheck @ 0x1403E1820 (MiAccessCheck.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiReducePteUseCount @ 0x14042F6B0 (MiReducePteUseCount.c)
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
