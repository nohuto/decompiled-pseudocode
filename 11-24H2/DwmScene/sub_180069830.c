/*
 * XREFs of sub_180069830 @ 0x180069830
 * Callers:
 *     sub_18006951C @ 0x18006951C (sub_18006951C.c)
 * Callees:
 *     sub_180011C30 @ 0x180011C30 (sub_180011C30.c)
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_18008C888 @ 0x18008C888 (sub_18008C888.c)
 *     sub_18008CD18 @ 0x18008CD18 (sub_18008CD18.c)
 */

// Hidden C++ exception states: #wind=3
int __fastcall sub_180069830(__int64 a1, __int64 a2)
{
  sub_18008C888(a2);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a2 + 48));
  sub_180011C30(a2 + 48);
  sub_18008CD18(a2);
  return Mtx_unlock((_Mtx_t)(a2 + 48));
}
