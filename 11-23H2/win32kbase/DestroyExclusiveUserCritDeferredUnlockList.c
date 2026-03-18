/*
 * XREFs of DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x1C0003D50 (NtUserInjectKeyboardInput.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     NtUserGetHDevName @ 0x1C004C950 (NtUserGetHDevName.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     LeaveCrit @ 0x1C004CFE0 (LeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B4DD0 (UserSessionSwitchEnterCrit.c)
 *     ChangeAcquireResourceType @ 0x1C00B84C0 (ChangeAcquireResourceType.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C0140470 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 *     NtUserInitializeGenericHidInjection @ 0x1C0146100 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C0146840 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0146E30 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C0147210 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0147B60 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectMouseInput @ 0x1C0148320 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0148CC0 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0149F40 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C014AEF0 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 DestroyExclusiveUserCritDeferredUnlockList()
{
  unsigned int v0; // ebx
  __int64 *v1; // rdi
  __int64 v2; // rax
  __int64 result; // rax

  v0 = 0;
  if ( gbInDestroyExclusiveUserCritDeferredUnlockList )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4262LL);
  gbInDestroyExclusiveUserCritDeferredUnlockList = 1;
  if ( gphePrimaryDestroyTarget )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4265LL);
  v1 = (__int64 *)gpExclusiveUserCritDeferredUnlockListHead;
  if ( gpExclusiveUserCritDeferredUnlockListHead )
  {
    do
    {
      gpExclusiveUserCritDeferredUnlockListHead = (struct tagKERNELHANDLETABLEENTRY *)v1[2];
      v2 = *v1;
      v1[2] = 0LL;
      if ( !*(_DWORD *)(v2 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4278LL);
      if ( *(_DWORD *)(*v1 + 8) > 1u )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4289LL);
      result = HMUnlockObject(*v1);
      v1 = (__int64 *)gpExclusiveUserCritDeferredUnlockListHead;
      ++v0;
    }
    while ( gpExclusiveUserCritDeferredUnlockListHead );
    if ( v0 > gcSecondaryDestroyTargets )
      result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4305LL);
  }
  if ( v0 != gcDeferredDestroyTargets )
    result = MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 4306LL);
  gcSecondaryDestroyTargets = 0;
  gcDeferredDestroyTargets = 0;
  gbInDestroyExclusiveUserCritDeferredUnlockList = 0;
  return result;
}
