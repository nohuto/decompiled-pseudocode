/*
 * XREFs of sub_1800960D0 @ 0x1800960D0
 * Callers:
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 *     sub_1800282BC @ 0x1800282BC (sub_1800282BC.c)
 *     sub_180095FEC @ 0x180095FEC (sub_180095FEC.c)
 *     sub_18009855C @ 0x18009855C (sub_18009855C.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800960D0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[56]; // [rsp+40h] [rbp-38h] BYREF

  sub_18002811C(a1);
  sub_180095FEC(a1, (__int64)v11, a2);
  if ( v11[0] )
  {
    v7 = *(_QWORD *)(a1 + 16 * v12 + 64);
    v8 = unknown_libname_81(&v13, a4);
    v9 = sub_180017054((__int64)v14, (__int64)&unk_1801C98D8);
    sub_18009855C(v7, v9, v8);
    sub_1800282BC(a1);
    return 1;
  }
  else
  {
    sub_1800282BC(a1);
    return 0;
  }
}
