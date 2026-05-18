/*
 * XREFs of sub_180069A0C @ 0x180069A0C
 * Callers:
 *     sub_180024EC0 @ 0x180024EC0 (sub_180024EC0.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800698B4 @ 0x1800698B4 (sub_1800698B4.c)
 *     sub_180069E48 @ 0x180069E48 (sub_180069E48.c)
 *     sub_18008C984 @ 0x18008C984 (sub_18008C984.c)
 *     sub_18008CAC0 @ 0x18008CAC0 (sub_18008CAC0.c)
 *     sub_18008CC38 @ 0x18008CC38 (sub_18008CC38.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_180069A0C(__int64 *a1, _QWORD *a2, __int64 a3)
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
  sub_180011C30((__int64)(a1 + 3));
  sub_1800698B4(&v15, *a1, a1[1], a3);
  if ( v15 == a1[1] )
  {
    v9 = unknown_libname_81(v13, a2);
    v10 = sub_18008C984(v14, a3, v9);
    sub_180069E48(a1, v10);
    sub_18008CAC0(v14);
  }
  else
  {
    v7 = unknown_libname_81(v13, a2);
    sub_18008CC38(v8, v7);
  }
  result = Mtx_unlock(v6);
  v12 = a2[1];
  if ( v12 )
    return sub_18001060C(v12);
  return result;
}
