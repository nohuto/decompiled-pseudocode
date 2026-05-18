/*
 * XREFs of sub_180069C8C @ 0x180069C8C
 * Callers:
 *     sub_180041D50 @ 0x180041D50 (sub_180041D50.c)
 *     sub_180048CD8 @ 0x180048CD8 (sub_180048CD8.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_1800698B4 @ 0x1800698B4 (sub_1800698B4.c)
 *     sub_180069AE0 @ 0x180069AE0 (sub_180069AE0.c)
 *     sub_180069E48 @ 0x180069E48 (sub_180069E48.c)
 *     sub_18008CA14 @ 0x18008CA14 (sub_18008CA14.c)
 *     sub_18008CAC0 @ 0x18008CAC0 (sub_18008CAC0.c)
 *     sub_18008CB74 @ 0x18008CB74 (sub_18008CB74.c)
 *     sub_1800D13F4 @ 0x1800D13F4 (sub_1800D13F4.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180069C8C(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
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
  sub_180011C30((__int64)(a1 + 3));
  v9 = sub_180069AE0((__int64)a1, a3);
  sub_1800698B4(&v18, *a1, a1[1], v9);
  if ( v18 == a1[1] )
  {
    v12 = unknown_libname_81(v16, a4);
    v13 = sub_18008CA14(v17, v9, v12);
    sub_180069E48(a1, v13);
    sub_18008CAC0(v17);
    sub_1800D13F4(a2);
  }
  else
  {
    v10 = unknown_libname_81(v16, a4);
    sub_18008CB74(v11, a2, v10);
  }
  Mtx_unlock(v8);
  v14 = a4[1];
  if ( v14 )
    sub_18001060C(v14);
  return a2;
}
