/*
 * XREFs of sub_1800C73A0 @ 0x1800C73A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800C735C @ 0x1800C735C (sub_1800C735C.c)
 */

__int64 *__fastcall sub_1800C73A0(__int64 *lpMem, char a2)
{
  sub_1800C735C(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
