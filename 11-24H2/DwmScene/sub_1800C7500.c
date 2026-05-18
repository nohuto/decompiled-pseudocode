/*
 * XREFs of sub_1800C7500 @ 0x1800C7500
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800C74BC @ 0x1800C74BC (sub_1800C74BC.c)
 */

__int64 *__fastcall sub_1800C7500(__int64 *lpMem, char a2)
{
  sub_1800C74BC(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
