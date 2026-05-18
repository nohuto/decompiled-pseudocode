/*
 * XREFs of sub_18008CA14 @ 0x18008CA14
 * Callers:
 *     sub_180069C8C @ 0x180069C8C (sub_180069C8C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     j_unknown_libname_81 @ 0x180012100 (j_unknown_libname_81.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_18008C754 @ 0x18008C754 (sub_18008C754.c)
 *     sub_18008C888 @ 0x18008C888 (sub_18008C888.c)
 *     sub_18008CD18 @ 0x18008CD18 (sub_18008CD18.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008CA14(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rcx

  sub_18008C888((__int64 *)a1, a2, (__int64)a3);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 48));
  sub_180011C30(a1 + 48);
  sub_18008CD18(a1);
  v6 = *(_QWORD **)(a1 + 8);
  if ( v6 == *(_QWORD **)(a1 + 16) )
  {
    sub_18008C754((__int64 *)a1, *(_QWORD *)(a1 + 8), a3);
  }
  else
  {
    j_unknown_libname_81(v6, a3);
    *(_QWORD *)(a1 + 8) += 16LL;
  }
  Mtx_unlock((_Mtx_t)(a1 + 48));
  v7 = a3[1];
  if ( v7 )
    sub_18001060C(v7);
  return a1;
}
