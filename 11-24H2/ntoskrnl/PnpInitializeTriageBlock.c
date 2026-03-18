/*
 * XREFs of PnpInitializeTriageBlock @ 0x1405A53C8
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x140592F50 (IopAddBugcheckTriageDataFromParameters.c)
 *     PnpWatchdogBugcheck @ 0x1405A5494 (PnpWatchdogBugcheck.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

ULONG_PTR __fastcall PnpInitializeTriageBlock(_DWORD *a1)
{
  ULONG_PTR result; // rax

  memset_0(a1, 0, 0x50uLL);
  *a1 = 1347309655;
  a1[1] = 1;
  *((_QWORD *)a1 + 2) = *(_QWORD *)&PnpDeviceEventThread;
  *((_QWORD *)a1 + 3) = *(_QWORD *)&PnpDeviceActionThread;
  *((_QWORD *)a1 + 4) = *(_QWORD *)&PnpDelayedRemoveWorkerThread;
  *((_QWORD *)a1 + 5) = &PnpDeviceCompletionQueue;
  result = ExWorkerQueue;
  *((_QWORD *)a1 + 6) = ExWorkerQueue;
  return result;
}
