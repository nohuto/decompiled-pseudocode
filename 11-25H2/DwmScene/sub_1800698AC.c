/*
 * XREFs of sub_1800698AC @ 0x1800698AC
 * Callers:
 *     sub_180024D60 @ 0x180024D60 (sub_180024D60.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_180069754 @ 0x180069754 (sub_180069754.c)
 *     sub_180069CE8 @ 0x180069CE8 (sub_180069CE8.c)
 *     sub_18008C824 @ 0x18008C824 (sub_18008C824.c)
 *     sub_18008C960 @ 0x18008C960 (sub_18008C960.c)
 *     sub_18008CAD8 @ 0x18008CAD8 (sub_18008CAD8.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_1800698AC(__int64 *a1, _QWORD *a2, __int64 a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rax
  int result; // eax
  __int64 v12; // rcx
  _QWORD v13[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v14[104]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF
  _QWORD *v16; // [rsp+A8h] [rbp+10h]
  __int64 *v17; // [rsp+B0h] [rbp+18h]

  v16 = a2;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 3);
  v17 = a1 + 3;
  sub_180011B30((__int64)(a1 + 3));
  sub_180069754(&v15, *a1, a1[1], a3);
  if ( v15 == a1[1] )
  {
    v9 = unknown_libname_81(v13, a2);
    v10 = sub_18008C824(v14, a3, v9);
    sub_180069CE8(a1, v10);
    sub_18008C960(v14);
  }
  else
  {
    v7 = unknown_libname_81(v13, a2);
    sub_18008CAD8(v8, v7);
  }
  result = Mtx_unlock(v6);
  v12 = a2[1];
  if ( v12 )
    return sub_18001050C(v12);
  return result;
}
