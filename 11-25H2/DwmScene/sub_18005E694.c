/*
 * XREFs of sub_18005E694 @ 0x18005E694
 * Callers:
 *     sub_18005E6C0 @ 0x18005E6C0 (sub_18005E6C0.c)
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 * Callees:
 *     sub_18005E568 @ 0x18005E568 (sub_18005E568.c)
 */

__int64 __fastcall sub_18005E694(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_18005E568(a1, &v3);
  return a1;
}
