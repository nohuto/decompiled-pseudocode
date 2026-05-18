/*
 * XREFs of sub_180010790 @ 0x180010790
 * Callers:
 *     sub_180011290 @ 0x180011290 (sub_180011290.c)
 *     sub_180026CC0 @ 0x180026CC0 (sub_180026CC0.c)
 *     sub_1800BF2C8 @ 0x1800BF2C8 (sub_1800BF2C8.c)
 *     sub_1800CBE90 @ 0x1800CBE90 (sub_1800CBE90.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180010808 @ 0x180010808 (sub_180010808.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_180027CB0 @ 0x180027CB0 (sub_180027CB0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_180010790(__int64 a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  _BYTE v7[8]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  sub_180010808(a1 + 496);
  v4 = *a2;
  v5 = sub_180011D64(a1 + 8, v7);
  sub_180027CB0(v4, v5);
  if ( v8 )
    sub_18001060C(v8);
  return a2;
}
