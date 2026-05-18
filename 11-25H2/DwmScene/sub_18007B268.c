/*
 * XREFs of sub_18007B268 @ 0x18007B268
 * Callers:
 *     sub_18007B03C @ 0x18007B03C (sub_18007B03C.c)
 * Callees:
 *     sub_18007AB68 @ 0x18007AB68 (sub_18007AB68.c)
 */

__int64 *__fastcall sub_18007B268(__int64 *a1, __int64 a2)
{
  if ( a1 != (__int64 *)a2 )
    sub_18007AB68(a1, *(char **)a2, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
  return a1;
}
