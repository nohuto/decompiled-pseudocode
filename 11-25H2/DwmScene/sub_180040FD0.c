/*
 * XREFs of sub_180040FD0 @ 0x180040FD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B04 @ 0x180011B04 (sub_180011B04.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180014FA0 @ 0x180014FA0 (sub_180014FA0.c)
 *     sub_180041744 @ 0x180041744 (sub_180041744.c)
 *     sub_1800D1294 @ 0x1800D1294 (sub_1800D1294.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180040FD0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r11
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-40h] BYREF
  __int64 v13; // [rsp+30h] [rbp-38h]
  __int64 v14; // [rsp+38h] [rbp-30h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]
  _QWORD v16[3]; // [rsp+48h] [rbp-20h] BYREF

  sub_180014FA0(&v12, (__int64)a3, *a3);
  if ( v12 )
    v6 = *(_QWORD *)(v12 + 152);
  else
    v6 = *(_QWORD *)(v5 + 32);
  if ( *(_WORD *)(v5 + 24) != 511 )
  {
    sub_180011B04(v5 + 8, &v14);
    if ( v14 )
    {
      v7 = unknown_libname_81(v16, &v12);
      sub_180041744(v9, v7, v8, v6);
    }
    if ( v15 )
      sub_18001050C(v15);
  }
  sub_1800D1294(a2);
  if ( v13 )
    sub_18001050C(v13);
  v10 = a3[1];
  if ( v10 )
    sub_18001050C(v10);
  return a2;
}
