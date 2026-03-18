/*
 * XREFs of PopModernStandbyNotificationInit @ 0x140C33490
 * Callers:
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PoRegisterPowerSettingCallback @ 0x140A6B150 (PoRegisterPowerSettingCallback.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A76B70 (PoUnregisterPowerSettingCallback.c)
 */

__int64 PopModernStandbyNotificationInit()
{
  qword_140F07548 = 0LL;
  PopModernStandbyStateNotify = 0LL;
  PopAcquireRwLockExclusive(&PopModernStandbyStateNotify);
  if ( PoRegisterPowerSettingCallback(
         0LL,
         &GUID_GLOBAL_USER_PRESENCE,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F07560) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_CONSOLE_DISPLAY_STATE,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F07568) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_LOW_POWER_EPOCH,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F07570) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F07578) < 0 )
  {
    if ( qword_140F07578 )
    {
      PoUnregisterPowerSettingCallback(qword_140F07578);
      qword_140F07578 = 0LL;
    }
    if ( qword_140F07570 )
    {
      PoUnregisterPowerSettingCallback(qword_140F07570);
      qword_140F07570 = 0LL;
    }
    if ( qword_140F07568 )
    {
      PoUnregisterPowerSettingCallback(qword_140F07568);
      qword_140F07568 = 0LL;
    }
    if ( qword_140F07560 )
    {
      PoUnregisterPowerSettingCallback(qword_140F07560);
      qword_140F07560 = 0LL;
    }
  }
  return PopReleaseRwLock((signed __int64 *)&PopModernStandbyStateNotify);
}
