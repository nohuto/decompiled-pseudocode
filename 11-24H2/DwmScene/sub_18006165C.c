/*
 * XREFs of sub_18006165C @ 0x18006165C
 * Callers:
 *     sub_180065940 @ 0x180065940 (sub_180065940.c)
 *     sub_180065B14 @ 0x180065B14 (sub_180065B14.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180039CF0 @ 0x180039CF0 (sub_180039CF0.c)
 *     sub_18003EA2C @ 0x18003EA2C (sub_18003EA2C.c)
 *     sub_18003ECF8 @ 0x18003ECF8 (sub_18003ECF8.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18006165C(__int64 a1, _QWORD *a2, __int64 *a3)
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
  v5 = sub_180012444((__int64)v11, (__int64)&unk_1801C5078);
  sub_18003EA2C(v4, &v9, v5);
  if ( !v9 )
  {
LABEL_10:
    if ( v10 )
      sub_18001060C(v10);
    goto LABEL_12;
  }
  sub_18003ECF8(v9, &v7);
  if ( !v7 )
  {
    if ( v8 )
      sub_18001060C(v8);
    goto LABEL_10;
  }
  sub_180039CF0(v7, v11);
  *a2 = v11[0];
  a2[1] = v11[1];
  if ( v8 )
    sub_18001060C(v8);
  if ( v10 )
    sub_18001060C(v10);
  return a2;
}
