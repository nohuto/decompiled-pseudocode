/*
 * XREFs of ComposeHangulLV @ 0x18011ED2C
 * Callers:
 *     Normalization__NormalizeCharacter @ 0x1800BD13C (Normalization__NormalizeCharacter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComposeHangulLV(int a1, int a2)
{
  if ( (unsigned int)(a1 - 4352) > 0x12 || (unsigned int)(a2 - 4449) > 0x14 )
    return 0LL;
  else
    return (unsigned int)(28 * (a2 - 4449 + 21 * (a1 - 4352)) + 44032);
}
