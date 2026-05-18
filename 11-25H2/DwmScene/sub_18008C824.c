/*
 * XREFs of sub_18008C824 @ 0x18008C824
 * Callers:
 *     sub_1800698AC @ 0x1800698AC (sub_1800698AC.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 *     sub_18008C728 @ 0x18008C728 (sub_18008C728.c)
 *     sub_18008CBB8 @ 0x18008CBB8 (sub_18008CBB8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18008C824(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx

  sub_18008C728((__int64 *)a1, a2, (__int64)a3);
  *(_QWORD *)(a1 + 24) = a2;
  unknown_libname_81((_QWORD *)(a1 + 32), a3);
  sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 48));
  sub_180011B30(a1 + 48);
  sub_18008CBB8(a1);
  Mtx_unlock((_Mtx_t)(a1 + 48));
  v6 = a3[1];
  if ( v6 )
    sub_18001050C(v6);
  return a1;
}
