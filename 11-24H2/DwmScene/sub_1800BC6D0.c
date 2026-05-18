/*
 * XREFs of sub_1800BC6D0 @ 0x1800BC6D0
 * Callers:
 *     sub_180010F24 @ 0x180010F24 (sub_180010F24.c)
 *     sub_1800BC804 @ 0x1800BC804 (sub_1800BC804.c)
 *     sub_1800BC8B8 @ 0x1800BC8B8 (sub_1800BC8B8.c)
 *     sub_1800BC98C @ 0x1800BC98C (sub_1800BC98C.c)
 *     sub_1800BCA40 @ 0x1800BCA40 (sub_1800BCA40.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001B1F8 @ 0x18001B1F8 (sub_18001B1F8.c)
 *     sub_180027ADC @ 0x180027ADC (sub_180027ADC.c)
 *     sub_1800298C4 @ 0x1800298C4 (sub_1800298C4.c)
 *     sub_18002F334 @ 0x18002F334 (sub_18002F334.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800BC6D0(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *v7; // rax
  _OWORD *v8; // r10
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-20h] BYREF

  v13[0] = *a4;
  v13[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v7 = unknown_libname_81(&v14, a3);
  v15[0] = *v8;
  v15[1] = v8[1];
  sub_1800298C4(a1, (__int64)v15, v7, v13);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_DWORD *)(a1 + 464) = 0;
  sub_180027ADC(a1 + 472, 56LL, 20LL, sub_1800BC6B0);
  *(_DWORD *)(a1 + 1592) = 0;
  *(_DWORD *)(a1 + 1596) = 0;
  *(_QWORD *)(a1 + 1600) = 0LL;
  *(_QWORD *)(a1 + 1608) = 0LL;
  v9 = sub_18001B1F8(72LL);
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *(_WORD *)(v9 + 24) = 257;
  *(_QWORD *)(a1 + 1600) = v9;
  sub_18002F334((__int64 *)(a1 + 1616));
  sub_18002F334((__int64 *)(a1 + 1632));
  v10 = a3[1];
  if ( v10 )
    sub_18001060C(v10);
  v11 = a4[1];
  if ( v11 )
    sub_18001060C(v11);
  return a1;
}
