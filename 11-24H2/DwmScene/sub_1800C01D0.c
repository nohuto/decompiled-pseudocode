/*
 * XREFs of sub_1800C01D0 @ 0x1800C01D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800BFD90 @ 0x1800BFD90 (sub_1800BFD90.c)
 */

__int64 *__fastcall sub_1800C01D0(__int64 *lpMem, char a2)
{
  sub_1800BFD90(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
