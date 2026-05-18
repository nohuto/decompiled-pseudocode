/*
 * XREFs of sub_18003D51C @ 0x18003D51C
 * Callers:
 *     sub_18003D548 @ 0x18003D548 (sub_18003D548.c)
 *     sub_18003D5EC @ 0x18003D5EC (sub_18003D5EC.c)
 * Callees:
 *     sub_18003D3D4 @ 0x18003D3D4 (sub_18003D3D4.c)
 */

__int64 __fastcall sub_18003D51C(__int64 a1)
{
  int v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+34h] [rbp+Ch]

  v4 = HIDWORD(a1);
  v3 = 0;
  sub_18003D3D4(a1, &v3);
  return a1;
}
