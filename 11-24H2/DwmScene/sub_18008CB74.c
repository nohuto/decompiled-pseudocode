/*
 * XREFs of sub_18008CB74 @ 0x18008CB74
 * Callers:
 *     sub_180069C8C @ 0x180069C8C (sub_180069C8C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_18008C754 @ 0x18008C754 (sub_18008C754.c)
 *     sub_1800D13F4 @ 0x1800D13F4 (sub_1800D13F4.c)
 *     j__guard_dispatch_icall @ 0x1800EB010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18008CB74(__int64 *a1, __int64 a2, _QWORD *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  _QWORD *v7; // rax
  void (__fastcall *v8)(__int64, __int64, _QWORD *); // r9
  __int64 v9; // r10
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  _QWORD v13[6]; // [rsp+28h] [rbp-30h] BYREF

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 6);
  sub_180011C30((__int64)(a1 + 6));
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
      sub_18008C754(a1, a1[1], a3);
    }
    else
    {
      j_unknown_libname_81(v10, a3);
      a1[1] += 16LL;
    }
    sub_1800D13F4(a2);
  }
  Mtx_unlock(v6);
  v11 = a3[1];
  if ( v11 )
    sub_18001060C(v11);
  return a2;
}
