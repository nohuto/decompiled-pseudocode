/*
 * XREFs of sub_18001D6EC @ 0x18001D6EC
 * Callers:
 *     sub_180086078 @ 0x180086078 (sub_180086078.c)
 *     sub_1800866B4 @ 0x1800866B4 (sub_1800866B4.c)
 * Callees:
 *     sub_180010A84 @ 0x180010A84 (sub_180010A84.c)
 *     sub_1800138F8 @ 0x1800138F8 (sub_1800138F8.c)
 *     sub_18001CB38 @ 0x18001CB38 (sub_18001CB38.c)
 */

_QWORD *__fastcall sub_18001D6EC(__int64 a1, _QWORD *a2, unsigned __int64 a3, size_t a4)
{
  __int64 v8; // rax

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  a2[3] = 0LL;
  sub_18001CB38(a1, a3);
  if ( *(_QWORD *)(a1 + 16) - a3 < a4 )
    a4 = *(_QWORD *)(a1 + 16) - a3;
  v8 = sub_1800138F8(a1);
  sub_180010A84(a2, (const void *)(a3 + v8), a4);
  return a2;
}
