/*
 * XREFs of ?VidMmDeInitGlobals@@YAXXZ @ 0x140096768
 * Callers:
 *     DriverUnload @ 0x14004C050 (DriverUnload.c)
 *     DriverEntry @ 0x140119078 (DriverEntry.c)
 * Callees:
 *     ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x140092DDC (-DeInitGlobals@VIDMM_GLOBAL@@SAXXZ.c)
 */

void VidMmDeInitGlobals(void)
{
  VIDMM_GLOBAL::DeInitGlobals();
}
