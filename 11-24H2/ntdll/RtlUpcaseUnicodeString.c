/*
 * XREFs of RtlUpcaseUnicodeString @ 0x1800CDC50
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x1800166C0 (RtlpComputeLangListCheckSum.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x18001AAA0 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCreateServiceSid @ 0x1800CD9A0 (RtlCreateServiceSid.c)
 *     RtlCreateVirtualAccountSid @ 0x1800CDAF0 (RtlCreateVirtualAccountSid.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v5; // r14
  unsigned __int16 Length; // si
  wchar_t *Atom; // rax
  unsigned int v8; // r11d
  __int64 i; // r9
  unsigned __int64 v10; // r10

  if ( !AllocateDestinationString && !SourceString->Length )
  {
    DestinationString->Length = 0;
    return 0;
  }
  v5 = qword_1801CC038;
  Length = SourceString->Length;
  if ( AllocateDestinationString )
  {
    Atom = (wchar_t *)RtlpAllocateAtom(SourceString->Length);
    DestinationString->Buffer = Atom;
    if ( Atom )
    {
      DestinationString->MaximumLength = Length;
      goto LABEL_5;
    }
    DestinationString->MaximumLength = 0;
    return -1073741801;
  }
  else
  {
    if ( Length <= DestinationString->MaximumLength && DestinationString->Buffer )
    {
LABEL_5:
      v8 = SourceString->Length >> 1;
      for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(i + 1) )
      {
        v10 = SourceString->Buffer[i];
        if ( (unsigned int)v10 >= 0x61 )
        {
          if ( (unsigned int)v10 > 0x7A )
          {
            if ( v5 )
            {
              if ( (unsigned __int16)v10 >= 0xC0u )
                LOWORD(v10) = *(_WORD *)(v5
                                       + 2
                                       * ((v10 & 0xF)
                                        + *(unsigned __int16 *)(v5
                                                              + 2LL
                                                              * (((unsigned __int8)v10 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(v5 + 2 * (v10 >> 8))))))
                            + v10;
            }
          }
          else
          {
            LOWORD(v10) = v10 - 32;
          }
        }
        DestinationString->Buffer[i] = v10;
      }
      DestinationString->Length = SourceString->Length;
      return 0;
    }
    return -2147483643;
  }
}
