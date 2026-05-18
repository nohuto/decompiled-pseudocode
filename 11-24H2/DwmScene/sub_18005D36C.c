/*
 * XREFs of sub_18005D36C @ 0x18005D36C
 * Callers:
 *     sub_1800601D0 @ 0x1800601D0 (sub_1800601D0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180028890 @ 0x180028890 (sub_180028890.c)
 *     sub_18005D6F4 @ 0x18005D6F4 (sub_18005D6F4.c)
 *     sub_1800613B0 @ 0x1800613B0 (sub_1800613B0.c)
 */

_QWORD *__fastcall sub_18005D36C(__int64 a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rax
  char v11; // bl
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h]
  __int64 v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v22[8]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h]

  sub_180028890(a1 + 16);
  sub_180011C04(*a4 + 56LL, &v19);
  unknown_libname_81(&v15, &v19);
  v8 = unknown_libname_81(&v21, a3);
  sub_1800613B0(a1, &v17, v8);
  if ( v17 )
  {
    v9 = (__int64 *)sub_18005D6F4(v17, v22);
    v10 = *v9;
    v11 = 5;
  }
  else
  {
    v16 = 0LL;
    v9 = &v15;
    v10 = 0LL;
    v11 = 6;
  }
  *a2 = v10;
  a2[1] = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v16 )
      sub_18001060C(v16);
  }
  if ( (v11 & 1) != 0 && v23 )
    sub_18001060C(v23);
  if ( v18 )
    sub_18001060C(v18);
  if ( v20 )
    sub_18001060C(v20);
  v12 = a3[1];
  if ( v12 )
    sub_18001060C(v12);
  v13 = a4[1];
  if ( v13 )
    sub_18001060C(v13);
  return a2;
}
