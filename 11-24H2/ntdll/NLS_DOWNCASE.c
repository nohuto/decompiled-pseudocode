/*
 * XREFs of NLS_DOWNCASE @ 0x1800DB530
 * Callers:
 *     RtlFindCharInUnicodeString @ 0x1800A6730 (RtlFindCharInUnicodeString.c)
 *     RtlDowncaseUnicodeChar @ 0x1800F2700 (RtlDowncaseUnicodeChar.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall NLS_DOWNCASE(__int64 a1, unsigned __int16 a2)
{
  if ( a2 < 0x41u )
    return a2;
  if ( a2 <= 0x5Au )
    return a2 + 32;
  if ( !a1 || a2 < 0xC0u )
    return a2;
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
}
