/*
 * XREFs of NLS_UPCASE @ 0x1800AF6C0
 * Callers:
 *     RtlLookupAtomInAtomTable @ 0x1800329C0 (RtlLookupAtomInAtomTable.c)
 *     RtlGetFullPathName_Ustr @ 0x18005BA20 (RtlGetFullPathName_Ustr.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800AE554 (RtlAddAtomToAtomTableEx.c)
 *     RtlpFreeAllAtom @ 0x1800AED80 (RtlpFreeAllAtom.c)
 *     RtlFindUnicodeSubstring @ 0x1800AF530 (RtlFindUnicodeSubstring.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800AF614 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlDnsHostNameToComputerName @ 0x1800D3E90 (RtlDnsHostNameToComputerName.c)
 *     WerEscalationLazyInit @ 0x1800E2D10 (WerEscalationLazyInit.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1801387C0 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x180145A88 (RtlIsValidOemCharacter.c)
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
