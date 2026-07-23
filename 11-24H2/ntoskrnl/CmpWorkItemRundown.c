/*
 * XREFs of CmpWorkItemRundown @ 0x1406F578C
 * Callers:
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x1406F568C (CmFcManagerUnregisterFeatureUsageProvider.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x1407D21F0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1407E4BAC (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall CmpWorkItemRundown(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
