/*
 * XREFs of sub_180017C60 @ 0x180017C60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E954 @ 0x18000E954 (sub_18000E954.c)
 *     sub_18000F1E4 @ 0x18000F1E4 (sub_18000F1E4.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011044 @ 0x180011044 (sub_180011044.c)
 *     sub_180012444 @ 0x180012444 (sub_180012444.c)
 *     sub_180016118 @ 0x180016118 (sub_180016118.c)
 *     sub_18002867C @ 0x18002867C (sub_18002867C.c)
 *     sub_180032584 @ 0x180032584 (sub_180032584.c)
 *     sub_18003DD58 @ 0x18003DD58 (sub_18003DD58.c)
 *     sub_18003EBDC @ 0x18003EBDC (sub_18003EBDC.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180017C60(__int64 a1, int a2, __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // [rsp+20h] [rbp-60h] BYREF
  __int64 v12; // [rsp+28h] [rbp-58h]
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+38h] [rbp-48h]
  _BYTE v15[16]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v17[32]; // [rsp+60h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+18h]
  __int64 v19; // [rsp+A0h] [rbp+20h] BYREF
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v20 = a2;
  sub_180032584(*(_QWORD *)(a1 + 56), &v13);
  v4 = v13;
  sub_18002867C(v13 + 16, v15);
  v5 = sub_180012444((__int64)v17, (__int64)&unk_1801C5038);
  v6 = sub_18003EBDC(v4, v16, v5);
  sub_18003DD58(v4, &v11, -1LL, v6);
  v19 = 0LL;
  sub_18000E954(&v19);
  v7 = sub_180016118(&v19, &v20, &v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = v19;
    v19 = 0LL;
    *a3 = v10;
    sub_18000E954(&v19);
    if ( v12 )
      sub_18001060C(v12);
    sub_180011044((__int64)v15);
    if ( v14 )
      sub_18001060C(v14);
    return 0LL;
  }
  else
  {
    sub_18000F1E4(
      retaddr,
      320LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v7);
    sub_18000E954(&v19);
    if ( v12 )
      sub_18001060C(v12);
    sub_180011044((__int64)v15);
    if ( v14 )
      sub_18001060C(v14);
    return v8;
  }
}
