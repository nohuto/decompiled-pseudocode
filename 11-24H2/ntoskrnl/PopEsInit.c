/*
 * XREFs of PopEsInit @ 0x140C34BAC
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     ExSubscribeWnfStateChange @ 0x140A12490 (ExSubscribeWnfStateChange.c)
 *     PopEsWorkItemSchedule @ 0x140A31484 (PopEsWorkItemSchedule.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 */

void __fastcall PopEsInit(int a1)
{
  if ( a1 == 1 )
  {
    qword_140F07918 = 0LL;
    PopEsLock = 0LL;
    PopEsWorkItem.Parameter = 0LL;
    PopEsWorkItem.List.Flink = 0LL;
    PopEsWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopEsWorker;
    PopEsWorkItemSchedule(1);
  }
  else if ( a1 == 3 && PopPlatformAoAcCapabilityInitialized )
  {
    if ( PopPlatformAoAc )
    {
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_ACDC_POWER_SOURCE,
        (PPOWER_SETTING_CALLBACK)PopEsInStandbyAcDcCallback,
        0LL,
        0LL);
      PoRegisterPowerSettingCallback(
        0LL,
        &GUID_LOW_POWER_EPOCH,
        (PPOWER_SETTING_CALLBACK)PopEsInStandbyLowPowerEpochCallback,
        0LL,
        0LL);
      ExSubscribeWnfStateChange((__int64)&PopEsWnfSubscriptionOpportunisticCs, (__int64)&WNF_PO_OPPORTUNISTIC_CS);
      PopReleaseRwLock(&PopEsLock);
    }
  }
}
