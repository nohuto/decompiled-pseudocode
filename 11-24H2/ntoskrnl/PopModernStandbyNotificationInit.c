/*
 * XREFs of PopModernStandbyNotificationInit @ 0x140C355D0
 * Callers:
 *     PoInitSystem @ 0x140C63AE4 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PoRegisterPowerSettingCallback @ 0x140A646B0 (PoRegisterPowerSettingCallback.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A70C90 (PoUnregisterPowerSettingCallback.c)
 */

__int64 PopModernStandbyNotificationInit()
{
  qword_140F07848 = 0LL;
  PopModernStandbyStateNotify = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify);
  if ( PoRegisterPowerSettingCallback(
         0LL,
         &GUID_GLOBAL_USER_PRESENCE,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F07860) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_CONSOLE_DISPLAY_STATE,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F07868) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_LOW_POWER_EPOCH,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F07870) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F07878) < 0 )
  {
    if ( qword_140F07878 )
    {
      PoUnregisterPowerSettingCallback(qword_140F07878);
      qword_140F07878 = 0LL;
    }
    if ( qword_140F07870 )
    {
      PoUnregisterPowerSettingCallback(qword_140F07870);
      qword_140F07870 = 0LL;
    }
    if ( qword_140F07868 )
    {
      PoUnregisterPowerSettingCallback(qword_140F07868);
      qword_140F07868 = 0LL;
    }
    if ( qword_140F07860 )
    {
      PoUnregisterPowerSettingCallback(qword_140F07860);
      qword_140F07860 = 0LL;
    }
  }
  return PopReleaseRwLock(&PopModernStandbyStateNotify);
}
