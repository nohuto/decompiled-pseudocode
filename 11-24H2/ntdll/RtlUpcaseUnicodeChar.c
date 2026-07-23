/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1800CE560
 * Callers:
 *     towupper @ 0x180125840 (towupper.c)
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter >= 0x61u )
  {
    if ( SourceCharacter <= 0x7Au )
      return SourceCharacter - 32;
    if ( qword_1801CC038 )
    {
      if ( SourceCharacter >= 0xC0u )
        SourceCharacter += *(_WORD *)(qword_1801CC038
                                    + 2LL
                                    * ((SourceCharacter & 0xF)
                                     + (unsigned int)*(unsigned __int16 *)(qword_1801CC038
                                                                         + 2LL
                                                                         * (((SourceCharacter >> 4) & 0xF)
                                                                          + (unsigned int)*(unsigned __int16 *)(qword_1801CC038 + 2 * ((unsigned __int64)SourceCharacter >> 8))))));
    }
  }
  return SourceCharacter;
}
