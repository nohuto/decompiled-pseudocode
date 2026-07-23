/*
 * XREFs of RtlEqualUnicodeString @ 0x1800B49D0
 * Callers:
 *     RtlpIsDosDeviceName_Ustr @ 0x180018CB0 (RtlpIsDosDeviceName_Ustr.c)
 *     LdrpMinimalMapModule @ 0x18006D7B0 (LdrpMinimalMapModule.c)
 *     RtlpDetermineDosPathNameType4 @ 0x1800B4664 (RtlpDetermineDosPathNameType4.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1800B47FC (RtlpGetNtProductTypeFromRegistry.c)
 *     LdrpFindLoadedEnclaveModule @ 0x1800B4B04 (LdrpFindLoadedEnclaveModule.c)
 *     EtwpGetPrivateLoggerContextByName @ 0x1800B5E04 (EtwpGetPrivateLoggerContextByName.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D8748 (LdrpFindOrPrepareEnclaveModule.c)
 *     LdrLoadEnclaveModule @ 0x1800D8840 (LdrLoadEnclaveModule.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D956C (LdrpCreatePendingEnclaveModule.c)
 * Callees:
 *     memcmp @ 0x180168C50 (memcmp.c)
 */

BOOLEAN __cdecl RtlEqualUnicodeString(PUNICODE_STRING String1, PUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  size_t Length; // rax
  wchar_t *Buffer; // rcx
  wchar_t *v5; // r11
  char *v6; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r10

  Length = String1->Length;
  if ( (_WORD)Length != String2->Length )
    return 0;
  Buffer = String1->Buffer;
  v5 = (wchar_t *)((char *)Buffer + Length);
  if ( !CaseInSensitive )
    return memcmp(Buffer, String2->Buffer, Length) == 0;
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
          if ( qword_1801CF038 && (unsigned __int16)v7 >= 0xC0u )
            LOWORD(v7) = *(_WORD *)(qword_1801CF038
                                  + 2
                                  * ((v7 & 0xF)
                                   + *(unsigned __int16 *)(qword_1801CF038
                                                         + 2LL
                                                         * (((unsigned __int8)v7 >> 4)
                                                          + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
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
          if ( qword_1801CF038 )
          {
            if ( (unsigned __int16)v8 >= 0xC0u )
              LOWORD(v8) = *(_WORD *)(qword_1801CF038
                                    + 2
                                    * ((v8 & 0xF)
                                     + *(unsigned __int16 *)(qword_1801CF038
                                                           + 2LL
                                                           * (((unsigned __int8)v8 >> 4)
                                                            + (unsigned int)*(unsigned __int16 *)(qword_1801CF038
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
