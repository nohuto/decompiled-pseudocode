/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1800D31F0
 * Callers:
 *     towupper @ 0x180127610 (towupper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeChar(int a1)
{
  if ( (unsigned __int16)a1 >= 0x61u )
  {
    if ( (unsigned __int16)a1 <= 0x7Au )
      return (unsigned int)(a1 - 32);
    if ( qword_1801CD038 )
    {
      if ( (unsigned __int16)a1 >= 0xC0u )
        LOWORD(a1) = *(_WORD *)(qword_1801CD038
                              + 2LL
                              * ((a1 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(qword_1801CD038
                                                                   + 2LL
                                                                   * ((((unsigned __int16)a1 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(qword_1801CD038 + 2 * ((unsigned __int64)(unsigned __int16)a1 >> 8))))))
                   + a1;
    }
  }
  return (unsigned __int16)a1;
}
