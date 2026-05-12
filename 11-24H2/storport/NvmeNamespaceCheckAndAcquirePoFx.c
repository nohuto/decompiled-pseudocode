/*
 * XREFs of NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C
 * Callers:
 *     NvmeCompleteSubmissionQueueRequests @ 0x1400E9958 (NvmeCompleteSubmissionQueueRequests.c)
 *     NvmeProcessIoForResetRecovery @ 0x1400F9F34 (NvmeProcessIoForResetRecovery.c)
 *     NvmeProcessPendingLowPriorityIo @ 0x140123160 (NvmeProcessPendingLowPriorityIo.c)
 *     NvmeAdapterPoFxSetDeviceIdleTimeout @ 0x14012F064 (NvmeAdapterPoFxSetDeviceIdleTimeout.c)
 *     NvmeNamespaceActiveConditionStep1 @ 0x140132D10 (NvmeNamespaceActiveConditionStep1.c)
 *     NvmeNamespaceCancelWaitWakeIrp @ 0x140132F94 (NvmeNamespaceCancelWaitWakeIrp.c)
 *     NvmeNamespaceDirectedPowerDown @ 0x140133170 (NvmeNamespaceDirectedPowerDown.c)
 *     NvmeNamespaceDirectedPowerDownCompletion @ 0x1401331F0 (NvmeNamespaceDirectedPowerDownCompletion.c)
 *     NvmeNamespaceDirectedPowerUp @ 0x1401334C0 (NvmeNamespaceDirectedPowerUp.c)
 *     NvmeNamespaceDirectedPowerUpRequestD0 @ 0x140133554 (NvmeNamespaceDirectedPowerUpRequestD0.c)
 *     NvmeNamespaceIdleCondition @ 0x140133700 (NvmeNamespaceIdleCondition.c)
 *     NvmeNamespaceIdleState @ 0x140133760 (NvmeNamespaceIdleState.c)
 *     NvmeNamespacePoFxD0Completion @ 0x140133980 (NvmeNamespacePoFxD0Completion.c)
 *     NvmeNamespacePoFxD3Completion @ 0x140133A90 (NvmeNamespacePoFxD3Completion.c)
 *     NvmeNamespacePoFxWaitWakeCompletion @ 0x140133C40 (NvmeNamespacePoFxWaitWakeCompletion.c)
 *     NvmeNamespacePowerNotRequiredStep1 @ 0x140133F80 (NvmeNamespacePowerNotRequiredStep1.c)
 *     NvmeNamespacePowerRequiredStep1 @ 0x140134260 (NvmeNamespacePowerRequiredStep1.c)
 *     NvmeNamespacePowerRequiredStep2 @ 0x1401342D8 (NvmeNamespacePowerRequiredStep2.c)
 *     NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x1401347A8 (NvmeNamespaceProcessSetDevicePowerIrpComplete.c)
 *     NvmeNamespaceRegisterForIdleDetection @ 0x140134C3C (NvmeNamespaceRegisterForIdleDetection.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall NvmeNamespaceCheckAndAcquirePoFx(__int64 a1)
{
  __int64 v1; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v2; // rcx

  v1 = *(_QWORD *)(a1 + 128);
  if ( v1 && *(_QWORD *)(v1 + 8) && (v2 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v1 + 40)) != 0LL )
    return ExAcquireRundownProtectionCacheAware(v2);
  else
    return 0;
}
