/*
 * XREFs of CcPostDeferredWritesOnVolumeHelper @ 0x1405791F0
 * Callers:
 *     <none>
 * Callees:
 *     CcPostDeferredWrites @ 0x1403A5FC4 (CcPostDeferredWrites.c)
 */

char __fastcall CcPostDeferredWritesOnVolumeHelper(__int64 a1, __int64 a2)
{
  CcPostDeferredWrites(a1, a2);
  return 1;
}
