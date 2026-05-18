/*
 * XREFs of sub_180041130 @ 0x180041130
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C04 @ 0x180011C04 (sub_180011C04.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800150A0 @ 0x1800150A0 (sub_1800150A0.c)
 *     sub_1800418A4 @ 0x1800418A4 (sub_1800418A4.c)
 *     sub_1800D13F4 @ 0x1800D13F4 (sub_1800D13F4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180041130(__int64 a1, __int64 a2, __int64 *a3)
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

  sub_1800150A0(&v12, (__int64)a3, *a3);
  if ( v12 )
    v6 = *(_QWORD *)(v12 + 152);
  else
    v6 = *(_QWORD *)(v5 + 32);
  if ( *(_WORD *)(v5 + 24) != 511 )
  {
    sub_180011C04(v5 + 8, &v14);
    if ( v14 )
    {
      v7 = unknown_libname_81(v16, &v12);
      sub_1800418A4(v9, v7, v8, v6);
    }
    if ( v15 )
      sub_18001060C(v15);
  }
  sub_1800D13F4(a2);
  if ( v13 )
    sub_18001060C(v13);
  v10 = a3[1];
  if ( v10 )
    sub_18001060C(v10);
  return a2;
}
