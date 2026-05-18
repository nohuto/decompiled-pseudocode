/*
 * XREFs of sub_18004A288 @ 0x18004A288
 * Callers:
 *     sub_18004B0E8 @ 0x18004B0E8 (sub_18004B0E8.c)
 * Callees:
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 *     sub_18005AAA4 @ 0x18005AAA4 (sub_18005AAA4.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004A288(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // r8
  __int64 v7; // r10
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+28h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v12[48]; // [rsp+48h] [rbp-30h] BYREF

  v5 = unknown_libname_81(&v11, a4);
  v10[0] = *v6;
  v10[1] = v6[1];
  *v6 = 0LL;
  v6[1] = 0LL;
  v8 = sub_180017054((__int64)v12, v7);
  return sub_18005AAA4(a1, v8, v10, v5);
}
