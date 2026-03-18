/*
 * XREFs of ExSubscribeWnfStateChange @ 0x140A139C0
 * Callers:
 *     CcRegisterForContainerRestore @ 0x140576C30 (CcRegisterForContainerRestore.c)
 *     IopLiveDumpRegisterWnfNotificationCallback @ 0x140599638 (IopLiveDumpRegisterWnfNotificationCallback.c)
 *     PopEnsureErratumSubscribed @ 0x1405CE700 (PopEnsureErratumSubscribed.c)
 *     CmFcpSubscribeScmWnfStateChange @ 0x14065CDCC (CmFcpSubscribeScmWnfStateChange.c)
 *     IopInitializeDumpPolicySettings @ 0x140705024 (IopInitializeDumpPolicySettings.c)
 *     PnpBootPhaseComplete @ 0x14070E4C4 (PnpBootPhaseComplete.c)
 *     PopSetupAirplaneModeNotification @ 0x14073CD30 (PopSetupAirplaneModeNotification.c)
 *     PopSetupAudioEventNotification @ 0x14073CD6C (PopSetupAudioEventNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x14073CDA8 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x14073CDE4 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupMixedRealitytNotification @ 0x14073CE5C (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x14073CED8 (PopSetupMobileHotspotNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x14073CF14 (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x14073CF50 (PopSetupUserPresencePredictionNotification.c)
 *     PoRegisterForEffectivePowerModeNotifications @ 0x140745000 (PoRegisterForEffectivePowerModeNotifications.c)
 *     PopSubscribeHibernatePolicyWnf @ 0x140746D3C (PopSubscribeHibernatePolicyWnf.c)
 *     TtmiInitTerminals @ 0x14075FE20 (TtmiInitTerminals.c)
 *     RtlpCtContextInit @ 0x140777E98 (RtlpCtContextInit.c)
 *     EtwpInitializeSiloState @ 0x140798D8C (EtwpInitializeSiloState.c)
 *     WheapInitWnfCallbacks @ 0x1407B9DD4 (WheapInitWnfCallbacks.c)
 *     PopEsWorker @ 0x140AAAEB0 (PopEsWorker.c)
 *     VslRegisterIumPowerCallbacks @ 0x140C08B24 (VslRegisterIumPowerCallbacks.c)
 *     PiUEventInit @ 0x140C12A84 (PiUEventInit.c)
 *     PopPowerButtonSuppressionInit @ 0x140C1F5E0 (PopPowerButtonSuppressionInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140C20C4C (PopBatteryInitPhaseTwo.c)
 *     PopNetInitialize @ 0x140C20E04 (PopNetInitialize.c)
 *     PopEsInit @ 0x140C21968 (PopEsInit.c)
 *     PopInitializeAdpm @ 0x140C22450 (PopInitializeAdpm.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140A13B0C (ExpWnfSubscribeWnfStateChange.c)
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
