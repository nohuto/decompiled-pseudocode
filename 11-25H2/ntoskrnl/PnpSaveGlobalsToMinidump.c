/*
 * XREFs of PnpSaveGlobalsToMinidump @ 0x1405A1CD0
 * Callers:
 *     IopAddBugcheckTriageDataFromParameters @ 0x14058F720 (IopAddBugcheckTriageDataFromParameters.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 */

char PnpSaveGlobalsToMinidump()
{
  IoAddTriageDumpDataBlock((ULONG)&PnpDeviceActionThread, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&PnpDeviceEventThread, (PVOID)8);
  IoAddTriageDumpDataBlock((ULONG)&PnpDelayedRemoveWorkerThread, (PVOID)8);
  return IoAddTriageDumpDataBlock((ULONG)&PnpDeviceCompletionQueue, (PVOID)0x50);
}
