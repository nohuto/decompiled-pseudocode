/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140A5D360
 * Callers:
 *     CcContainerRestoreCallBack @ 0x1405771A0 (CcContainerRestoreCallBack.c)
 *     EtwpUnsubscribeContainerStateWnf @ 0x14064B8F0 (EtwpUnsubscribeContainerStateWnf.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x14074F3F0 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PoUnregisterFromEffectivePowerModeNotifications @ 0x14074F520 (PoUnregisterFromEffectivePowerModeNotifications.c)
 *     RtlpCtContextFree @ 0x140786FBC (RtlpCtContextFree.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A7ABB4 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteSubscription @ 0x1409005A8 (ExpWnfDeleteSubscription.c)
 */

void __fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, (__int64)PsInitialSystemProcess);
  KeLeaveCriticalRegion();
}
