/*
 * XREFs of PopGetSettingValue @ 0x140A6C700
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PopFindPowerSettingConfiguration @ 0x140964F00 (PopFindPowerSettingConfiguration.c)
 *     PopMarshalSettingValues @ 0x140966268 (PopMarshalSettingValues.c)
 */

__int64 __fastcall PopGetSettingValue(_QWORD *a1, unsigned int *a2, int a3)
{
  int SessionId; // eax
  PVOID *PowerSettingConfiguration; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  ExAcquireFastMutex(&PopSettingLock);
  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, SessionId);
  if ( PowerSettingConfiguration )
  {
    v9 = PopMarshalSettingValues((__int64)PowerSettingConfiguration, a2 + 1, a3 - 4, a2);
    KeReleaseGuardedMutex(&PopSettingLock);
    return v9;
  }
  else
  {
    KeReleaseGuardedMutex(&PopSettingLock);
    return 3221225485LL;
  }
}
