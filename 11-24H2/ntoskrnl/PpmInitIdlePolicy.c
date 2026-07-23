/*
 * XREFs of PpmInitIdlePolicy @ 0x140C2F5F4
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PpmConvertTimeFrom @ 0x140437360 (PpmConvertTimeFrom.c)
 *     ZwQueryLicenseValue @ 0x1406A9FB0 (ZwQueryLicenseValue.c)
 */

NTSTATUS PpmInitIdlePolicy()
{
  ULONGLONG v0; // rax
  __int64 *v1; // r11
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 *v5; // r11
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultDataSize; // [rsp+50h] [rbp+10h] BYREF
  ULONG Type; // [rsp+58h] [rbp+18h] BYREF
  int Data; // [rsp+60h] [rbp+20h] BYREF

  Data = 0;
  ResultDataSize = 0;
  Type = 0;
  word_140F06D6C = 0;
  word_140F06F54 = 0;
  dword_140F06D70 = 50000;
  dword_140F06F58 = 50000;
  v0 = 2 * PopQpcFrequency;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  DestinationString = 0LL;
  word_140F06D75 = 60;
  word_140F06F5D = 60;
  byte_140F06D74 = 40;
  byte_140F06F5C = 40;
  if ( !KdPitchDebugger )
    v0 = 90 * PopQpcFrequency;
  PopCoordinatedIdleExitTimeout = v0;
  if ( PpmIdleClusterIdleMitigation )
    PpmIdleClusterIdleMitigationThreshold = PpmConvertTimeFrom((unsigned int)PpmIdleClusterIdleMitigation, 1000000LL);
  v1 = (__int64 *)&PpmIdleIntervalLimits;
  v2 = 26LL;
  do
  {
    v3 = v1[1];
    if ( v3 != -1 )
    {
      v4 = PpmConvertTimeFrom(v3, 10000000LL);
      *v1 = v4;
    }
    v1 += 3;
    --v2;
  }
  while ( v2 );
  v5 = (__int64 *)&PpmPackageIdleIntervalLimits;
  v6 = 37LL;
  do
  {
    v7 = v5[1];
    if ( v7 != -1 )
    {
      v8 = PpmConvertTimeFrom(v7, 10000000LL);
      *v5 = v8;
    }
    v5 += 3;
    --v6;
  }
  while ( v6 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
  if ( result >= 0 && ResultDataSize == 4 && Type == 4 )
    PpmIdleRespectIdleStateMax = Data != 0;
  return result;
}
