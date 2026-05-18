/*
 * XREFs of sub_180015780 @ 0x180015780
 * Callers:
 *     sub_1800151E8 @ 0x1800151E8 (sub_1800151E8.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180010F44 @ 0x180010F44 (sub_180010F44.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_1800172FC @ 0x1800172FC (sub_1800172FC.c)
 *     sub_18001B098 @ 0x18001B098 (sub_18001B098.c)
 *     sub_180025510 @ 0x180025510 (sub_180025510.c)
 *     sub_1800284DC @ 0x1800284DC (sub_1800284DC.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_180033070 @ 0x180033070 (sub_180033070.c)
 *     sub_18004F130 @ 0x18004F130 (sub_18004F130.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180015780(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r10
  __int64 v11; // r14
  _QWORD *v12; // rax
  _QWORD v14[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v15; // [rsp+38h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-18h] BYREF

  v8 = sub_18001B098(3800LL);
  if ( v8 )
  {
    v9 = unknown_libname_81(&v15, (_QWORD *)(a1 + 464));
    v8 = sub_18004F130(v10, a1, v9);
  }
  sub_1800150A0(v14, v8);
  v11 = v14[0];
  sub_1800284DC(v14[0] + 24LL, v17);
  sub_180025510(v11, a3, a4);
  unknown_libname_81(&v15, v14);
  sub_180031110(a1, &v15);
  if ( *((_QWORD *)&v15 + 1) )
    sub_18001050C(*((__int64 *)&v15 + 1));
  v15 = 0LL;
  v12 = unknown_libname_81(&v16, v14);
  sub_180033070(a1, 7LL, v12, &v15);
  *a2 = v11;
  a2[1] = v14[1];
  sub_180010F44((__int64)v17);
  sub_1800172FC(a3);
  return a2;
}
