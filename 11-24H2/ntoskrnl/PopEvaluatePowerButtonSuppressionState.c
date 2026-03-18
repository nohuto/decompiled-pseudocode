/*
 * XREFs of PopEvaluatePowerButtonSuppressionState @ 0x14075A15C
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x14074D030 (PopLidSwitchReliabilityUpdateCallback.c)
 *     PopWnfInSupCallback @ 0x14075A270 (PopWnfInSupCallback.c)
 *     PopPowerButtonSuppressionInit @ 0x140C306E0 (PopPowerButtonSuppressionInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A8F44 (PopBsdHandleRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PopTracePowerButtonSuppressionActionUpdate @ 0x140AA89F8 (PopTracePowerButtonSuppressionActionUpdate.c)
 */

__int64 PopEvaluatePowerButtonSuppressionState()
{
  char v0; // di
  unsigned int v1; // esi
  unsigned __int8 v2; // bl
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx

  v0 = dword_140F08458;
  v1 = 0;
  v2 = dword_140F08458;
  if ( !byte_140F08441 && (_BYTE)dword_140F08458 == 1 )
    v2 = 2;
  if ( dword_140F08448 != v2 )
  {
    dword_140F08448 = v2;
    PopReleaseRwLock((signed __int64 *)&PopPowerButtonSuppressionLock);
    v1 = -1073741822;
    if ( qword_140E67590 )
      v1 = guard_dispatch_icall_no_overrides(v2, v3, v4, v5);
    _InterlockedIncrement(&PopPowerButtonSuppressionActionCount);
    PopAcquireRwLockExclusive(&PopPowerButtonSuppressionLock);
  }
  v6 = PopPowerButtonSuppressionActionCount;
  LOBYTE(v6) = byte_140F08441;
  PopTracePowerButtonSuppressionActionUpdate(
    v6,
    dword_140F08444,
    dword_140F08448,
    dword_140F08458,
    PopPowerButtonSuppressionActionCount);
  PopReleaseRwLock((signed __int64 *)&PopPowerButtonSuppressionLock);
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive(&PopBsdUpdateLock);
    BYTE3(PopBsdPowerTransitionExtension) = v0;
    BYTE4(PopBsdPowerTransitionExtension) = v2;
    PopBsdHandleRequest(2u);
    PopReleaseRwLock((signed __int64 *)&PopBsdUpdateLock);
  }
  return v1;
}
