/*
 * XREFs of sub_1800614FC @ 0x1800614FC
 * Callers:
 *     sub_1800657E0 @ 0x1800657E0 (sub_1800657E0.c)
 *     sub_1800659B4 @ 0x1800659B4 (sub_1800659B4.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180039B90 @ 0x180039B90 (sub_180039B90.c)
 *     sub_18003E8CC @ 0x18003E8CC (sub_18003E8CC.c)
 *     sub_18003EB98 @ 0x18003EB98 (sub_18003EB98.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800614FC(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v7; // [rsp+28h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h]
  __int64 v9; // [rsp+38h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-30h]
  _QWORD v11[5]; // [rsp+48h] [rbp-28h] BYREF

  v4 = *a3;
  if ( !*a3 )
  {
LABEL_12:
    *a2 = 0LL;
    a2[1] = 0LL;
    return a2;
  }
  v5 = sub_180012344((__int64)v11, (__int64)&unk_1801C4068);
  sub_18003E8CC(v4, &v9, v5);
  if ( !v9 )
  {
LABEL_10:
    if ( v10 )
      sub_18001050C(v10);
    goto LABEL_12;
  }
  sub_18003EB98(v9, &v7);
  if ( !v7 )
  {
    if ( v8 )
      sub_18001050C(v8);
    goto LABEL_10;
  }
  sub_180039B90(v7, v11);
  *a2 = v11[0];
  a2[1] = v11[1];
  if ( v8 )
    sub_18001050C(v8);
  if ( v10 )
    sub_18001050C(v10);
  return a2;
}
