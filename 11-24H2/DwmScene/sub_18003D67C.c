/*
 * XREFs of sub_18003D67C @ 0x18003D67C
 * Callers:
 *     sub_18003D6A8 @ 0x18003D6A8 (sub_18003D6A8.c)
 *     sub_18003D74C @ 0x18003D74C (sub_18003D74C.c)
 * Callees:
 *     sub_18003D534 @ 0x18003D534 (sub_18003D534.c)
 */

__int64 __fastcall sub_18003D67C(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_18003D534(a1, &v3);
  return a1;
}
