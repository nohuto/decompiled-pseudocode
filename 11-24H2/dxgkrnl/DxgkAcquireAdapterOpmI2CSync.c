/*
 * XREFs of DxgkAcquireAdapterOpmI2CSync @ 0x1403CDE4C
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x14004A800 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140089E28 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x14008A190 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x14008A2E0 (DpiIndirectCbOpmSetSrmList.c)
 *     DpiGetWholeMonitorDescriptor @ 0x14008D454 (DpiGetWholeMonitorDescriptor.c)
 *     DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1402446F8 (DpiFdoQueryAdapterInfoIntegratedDisplay2.c)
 *     DpiQueryDisplayIDDescriptor @ 0x1402559CC (DpiQueryDisplayIDDescriptor.c)
 *     DpiPdoDispatchInternalIoctl @ 0x140429C30 (DpiPdoDispatchInternalIoctl.c)
 *     DpiPdoGetDeviceDescriptor @ 0x14042B12C (DpiPdoGetDeviceDescriptor.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1403CDF3C (-AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkAcquireAdapterOpmI2CSync(__int64 a1)
{
  ADAPTER_DISPLAY *v2; // rcx

  if ( a1 )
  {
    v2 = *(ADAPTER_DISPLAY **)(a1 + 3120);
    if ( v2 )
    {
      ADAPTER_DISPLAY::AcquireOpmI2CSync(v2);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, a1, -1073741637LL);
      WdLogGlobalForLineNumber = 528;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Call DxgkReleaseAdapterOpmI2CSync on render only DXGADAPTER 0x%I64x, returning 0x%I64x.",
        a1,
        -1073741637LL,
        0LL,
        0LL,
        0LL);
      return 3221225659LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 520;
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
