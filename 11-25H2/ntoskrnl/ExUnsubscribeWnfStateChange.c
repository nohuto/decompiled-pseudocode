/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140A63170
 * Callers:
 *     CcContainerRestoreCallBack @ 0x140576A10 (CcContainerRestoreCallBack.c)
 *     EtwpUnsubscribeContainerStateWnf @ 0x1406412C0 (EtwpUnsubscribeContainerStateWnf.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x140745000 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PoUnregisterFromEffectivePowerModeNotifications @ 0x140745130 (PoUnregisterFromEffectivePowerModeNotifications.c)
 *     RtlpCtContextFree @ 0x140777E3C (RtlpCtContextFree.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A8F960 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteSubscription @ 0x1408E1CA8 (ExpWnfDeleteSubscription.c)
 */

void __fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, (__int64)PsInitialSystemProcess);
  KeLeaveCriticalRegion();
}
