/*
 * XREFs of sub_18005E7F4 @ 0x18005E7F4
 * Callers:
 *     sub_18005E820 @ 0x18005E820 (sub_18005E820.c)
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 * Callees:
 *     sub_18005E6C8 @ 0x18005E6C8 (sub_18005E6C8.c)
 */

__int64 __fastcall sub_18005E7F4(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_18005E6C8(a1, &v3);
  return a1;
}
