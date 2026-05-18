/*
 * XREFs of sub_18008C984 @ 0x18008C984
 * Callers:
 *     sub_180069A0C @ 0x180069A0C (sub_180069A0C.c)
 * Callees:
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_18008C888 @ 0x18008C888 (sub_18008C888.c)
 *     sub_18008CD18 @ 0x18008CD18 (sub_18008CD18.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18008C984(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rcx

  sub_18008C888((__int64 *)a1, a2, (__int64)a3);
  *(_QWORD *)(a1 + 24) = a2;
  unknown_libname_81((_QWORD *)(a1 + 32), a3);
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 48));
  sub_180011C30(a1 + 48);
  sub_18008CD18(a1);
  Mtx_unlock((_Mtx_t)(a1 + 48));
  v6 = a3[1];
  if ( v6 )
    sub_18001060C(v6);
  return a1;
}
