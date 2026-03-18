/*
 * XREFs of VidMmUnlock @ 0x1400399F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1400EDCD8 (-Unlock2@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VidMmUnlock(VIDMM_GLOBAL *a1, struct VIDMM_ALLOC *a2)
{
  return VIDMM_GLOBAL::Unlock2(a1, a2);
}
