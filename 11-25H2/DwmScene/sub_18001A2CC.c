/*
 * XREFs of sub_18001A2CC @ 0x18001A2CC
 * Callers:
 *     sub_1800187C0 @ 0x1800187C0 (sub_1800187C0.c)
 *     sub_1800846D0 @ 0x1800846D0 (sub_1800846D0.c)
 * Callees:
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 */

__int64 __fastcall sub_18001A2CC(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 != *(_DWORD *)(a1 + 316) )
  {
    *(_DWORD *)(a1 + 316) = a2;
    return sub_180058950(a1, 2LL);
  }
  return result;
}
