/*
 * XREFs of SepDereferenceCachedHandlesEntry @ 0x140A06244
 * Callers:
 *     SepSetTokenBnoIsolation @ 0x140483BBC (SepSetTokenBnoIsolation.c)
 * Callees:
 *     SepDereferenceCachedHandlesEntryInternal @ 0x140A06268 (SepDereferenceCachedHandlesEntryInternal.c)
 */

__int64 __fastcall SepDereferenceCachedHandlesEntry(__int64 a1)
{
  return SepDereferenceCachedHandlesEntryInternal(a1 + 88);
}
