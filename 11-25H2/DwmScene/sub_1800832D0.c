/*
 * XREFs of sub_1800832D0 @ 0x1800832D0
 * Callers:
 *     sub_1800832A8 @ 0x1800832A8 (sub_1800832A8.c)
 * Callees:
 *     sub_18007AB34 @ 0x18007AB34 (sub_18007AB34.c)
 */

__int64 __fastcall sub_1800832D0(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = sub_18007AB34((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  result = v4 + 12 * a2;
  a1[2] = result;
  return result;
}
