/*
 * XREFs of sub_1800BF624 @ 0x1800BF624
 * Callers:
 *     sub_1800BF090 @ 0x1800BF090 (sub_1800BF090.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B680 (__security_check_cookie.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011B5C @ 0x180011B5C (sub_180011B5C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     sub_180013918 @ 0x180013918 (sub_180013918.c)
 *     sub_180015B5C @ 0x180015B5C (sub_180015B5C.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18001B610 @ 0x18001B610 (sub_18001B610.c)
 *     sub_180027BEC @ 0x180027BEC (sub_180027BEC.c)
 *     sub_180027D84 @ 0x180027D84 (sub_180027D84.c)
 *     sub_180051A70 @ 0x180051A70 (sub_180051A70.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800BF624(__int64 a1, int a2, int a3, int a4, int a5)
{
  int v7; // r14d
  int v8; // r15d
  __int64 *v9; // rax
  __int64 *v10; // r12
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax
  char result; // al
  __int64 v17; // [rsp+28h] [rbp-81h] BYREF
  __int64 v18; // [rsp+30h] [rbp-79h]
  _DWORD v19[8]; // [rsp+38h] [rbp-71h] BYREF
  _DWORD v20[8]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v21; // [rsp+78h] [rbp-31h] BYREF
  __int64 v22; // [rsp+80h] [rbp-29h]
  __int64 v23[4]; // [rsp+88h] [rbp-21h] BYREF
  _BYTE v24[16]; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v25; // [rsp+B8h] [rbp+Fh]

  v7 = 1;
  if ( a2 )
    v7 = a2;
  v8 = 1;
  if ( a3 )
    v8 = a3;
  sub_180011C04(a1 + 72, &v21);
  v9 = sub_180015B5C(v21, &v17);
  v10 = (__int64 *)(a1 + 96);
  sub_180011110((_QWORD *)(a1 + 96), v9);
  if ( v18 )
    sub_18001060C(v18);
  sub_180027BEC(a1, (__int64)v24);
  if ( !v25 )
    sub_180013918((__int64)v24, "RenderTargetD3D11", 0x11uLL);
  v11 = *v10;
  v12 = sub_180017054((__int64)v19, (__int64)v24);
  sub_180027D84(v11, v12);
  v20[0] = v7;
  v20[1] = v8;
  v20[2] = 1;
  v20[3] = 1;
  v20[4] = a4;
  v20[5] = a5 & 0xFFFFFF7C | 3;
  v20[6] = 0;
  sub_180051A70(*v10, (__int64)v20);
  if ( (a5 & 0x80u) != 0 )
  {
    if ( !*(_QWORD *)(a1 + 112) )
    {
      v13 = sub_180015B5C(v21, &v17);
      sub_180011110((_QWORD *)(a1 + 112), v13);
      if ( v18 )
        sub_18001060C(v18);
    }
    v14 = *(_QWORD *)(a1 + 112);
    v15 = sub_18001B610(v23, (__int64)v24, (__int64)" (staging)");
    sub_180027D84(v14, (__int64)v15);
    v19[0] = v7;
    v19[1] = v8;
    v19[2] = 1;
    v19[3] = 1;
    v19[4] = a4;
    v19[5] = a5 & 0xFFFFFF7C | 0x80;
    v19[6] = 3;
    sub_180051A70(*(_QWORD *)(a1 + 112), (__int64)v19);
  }
  result = sub_180011B5C((__int64)v24);
  if ( v22 )
    return sub_18001060C(v22);
  return result;
}
