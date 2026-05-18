/*
 * XREFs of sub_18006D694 @ 0x18006D694
 * Callers:
 *     sub_18006D508 @ 0x18006D508 (sub_18006D508.c)
 * Callees:
 *     sub_180016744 @ 0x180016744 (sub_180016744.c)
 */

__int64 __fastcall sub_18006D694(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = sub_180016744((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  result = v4 + 8 * a2;
  a1[2] = result;
  return result;
}
