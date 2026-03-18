/*
 * XREFs of CmpWorkItemRundown @ 0x1406F778C
 * Callers:
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x1406F768C (CmFcManagerUnregisterFeatureUsageProvider.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x1407D1D00 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1407E465C (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall CmpWorkItemRundown(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
