/*
 * XREFs of sub_1800175E4 @ 0x1800175E4
 * Callers:
 *     sub_180017618 @ 0x180017618 (sub_180017618.c)
 *     sub_180032C74 @ 0x180032C74 (sub_180032C74.c)
 *     sub_1800759D0 @ 0x1800759D0 (sub_1800759D0.c)
 *     sub_1800764D0 @ 0x1800764D0 (sub_1800764D0.c)
 *     sub_180076860 @ 0x180076860 (sub_180076860.c)
 *     sub_180077900 @ 0x180077900 (sub_180077900.c)
 *     sub_18008FC10 @ 0x18008FC10 (sub_18008FC10.c)
 * Callees:
 *     sub_180016684 @ 0x180016684 (sub_180016684.c)
 */

void **__fastcall sub_1800175E4(void **a1, __int64 a2)
{
  if ( a1 != (void **)a2 )
    sub_180016684(a1, *(char **)a2, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
  return a1;
}
