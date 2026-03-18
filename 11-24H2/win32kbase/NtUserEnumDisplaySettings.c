/*
 * XREFs of NtUserEnumDisplaySettings @ 0x14016C140
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x140010CB0 (EnterSharedCrit.c)
 *     ?NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1400247CC (-NtUserEnumDisplaySettingsShared@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     EtwTraceEnumDisplaySettings @ 0x1400915B8 (EtwTraceEnumDisplaySettings.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1400F50DC (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline @ 0x1401B7668 (Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline.c)
 *     DrvPrepareModeListCacheAndLeaveUserCrit @ 0x1401CB320 (DrvPrepareModeListCacheAndLeaveUserCrit.c)
 */

__int64 __fastcall NtUserEnumDisplaySettings(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        struct _devicemodeW *a3,
        int a4)
{
  __int64 v9; // rcx
  __int64 UserSessionState; // rax

  EtwTraceEnumDisplaySettings((__int64)a1, a4);
  if ( a2 )
  {
    if ( a2 >= 0xFFFFFFFD )
      return NtUserEnumDisplaySettingsShared(a1, a2, a3, a4);
  }
  else if ( (unsigned int)Feature_EnumDisplaySettings_PerfImprovements__private_IsEnabledDeviceUsageNoInline() )
  {
    EnterSharedCrit(1u, 1u);
    UserSessionState = W32GetUserSessionState(v9);
    DrvPrepareModeListCacheAndLeaveUserCrit(
      a1,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 104LL) + 80LL));
  }
  return NtUserEnumDisplaySettingsExclusive(a1, a2, a3, a4);
}
