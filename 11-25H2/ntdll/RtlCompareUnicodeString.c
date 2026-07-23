/*
 * XREFs of RtlCompareUnicodeString @ 0x1800CDF90
 * Callers:
 *     <none>
 * Callees:
 *     RtlCompareMemory @ 0x1801674A0 (RtlCompareMemory.c)
 */

LONG __cdecl RtlCompareUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  wchar_t *Buffer; // rbx
  wchar_t *v4; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  wchar_t *v8; // r10
  signed __int64 v9; // rdi
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  SIZE_T v12; // rcx

  Buffer = String1->Buffer;
  v4 = String2->Buffer;
  v5 = (unsigned __int64)String1->Length >> 1;
  v6 = (unsigned __int64)String2->Length >> 1;
  v7 = v5;
  if ( v5 > v6 )
    v7 = (unsigned __int64)String2->Length >> 1;
  v8 = &Buffer[v7];
  if ( CaseInSensitive )
  {
    v9 = (char *)v4 - (char *)Buffer;
    while ( Buffer < v8 )
    {
      v10 = *Buffer;
      v11 = *(wchar_t *)((char *)Buffer + v9);
      if ( (_WORD)v10 != (_WORD)v11 )
      {
        if ( (unsigned int)v10 >= 0x61 )
        {
          if ( (unsigned int)v10 > 0x7A )
          {
            if ( qword_1801CF038 && (unsigned __int16)v10 >= 0xC0u )
              LOWORD(v10) = *(_WORD *)(qword_1801CF038
                                     + 2
                                     * ((v10 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801CF038
                                                            + 2LL
                                                            * (((unsigned __int8)v10 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
                                                                                                 + 2 * (v10 >> 8))))))
                          + v10;
          }
          else
          {
            LOWORD(v10) = v10 - 32;
          }
        }
        if ( (unsigned int)v11 >= 0x61 )
        {
          if ( (unsigned int)v11 > 0x7A )
          {
            if ( qword_1801CF038 )
            {
              if ( (unsigned __int16)v11 >= 0xC0u )
                LOWORD(v11) = *(_WORD *)(qword_1801CF038
                                       + 2
                                       * ((v11 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801CF038
                                                              + 2LL
                                                              * (((unsigned __int8)v11 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801CF038 + 2 * (v11 >> 8))))))
                            + v11;
            }
          }
          else
          {
            LOWORD(v11) = v11 - 32;
          }
        }
        if ( (_WORD)v10 != (_WORD)v11 )
          return (unsigned __int16)v10 - (unsigned __int16)v11;
      }
      ++Buffer;
    }
    return v5 - v6;
  }
  v12 = RtlCompareMemory(String1->Buffer, v4, 2 * v7) >> 1;
  if ( v12 >= v7 )
    return v5 - v6;
  return Buffer[v12] - v4[v12];
}
