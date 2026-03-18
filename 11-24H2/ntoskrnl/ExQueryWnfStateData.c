/*
 * XREFs of ExQueryWnfStateData @ 0x140A3BB60
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1405CFB80 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x1405CFC10 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x1405CFCA0 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x1405D30A0 (PopErratumUpdateCallback.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x1406688F0 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x14071A540 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14074D380 (PopWnfMixedRealityCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x14074D410 (PopWnfUserAwayPredictionCallback.c)
 *     PopWnfEffectivePowerModeCallback @ 0x140751270 (PopWnfEffectivePowerModeCallback.c)
 *     PopWnfInSupCallback @ 0x14075A270 (PopWnfInSupCallback.c)
 *     PopPowerAdapterRecOverrideWnfCallback @ 0x14075BC40 (PopPowerAdapterRecOverrideWnfCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x14075C050 (PopUsbErrorWNFNotificationCallback.c)
 *     PopAdaptiveWnfCallback @ 0x14075F680 (PopAdaptiveWnfCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x140762DD0 (PopAdaptiveStandbyWnfCallback.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140770730 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExpWnfReadStateData @ 0x1408ABA3C (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A3BBFC (ExpWnfAcquireSubscriptionNameInstance.c)
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
