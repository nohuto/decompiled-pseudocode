/*
 * XREFs of ?IsStackedPriorityToastsEnabled@ToastSettingsHelper@@SA_NXZ @ 0x1802B3370
 * Callers:
 *     ?PositionView@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801E6388 (-PositionView@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ @ 0x1801E7C28 (-IsStackedPriorityToastsDisabledViaRegistryOverride@ToastSettingsHelper@@SA_NXZ.c)
 *     ?IsWindowsLite@ToastSettingsHelper@@CA_NXZ @ 0x180384290 (-IsWindowsLite@ToastSettingsHelper@@CA_NXZ.c)
 */

char ToastSettingsHelper::IsStackedPriorityToastsEnabled(void)
{
  char v0; // di
  bool v1; // bl
  int v3; // [rsp+30h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(&ToastSettingsHelper::m_platformCheckLock);
  v0 = 1;
  if ( !ToastSettingsHelper::m_platformCached )
  {
    if ( ToastSettingsHelper::IsWindowsLite() || (v3 = 0, RtlGetDeviceFamilyInfoEnum(0LL, &v3, 0LL), v3 == 10) )
      ToastSettingsHelper::m_isDesktopPlatform = 0;
    ToastSettingsHelper::m_platformCached = 1;
  }
  v1 = ToastSettingsHelper::m_isDesktopPlatform;
  ReleaseSRWLockExclusive(&ToastSettingsHelper::m_platformCheckLock);
  if ( !v1 || ToastSettingsHelper::IsStackedPriorityToastsDisabledViaRegistryOverride() )
    return 0;
  return v0;
}
