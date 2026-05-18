/*
 * XREFs of sub_18003D270 @ 0x18003D270
 * Callers:
 *     sub_18003D140 @ 0x18003D140 (sub_18003D140.c)
 * Callees:
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 */

__int64 __fastcall sub_18003D270(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_180012444(a2, *a4);
  result = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  return result;
}
