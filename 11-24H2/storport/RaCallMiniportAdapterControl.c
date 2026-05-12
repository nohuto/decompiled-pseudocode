/*
 * XREFs of RaCallMiniportAdapterControl @ 0x140027690
 * Callers:
 *     RaidAdapterSendPowerToMiniport @ 0x14000F3E0 (RaidAdapterSendPowerToMiniport.c)
 *     RaidAdapterRescanBus @ 0x140017248 (RaidAdapterRescanBus.c)
 *     RaidAdapterRestartAdapter @ 0x14001BD1C (RaidAdapterRestartAdapter.c)
 *     RaidAdapterStopAdapter @ 0x1400275F8 (RaidAdapterStopAdapter.c)
 *     RaCallMiniportAdapterControlSafe @ 0x14003D3C0 (RaCallMiniportAdapterControlSafe.c)
 *     StorEnableAdapterDiagnosticEvents @ 0x14003D40C (StorEnableAdapterDiagnosticEvents.c)
 *     StorEnableAdapterHealthEvents @ 0x14003D77C (StorEnableAdapterHealthEvents.c)
 *     RaidPowerSettingCallback @ 0x140044FA0 (RaidPowerSettingCallback.c)
 *     StorEnableAdapterOperationalEvents @ 0x140055888 (StorEnableAdapterOperationalEvents.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     RaidAdapterSendCryptoOperationSynchronously @ 0x14006A2CC (RaidAdapterSendCryptoOperationSynchronously.c)
 *     RaidAdapterPerfStateCallback @ 0x140077890 (RaidAdapterPerfStateCallback.c)
 *     RaidAdapterSendPoFxPowerRequiredToMiniport @ 0x140077988 (RaidAdapterSendPoFxPowerRequiredToMiniport.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x140077AE8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorPortAdapterPowerControl @ 0x140079F80 (StorPortAdapterPowerControl.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x140181F80 (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterStorageGetInternalDataIoctl @ 0x1401831FC (RaidAdapterStorageGetInternalDataIoctl.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x14018363C (RaidGetStorageAdapterFruIdProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1401B86B4 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaCallMiniportAdapterControl(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // rax
  __int64 result; // rax
  int v3; // ecx

  v1 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 232) + 120LL);
  if ( !v1 )
    return 3221225659LL;
  result = v1(*(_QWORD *)(a1 + 240) + 16LL);
  v3 = result;
  if ( (_DWORD)result )
  {
    result = 3221225473LL;
    if ( v3 == 2 )
      return 2147483665LL;
  }
  return result;
}
