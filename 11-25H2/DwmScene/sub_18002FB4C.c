/*
 * XREFs of sub_18002FB4C @ 0x18002FB4C
 * Callers:
 *     sub_18002FDE4 @ 0x18002FDE4 (sub_18002FDE4.c)
 *     sub_1800303A4 @ 0x1800303A4 (sub_1800303A4.c)
 * Callees:
 *     sub_18002CCCC @ 0x18002CCCC (sub_18002CCCC.c)
 */

__int64 __fastcall sub_18002FB4C(void **a1)
{
  sub_18002CCCC((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_180010134(*a1, 0x60uLL);
}
