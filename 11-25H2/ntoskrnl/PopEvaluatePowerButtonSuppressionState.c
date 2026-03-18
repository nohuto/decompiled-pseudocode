/*
 * XREFs of PopEvaluatePowerButtonSuppressionState @ 0x14074DB74
 * Callers:
 *     PopLidSwitchReliabilityUpdateCallback @ 0x140740F60 (PopLidSwitchReliabilityUpdateCallback.c)
 *     PopWnfInSupCallback @ 0x14074DC90 (PopWnfInSupCallback.c)
 *     PopPowerButtonSuppressionInit @ 0x140C1F5E0 (PopPowerButtonSuppressionInit.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PopBsdHandleRequest @ 0x1404A7FA0 (PopBsdHandleRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopTracePowerButtonSuppressionActionUpdate @ 0x140AA3970 (PopTracePowerButtonSuppressionActionUpdate.c)
 */

__int64 PopEvaluatePowerButtonSuppressionState()
{
  char v0; // di
  unsigned int v1; // esi
  unsigned __int8 v2; // bl
  int v3; // ecx

  v0 = dword_140F07D78;
  v1 = 0;
  v2 = dword_140F07D78;
  if ( !byte_140F07D61 && (_BYTE)dword_140F07D78 == 1 )
    v2 = 2;
  if ( dword_140F07D68 != v2 )
  {
    dword_140F07D68 = v2;
    PopReleaseRwLock(&PopPowerButtonSuppressionLock);
    v1 = -1073741822;
    if ( qword_140E672B0 )
      v1 = guard_dispatch_icall_no_overrides(v2);
    _InterlockedIncrement(&PopPowerButtonSuppressionActionCount);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopPowerButtonSuppressionLock);
  }
  v3 = PopPowerButtonSuppressionActionCount;
  LOBYTE(v3) = byte_140F07D61;
  PopTracePowerButtonSuppressionActionUpdate(
    v3,
    dword_140F07D64,
    dword_140F07D68,
    dword_140F07D78,
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
