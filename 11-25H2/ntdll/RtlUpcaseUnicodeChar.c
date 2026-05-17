/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x1800CD530
 * Callers:
 *     towupper @ 0x1801290F0 (towupper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUpcaseUnicodeChar(int a1)
{
  if ( (unsigned __int16)a1 >= 0x61u )
  {
    if ( (unsigned __int16)a1 <= 0x7Au )
      return (unsigned int)(a1 - 32);
    if ( qword_1801CF038 )
    {
      if ( (unsigned __int16)a1 >= 0xC0u )
        LOWORD(a1) = *(_WORD *)(qword_1801CF038
                              + 2LL
                              * ((a1 & 0xF)
                               + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
                                                                   + 2LL
                                                                   * ((((unsigned __int16)a1 >> 4) & 0xF)
                                                                    + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * ((unsigned __int64)(unsigned __int16)a1 >> 8))))))
                   + a1;
    }
  }
  return (unsigned __int16)a1;
}
