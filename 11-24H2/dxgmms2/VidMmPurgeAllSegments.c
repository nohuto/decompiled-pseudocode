/*
 * XREFs of VidMmPurgeAllSegments @ 0x1400410B0
 * Callers:
 *     <none>
 * Callees:
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z @ 0x1400BC934 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXUVIDMM_PURGE_FLAGS@@PEBVVIDMM_PROCESS@@@Z.c)
 */

__int64 VidMmPurgeAllSegments()
{
  return VIDMM_GLOBAL::PurgeAllSegments();
}
