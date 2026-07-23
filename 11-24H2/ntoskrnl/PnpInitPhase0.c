/*
 * XREFs of PnpInitPhase0 @ 0x140C24640
 * Callers:
 *     PpInitSystem @ 0x140C24784 (PpInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char PnpInitPhase0()
{
  char result; // al

  ExInitializeResourceLite2(&PnpRegistryDeviceResource, -1);
  PnpDeviceReferenceTableLock.Owner = 0LL;
  PnpDeviceReferenceTableLock.Contention = 0;
  PnpDeviceReferenceTableLock.Event.Header.SignalState = 0;
  PnpDeviceReferenceTableLock.Count = 1;
  LOWORD(PnpDeviceReferenceTableLock.Event.Header.Lock) = 1;
  PnpDeviceReferenceTableLock.Event.Header.Size = 6;
  PnpDeviceReferenceTableLock.Event.Header.WaitListHead.Blink = &PnpDeviceReferenceTableLock.Event.Header.WaitListHead;
  PnpDeviceReferenceTableLock.Event.Header.WaitListHead.Flink = &PnpDeviceReferenceTableLock.Event.Header.WaitListHead;
  memset_0(&PnpDeviceReferenceTable, 0, sizeof(PnpDeviceReferenceTable));
  PnpDeviceReferenceTable.TableContext = 0LL;
  PnpDeviceActivationTableSpinLock = 0LL;
  PnpDeviceReferenceTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PnpCompareInstancePath;
  PnpDeviceReferenceTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PnpAllocateGenericTableEntry;
  PnpDeviceReferenceTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PnpDeviceReferenceTable;
  PnpDeviceReferenceTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))CMFFreeFn;
  memset_0(&PnpDeviceActivationTable, 0, sizeof(PnpDeviceActivationTable));
  PnpDeviceActivationTable.TableContext = 0LL;
  PnpDeviceActivationTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PnpCompareActivationThread;
  result = 1;
  PnpDeviceActivationTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PnpDeviceActivationTable;
  PnpDeviceActivationTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PnpAllocateGenericTableEntryNonPaged;
  PnpDeviceActivationTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))PnpFreeGenericTableEntryNonPaged;
  return result;
}
