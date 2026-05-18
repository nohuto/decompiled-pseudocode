/*
 * XREFs of sub_180015570 @ 0x180015570
 * Callers:
 *     sub_180018DD0 @ 0x180018DD0 (sub_180018DD0.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800151E8 @ 0x1800151E8 (sub_1800151E8.c)
 *     sub_1800172FC @ 0x1800172FC (sub_1800172FC.c)
 *     sub_180035FBC @ 0x180035FBC (sub_180035FBC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180015570(__int64 *a1, _OWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v14[3]; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v15[6]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v16[40]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v17[152]; // [rsp+F8h] [rbp-8h] BYREF

  v15[0] = *a2;
  v15[1] = a2[1];
  v15[2] = a2[2];
  v15[3] = a2[3];
  v15[4] = a2[4];
  v15[5] = a2[5];
  sub_180035FBC(v16, v15);
  unknown_libname_81(&v13, a4);
  v7 = unknown_libname_81(v14, a3);
  v12 = 0LL;
  sub_1800151E8(a1, (__int64)v16, &v12, v7, v8);
  sub_1800172FC(v17);
  v9 = a3[1];
  if ( v9 )
    sub_18001050C(v9);
  v10 = a4[1];
  if ( v10 )
    sub_18001050C(v10);
  return a1;
}
