/*
 * XREFs of PnpBugcheckPowerTimeout @ 0x1405A2248
 * Callers:
 *     PnpPowerStateTransitionWatchdogCallback @ 0x1405A1CC0 (PnpPowerStateTransitionWatchdogCallback.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140B4F650 (PopBuildDeviceNotifyListWatchdog.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PnpActivatingDeviceNodeFromThread @ 0x140726DD0 (PnpActivatingDeviceNodeFromThread.c)
 */

void __fastcall __noreturn PnpBugcheckPowerTimeout(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  ULONG_PTR v2; // rdi
  ULONG_PTR BugCheckParameter4[7]; // [rsp+30h] [rbp-38h] BYREF

  v1 = PnpDelayedRemoveWorkerThread;
  v2 = (unsigned int)BugCheckParameter2;
  if ( !PnpDelayedRemoveWorkerThread )
  {
    v1 = *(_QWORD *)&PnpDeviceEventThread;
    if ( !*(_QWORD *)&PnpDeviceEventThread )
      v1 = *(_QWORD *)&PnpDeviceActionThread;
  }
  BugCheckParameter4[1] = (ULONG_PTR)&PnpDeviceCompletionQueue;
  BugCheckParameter4[2] = ExWorkerQueue;
  BugCheckParameter4[3] = IoWorkerQueue;
  BugCheckParameter4[0] = 229377LL;
  BugCheckParameter4[4] = PnpActivatingDeviceNodeFromThread(v1);
  KeBugCheckEx(0x9Fu, 4uLL, v2, v1, (ULONG_PTR)BugCheckParameter4);
}
