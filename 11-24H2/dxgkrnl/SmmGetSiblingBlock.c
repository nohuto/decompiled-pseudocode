/*
 * XREFs of SmmGetSiblingBlock @ 0x14009563C
 * Callers:
 *     SmmCoalesceBlocks @ 0x1400952CC (SmmCoalesceBlocks.c)
 *     SmmReleaseBlock @ 0x14009573C (SmmReleaseBlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmmGetSiblingBlock(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // rcx

  v2 = (unsigned __int64)a2[4] >> 53;
  v3 = a2[4] & 0xFFFFFFFFFFFFFLL;
  v4 = 1LL << (v2 & 0x3F);
  if ( ((2 * v4 - 1) & v3) != 0 )
  {
    v6 = a2[1];
  }
  else
  {
    if ( (unsigned __int64)(v3 + v4) >= *(_QWORD *)(a1 + 1248) >> 12 )
      return 0LL;
    v6 = *a2;
  }
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)(*(_QWORD *)(v6 + 32) >> 53)) & 0x3F) != 0 )
    return 0LL;
  return v6;
}
