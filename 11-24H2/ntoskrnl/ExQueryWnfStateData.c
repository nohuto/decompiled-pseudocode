/*
 * XREFs of ExQueryWnfStateData @ 0x140A31340
 * Callers:
 *     PopWnfAirplaneModeCallback @ 0x1405CD2F0 (PopWnfAirplaneModeCallback.c)
 *     PopWnfBluetoothChargingCallback @ 0x1405CD380 (PopWnfBluetoothChargingCallback.c)
 *     PopWnfMobileHotspotCallback @ 0x1405CD410 (PopWnfMobileHotspotCallback.c)
 *     PopErratumUpdateCallback @ 0x1405D07C0 (PopErratumUpdateCallback.c)
 *     CmFcpWnfScmStateChangeNotificationCallback @ 0x1406671E0 (CmFcpWnfScmStateChangeNotificationCallback.c)
 *     PipUpdateSetupOobeCompleteWnfCallback @ 0x1407180D0 (PipUpdateSetupOobeCompleteWnfCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14074B6B0 (PopWnfMixedRealityCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x14074B740 (PopWnfUserAwayPredictionCallback.c)
 *     PopWnfEffectivePowerModeCallback @ 0x14074F590 (PopWnfEffectivePowerModeCallback.c)
 *     PopWnfUsb4DisplayPresenceCallback @ 0x1407585D0 (PopWnfUsb4DisplayPresenceCallback.c)
 *     PopWnfInSupCallback @ 0x140758960 (PopWnfInSupCallback.c)
 *     PopPowerAdapterRecOverrideWnfCallback @ 0x14075A940 (PopPowerAdapterRecOverrideWnfCallback.c)
 *     PopUsbErrorWNFNotificationCallback @ 0x14075B080 (PopUsbErrorWNFNotificationCallback.c)
 *     PopAdaptiveWnfCallback @ 0x14075E620 (PopAdaptiveWnfCallback.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x140762640 (PopAdaptiveStandbyWnfCallback.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x140770950 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExpWnfReadStateData @ 0x140901C9C (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A313DC (ExpWnfAcquireSubscriptionNameInstance.c)
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
