/*
 * XREFs of PnpBugcheckPowerTimeout @ 0x1405A2924
 * Callers:
 *     PnpPowerStateTransitionWatchdogCallback @ 0x1405A2370 (PnpPowerStateTransitionWatchdogCallback.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140B61810 (PopBuildDeviceNotifyListWatchdog.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PnpGetCurrentlyActiveWorkerThread @ 0x1405A2990 (PnpGetCurrentlyActiveWorkerThread.c)
 */

void __fastcall __noreturn PnpBugcheckPowerTimeout(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // ebx
  ULONG_PTR CurrentlyActiveWorkerThread; // rax
  ULONG_PTR BugCheckParameter4[4]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v4[3]; // [rsp+50h] [rbp-18h] BYREF

  v4[0] = 0LL;
  BugCheckParameter4[0] = 229377LL;
  BugCheckParameter4[1] = (ULONG_PTR)&PnpDeviceCompletionQueue;
  BugCheckParameter4[2] = ExWorkerQueue;
  v1 = BugCheckParameter2;
  BugCheckParameter4[3] = IoWorkerQueue;
  CurrentlyActiveWorkerThread = PnpGetCurrentlyActiveWorkerThread(v4);
  KeBugCheckEx(0x9Fu, 4uLL, v1, CurrentlyActiveWorkerThread, (ULONG_PTR)BugCheckParameter4);
}
