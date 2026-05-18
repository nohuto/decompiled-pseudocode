/*
 * XREFs of sub_1800351F4 @ 0x1800351F4
 * Callers:
 *     sub_1800152E8 @ 0x1800152E8 (sub_1800152E8.c)
 * Callees:
 *     sub_18002DBC0 @ 0x18002DBC0 (sub_18002DBC0.c)
 *     sub_1800306BC @ 0x1800306BC (sub_1800306BC.c)
 *     sub_180030758 @ 0x180030758 (sub_180030758.c)
 */

__int64 __fastcall sub_1800351F4(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  DWORD2(v3) = 0;
  *(_QWORD *)&v3 = sub_180034CF0;
  v5 = a1;
  v4 = v3;
  sub_18002DBC0((__int64)&v3, &v4, &v5);
  sub_180030758(a1 + 1184, &v3);
  return sub_1800306BC((__int64)&v3);
}
