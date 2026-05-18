/*
 * XREFs of sub_180069B2C @ 0x180069B2C
 * Callers:
 *     sub_180041BF0 @ 0x180041BF0 (sub_180041BF0.c)
 *     sub_180048B78 @ 0x180048B78 (sub_180048B78.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180069754 @ 0x180069754 (sub_180069754.c)
 *     sub_180069980 @ 0x180069980 (sub_180069980.c)
 *     sub_180069CE8 @ 0x180069CE8 (sub_180069CE8.c)
 *     sub_18008C8B4 @ 0x18008C8B4 (sub_18008C8B4.c)
 *     sub_18008C960 @ 0x18008C960 (sub_18008C960.c)
 *     sub_18008CA14 @ 0x18008CA14 (sub_18008CA14.c)
 *     sub_1800D1294 @ 0x1800D1294 (sub_1800D1294.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180069B2C(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+28h] [rbp-90h] BYREF
  _BYTE v17[128]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v18; // [rsp+C0h] [rbp+8h] BYREF
  __int64 *v19; // [rsp+D0h] [rbp+18h]
  _QWORD *v20; // [rsp+D8h] [rbp+20h]

  v20 = a4;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v19 = a1 + 3;
  sub_180011B30((__int64)(a1 + 3));
  v9 = sub_180069980((__int64)a1, a3);
  sub_180069754(&v18, *a1, a1[1], v9);
  if ( v18 == a1[1] )
  {
    v12 = unknown_libname_81(v16, a4);
    v13 = sub_18008C8B4(v17, v9, v12);
    sub_180069CE8(a1, v13);
    sub_18008C960(v17);
    sub_1800D1294(a2);
  }
  else
  {
    v10 = unknown_libname_81(v16, a4);
    sub_18008CA14(v11, a2, v10);
  }
  Mtx_unlock(v8);
  v14 = a4[1];
  if ( v14 )
    sub_18001050C(v14);
  return a2;
}
