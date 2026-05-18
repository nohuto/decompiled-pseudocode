/*
 * XREFs of sub_180010F24 @ 0x180010F24
 * Callers:
 *     sub_1800168B4 @ 0x1800168B4 (sub_1800168B4.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_18001120C @ 0x18001120C (sub_18001120C.c)
 *     sub_1800BC6D0 @ 0x1800BC6D0 (sub_1800BC6D0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180010F24(__int64 a1, _OWORD *a2, _QWORD *a3, _QWORD *a4, int a5, int a6, unsigned int a7)
{
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-20h] BYREF

  v10 = a7;
  v14[0] = *a4;
  v14[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v15[0] = *a3;
  v15[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v16[0] = *a2;
  v16[1] = a2[1];
  ((void (__fastcall *)(__int64, _OWORD *, _QWORD *, _QWORD *))sub_1800BC6D0)(a1, v16, v15, v14);
  *(_QWORD *)a1 = &RenderOutputDwm::`vftable';
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_DWORD *)(a1 + 1656) = a5;
  *(_DWORD *)(a1 + 1660) = a6;
  if ( a7 <= 1 )
    v10 = 1;
  *(_DWORD *)(a1 + 1664) = v10;
  *(float *)(a1 + 1668) = sub_18001120C();
  v11 = a3[1];
  if ( v11 )
    sub_18001060C(v11);
  v12 = a4[1];
  if ( v12 )
    sub_18001060C(v12);
  return a1;
}
