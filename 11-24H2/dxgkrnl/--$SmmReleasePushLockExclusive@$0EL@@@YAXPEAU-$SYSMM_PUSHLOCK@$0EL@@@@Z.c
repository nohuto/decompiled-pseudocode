/*
 * XREFs of ??$SmmReleasePushLockExclusive@$0EL@@@YAXPEAU?$SYSMM_PUSHLOCK@$0EL@@@@Z @ 0x140094BF0
 * Callers:
 *     ?SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z @ 0x140284230 (-SmmDomainTypeStateChangeCallback@@YAXPEAU_IOMMU_INTERFACE_STATE_CHANGE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 SmmReleasePushLockExclusive<75>()
{
  return ExReleasePushLockExclusiveEx(&SmmDomainChangeGlobalLock, 0LL);
}
