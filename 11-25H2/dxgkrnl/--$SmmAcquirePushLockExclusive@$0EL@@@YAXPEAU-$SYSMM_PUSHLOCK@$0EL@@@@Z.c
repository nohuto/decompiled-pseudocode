/*
 * XREFs of ??$SmmAcquirePushLockExclusive@$0EL@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EL@@@@Z @ 0x140092708
 * Callers:
 *     ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x14027CEC0 (-SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 SmmAcquirePushLockExclusive<75>()
{
  return ExAcquirePushLockExclusiveEx(&SmmDomainChangeGlobalLock, 0LL);
}
