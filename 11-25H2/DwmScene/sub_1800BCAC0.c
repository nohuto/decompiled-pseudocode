/*
 * XREFs of sub_1800BCAC0 @ 0x1800BCAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B77C @ 0x18000B77C (sub_18000B77C.c)
 *     sub_1800BCA28 @ 0x1800BCA28 (sub_1800BCA28.c)
 */

__int64 *__fastcall sub_1800BCAC0(__int64 *lpMem, char a2)
{
  sub_1800BCA28(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000B77C(lpMem);
  return lpMem;
}
