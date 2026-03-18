/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x140A08D00
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x1404843CC (SepSetTokenBnoIsolation.c)
 * Callees:
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A08D24 (SepDereferenceCachedHandlesEntryInternal.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1)
{
  return SepDereferenceCachedHandlesEntryInternal(a1 + 96);
}
