/*
 * XREFs of PpmInitIdlePolicy @ 0x140C2D4D4
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PpmConvertTimeFrom @ 0x14032D050 (PpmConvertTimeFrom.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x1406A9010 (ZwQueryLicenseValue.c)
 */

__int64 PpmInitIdlePolicy()
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
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+58h] [rbp+18h] BYREF
  int v12; // [rsp+60h] [rbp+20h]

  v12 = 0;
  v11 = 0;
  word_140F06A4C = 0;
  word_140F06C34 = 0;
  dword_140F06A50 = 50000;
  dword_140F06C38 = 50000;
  v0 = 2 * PopQpcFrequency;
  PopIdleTransitionTimeout = 2 * PopQpcFrequency;
  DestinationString = 0LL;
  word_140F06A55 = 60;
  word_140F06C3D = 60;
  byte_140F06A54 = 40;
  byte_140F06C3C = 40;
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
  return ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v11);
}
