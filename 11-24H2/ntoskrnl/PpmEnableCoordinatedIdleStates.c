/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x140749E80
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x14074A450 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140A39740 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopFxEnablePlatformStates @ 0x1405D12F8 (PopFxEnablePlatformStates.c)
 */

void __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  PopFxEnablePlatformStates(*a1);
}
