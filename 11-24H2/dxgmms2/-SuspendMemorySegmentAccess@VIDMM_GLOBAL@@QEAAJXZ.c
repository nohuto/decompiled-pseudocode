/*
 * XREFs of ?SuspendMemorySegmentAccess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1400961A0
 * Callers:
 *     VidMmSuspendMemorySegmentAccess @ 0x14004BFF0 (VidMmSuspendMemorySegmentAccess.c)
 * Callees:
 *     memset @ 0x140056340 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400BCAA4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SuspendMemorySegmentAccess(VIDMM_GLOBAL *this)
{
  _DWORD v3[26]; // [rsp+20h] [rbp-68h] BYREF

  memset(&v3[2], 0, 0x50uLL);
  v3[1] = -1;
  v3[0] = 110;
  return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v3, 1);
}
