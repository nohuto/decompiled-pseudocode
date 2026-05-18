/*
 * XREFs of sub_18003A010 @ 0x18003A010
 * Callers:
 *     sub_18003A010 @ 0x18003A010 (sub_18003A010.c)
 *     sub_18003B66C @ 0x18003B66C (sub_18003B66C.c)
 *     sub_180063A84 @ 0x180063A84 (sub_180063A84.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012554 @ 0x180012554 (sub_180012554.c)
 *     sub_180039228 @ 0x180039228 (sub_180039228.c)
 *     sub_18003A010 @ 0x18003A010 (sub_18003A010.c)
 *     sub_18003BCDC @ 0x18003BCDC (sub_18003BCDC.c)
 */

// Hidden C++ exception states: #wind=2
__m128 *__fastcall sub_18003A010(__int64 a1, __m128 *a2)
{
  char v4; // di
  _QWORD *v5; // rax
  __m128 *v6; // rax
  __m128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  _BYTE v13[16]; // [rsp+50h] [rbp-18h] BYREF

  v4 = 0;
  sub_18003BCDC(a1);
  if ( *sub_180012554(a1, &v11) )
  {
    v5 = sub_180012554(a1, &v9);
    v4 = 1;
    v6 = (__m128 *)sub_18003A010(*v5, v13);
  }
  else
  {
    v8 = (__m128)xmmword_1800F7610;
    v6 = &v8;
  }
  v8 = *v6;
  if ( (v4 & 1) != 0 && v10 )
    sub_18001050C(v10);
  if ( v12 )
    sub_18001050C(v12);
  sub_180039228(a2, (__m128 *)(a1 + 156), &v8);
  return a2;
}
