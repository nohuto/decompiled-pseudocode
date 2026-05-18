/*
 * XREFs of sub_18009A0F8 @ 0x18009A0F8
 * Callers:
 *     sub_18000AD00 @ 0x18000AD00 (sub_18000AD00.c)
 * Callees:
 *     sub_18009A058 @ 0x18009A058 (sub_18009A058.c)
 */

__int64 __fastcall sub_18009A0F8(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_18009A058(a1, &v3);
  return a1;
}
