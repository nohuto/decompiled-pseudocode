/*
 * XREFs of sub_180010420 @ 0x180010420
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000BB4C @ 0x18000BB4C (sub_18000BB4C.c)
 *     sub_180017518 @ 0x180017518 (sub_180017518.c)
 */

LPVOID __fastcall sub_180010420(LPVOID lpMem, char a2)
{
  sub_180017518();
  if ( (a2 & 1) != 0 )
    sub_18000BB4C(lpMem);
  return lpMem;
}
