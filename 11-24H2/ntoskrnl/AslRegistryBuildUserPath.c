/*
 * XREFs of AslRegistryBuildUserPath @ 0x140808920
 * Callers:
 *     AslRegistryGetKey @ 0x140808AD4 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140865040 (RtlFormatCurrentUserKeyPath.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     AslAlloc @ 0x14095D3E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildUserPath(PUNICODE_STRING Destination, PCWSTR Source)
{
  __int64 v4; // rcx
  int v5; // ebx
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
