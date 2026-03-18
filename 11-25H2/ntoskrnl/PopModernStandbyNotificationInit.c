/*
 * XREFs of PopModernStandbyNotificationInit @ 0x140C2227C
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140204578 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140431E64 (PopAcquireRwLockExclusive.c)
 *     PoRegisterPowerSettingCallback @ 0x140A686B0 (PoRegisterPowerSettingCallback.c)
 *     PoUnregisterPowerSettingCallback @ 0x140A74AA0 (PoUnregisterPowerSettingCallback.c)
 */

__int64 PopModernStandbyNotificationInit()
{
  qword_140F06EA8 = 0LL;
  PopModernStandbyStateNotify = 0LL;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify);
  if ( PoRegisterPowerSettingCallback(
         0LL,
         &GUID_GLOBAL_USER_PRESENCE,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F06EC0) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_CONSOLE_DISPLAY_STATE,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F06EC8) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_LOW_POWER_EPOCH,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F06ED0) < 0
    || PoRegisterPowerSettingCallback(
         0LL,
         &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
         (PPOWER_SETTING_CALLBACK)PopModernStandbyNotificationCallback,
         0LL,
         &qword_140F06ED8) < 0 )
  {
    if ( qword_140F06ED8 )
    {
      PoUnregisterPowerSettingCallback(qword_140F06ED8);
      qword_140F06ED8 = 0LL;
    }
    if ( qword_140F06ED0 )
    {
      PoUnregisterPowerSettingCallback(qword_140F06ED0);
      qword_140F06ED0 = 0LL;
    }
    if ( qword_140F06EC8 )
    {
      PoUnregisterPowerSettingCallback(qword_140F06EC8);
      qword_140F06EC8 = 0LL;
    }
    if ( qword_140F06EC0 )
    {
      PoUnregisterPowerSettingCallback(qword_140F06EC0);
      qword_140F06EC0 = 0LL;
    }
  }
  return PopReleaseRwLock(&PopModernStandbyStateNotify);
}
