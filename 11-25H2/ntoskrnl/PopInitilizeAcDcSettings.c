/*
 * XREFs of PopInitilizeAcDcSettings @ 0x1404765A0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140AC1ED8 (PopBatteryApplyCompositeState.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     PopSetNotificationWork @ 0x140476948 (PopSetNotificationWork.c)
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140964F00 (PopFindPowerSettingConfiguration.c)
 */

void PopInitilizeAcDcSettings()
{
  char v0; // bl
  _DWORD *PowerSettingConfiguration; // rax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v0 = 0;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL, 0LL, 4LL, &v2);
  v2 = 1;
  PopSetPowerSettingValue(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL, 1LL, 4LL, &v2);
  ExAcquireFastMutex(&PopSettingLock);
  PowerSettingConfiguration = (_DWORD *)PopFindPowerSettingConfiguration(&GUID_ACDC_POWER_SOURCE, 0xFFFFFFFFLL);
  if ( PowerSettingConfiguration[14] || PowerSettingConfiguration[15] )
  {
    PowerSettingConfiguration[13] |= 1u;
    v0 = 1;
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  if ( (unsigned int)PopOsInitPhase >= 3 )
  {
    if ( v0 )
      PopSetNotificationWork(128LL);
    PopSetNotificationWork(32LL);
  }
}
