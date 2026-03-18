/*
 * XREFs of NLS_UPCASE @ 0x1403F8E10
 * Callers:
 *     RtlSuffixUnicodeString @ 0x14076DE00 (RtlSuffixUnicodeString.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x14076F6B0 (RtlUpcaseUnicodeToCustomCPN.c)
 *     RtlIsValidOemCharacter @ 0x1408E8C40 (RtlIsValidOemCharacter.c)
 *     PnpGenerateDeviceIdsHash @ 0x140A4ACDC (PnpGenerateDeviceIdsHash.c)
 *     PiDevCfgResolveVariable @ 0x140A67A58 (PiDevCfgResolveVariable.c)
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
