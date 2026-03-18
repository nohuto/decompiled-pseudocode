/*
 * XREFs of CmpWorkItemRundown @ 0x1406EBF28
 * Callers:
 *     CmFcManagerUnregisterFeatureUsageProvider @ 0x1406EBE28 (CmFcManagerUnregisterFeatureUsageProvider.c)
 *     CmUnregisterMachineHiveLoadedNotification @ 0x1407C25C0 (CmUnregisterMachineHiveLoadedNotification.c)
 *     CmFcManagerUnregisterFeatureConfigurationChangeNotification @ 0x1407D4D7C (CmFcManagerUnregisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x14036DCA0 (ExWaitForRundownProtectionRelease.c)
 */

__int64 __fastcall CmpWorkItemRundown(struct _EX_RUNDOWN_REF *a1)
{
  volatile __int64 *v1; // rbx

  v1 = (volatile __int64 *)&a1[4];
  ExWaitForRundownProtectionRelease(a1 + 4);
  return _InterlockedExchange64(v1, 1LL);
}
