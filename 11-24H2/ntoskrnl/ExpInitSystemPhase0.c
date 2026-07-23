/*
 * XREFs of ExpInitSystemPhase0 @ 0x140C42A18
 * Callers:
 *     ExInitSystem @ 0x140C42854 (ExInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     RtlHpGlobalsInitialize @ 0x1405EFC9C (RtlHpGlobalsInitialize.c)
 *     ExGetSuiteMask @ 0x1407B7320 (ExGetSuiteMask.c)
 */

char ExpInitSystemPhase0()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // ecx
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-18h]

  ExpTimeout = -40000000LL;
  *(_WORD *)(MmWriteableSharedUserData + 726) = 10;
  ExpEnvironmentLock.Owner = 0LL;
  ExpEnvironmentLock.Contention = 0;
  ExpEnvironmentLock.Event.Header.SignalState = 0;
  ExNPagedLookasideLock = 0LL;
  ExPagedLookasideLock = 0LL;
  qword_140EFAA08 = (__int64)&ExpSystemResourcesList;
  ExpSystemResourcesList = (__int64)&ExpSystemResourcesList;
  ExpEnvironmentLock.Event.Header.WaitListHead.Blink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  ExpEnvironmentLock.Event.Header.WaitListHead.Flink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  qword_140EFA9C8 = (__int64)&ExNPagedLookasideListHead;
  ExNPagedLookasideListHead = (__int64)&ExNPagedLookasideListHead;
  qword_140EFA9A8 = (__int64)&ExPagedLookasideListHead;
  ExPagedLookasideListHead = (__int64)&ExPagedLookasideListHead;
  qword_140EFEE48 = (__int64)&ExpFirmwareTableProviderListHead;
  ExpFirmwareTableProviderListHead = (__int64)&ExpFirmwareTableProviderListHead;
  ExpEnvironmentLock.Count = 1;
  LOWORD(ExpEnvironmentLock.Event.Header.Lock) = 1;
  ExpEnvironmentLock.Event.Header.Size = 6;
  ExInitializeResourceLite2(&ExpFirmwareTableResource, -1);
  v3 = *(_DWORD *)(KeLoaderBlock_0 + 264);
  ExpConDrvLoadLock = 0LL;
  ExpFirmwarePageProtectionSupported = (v3 & 4) != 0;
  if ( CmSuiteBufferType == 7 )
    *(_DWORD *)(MmWriteableSharedUserData + 720) = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  v4 = (unsigned __int64)(unsigned int)ExGenRandom(1, v0, v1, v2) << 32;
  RtlpHeapKey = v4 | (unsigned int)ExGenRandom(1, v5, v6, v7);
  RtlHpGlobalsInitialize();
  v10 = 0LL;
  LOBYTE(v10) = 2;
  v8 = *(_QWORD *)(KeLoaderBlock_0 + 240);
  RtlpHpLegacyEnvHandle = v10;
  if ( *(_QWORD *)(v8 + 3760) )
    ExpLuid = *(_QWORD *)(v8 + 3760);
  return 1;
}
