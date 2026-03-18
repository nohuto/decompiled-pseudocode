/*
 * XREFs of AslRegistryBuildMachinePath @ 0x14080883C
 * Callers:
 *     AslRegistryGetKey @ 0x140808AD4 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14040BAE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14040BBA0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     AslAlloc @ 0x14095D3E4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryBuildMachinePath(PUNICODE_STRING Destination, PCWSTR Source)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  wchar_t *v8; // rax
  UNICODE_STRING Sourcea; // [rsp+30h] [rbp-18h] BYREF

  Sourcea = 0LL;
  RtlInitUnicodeString(&Sourcea, L"\\Registry\\Machine");
  v5 = 0;
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
    if ( Source && *Source != 92 )
      RtlAppendUnicodeToString(Destination, L"\\");
    RtlAppendUnicodeToString(Destination, Source);
  }
  else
  {
    v5 = -1073741801;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryBuildMachinePath",
      1506,
      (unsigned int)"Failed to allocate %d bytes for user key buffer");
  }
  return v5;
}
