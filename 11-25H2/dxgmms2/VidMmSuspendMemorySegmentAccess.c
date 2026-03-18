/*
 * XREFs of VidMmSuspendMemorySegmentAccess @ 0x14004C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x140096070 (-SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ.c)
 */

__int64 __fastcall VidMmSuspendMemorySegmentAccess(VIDMM_GLOBAL *a1)
{
  return VIDMM_GLOBAL::SuspendMemorySegmentAccess(a1);
}
