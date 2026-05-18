/*
 * XREFs of sub_18001DFF8 @ 0x18001DFF8
 * Callers:
 *     sub_180085400 @ 0x180085400 (sub_180085400.c)
 * Callees:
 *     sub_18001D698 @ 0x18001D698 (sub_18001D698.c)
 */

__int64 *__fastcall sub_18001DFF8(__int64 *a1, __int64 a2)
{
  if ( a1 != (__int64 *)a2 )
    sub_18001D698(a1, *(char **)a2, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
  return a1;
}
