/*
 * XREFs of RtlUnicodeStringToOemString @ 0x180069370
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18004AD30 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUnicodeToMultiByteSize @ 0x18006B270 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToCustomCPN @ 0x18006B6F0 (RtlUnicodeToCustomCPN.c)
 *     RtlpIsUtf8Process @ 0x1800718D0 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  void **p_Buffer; // rdi
  NTSTATUS result; // eax
  __int64 v8; // rcx
  ULONG BytesInUnicodeString; // edx
  WCHAR *UnicodeString; // r8
  ULONG v11; // r10d
  CHAR *v12; // r11
  _CPTABLEINFO *v13; // rcx
  int v14; // ebx
  unsigned __int16 v15; // dx
  signed __int32 v16[8]; // [rsp+0h] [rbp-78h] BYREF
  NTSTATUS v17; // [rsp+30h] [rbp-48h]
  ULONG v18; // [rsp+88h] [rbp+10h] BYREF
  BOOLEAN v19; // [rsp+90h] [rbp+18h]
  ULONG BytesInCustomCPString; // [rsp+98h] [rbp+20h] BYREF

  v19 = AllocateDestinationString;
  v18 = 0;
  RtlUnicodeToMultiByteSize(&v18, SourceString->Buffer, SourceString->Length);
  BytesInCustomCPString = v18 + 1;
  if ( v18 + 1 > 0xFFFF )
    return -1073741584;
  p_Buffer = (void **)&DestinationString->Buffer;
  result = AllocateOrValidateCharStringBuffer(
             AllocateDestinationString,
             v18 + 1,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  v17 = result;
  if ( result >= 0 )
  {
    if ( (unsigned __int8)RtlpIsUtf8Process(v8, SourceString->Length, SourceString->Buffer) )
    {
      v13 = (_CPTABLEINFO *)&Utf8TableInfo;
    }
    else
    {
      _InterlockedOr(v16, 0);
      v13 = &GlobalRtlNlsState;
    }
    v14 = RtlUnicodeToCustomCPN(v13, v12, v11, &BytesInCustomCPString, UnicodeString, BytesInUnicodeString);
    v17 = v14;
    if ( v14 >= 0 )
    {
      v15 = BytesInCustomCPString;
      *((_BYTE *)*p_Buffer + BytesInCustomCPString) = 0;
      DestinationString->Length = v15;
      v14 = 0;
      v17 = 0;
    }
    if ( v14 < 0 )
    {
      if ( AllocateDestinationString )
      {
        RtlpSysVolFree(*p_Buffer);
        *p_Buffer = 0LL;
        DestinationString->MaximumLength = 0;
      }
    }
    return v14;
  }
  return result;
}
