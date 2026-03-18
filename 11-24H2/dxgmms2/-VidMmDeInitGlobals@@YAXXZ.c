/*
 * XREFs of ?VidMmDeInitGlobals@@YAXXZ @ 0x140096898
 * Callers:
 *     DriverUnload @ 0x14004B760 (DriverUnload.c)
 *     DriverEntry @ 0x140119078 (DriverEntry.c)
 * Callees:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x140092EEC (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 */

void VidMmDeInitGlobals(void)
{
  VIDMM_GLOBAL::DeInitGlobals();
}
