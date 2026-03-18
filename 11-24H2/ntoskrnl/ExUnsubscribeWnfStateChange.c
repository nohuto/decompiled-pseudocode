/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x140A64A60
 * Callers:
 *     CcContainerRestoreCallBack @ 0x140579D10 (CcContainerRestoreCallBack.c)
 *     EtwpUnsubscribeContainerStateWnf @ 0x14064D2E0 (EtwpUnsubscribeContainerStateWnf.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x1407510D0 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PoUnregisterFromEffectivePowerModeNotifications @ 0x140751200 (PoUnregisterFromEffectivePowerModeNotifications.c)
 *     RtlpCtContextFree @ 0x14078708C (RtlpCtContextFree.c)
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140A80154 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExpWnfDeleteSubscription @ 0x1408AA348 (ExpWnfDeleteSubscription.c)
 */

void __fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, (__int64)PsInitialSystemProcess);
  KeLeaveCriticalRegion();
}
