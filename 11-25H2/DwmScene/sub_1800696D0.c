/*
 * XREFs of sub_1800696D0 @ 0x1800696D0
 * Callers:
 *     sub_1800693BC @ 0x1800693BC (sub_1800693BC.c)
 * Callees:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 *     sub_18008C728 @ 0x18008C728 (sub_18008C728.c)
 *     sub_18008CBB8 @ 0x18008CBB8 (sub_18008CBB8.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_1800696D0(__int64 a1, __int64 a2)
{
  sub_18008C728(a2);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  sub_18001C148((struct _Mtx_internal_imp_t *)(a2 + 48));
  sub_180011B30(a2 + 48);
  sub_18008CBB8(a2);
  return Mtx_unlock((_Mtx_t)(a2 + 48));
}
