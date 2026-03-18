/*
 * XREFs of ExQueryWnfStateData @ 0x140A36E60
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1405CB480 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x1405CB510 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x1405CB5A0 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x1405CE7C0 (PopErratumUpdateCallback.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x14065CE20 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14070E440 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfMixedRealityCallback @ 0x1407412B0 (PopWnfMixedRealityCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x140741340 (PopWnfUserAwayPredictionCallback.c)
 *     PopWnfEffectivePowerModeCallback @ 0x1407451A0 (PopWnfEffectivePowerModeCallback.c)
 *     PopWnfInSupCallback @ 0x14074DC90 (PopWnfInSupCallback.c)
 *     PopPowerAdapterRecOverrideWnfCallback @ 0x14074F3C0 (PopPowerAdapterRecOverrideWnfCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x14074F7D0 (PopUsbErrorWNFNotificationCallback.c)
 *     PopAdaptiveWnfCallback @ 0x140752BF0 (PopAdaptiveWnfCallback.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140760D70 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExpWnfReadStateData @ 0x1408E32C8 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A36EFC (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  unsigned int v9; // edi
  struct _EX_RUNDOWN_REF *v10; // rsi
  int StateData; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  v9 = 0;
  v10 = (struct _EX_RUNDOWN_REF *)v8;
  if ( v8 )
  {
    StateData = ExpWnfReadStateData(v8, a2, a3, *a4, a4);
    ExReleaseRundownProtection_0(v10 + 1);
    if ( StateData < 0 )
      v9 = StateData;
  }
  else
  {
    v9 = -1073741772;
  }
  KeLeaveCriticalRegion();
  return v9;
}
