/*
 * XREFs of sub_18001E158 @ 0x18001E158
 * Callers:
 *     sub_180085560 @ 0x180085560 (sub_180085560.c)
 * Callees:
 *     sub_18001D7F8 @ 0x18001D7F8 (sub_18001D7F8.c)
 */

__int64 *__fastcall sub_18001E158(__int64 *a1, __int64 a2)
{
  if ( a1 != (__int64 *)a2 )
    sub_18001D7F8(a1, *(char **)a2, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
  return a1;
}
