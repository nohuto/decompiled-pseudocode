/*
 * XREFs of sub_18007B29C @ 0x18007B29C
 * Callers:
 *     sub_18007B03C @ 0x18007B03C (sub_18007B03C.c)
 * Callees:
 *     sub_18007AC94 @ 0x18007AC94 (sub_18007AC94.c)
 */

__int64 *__fastcall sub_18007B29C(__int64 *a1, __int64 *a2)
{
  if ( a1 != a2 )
    sub_18007AC94(a1, *a2, 0xCCCCCCCCCCCCCCCDuLL * ((a2[1] - *a2) >> 3));
  return a1;
}
