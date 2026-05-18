/*
 * XREFs of sub_18001A81C @ 0x18001A81C
 * Callers:
 *     sub_180016684 @ 0x180016684 (sub_180016684.c)
 *     sub_18001A7E4 @ 0x18001A7E4 (sub_18001A7E4.c)
 *     sub_18001D698 @ 0x18001D698 (sub_18001D698.c)
 *     sub_1800443D8 @ 0x1800443D8 (sub_1800443D8.c)
 * Callees:
 *     sub_180016664 @ 0x180016664 (sub_180016664.c)
 */

__int64 __fastcall sub_18001A81C(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v4 = sub_180016664((__int64)a1, &v6);
  *a1 = v4;
  a1[1] = v4;
  result = v4 + 4 * a2;
  a1[2] = result;
  return result;
}
