/*
 * XREFs of sub_18003D110 @ 0x18003D110
 * Callers:
 *     sub_18003CFE0 @ 0x18003CFE0 (sub_18003CFE0.c)
 * Callees:
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 */

__int64 __fastcall sub_18003D110(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax

  sub_180012344(a2, *a4);
  result = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  return result;
}
