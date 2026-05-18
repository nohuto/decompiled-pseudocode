/*
 * XREFs of sub_1800D66A6 @ 0x1800D66A6
 * Callers:
 *     <none>
 * Callees:
 *     sub_180029BD8 @ 0x180029BD8 (sub_180029BD8.c)
 */

__int64 __fastcall sub_1800D66A6(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return sub_180029BD8();
  }
  return result;
}
