/*
 * XREFs of sub_180053410 @ 0x180053410
 * Callers:
 *     sub_180052D70 @ 0x180052D70 (sub_180052D70.c)
 * Callees:
 *     sub_1800306BC @ 0x1800306BC (sub_1800306BC.c)
 *     sub_180030758 @ 0x180030758 (sub_180030758.c)
 *     sub_180052B0C @ 0x180052B0C (sub_180052B0C.c)
 */

__int64 __fastcall sub_180053410(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 (__fastcall *v5)(); // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 378) = 0;
  *(_BYTE *)(a1 + 377) = 1;
  v4 = a1;
  v5 = sub_180053C10;
  sub_180052B0C((__int64)&v3, &v5, &v4);
  sub_180030758(a1 + 104, &v3);
  return sub_1800306BC((__int64)&v3);
}
