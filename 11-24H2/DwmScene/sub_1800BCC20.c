/*
 * XREFs of sub_1800BCC20 @ 0x1800BCC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800BCB88 @ 0x1800BCB88 (sub_1800BCB88.c)
 */

__int64 *__fastcall sub_1800BCC20(__int64 *lpMem, char a2)
{
  sub_1800BCB88(lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
