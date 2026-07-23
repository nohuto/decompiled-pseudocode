/*
 * XREFs of ChkSum @ 0x1801063E8
 * Callers:
 *     LdrVerifyMappedImageMatchesChecksum @ 0x180141A30 (LdrVerifyMappedImageMatchesChecksum.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall ChkSum(unsigned int a1, unsigned __int16 *a2, int a3)
{
  int v3; // eax

  for ( ; a3; --a3 )
  {
    v3 = *a2++;
    a1 = ((v3 + a1) >> 16) + (unsigned __int16)(v3 + a1);
  }
  return a1 + HIWORD(a1);
}
