/*
 * XREFs of sub_1800176A4 @ 0x1800176A4
 * Callers:
 *     sub_1800176D8 @ 0x1800176D8 (sub_1800176D8.c)
 *     sub_180032DD4 @ 0x180032DD4 (sub_180032DD4.c)
 *     sub_180075B30 @ 0x180075B30 (sub_180075B30.c)
 *     sub_180076630 @ 0x180076630 (sub_180076630.c)
 *     sub_1800769C0 @ 0x1800769C0 (sub_1800769C0.c)
 *     sub_180077A60 @ 0x180077A60 (sub_180077A60.c)
 *     sub_18008FD70 @ 0x18008FD70 (sub_18008FD70.c)
 * Callees:
 *     sub_180016784 @ 0x180016784 (sub_180016784.c)
 */

void **__fastcall sub_1800176A4(void **a1, __int64 a2)
{
  if ( a1 != (void **)a2 )
    sub_180016784(a1, *(char **)a2, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
  return a1;
}
