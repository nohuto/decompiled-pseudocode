/*
 * XREFs of sub_1800253E8 @ 0x1800253E8
 * Callers:
 *     sub_180097304 @ 0x180097304 (sub_180097304.c)
 *     sub_180097544 @ 0x180097544 (sub_180097544.c)
 *     sub_18009791C @ 0x18009791C (sub_18009791C.c)
 *     sub_180097A40 @ 0x180097A40 (sub_180097A40.c)
 *     sub_1800984C8 @ 0x1800984C8 (sub_1800984C8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011D64 @ 0x180011D64 (sub_180011D64.c)
 *     sub_18009667C @ 0x18009667C (sub_18009667C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800253E8(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v6 = (_QWORD *)sub_180011D64(a1 + 8, &v10);
  v9 = 0LL;
  v8 = a1 + 3760;
  v9 = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  sub_18009667C(a2, &v8, a3);
  if ( v11 )
    sub_18001060C(v11);
  return a2;
}
