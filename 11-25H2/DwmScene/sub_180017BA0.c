/*
 * XREFs of sub_180017BA0 @ 0x180017BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E854 @ 0x18000E854 (sub_18000E854.c)
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     sub_180012344 @ 0x180012344 (sub_180012344.c)
 *     sub_180016018 @ 0x180016018 (sub_180016018.c)
 *     sub_18002851C @ 0x18002851C (sub_18002851C.c)
 *     sub_180032424 @ 0x180032424 (sub_180032424.c)
 *     sub_18003DBF8 @ 0x18003DBF8 (sub_18003DBF8.c)
 *     sub_18003EA7C @ 0x18003EA7C (sub_18003EA7C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180017BA0(__int64 a1, int a2, __int64 *a3)
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
  sub_180032424(*(_QWORD *)(a1 + 56), &v13);
  v4 = v13;
  sub_18002851C(v13 + 16, v15);
  v5 = sub_180012344((__int64)v17, (__int64)&unk_1801C4028);
  v6 = sub_18003EA7C(v4, v16, v5);
  sub_18003DBF8(v4, &v11, -1LL, v6);
  v19 = 0LL;
  sub_18000E854(&v19);
  v7 = sub_180016018(&v19, &v20, &v11);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = v19;
    v19 = 0LL;
    *a3 = v10;
    sub_18000E854(&v19);
    if ( v12 )
      sub_18001050C(v12);
    sub_180010F44((__int64)v15);
    if ( v14 )
      sub_18001050C(v14);
    return 0LL;
  }
  else
  {
    sub_18000F0E4(
      retaddr,
      320LL,
      (__int64)"onecoreuap\\windows\\dwm\\spectre\\dwmscene\\source\\spectrerenderer.cpp",
      (unsigned int)v7);
    sub_18000E854(&v19);
    if ( v12 )
      sub_18001050C(v12);
    sub_180010F44((__int64)v15);
    if ( v14 )
      sub_18001050C(v14);
    return v8;
  }
}
