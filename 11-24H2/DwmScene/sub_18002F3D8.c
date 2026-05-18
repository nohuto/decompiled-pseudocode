/*
 * XREFs of sub_18002F3D8 @ 0x18002F3D8
 * Callers:
 *     sub_180034044 @ 0x180034044 (sub_180034044.c)
 *     sub_180034808 @ 0x180034808 (sub_180034808.c)
 * Callees:
 *     sub_18002C4D8 @ 0x18002C4D8 (sub_18002C4D8.c)
 */

__int64 *__fastcall sub_18002F3D8(__int64 *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_18002C4D8(a1, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4, (_QWORD **)a2, (_QWORD *)(a2 + 8));
  return a1;
}
