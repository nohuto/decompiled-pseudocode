/*
 * XREFs of NLS_UPCASE @ 0x180069080
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 *     RtlLookupAtomInAtomTable @ 0x18005BC50 (RtlLookupAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067E44 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x180068670 (RtlpFreeAllAtom.c)
 *     RtlFindUnicodeSubstring @ 0x180068EF0 (RtlFindUnicodeSubstring.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x180068FD4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlDnsHostNameToComputerName @ 0x1800D7360 (RtlDnsHostNameToComputerName.c)
 *     WerEscalationLazyInit @ 0x1800DF9C0 (WerEscalationLazyInit.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x180139F30 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x180146FF8 (RtlIsValidOemCharacter.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_UPCASE(__int64 a1, unsigned __int16 a2)
{
  if ( a2 < 0x61u )
    return a2;
  if ( a2 <= 0x7Au )
    return a2 - 32;
  if ( a1 && a2 >= 0xC0u )
    return *(_WORD *)(a1
                    + 2LL
                    * ((a2 & 0xF)
                     + (unsigned int)*(unsigned __int16 *)(a1
                                                         + 2LL
                                                         * (((unsigned __int8)a2 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(a1
                                                                                              + 2
                                                                                              * ((unsigned __int64)a2 >> 8))))))
         + a2;
  else
    return a2;
}
