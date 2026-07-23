/*
 * XREFs of PopEvaluatePowerButtonSuppressionState @ 0x140758844
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x14074B360 (PopLidSwitchReliabilityUpdateCallback.c)
 *     PopWnfInSupCallback @ 0x140758960 (PopWnfInSupCallback.c)
 *     PopPowerButtonSuppressionInit @ 0x140C32800 (PopPowerButtonSuppressionInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A3364 (PopBsdHandleRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PopTracePowerButtonSuppressionActionUpdate @ 0x140AA3A7C (PopTracePowerButtonSuppressionActionUpdate.c)
 */

__int64 PopEvaluatePowerButtonSuppressionState()
{
  char v0; // di
  unsigned int v1; // esi
  unsigned __int8 v2; // bl
  __int64 v3; // rdx
  int v4; // ecx

  v0 = dword_140F08738;
  v1 = 0;
  v2 = dword_140F08738;
  if ( !byte_140F08721 && (_BYTE)dword_140F08738 == 1 )
    v2 = 2;
  if ( dword_140F08728 != v2 )
  {
    dword_140F08728 = v2;
    PopReleaseRwLock(&PopPowerButtonSuppressionLock);
    v1 = -1073741822;
    if ( qword_140E67700 )
      v1 = guard_dispatch_icall_no_overrides(v2, v3);
    _InterlockedIncrement(&PopPowerButtonSuppressionActionCount);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerButtonSuppressionLock);
  }
  v4 = PopPowerButtonSuppressionActionCount;
  LOBYTE(v4) = byte_140F08721;
  PopTracePowerButtonSuppressionActionUpdate(
    v4,
    dword_140F08724,
    dword_140F08728,
    dword_140F08738,
    PopPowerButtonSuppressionActionCount);
  PopReleaseRwLock(&PopPowerButtonSuppressionLock);
  if ( !PopBsdSkipLogging )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock);
    BYTE3(PopBsdPowerTransitionExtension) = v0;
    BYTE4(PopBsdPowerTransitionExtension) = v2;
    PopBsdHandleRequest(2u);
    PopReleaseRwLock(&PopBsdUpdateLock);
  }
  return v1;
}
