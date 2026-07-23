/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x1409EADBC
 * Callers:
 *     SepFilterToken @ 0x140985C1C (SepFilterToken.c)
 * Callees:
 *     SepReferenceLuidToIndexEntry @ 0x140449104 (SepReferenceLuidToIndexEntry.c)
 *     SepDereferenceLuidToIndexEntry @ 0x14044AEF8 (SepDereferenceLuidToIndexEntry.c)
 */

signed __int64 __fastcall SepRefDerefLuidToIndexEntryIfNecessary(__int64 a1, char a2)
{
  __int64 v2; // rcx
  signed __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1136);
  if ( v2 )
  {
    if ( a2 )
      return SepDereferenceLuidToIndexEntry(v2);
    else
      return SepReferenceLuidToIndexEntry(v2);
  }
  return result;
}
