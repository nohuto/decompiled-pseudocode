/*
 * XREFs of PnpBugcheckPowerTimeout @ 0x1405A59E4
 * Callers:
 *     PnpPowerStateTransitionWatchdogCallback @ 0x1405A5430 (PnpPowerStateTransitionWatchdogCallback.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140B5F790 (PopBuildDeviceNotifyListWatchdog.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline @ 0x14059F458 (Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     PnpGetCurrentlyActiveWorkerThreadV1 @ 0x1405A5A88 (PnpGetCurrentlyActiveWorkerThreadV1.c)
 *     PnpGetCurrentlyActiveWorkerThreadV2 @ 0x1405A5AB0 (PnpGetCurrentlyActiveWorkerThreadV2.c)
 *     PnpActivatingDeviceNodeFromThreadV1 @ 0x140732FE0 (PnpActivatingDeviceNodeFromThreadV1.c)
 */

void __fastcall __noreturn PnpBugcheckPowerTimeout(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR CurrentlyActiveWorkerThreadV1; // rbx
  ULONG_PTR BugCheckParameter4[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4[3]; // [rsp+50h] [rbp-18h] BYREF

  v1 = (unsigned int)BugCheckParameter2;
  CurrentlyActiveWorkerThreadV1 = 0LL;
  if ( !(unsigned int)Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline() )
    CurrentlyActiveWorkerThreadV1 = PnpGetCurrentlyActiveWorkerThreadV1();
  v4[0] = 0LL;
  BugCheckParameter4[2] = ExWorkerQueue;
  BugCheckParameter4[3] = IoWorkerQueue;
  BugCheckParameter4[0] = 229377LL;
  BugCheckParameter4[1] = (ULONG_PTR)&PnpDeviceCompletionQueue;
  if ( (unsigned int)Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline() )
    CurrentlyActiveWorkerThreadV1 = PnpGetCurrentlyActiveWorkerThreadV2(v4);
  else
    v4[0] = PnpActivatingDeviceNodeFromThreadV1(CurrentlyActiveWorkerThreadV1);
  KeBugCheckEx(0x9Fu, 4uLL, v1, CurrentlyActiveWorkerThreadV1, (ULONG_PTR)BugCheckParameter4);
}
