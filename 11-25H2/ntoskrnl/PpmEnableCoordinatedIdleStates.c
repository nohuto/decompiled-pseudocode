/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x14073DE00
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x14073E380 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140A34590 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x1405CCB48 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
