/*
 * XREFs of sub_18008C910 @ 0x18008C910
 * Callers:
 *     sub_1800698A0 @ 0x1800698A0 (sub_1800698A0.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     unknown_libname_81 @ 0x180011DB0 (unknown_libname_81.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_18008C54C @ 0x18008C54C (sub_18008C54C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008C910(__int64 a1, __int64 a2)
{
  sub_18008C54C((__int64 *)a1, *(char **)a2, *(char **)(a2 + 8));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  unknown_libname_81((_QWORD *)(a1 + 32), (_QWORD *)(a2 + 32));
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 48));
  sub_180011C30(a1 + 48);
  Mtx_unlock((_Mtx_t)(a1 + 48));
  return a1;
}
