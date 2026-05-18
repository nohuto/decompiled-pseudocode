/*
 * XREFs of sub_18002F278 @ 0x18002F278
 * Callers:
 *     sub_180033EE4 @ 0x180033EE4 (sub_180033EE4.c)
 *     sub_1800346A8 @ 0x1800346A8 (sub_1800346A8.c)
 * Callees:
 *     sub_18002C378 @ 0x18002C378 (sub_18002C378.c)
 */

__int64 *__fastcall sub_18002F278(__int64 *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_18002C378(a1, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4, (_QWORD **)a2, (_QWORD *)(a2 + 8));
  return a1;
}
