/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x140A05230
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x14047F96C (SepSetTokenBnoIsolation.c)
 * Callees:
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A05254 (SepDereferenceCachedHandlesEntryInternal.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1)
{
  return SepDereferenceCachedHandlesEntryInternal(a1 + 96);
}
