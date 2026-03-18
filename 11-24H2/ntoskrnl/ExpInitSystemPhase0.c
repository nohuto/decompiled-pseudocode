/*
 * XREFs of ExpInitSystemPhase0 @ 0x140C408C8
 * Callers:
 *     ExInitSystem @ 0x140C40704 (ExInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     RtlHpGlobalsInitialize @ 0x1405F265C (RtlHpGlobalsInitialize.c)
 *     ExGetSuiteMask @ 0x1407B6ED0 (ExGetSuiteMask.c)
 */

char ExpInitSystemPhase0()
{
  int v0; // ecx
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int128 v4; // [rsp+20h] [rbp-18h]

  ExpTimeout = -40000000LL;
  *(_WORD *)(MmWriteableSharedUserData + 726) = 10;
  ExpEnvironmentLock.Owner = 0LL;
  ExpEnvironmentLock.Contention = 0;
  ExpEnvironmentLock.Event.Header.SignalState = 0;
  ExNPagedLookasideLock = 0LL;
  ExPagedLookasideLock = 0LL;
  qword_140EFA6D8 = (__int64)&ExpSystemResourcesList;
  ExpSystemResourcesList = (__int64)&ExpSystemResourcesList;
  ExpEnvironmentLock.Event.Header.WaitListHead.Blink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  ExpEnvironmentLock.Event.Header.WaitListHead.Flink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  qword_140EFA698 = (__int64)&ExNPagedLookasideListHead;
  ExNPagedLookasideListHead = (__int64)&ExNPagedLookasideListHead;
  qword_140EFA6C8 = (__int64)&ExPagedLookasideListHead;
  ExPagedLookasideListHead = (__int64)&ExPagedLookasideListHead;
  qword_140EFEB98 = (__int64)&ExpFirmwareTableProviderListHead;
  ExpFirmwareTableProviderListHead = (__int64)&ExpFirmwareTableProviderListHead;
  ExpEnvironmentLock.Count = 1;
  LOWORD(ExpEnvironmentLock.Event.Header.Lock) = 1;
  ExpEnvironmentLock.Event.Header.Size = 6;
  ExInitializeResourceLite2(&ExpFirmwareTableResource, -1);
  v0 = *(_DWORD *)(KeLoaderBlock_0 + 264);
  ExpConDrvLoadLock = 0LL;
  ExpFirmwarePageProtectionSupported = (v0 & 4) != 0;
  if ( CmSuiteBufferType == 7 )
    *(_DWORD *)(MmWriteableSharedUserData + 720) = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  v1 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  RtlpHeapKey = v1 | (unsigned int)ExGenRandom(1);
  RtlHpGlobalsInitialize();
  v4 = 0LL;
  LOBYTE(v4) = 2;
  v2 = *(_QWORD *)(KeLoaderBlock_0 + 240);
  RtlpHpLegacyEnvHandle = v4;
  if ( *(_QWORD *)(v2 + 3760) )
    ExpLuid = *(_QWORD *)(v2 + 3760);
  return 1;
}
