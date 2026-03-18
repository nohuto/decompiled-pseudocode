/*
 * XREFs of ExpInitSystemPhase0 @ 0x140C2F5EC
 * Callers:
 *     ExInitSystem @ 0x140C2F428 (ExInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     RtlHpGlobalsInitialize @ 0x1405E630C (RtlHpGlobalsInitialize.c)
 *     ExGetSuiteMask @ 0x1407A7A30 (ExGetSuiteMask.c)
 */

char ExpInitSystemPhase0()
{
  __int64 v0; // rax
  int v1; // ecx
  unsigned __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h]

  ExpTimeout = -40000000LL;
  *(_WORD *)(MmWriteableSharedUserData + 726) = 10;
  ExpEnvironmentLock.Owner = 0LL;
  ExpEnvironmentLock.Contention = 0;
  ExpEnvironmentLock.Event.Header.SignalState = 0;
  ExNPagedLookasideLock = 0LL;
  ExPagedLookasideLock = 0LL;
  qword_140EFA388 = (__int64)&ExpSystemResourcesList;
  ExpSystemResourcesList = (__int64)&ExpSystemResourcesList;
  ExpEnvironmentLock.Event.Header.WaitListHead.Blink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  ExpEnvironmentLock.Event.Header.WaitListHead.Flink = &ExpEnvironmentLock.Event.Header.WaitListHead;
  qword_140EFA368 = (__int64)&ExNPagedLookasideListHead;
  ExNPagedLookasideListHead = (__int64)&ExNPagedLookasideListHead;
  qword_140EFA338 = (__int64)&ExPagedLookasideListHead;
  ExPagedLookasideListHead = (__int64)&ExPagedLookasideListHead;
  qword_140EFE778 = (__int64)&ExpFirmwareTableProviderListHead;
  ExpFirmwareTableProviderListHead = (__int64)&ExpFirmwareTableProviderListHead;
  ExpEnvironmentLock.Count = 1;
  LOWORD(ExpEnvironmentLock.Event.Header.Lock) = 1;
  ExpEnvironmentLock.Event.Header.Size = 6;
  ExInitializeResourceLite2(&ExpFirmwareTableResource, -1);
  v0 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v1 = *(_DWORD *)(v0 + 264);
  ExpConDrvLoadLock = 0LL;
  ExpFirmwarePageProtectionSupported = (v1 & 4) != 0;
  if ( CmSuiteBufferType == 7 )
    *(_DWORD *)(MmWriteableSharedUserData + 720) = ExGetSuiteMask((__int64)CmSuiteBuffer, ExpMultiUserTS);
  v2 = (unsigned __int64)(unsigned int)ExGenRandom(1) << 32;
  RtlpHeapKey = v2 | (unsigned int)ExGenRandom(1);
  RtlHpGlobalsInitialize();
  v3 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
  v6 = 0LL;
  LOBYTE(v6) = 2;
  v4 = *(_QWORD *)(v3 + 240);
  RtlpHpLegacyEnvHandle = v6;
  if ( *(_QWORD *)(v4 + 3760) )
    ExpLuid = *(_QWORD *)(v4 + 3760);
  return 1;
}
