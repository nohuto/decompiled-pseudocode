/*
 * XREFs of ?VidMmInitGlobals@@YAJXZ @ 0x140110574
 * Callers:
 *     DriverEntry @ 0x140119078 (DriverEntry.c)
 * Callees:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x14011058C (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 */

__int64 VidMmInitGlobals(void)
{
  return VIDMM_GLOBAL::InitGlobals();
}
