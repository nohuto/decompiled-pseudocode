/*
 * XREFs of VidMmFreeDeferredMapping @ 0x140045BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14010657C (-FreeDeferredMapping@VIDMM_GLOBAL@@SAXPEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 */

void __fastcall VidMmFreeDeferredMapping(struct VIDMM_LOCAL_ALLOC *a1)
{
  VIDMM_GLOBAL::FreeDeferredMapping(a1);
}
