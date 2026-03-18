/*
 * XREFs of VidMmPageInDevice @ 0x14004BEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x140095E44 (-PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 */

__int64 __fastcall VidMmPageInDevice(VIDMM_GLOBAL *a1, struct VIDMM_DEVICE *a2)
{
  return VIDMM_GLOBAL::PageInDevice(a1, a2);
}
