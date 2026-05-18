/*
 * XREFs of sub_18007D890 @ 0x18007D890
 * Callers:
 *     sub_18007EC20 @ 0x18007EC20 (sub_18007EC20.c)
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180081FE4 @ 0x180081FE4 (sub_180081FE4.c)
 */

LPVOID __fastcall sub_18007D890(LPVOID lpMem, char a2)
{
  sub_180081FE4();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
