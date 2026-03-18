/*
 * XREFs of DxgkAcquireAdapterDdiSync @ 0x14031E9B8
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004A800 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140089E28 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x14008A190 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x14008A2E0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiGetWholeMonitorDescriptor @ 0x14008D454 (DpiGetWholeMonitorDescriptor.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1402446F8 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1402559CC (DpiQueryDisplayIDDescriptor.c)
 *     DpiPdoIsChildConnected @ 0x14031D668 (DpiPdoIsChildConnected.c)
 *     DpiPdoSetDevicePower @ 0x14039C45C (DpiPdoSetDevicePower.c)
 *     DpiPdoDispatchPnp @ 0x1403B44D0 (DpiPdoDispatchPnp.c)
 *     DpiGetMonitorDescriptor @ 0x1403E5EA8 (DpiGetMonitorDescriptor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1403F0AAC (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiAcpiHandleAcpiEvent @ 0x140428EBC (DpiAcpiHandleAcpiEvent.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140429C30 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoGetDeviceDescriptor @ 0x14042B12C (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x140016440 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 */

__int64 __fastcall DxgkAcquireAdapterDdiSync(__int64 a1, int a2)
{
  __int64 v3; // rbx

  if ( a1 )
  {
    if ( a2 == 1 || a2 == 2 )
    {
      DXGADAPTER::AcquireDdiSync(a1, a2);
      return 0LL;
    }
    else
    {
      v3 = a2;
      WdLogSingleEntry1(2LL, a2);
      WdLogGlobalForLineNumber = 368;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid DDI synchronization level 0x%I64x",
        v3,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741811LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 355;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
