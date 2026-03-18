/*
 * XREFs of VidMmFlushHeapTransitions @ 0x140043130
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushHeapTransitions@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400CE338 (-FlushHeapTransitions@VIDMM_GLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall VidMmFlushHeapTransitions(VIDMM_GLOBAL *a1)
{
  return VIDMM_GLOBAL::FlushHeapTransitions(a1);
}
