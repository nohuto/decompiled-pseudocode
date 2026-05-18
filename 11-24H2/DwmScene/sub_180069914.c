/*
 * XREFs of sub_180069914 @ 0x180069914
 * Callers:
 *     sub_1800240E4 @ 0x1800240E4 (sub_1800240E4.c)
 * Callees:
 *     sub_18001C2A8 @ 0x18001C2A8 (sub_18001C2A8.c)
 *     sub_18002F334 @ 0x18002F334 (sub_18002F334.c)
 *     sub_18006951C @ 0x18006951C (sub_18006951C.c)
 *     sub_180069E18 @ 0x180069E18 (sub_180069E18.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180069914(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  sub_18006951C((__int64 *)a1);
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 24));
  sub_18001C2A8((struct _Mtx_internal_imp_t *)(a1 + 56));
  sub_18002F334((__int64 *)(a1 + 88));
  sub_18002F334((__int64 *)(a1 + 104));
  *(_DWORD *)(a1 + 120) = 0;
  sub_180069E18(a1);
  return a1;
}
