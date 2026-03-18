/*
 * XREFs of DriverUnload @ 0x14004B760
 * Callers:
 *     <none>
 * Callees:
 *     wil_UninitializeFeatureStaging @ 0x140091B14 (wil_UninitializeFeatureStaging.c)
 *     ?DxgMmsDeInitDebug@@YAXXZ @ 0x140091ED0 (-DxgMmsDeInitDebug@@YAXXZ.c)
 *     ?VidMmDeInitGlobals@@YAXXZ @ 0x140096898 (-VidMmDeInitGlobals@@YAXXZ.c)
 *     VidSchiDeInitGlobals @ 0x1400A8080 (VidSchiDeInitGlobals.c)
 */

__int64 DriverUnload()
{
  DxgMmsDeInitDebug();
  VidSchiDeInitGlobals();
  VidMmDeInitGlobals();
  return wil_UninitializeFeatureStaging();
}
