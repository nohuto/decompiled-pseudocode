/*
 * XREFs of sub_180095F70 @ 0x180095F70
 * Callers:
 *     sub_1800336B0 @ 0x1800336B0 (sub_1800336B0.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 *     sub_180027FBC @ 0x180027FBC (sub_180027FBC.c)
 *     sub_18002815C @ 0x18002815C (sub_18002815C.c)
 *     sub_180095E8C @ 0x180095E8C (sub_180095E8C.c)
 *     sub_1800983FC @ 0x1800983FC (sub_1800983FC.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_180095F70(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v14[56]; // [rsp+40h] [rbp-38h] BYREF

  sub_180027FBC(a1);
  sub_180095E8C(a1, (__int64)v11, a2);
  if ( v11[0] )
  {
    v7 = *(_QWORD *)(a1 + 16 * v12 + 64);
    v8 = unknown_libname_81(&v13, a4);
    v9 = sub_180016F54((__int64)v14, (__int64)&unk_1801C88C8);
    sub_1800983FC(v7, v9, v8);
    sub_18002815C(a1);
    return 1;
  }
  else
  {
    sub_18002815C(a1);
    return 0;
  }
}
