/*
 * XREFs of sub_180083430 @ 0x180083430
 * Callers:
 *     sub_180083408 @ 0x180083408 (sub_180083408.c)
 * Callees:
 *     sub_18007AC94 @ 0x18007AC94 (sub_18007AC94.c)
 */

__int64 __fastcall sub_180083430(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = sub_18007AC94((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  result = v4 + 12 * a2;
  a1[2] = result;
  return result;
}
