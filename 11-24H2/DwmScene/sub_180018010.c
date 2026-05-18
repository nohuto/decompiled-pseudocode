/*
 * XREFs of sub_180018010 @ 0x180018010
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18000F1E4 @ 0x18000F1E4 (sub_18000F1E4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180015B5C @ 0x180015B5C (sub_180015B5C.c)
 *     sub_180015F64 @ 0x180015F64 (sub_180015F64.c)
 *     sub_18001651C @ 0x18001651C (sub_18001651C.c)
 *     sub_180017024 @ 0x180017024 (sub_180017024.c)
 *     sub_180032634 @ 0x180032634 (sub_180032634.c)
 *     sub_180051AD0 @ 0x180051AD0 (sub_180051AD0.c)
 *     sub_1800C0438 @ 0x1800C0438 (sub_1800C0438.c)
 */

__int64 __fastcall sub_180018010(__int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // ebx
  __int64 *v14; // rax
  __int64 v15; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+28h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-40h]
  __int64 v18; // [rsp+38h] [rbp-38h] BYREF
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+48h] [rbp-28h] BYREF
  __int64 v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+58h] [rbp-18h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+98h] [rbp+28h]
  __int64 *v25; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+40h] BYREF

  sub_180015F64(*(_QWORD *)(a1 + 56), &v20);
  v8 = (__int64 *)sub_180032634(*(_QWORD *)(a1 + 56), &v18, 1LL);
  sub_180015B5C(*v8, &v22);
  if ( v19 )
    sub_18001060C(v19);
  v9 = unknown_libname_81(&v16, &v22);
  sub_180017024(&v18, v9);
  v27 = a2;
  sub_1800115D0(&v27);
  v26 = a3;
  sub_1800115D0(&v26);
  v15 = a3;
  sub_1800115D0(&v15);
  v16 = a2;
  sub_1800115D0(&v16);
  sub_1800C0438(v18, &v16, &v15, 1LL);
  unknown_libname_81(&v16, &v18);
  sub_180051AD0(v10, &v16, 1LL);
  if ( v17 )
    sub_18001060C(v17);
  v25 = 0LL;
  sub_18000E954((__int64 *)&v25);
  v11 = sub_18001651C(&v25, &v20);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = v25;
    v25 = 0LL;
    *a4 = v14;
    sub_18000E954((__int64 *)&v25);
    sub_18000E954(&v26);
    sub_18000E954(&v27);
    if ( v19 )
      sub_18001060C(v19);
    if ( v23 )
      sub_18001060C(v23);
    if ( v21 )
      sub_18001060C(v21);
    return 0LL;
  }
  else
  {
    sub_18000F1E4(
      retaddr,
      386LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v11);
    sub_18000E954((__int64 *)&v25);
    sub_18000E954(&v26);
    sub_18000E954(&v27);
    if ( v19 )
      sub_18001060C(v19);
    if ( v23 )
      sub_18001060C(v23);
    if ( v21 )
      sub_18001060C(v21);
    return v12;
  }
}
