/*
 * XREFs of PopGetSettingValue @ 0x1409BAD20
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x1409BCCB0 (PopFindPowerSettingConfiguration.c)
 *     PopMarshalSettingValues @ 0x1409BDF78 (PopMarshalSettingValues.c)
 */

__int64 __fastcall PopGetSettingValue(__int64 a1, __int64 a2, int a3)
{
  unsigned int SessionId; // eax
  __int64 PowerSettingConfiguration; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  ExAcquireFastMutex(&PopSettingLock);
  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, SessionId);
  if ( PowerSettingConfiguration )
  {
    v9 = PopMarshalSettingValues(PowerSettingConfiguration, a2 + 4, (unsigned int)(a3 - 4), a2);
    KeReleaseGuardedMutex(&PopSettingLock);
    return v9;
  }
  else
  {
    KeReleaseGuardedMutex(&PopSettingLock);
    return 3221225485LL;
  }
}
