/*
 * XREFs of sub_1800BC6A4 @ 0x1800BC6A4
 * Callers:
 *     sub_1800B7B88 @ 0x1800B7B88 (sub_1800B7B88.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_1800BC570 @ 0x1800BC570 (sub_1800BC570.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1800BC6A4(_QWORD *a1, _OWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF

  v10[0] = *a4;
  v10[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v11[0] = *a3;
  v11[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v12[0] = *a2;
  v12[1] = a2[1];
  sub_1800BC570((__int64)a1, (__int64)v12, v11, v10);
  *a1 = &Spectre::Engine::D3D11::RenderOutputD3D11CoreWindow::`vftable';
  v7 = a3[1];
  if ( v7 )
    sub_18001050C(v7);
  v8 = a4[1];
  if ( v8 )
    sub_18001050C(v8);
  return a1;
}
