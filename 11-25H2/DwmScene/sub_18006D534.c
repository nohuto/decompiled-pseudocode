/*
 * XREFs of sub_18006D534 @ 0x18006D534
 * Callers:
 *     sub_18006D3A8 @ 0x18006D3A8 (sub_18006D3A8.c)
 * Callees:
 *     sub_180016644 @ 0x180016644 (sub_180016644.c)
 */

__int64 __fastcall sub_18006D534(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = sub_180016644((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  result = v4 + 8 * a2;
  a1[2] = result;
  return result;
}
