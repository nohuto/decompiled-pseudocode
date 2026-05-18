/*
 * XREFs of sub_18008CA14 @ 0x18008CA14
 * Callers:
 *     sub_180069B2C @ 0x180069B2C (sub_180069B2C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_18008C5F4 @ 0x18008C5F4 (sub_18008C5F4.c)
 *     sub_1800D1294 @ 0x1800D1294 (sub_1800D1294.c)
 *     j__guard_dispatch_icall @ 0x1800EA010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008CA14(__int64 *a1, __int64 a2, _QWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, __int64, _QWORD *); // r9
  __int64 v9; // r10
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  _QWORD v13[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 6);
  sub_180011B30((__int64)(a1 + 6));
  if ( a1[4] )
  {
    v7 = unknown_libname_81(v13, a1 + 4);
    v8(v9, a2, v7);
  }
  else
  {
    v10 = (_QWORD *)a1[1];
    if ( v10 == (_QWORD *)a1[2] )
    {
      sub_18008C5F4(a1, a1[1], a3);
    }
    else
    {
      j_unknown_libname_81(v10, a3);
      a1[1] += 16LL;
    }
    sub_1800D1294(a2);
  }
  Mtx_unlock(v6);
  v11 = a3[1];
  if ( v11 )
    sub_18001050C(v11);
  return a2;
}
