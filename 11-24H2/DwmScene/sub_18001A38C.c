/*
 * XREFs of sub_18001A38C @ 0x18001A38C
 * Callers:
 *     sub_180018880 @ 0x180018880 (sub_180018880.c)
 *     sub_180084830 @ 0x180084830 (sub_180084830.c)
 * Callees:
 *     sub_180058AB0 @ 0x180058AB0 (sub_180058AB0.c)
 */

__int64 __fastcall sub_18001A38C(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 + 316) )
  {
    *(_DWORD *)(a1 + 316) = a2;
    return sub_180058AB0(a1, 2LL);
  }
  return result;
}
