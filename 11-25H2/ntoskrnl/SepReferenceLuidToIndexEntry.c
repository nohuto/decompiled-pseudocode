/*
 * XREFs of SepReferenceLuidToIndexEntry @ 0x140452C40
 * Callers:
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x140997EFC (SepFilterToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepReferenceLuidToIndexEntry(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 24));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
