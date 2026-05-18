/*
 * XREFs of sub_180068B00 @ 0x180068B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180068A40 @ 0x180068A40 (sub_180068A40.c)
 */

LPVOID __fastcall sub_180068B00(LPVOID lpMem, char a2)
{
  sub_180068A40((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
