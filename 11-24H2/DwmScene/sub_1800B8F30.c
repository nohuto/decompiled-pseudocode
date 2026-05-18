/*
 * XREFs of sub_1800B8F30 @ 0x1800B8F30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_1800B8860 @ 0x1800B8860 (sub_1800B8860.c)
 */

LPVOID __fastcall sub_1800B8F30(LPVOID lpMem, char a2)
{
  sub_1800B8860((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
