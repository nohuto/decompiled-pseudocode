/*
 * XREFs of AslRegistryBuildUserPath @ 0x1407F8DB0
 * Callers:
 *     AslRegistryGetKey @ 0x1407F8F64 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140916F10 (RtlFormatCurrentUserKeyPath.c)
 */

__int64 __fastcall AslRegistryBuildUserPath(PUNICODE_STRING Destination, PCWSTR Source)
{
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  wchar_t *v8; // rax
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  Sourcea = 0LL;
  v5 = RtlFormatCurrentUserKeyPath(&Sourcea);
  if ( v5 >= 0 )
  {
    Destination->Length = 0;
    v6 = -1LL;
    do
      ++v6;
    while ( Source[v6] );
    v7 = Sourcea.Length + 2 * (v6 + 1);
    Destination->MaximumLength = v7;
    v8 = (wchar_t *)AslAlloc(v4, v7);
    Destination->Buffer = v8;
    if ( v8 )
    {
      RtlAppendUnicodeStringToString(Destination, &Sourcea);
      RtlAppendUnicodeToString(Destination, Source);
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslRegistryBuildUserPath", 1574, (unsigned int)"Out of memory");
    }
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryBuildUserPath",
      1562,
      (unsigned int)"RtlFormatCurrentUserKeyPath failed [%x]");
  }
  RtlFreeAnsiString(&Sourcea);
  return (unsigned int)v5;
}
