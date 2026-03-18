/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x140028918
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1400278BC (DpiSetTargetAdjustedColorimetry2.c)
 *     DxgkQueryConnectionChanges @ 0x140027940 (DxgkQueryConnectionChanges.c)
 *     DpiProcessOpmVmBusRequest @ 0x140089D4C (DpiProcessOpmVmBusRequest.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x140188F5C (DpiSetTargetAdjustedColorimetry.c)
 *     DpiFdoHandleTargetConnectionState @ 0x14023BD30 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetMonitorColorimetryOverride @ 0x14024DD24 (DpiGetMonitorColorimetryOverride.c)
 *     DpiGetMonitorNativeTimingOverride @ 0x14024DE70 (DpiGetMonitorNativeTimingOverride.c)
 *     DpiPdoPollingWorkItem @ 0x14024E780 (DpiPdoPollingWorkItem.c)
 *     ?GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x140276710 (-GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 *     DpiPdoIsChildConnected @ 0x140374F80 (DpiPdoIsChildConnected.c)
 *     DpEvalAcpiMethod @ 0x140395A00 (DpEvalAcpiMethod.c)
 *     ?GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403F4FF0 (-GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x14040162C (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1404092C8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DpiFdoGetChildDescriptor(__int64 a1, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)(a1 + 3600);
  v3 = *(_QWORD **)(a1 + 3600);
  while ( v3 != v2 )
  {
    result = v3 - 4;
    v3 = (_QWORD *)*v3;
    if ( *((_DWORD *)result + 6) == a2 )
      return result;
  }
  return 0LL;
}
