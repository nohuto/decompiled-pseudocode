/*
 * XREFs of AslRegistryBuildMachinePath @ 0x1407F8CCC
 * Callers:
 *     AslRegistryGetKey @ 0x1407F8F64 (AslRegistryGetKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404430 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14082B9C0 (AslAlloc.c)
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
