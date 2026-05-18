/*
 * XREFs of sub_1800BC570 @ 0x1800BC570
 * Callers:
 *     sub_180010E24 @ 0x180010E24 (sub_180010E24.c)
 *     sub_1800BC6A4 @ 0x1800BC6A4 (sub_1800BC6A4.c)
 *     sub_1800BC758 @ 0x1800BC758 (sub_1800BC758.c)
 *     sub_1800BC82C @ 0x1800BC82C (sub_1800BC82C.c)
 *     sub_1800BC8E0 @ 0x1800BC8E0 (sub_1800BC8E0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_18002797C @ 0x18002797C (sub_18002797C.c)
 *     sub_180029764 @ 0x180029764 (sub_180029764.c)
 *     sub_18002F1D4 @ 0x18002F1D4 (sub_18002F1D4.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800BC570(__int64 a1, __int64 a2, _QWORD *a3, __int64 *a4)
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
  sub_180029764(a1, (__int64)v15, v7, v13);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_DWORD *)(a1 + 464) = 0;
  sub_18002797C(a1 + 472, 56LL, 20LL, sub_1800BC550);
  *(_DWORD *)(a1 + 1592) = 0;
  *(_DWORD *)(a1 + 1596) = 0;
  *(_QWORD *)(a1 + 1600) = 0LL;
  *(_QWORD *)(a1 + 1608) = 0LL;
  v9 = sub_18001B098(72LL);
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)(v9 + 16) = v9;
  *(_WORD *)(v9 + 24) = 257;
  *(_QWORD *)(a1 + 1600) = v9;
  sub_18002F1D4((__int64 *)(a1 + 1616));
  sub_18002F1D4((__int64 *)(a1 + 1632));
  v10 = a3[1];
  if ( v10 )
    sub_18001050C(v10);
  v11 = a4[1];
  if ( v11 )
    sub_18001050C(v11);
  return a1;
}
