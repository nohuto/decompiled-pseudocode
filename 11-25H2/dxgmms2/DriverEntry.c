/*
 * XREFs of DriverEntry @ 0x140119078
 * Callers:
 *     GsDriverEntry @ 0x140119010 (GsDriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     wil_UninitializeFeatureStaging @ 0x140091B3C (wil_UninitializeFeatureStaging.c)
 *     ?DxgMmsInitDebug@@YAXXZ @ 0x140091F50 (-DxgMmsInitDebug@@YAXXZ.c)
 *     ?VidMmDeInitGlobals@@YAXXZ @ 0x140096768 (-VidMmDeInitGlobals@@YAXXZ.c)
 *     VidSchiInitGlobals @ 0x1400A682C (VidSchiInitGlobals.c)
 *     ?VidMmInitGlobals@@YAJXZ @ 0x140109470 (-VidMmInitGlobals@@YAJXZ.c)
 *     wil_InitializeFeatureStaging @ 0x1401191A8 (wil_InitializeFeatureStaging.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  int v2; // eax
  NTSTATUS v3; // edi
  __int64 v4; // rcx
  int inited; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  v2 = wil_InitializeFeatureStaging(DriverObject, RegistryPath);
  v3 = v2;
  if ( v2 < 0 )
  {
    WdLogSingleEntry1(2LL, v2);
    WdLogGlobalForLineNumber = 43;
    DxgkLogInternalTriageEvent(v4, 0x40000LL);
    return v3;
  }
  inited = VidMmInitGlobals();
  v3 = inited;
  if ( inited < 0 )
  {
    WdLogSingleEntry1(2LL, inited);
    WdLogGlobalForLineNumber = 51;
    DxgkLogInternalTriageEvent(v6, 0x40000LL);
LABEL_7:
    wil_UninitializeFeatureStaging();
    return v3;
  }
  v7 = VidSchiInitGlobals();
  v3 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry1(2LL, v7);
    WdLogGlobalForLineNumber = 59;
    DxgkLogInternalTriageEvent(v8, 0x40000LL);
    VidMmDeInitGlobals();
    goto LABEL_7;
  }
  DxgMmsInitDebug();
  return 0;
}
