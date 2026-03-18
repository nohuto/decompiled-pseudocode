/*
 * XREFs of DxgkReleaseAdapterDdiSync @ 0x1403763C8
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004ACB4 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140089740 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x140089AB0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x140089C00 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiGetWholeMonitorDescriptor @ 0x14008C494 (DpiGetWholeMonitorDescriptor.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x14023DB08 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiQueryDisplayIDDescriptor @ 0x14024EB9C (DpiQueryDisplayIDDescriptor.c)
 *     DpiPdoDispatchPnp @ 0x1402BE410 (DpiPdoDispatchPnp.c)
 *     DpiPdoIsChildConnected @ 0x140374F80 (DpiPdoIsChildConnected.c)
 *     DpiPdoSetDevicePower @ 0x1403A573C (DpiPdoSetDevicePower.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1403C9318 (DpiPdoGetDeviceDescriptor.c)
 *     DpiGetMonitorDescriptor @ 0x1403EC558 (DpiGetMonitorDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1403F6A3C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiAcpiHandleAcpiEvent @ 0x1404291B4 (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1404296A0 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1400216A0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkReleaseAdapterDdiSync(DXGADAPTER *a1)
{
  if ( a1 )
  {
    DXGADAPTER::ReleaseDdiSync(a1);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 396;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"No pAdapter specified, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
