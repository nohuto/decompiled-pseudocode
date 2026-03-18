/*
 * XREFs of ?VidMmInitGlobals@@YAJXZ @ 0x140109470
 * Callers:
 *     DriverEntry @ 0x140119078 (DriverEntry.c)
 * Callees:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x140109488 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 */

__int64 VidMmInitGlobals(void)
{
  return VIDMM_GLOBAL::InitGlobals();
}
