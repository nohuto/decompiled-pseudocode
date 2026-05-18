/*
 * XREFs of sub_18001A8DC @ 0x18001A8DC
 * Callers:
 *     sub_180016784 @ 0x180016784 (sub_180016784.c)
 *     sub_18001A8A4 @ 0x18001A8A4 (sub_18001A8A4.c)
 *     sub_18001D7F8 @ 0x18001D7F8 (sub_18001D7F8.c)
 *     sub_180044538 @ 0x180044538 (sub_180044538.c)
 * Callees:
 *     sub_180016764 @ 0x180016764 (sub_180016764.c)
 */

__int64 __fastcall sub_18001A8DC(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = sub_180016764((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  result = v4 + 4 * a2;
  a1[2] = result;
  return result;
}
