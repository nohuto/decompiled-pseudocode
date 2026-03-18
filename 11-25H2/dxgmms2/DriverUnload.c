/*
 * XREFs of DriverUnload @ 0x14004C050
 * Callers:
 *     <none>
 * Callees:
 *     wil_UninitializeFeatureStaging @ 0x140091B3C (wil_UninitializeFeatureStaging.c)
 *     ?DxgMmsDeInitDebug@@YAXXZ @ 0x140091F00 (-DxgMmsDeInitDebug@@YAXXZ.c)
 *     ?VidMmDeInitGlobals@@YAXXZ @ 0x140096768 (-VidMmDeInitGlobals@@YAXXZ.c)
 *     VidSchiDeInitGlobals @ 0x1400A6800 (VidSchiDeInitGlobals.c)
 */

__int64 DriverUnload()
{
  DxgMmsDeInitDebug();
  VidSchiDeInitGlobals();
  VidMmDeInitGlobals();
  return wil_UninitializeFeatureStaging();
}
