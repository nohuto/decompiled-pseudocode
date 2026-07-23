/*
 * XREFs of RtlPrefixUnicodeString @ 0x1800A64C0
 * Callers:
 *     RtlDeriveCapabilitySidsFromName @ 0x18001AAA0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18006F820 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800A5D14 (RtlpProcessIFEOKeyFilter.c)
 *     RtlNtPathNameToDosPathName @ 0x1800A6240 (RtlNtPathNameToDosPathName.c)
 *     RtlpDetermineDosPathNameType4 @ 0x1800A7194 (RtlpDetermineDosPathNameType4.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D3A60 (LdrpFindOrPrepareEnclaveModule.c)
 * Callees:
 *     memcmp @ 0x180165A90 (memcmp.c)
 */

BOOLEAN __cdecl RtlPrefixUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  __int64 Length; // r9
  wchar_t *Buffer; // rcx
  wchar_t *v5; // r11
  char *v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10

  Length = String1->Length;
  Buffer = String1->Buffer;
  if ( String2->Length < (unsigned __int16)Length )
    return 0;
  v5 = (wchar_t *)((char *)Buffer + Length);
  if ( !CaseInSensitive )
    return memcmp(Buffer, String2->Buffer, (unsigned int)Length) == 0;
  v6 = (char *)((char *)String2->Buffer - (char *)Buffer);
  while ( Buffer < v5 )
  {
    v7 = *Buffer;
    v8 = *(unsigned __int16 *)((char *)Buffer + (_QWORD)v6);
    if ( (_WORD)v7 != (_WORD)v8 )
    {
      if ( (unsigned int)v7 >= 0x61 )
      {
        if ( (unsigned int)v7 > 0x7A )
        {
          if ( qword_1801CC038 && (unsigned __int16)v7 >= 0xC0u )
            LOWORD(v7) = *(_WORD *)(qword_1801CC038
                                  + 2
                                  * ((v7 & 0xF)
                                   + *(unsigned __int16 *)(qword_1801CC038
                                                         + 2LL
                                                         * (((unsigned __int8)v7 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_1801CC038
                                                                                              + 2 * (v7 >> 8))))))
                       + v7;
        }
        else
        {
          LOWORD(v7) = v7 - 32;
        }
      }
      if ( (unsigned int)v8 >= 0x61 )
      {
        if ( (unsigned int)v8 > 0x7A )
        {
          if ( qword_1801CC038 )
          {
            if ( (unsigned __int16)v8 >= 0xC0u )
              LOWORD(v8) = *(_WORD *)(qword_1801CC038
                                    + 2
                                    * ((v8 & 0xF)
                                     + *(unsigned __int16 *)(qword_1801CC038
                                                           + 2LL
                                                           * (((unsigned __int8)v8 >> 4)
                                                            + (unsigned int)*(unsigned __int16 *)(qword_1801CC038
                                                                                                + 2 * (v8 >> 8))))))
                         + v8;
          }
        }
        else
        {
          LOWORD(v8) = v8 - 32;
        }
      }
      if ( (_WORD)v7 != (_WORD)v8 )
        return 0;
    }
    ++Buffer;
  }
  return 1;
}
