/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x140950AE0
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x140712B28 (PiGetDeviceRegistryProperty.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x1407261D8 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PiQueryRemovableDeviceOverride @ 0x14082E4B8 (PiQueryRemovableDeviceOverride.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x140833618 (PiUpdateDevicePanel.c)
 *     PiCreateDriverSwDevices @ 0x140950828 (PiCreateDriverSwDevices.c)
 *     PnpSaveDeviceCapabilities @ 0x140950928 (PnpSaveDeviceCapabilities.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  const WCHAR *v6; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && (v6 = *(const WCHAR **)(v4 + 48)) != 0LL )
    return CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v6, 16, 0, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
