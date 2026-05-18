/*
 * XREFs of sub_180099F98 @ 0x180099F98
 * Callers:
 *     sub_18000AD00 @ 0x18000AD00 (sub_18000AD00.c)
 * Callees:
 *     sub_180099EF8 @ 0x180099EF8 (sub_180099EF8.c)
 */

__int64 __fastcall sub_180099F98(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_180099EF8(a1, &v3);
  return a1;
}
