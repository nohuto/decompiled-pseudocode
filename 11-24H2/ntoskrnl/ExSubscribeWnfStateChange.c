/*
 * XREFs of ExSubscribeWnfStateChange @ 0x140A12490
 * Callers:
 *     CcRegisterForContainerRestore @ 0x1405773C0 (CcRegisterForContainerRestore.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x140599CC8 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     PopEnsureErratumSubscribed @ 0x1405D0700 (PopEnsureErratumSubscribed.c)
 *     CmFcpSubscribeScmWnfStateChange @ 0x14066718C (CmFcpSubscribeScmWnfStateChange.c)
 *     IopInitializeDumpPolicySettings @ 0x14070ECB4 (IopInitializeDumpPolicySettings.c)
 *     PnpBootPhaseComplete @ 0x140718154 (PnpBootPhaseComplete.c)
 *     PopSetupAirplaneModeNotification @ 0x140747030 (PopSetupAirplaneModeNotification.c)
 *     PopSetupAudioEventNotification @ 0x14074706C (PopSetupAudioEventNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407470A8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407470E4 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupMixedRealitytNotification @ 0x14074715C (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407471D8 (PopSetupMobileHotspotNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140747214 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUsb4DisplayPresenceNotification @ 0x140747250 (PopSetupUsb4DisplayPresenceNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x14074728C (PopSetupUserPresencePredictionNotification.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x14074F3F0 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PopSubscribeHibernatePolicyWnf @ 0x140751140 (PopSubscribeHibernatePolicyWnf.c)
 *     PopAdaptiveStandbyInitialize @ 0x140760B64 (PopAdaptiveStandbyInitialize.c)
 *     TtmiInitTerminals @ 0x14076FA00 (TtmiInitTerminals.c)
 *     RtlpCtContextInit @ 0x140787018 (RtlpCtContextInit.c)
 *     EtwpInitializeSiloState @ 0x1407A829C (EtwpInitializeSiloState.c)
 *     WheapInitWnfCallbacks @ 0x1407C9A94 (WheapInitWnfCallbacks.c)
 *     PopEsWorker @ 0x140AC7510 (PopEsWorker.c)
 *     VslRegisterIumPowerCallbacks @ 0x140C1BBFC (VslRegisterIumPowerCallbacks.c)
 *     PiUEventInit @ 0x140C25B44 (PiUEventInit.c)
 *     PopPowerButtonSuppressionInit @ 0x140C32800 (PopPowerButtonSuppressionInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140C33E6C (PopBatteryInitPhaseTwo.c)
 *     PopNetInitialize @ 0x140C34034 (PopNetInitialize.c)
 *     PopEsInit @ 0x140C34BAC (PopEsInit.c)
 *     PopInitializeAdpm @ 0x140C357A4 (PopInitializeAdpm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A125DC (ExpWnfSubscribeWnfStateChange.c)
 */

__int64 __fastcall ExSubscribeWnfStateChange(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = ExpWnfSubscribeWnfStateChange(0LL, a1, a2);
  KeLeaveCriticalRegion();
  return v3;
}
