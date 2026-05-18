/*
 * XREFs of sub_180027A60 @ 0x180027A60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180027958 @ 0x180027958 (sub_180027958.c)
 */

LPVOID __fastcall sub_180027A60(LPVOID lpMem, char a2)
{
  sub_180027958((__int64)lpMem);
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
