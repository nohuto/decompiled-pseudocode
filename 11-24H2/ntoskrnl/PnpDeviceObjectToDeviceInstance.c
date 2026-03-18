/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x140990DBC
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x14071EC28 (PiGetDeviceRegistryProperty.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x1407323E8 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x1409902C0 (PiUpdateDevicePanel.c)
 *     PiCreateDriverSwDevices @ 0x140990734 (PiCreateDriverSwDevices.c)
 *     PnpSaveDeviceCapabilities @ 0x140990C04 (PnpSaveDeviceCapabilities.c)
 *     PiQueryRemovableDeviceOverride @ 0x140A32AF8 (PiQueryRemovableDeviceOverride.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1408C6880 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v6; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v6 = *(_QWORD *)(v4 + 48)) != 0 )
    return CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v6, 16, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
