/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x1407481B0
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x140748780 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140A2E800 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x1405CEA18 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
