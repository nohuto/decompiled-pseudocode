/*
 * XREFs of ExSubscribeWnfStateChange @ 0x140A19320
 * Callers:
 *     CcRegisterForContainerRestore @ 0x140579F30 (CcRegisterForContainerRestore.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x14059CD48 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     PopEnsureErratumSubscribed @ 0x1405D2FE0 (PopEnsureErratumSubscribed.c)
 *     CmFcpSubscribeScmWnfStateChange @ 0x14066889C (CmFcpSubscribeScmWnfStateChange.c)
 *     IopInitializeDumpPolicySettings @ 0x140711124 (IopInitializeDumpPolicySettings.c)
 *     PnpBootPhaseComplete @ 0x14071A5C4 (PnpBootPhaseComplete.c)
 *     PopSetupAirplaneModeNotification @ 0x140748D40 (PopSetupAirplaneModeNotification.c)
 *     PopSetupAudioEventNotification @ 0x140748D7C (PopSetupAudioEventNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x140748DB8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x140748DF4 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupMixedRealitytNotification @ 0x140748E6C (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x140748EE8 (PopSetupMobileHotspotNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x140748F24 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x140748F60 (PopSetupUserPresencePredictionNotification.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x1407510D0 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PopSubscribeHibernatePolicyWnf @ 0x140752E20 (PopSubscribeHibernatePolicyWnf.c)
 *     PopAdaptiveStandbyInitialize @ 0x1407617F8 (PopAdaptiveStandbyInitialize.c)
 *     TtmiInitTerminals @ 0x14076F7E0 (TtmiInitTerminals.c)
 *     RtlpCtContextInit @ 0x1407870E8 (RtlpCtContextInit.c)
 *     EtwpInitializeSiloState @ 0x1407A815C (EtwpInitializeSiloState.c)
 *     WheapInitWnfCallbacks @ 0x1407C95A4 (WheapInitWnfCallbacks.c)
 *     PopEsWorker @ 0x140AC95F0 (PopEsWorker.c)
 *     VslRegisterIumPowerCallbacks @ 0x140C19BC4 (VslRegisterIumPowerCallbacks.c)
 *     PiUEventInit @ 0x140C23B14 (PiUEventInit.c)
 *     PopPowerButtonSuppressionInit @ 0x140C306E0 (PopPowerButtonSuppressionInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140C31D4C (PopBatteryInitPhaseTwo.c)
 *     PopNetInitialize @ 0x140C31EF4 (PopNetInitialize.c)
 *     PopEsInit @ 0x140C32A6C (PopEsInit.c)
 *     PopInitializeAdpm @ 0x140C33664 (PopInitializeAdpm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A1946C (ExpWnfSubscribeWnfStateChange.c)
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
