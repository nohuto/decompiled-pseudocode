/*
 * XREFs of sub_18008C8B4 @ 0x18008C8B4
 * Callers:
 *     sub_180069B2C @ 0x180069B2C (sub_180069B2C.c)
 * Callees:
 *     sub_18001050C @ 0x18001050C (sub_18001050C.c)
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     j_unknown_libname_81 @ 0x180012000 (j_unknown_libname_81.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 *     sub_18008C5F4 @ 0x18008C5F4 (sub_18008C5F4.c)
 *     sub_18008C728 @ 0x18008C728 (sub_18008C728.c)
 *     sub_18008CBB8 @ 0x18008CBB8 (sub_18008CBB8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008C8B4(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rcx

  sub_18008C728((__int64 *)a1, a2, (__int64)a3);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 48));
  sub_180011B30(a1 + 48);
  sub_18008CBB8(a1);
  v6 = *(_QWORD **)(a1 + 8);
  if ( v6 == *(_QWORD **)(a1 + 16) )
  {
    sub_18008C5F4((__int64 *)a1, *(_QWORD *)(a1 + 8), a3);
  }
  else
  {
    j_unknown_libname_81(v6, a3);
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  Mtx_unlock((_Mtx_t)(a1 + 48));
  v7 = a3[1];
  if ( v7 )
    sub_18001050C(v7);
  return a1;
}
