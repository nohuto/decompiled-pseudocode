/*
 * XREFs of sub_18008C7B0 @ 0x18008C7B0
 * Callers:
 *     sub_180069740 @ 0x180069740 (sub_180069740.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     unknown_libname_81 @ 0x180011CB0 (unknown_libname_81.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 *     sub_18008C3EC @ 0x18008C3EC (sub_18008C3EC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18008C7B0(__int64 a1, __int64 a2)
{
  sub_18008C3EC((__int64 *)a1, *(char **)a2, *(char **)(a2 + 8));
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  unknown_libname_81((_QWORD *)(a1 + 32), (_QWORD *)(a2 + 32));
  sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 48));
  sub_180011B30(a1 + 48);
  Mtx_unlock((_Mtx_t)(a1 + 48));
  return a1;
}
