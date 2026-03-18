/*
 * XREFs of DpiFdoGetChildDescriptor @ 0x140028BA8
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x140027B44 (DpiSetTargetAdjustedColorimetry2.c)
 *     DxgkQueryConnectionChanges @ 0x140027BD0 (DxgkQueryConnectionChanges.c)
 *     DpiProcessOpmVmBusRequest @ 0x14008A42C (DpiProcessOpmVmBusRequest.c)
 *     DpiSetTargetAdjustedColorimetry @ 0x14018B1EC (DpiSetTargetAdjustedColorimetry.c)
 *     DpiFdoHandleTargetConnectionState @ 0x140242850 (DpiFdoHandleTargetConnectionState.c)
 *     DpiGetMonitorColorimetryOverride @ 0x140254B54 (DpiGetMonitorColorimetryOverride.c)
 *     DpiGetMonitorNativeTimingOverride @ 0x140254CA0 (DpiGetMonitorNativeTimingOverride.c)
 *     DpiPdoPollingWorkItem @ 0x1402555B0 (DpiPdoPollingWorkItem.c)
 *     ?GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z @ 0x14027DC10 (-GetIntegratedDisplayIntendedUsage@KernelDriver@@UEBAJPEAW4_DXGK_DISPLAY_USAGE@@@Z.c)
 *     DpiPdoIsChildConnected @ 0x14031D668 (DpiPdoIsChildConnected.c)
 *     DpEvalAcpiMethod @ 0x14038D8A0 (DpEvalAcpiMethod.c)
 *     ?GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403EEFF0 (-GetIntegratedDisplayLinkInfo@KernelDriver@@UEBAJAEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1403FB4AC (DpiGetIntegratedDisplayOrientationOverrides.c)
 *     DpiPdoHandleChildConnectionChange @ 0x14042B7C0 (DpiPdoHandleChildConnectionChange.c)
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
