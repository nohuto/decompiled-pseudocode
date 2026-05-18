/*
 * XREFs of sub_1800697B4 @ 0x1800697B4
 * Callers:
 *     sub_180023F84 @ 0x180023F84 (sub_180023F84.c)
 * Callees:
 *     sub_18001C148 @ 0x18001C148 (sub_18001C148.c)
 *     sub_18002F1D4 @ 0x18002F1D4 (sub_18002F1D4.c)
 *     sub_1800693BC @ 0x1800693BC (sub_1800693BC.c)
 *     sub_180069CB8 @ 0x180069CB8 (sub_180069CB8.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800697B4(__int64 a1)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  sub_1800693BC((__int64 *)a1);
  sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 24));
  sub_18001C148((struct _Mtx_internal_imp_t *)(a1 + 56));
  sub_18002F1D4((__int64 *)(a1 + 88));
  sub_18002F1D4((__int64 *)(a1 + 104));
  *(_DWORD *)(a1 + 120) = 0;
  sub_180069CB8(a1);
  return a1;
}
