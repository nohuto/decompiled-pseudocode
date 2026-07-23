/*
 * XREFs of WmipCheckSMBiosSysInfoString @ 0x1407A41DC
 * Callers:
 *     WmiMatchSMBiosSysInfo @ 0x1407A4160 (WmiMatchSMBiosSysInfo.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall WmipCheckSMBiosSysInfoString(PCSZ SourceString, PCWCH *a2)
{
  char v2; // di
  __int64 v4; // rax
  LONG v5; // ebx
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  v4 = -1LL;
  UnicodeString = 0LL;
  do
    ++v4;
  while ( SourceString[v4] );
  if ( v4 == 1 && *SourceString == 42 )
    return 1;
  RtlInitAnsiString(&DestinationString, SourceString);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
  {
    v5 = RtlCompareUnicodeStrings(
           UnicodeString.Buffer,
           (unsigned __int64)UnicodeString.Length >> 1,
           a2[1],
           (unsigned __int64)*(unsigned __int16 *)a2 >> 1,
           0);
    RtlFreeAnsiString(&UnicodeString);
    return v5 == 0;
  }
  return v2;
}
