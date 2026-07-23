/*
 * XREFs of PpmInitIdlePolicy @ 0x140C1C3D8
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x1403E7C34 (PpmConvertTimeFrom.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14069DD40 (ZwQueryLicenseValue.c)
 */

NTSTATUS PpmInitIdlePolicy()
{
  ULONGLONG v0; // rax
  __int64 *v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp+20h] BYREF
  ULONG Type; // [rsp+68h] [rbp+28h] BYREF
  int Data; // [rsp+70h] [rbp+30h] BYREF

  Data = 0;
  ResultDataSize = 0;
  Type = 0;
  word_140F0662C = 0;
  word_140F06814 = 0;
  dword_140F06630 = 50000;
  dword_140F06818 = 50000;
  v0 = 2 * PopQpcFrequency;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  DestinationString = 0LL;
  word_140F06635 = 60;
  word_140F0681D = 60;
  byte_140F06634 = 40;
  byte_140F0681C = 40;
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
      *v1 = PpmConvertTimeFrom(v3, 10000000LL);
    v1 += 3;
    --v2;
  }
  while ( v2 );
  v4 = (__int64 *)&PpmPackageIdleIntervalLimits;
  v5 = 37LL;
  do
  {
    v6 = v4[1];
    if ( v6 != -1 )
      *v4 = PpmConvertTimeFrom(v6, 10000000LL);
    v4 += 3;
    --v5;
  }
  while ( v5 );
  RtlInitUnicodeString(&DestinationString, L"Power-IdleStatesMax-Enabled");
  result = ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize);
  if ( result >= 0 && ResultDataSize == 4 && Type == 4 )
    PpmIdleRespectIdleStateMax = Data != 0;
  return result;
}
