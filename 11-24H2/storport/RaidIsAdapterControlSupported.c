/*
 * XREFs of RaidIsAdapterControlSupported @ 0x14001C7B0
 * Callers:
 *     StorAdapterNeedsUpdate @ 0x140009EA8 (StorAdapterNeedsUpdate.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x14000F240 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaidAdapterSendPowerToMiniport @ 0x14000F3E0 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x14000F548 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaidAdapterRescanBus @ 0x140017248 (RaidAdapterRescanBus.c)
 *     RaidAdapterRestartAdapter @ 0x14001BD1C (RaidAdapterRestartAdapter.c)
 *     StorPortAdapterIdleState @ 0x14001C0E0 (StorPortAdapterIdleState.c)
 *     StorPortAdapterIdleCondition @ 0x14001C590 (StorPortAdapterIdleCondition.c)
 *     StorPortAdapterActiveCondition @ 0x140024390 (StorPortAdapterActiveCondition.c)
 *     RaidAdapterStopAdapter @ 0x1400275F8 (RaidAdapterStopAdapter.c)
 *     RaidAdapterStopOnPowerdown @ 0x140034A30 (RaidAdapterStopOnPowerdown.c)
 *     RaidCoalescingCallback @ 0x1400363E0 (RaidCoalescingCallback.c)
 *     StorPortAdapterPowerRequiredStep1 @ 0x140037670 (StorPortAdapterPowerRequiredStep1.c)
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x140037930 (StorPortAdapterPowerNotRequiredStep1.c)
 *     RaCallMiniportAdapterControlSafe @ 0x14003D3C0 (RaCallMiniportAdapterControlSafe.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x14003D40C (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterHealthEvents @ 0x14003D77C (StorEnableAdapterHealthEvents.c)
 *     RaidAdapterStop @ 0x1400403C8 (RaidAdapterStop.c)
 *     RaidPowerSettingCallback @ 0x140044FA0 (RaidPowerSettingCallback.c)
 *     StorEnableAdapterOperationalEvents @ 0x140055888 (StorEnableAdapterOperationalEvents.c)
 *     RaidAdapterDeviceReset @ 0x140059DAC (RaidAdapterDeviceReset.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x14006A2CC (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1400778FC (RaidAdapterQueryCoolingInterface.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x140077988 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x140077AE8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterDirectedPowerDown @ 0x140079880 (StorPortAdapterDirectedPowerDown.c)
 *     StorPortAdapterDirectedPowerUp @ 0x140079C00 (StorPortAdapterDirectedPowerUp.c)
 *     StorPortAdapterPowerControl @ 0x140079F80 (StorPortAdapterPowerControl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140181F80 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1401831FC (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x14018363C (RaidGetStorageAdapterFruIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1401B86B4 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

char __fastcall RaidIsAdapterControlSupported(__int64 a1, int a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // r8
  int v5; // ecx
  unsigned int (__fastcall *v6)(__int64, _QWORD); // rax

  v3 = a2;
  if ( (*(_BYTE *)(a1 + 248) & 0x20) != 0 )
    return *(_BYTE *)(a2 + a1 + 292);
  v4 = (_DWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 292) = 0LL;
  *(_QWORD *)(a1 + 300) = 0LL;
  *(_QWORD *)(a1 + 308) = 0LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  v5 = *(_DWORD *)(a1 + 376);
  *v4 = 19;
  if ( v5 )
  {
    if ( v5 > 2 && *(_BYTE *)(a1 + 382) )
      *v4 = 20;
    if ( v5 > 3 && *(_BYTE *)(a1 + 383) )
      *v4 = 21;
    if ( v5 > 5 && *(_BYTE *)(a1 + 385) )
      *v4 = 22;
    if ( v5 > 6 && *(_BYTE *)(a1 + 386) )
      *v4 = 23;
    if ( v5 > 7 && *(_BYTE *)(a1 + 387) )
      *v4 = 24;
    if ( v5 > 8 && *(_BYTE *)(a1 + 388) )
      *v4 = 25;
    if ( v5 > 9 && *(_BYTE *)(a1 + 389) )
      *v4 = 26;
    if ( v5 > 10 && *(_BYTE *)(a1 + 390) )
      *v4 = 27;
    if ( v5 > 12 && *(_BYTE *)(a1 + 392) )
      *v4 = 28;
  }
  v6 = *(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( !v6 || v6(*(_QWORD *)(a1 + 240) + 16LL, 0LL) )
    return 0;
  *(_BYTE *)(a1 + 248) |= 0x20u;
  return *(_BYTE *)(v3 + a1 + 292);
}
