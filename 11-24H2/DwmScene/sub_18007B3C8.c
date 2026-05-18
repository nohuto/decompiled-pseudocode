/*
 * XREFs of sub_18007B3C8 @ 0x18007B3C8
 * Callers:
 *     sub_18007B19C @ 0x18007B19C (sub_18007B19C.c)
 * Callees:
 *     sub_18007ACC8 @ 0x18007ACC8 (sub_18007ACC8.c)
 */

__int64 *__fastcall sub_18007B3C8(__int64 *a1, __int64 a2)
{
  if ( a1 != (__int64 *)a2 )
    sub_18007ACC8(a1, *(char **)a2, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
  return a1;
}
