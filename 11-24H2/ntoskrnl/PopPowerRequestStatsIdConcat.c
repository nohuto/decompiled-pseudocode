/*
 * XREFs of PopPowerRequestStatsIdConcat @ 0x140A61F78
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x140A18BD4 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x1403DA240 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1404105C0 (RtlUnicodeStringCatString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPowerRequestStatsIdConcat(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  NTSTATUS v4; // edx
  unsigned int v5; // edi
  wchar_t *Pool2; // rax
  wchar_t *v7; // rbp
  wchar_t *Buffer; // rdx

  if ( DestinationString && SourceString && (v5 = DestinationString->Length + SourceString->Length + 8, v5 <= 0xFFFF) )
  {
    if ( DestinationString->MaximumLength < v5 )
    {
      Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL, v5, 0x54515750u);
      v7 = Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      Buffer = DestinationString->Buffer;
      if ( Buffer )
      {
        memmove(Pool2, Buffer, DestinationString->Length);
        ExFreePoolWithTag(DestinationString->Buffer, 0x54515750u);
      }
      DestinationString->Buffer = v7;
      DestinationString->MaximumLength = v5;
    }
    v4 = RtlUnicodeStringCatString(DestinationString, L" (");
    if ( v4 >= 0 )
    {
      v4 = RtlUnicodeStringCat(DestinationString, SourceString);
      if ( v4 >= 0 )
      {
        v4 = RtlUnicodeStringCatString(DestinationString, L")");
        if ( v4 >= 0 )
          DestinationString->Buffer[(unsigned __int64)DestinationString->Length >> 1] = 0;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
