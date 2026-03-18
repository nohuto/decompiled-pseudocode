/*
 * XREFs of PnpInitPhase0 @ 0x140C114A0
 * Callers:
 *     PpInitSystem @ 0x140C11678 (PpInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  PnpDeviceActivationTableLock.Owner = 0LL;
  PnpDeviceActivationTableLock.Contention = 0;
  PnpDeviceActivationTableLock.Event.Header.SignalState = 0;
  PnpDeviceActivationTableLock.Event.Header.WaitListHead.Blink = &PnpDeviceActivationTableLock.Event.Header.WaitListHead;
  PnpDeviceActivationTableLock.Event.Header.WaitListHead.Flink = &PnpDeviceActivationTableLock.Event.Header.WaitListHead;
  PnpDeviceReferenceTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PnpDeviceReferenceTable;
  PnpDeviceReferenceTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PnpCompareInstancePath;
  PnpDeviceReferenceTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PnpAllocateGenericTableEntry;
  PnpDeviceReferenceTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))CMFFreeFn;
  PnpDeviceActivationTableLock.Count = 1;
  LOWORD(PnpDeviceActivationTableLock.Event.Header.Lock) = 1;
  PnpDeviceActivationTableLock.Event.Header.Size = 6;
  memset_0(&PnpDeviceActivationTable, 0, sizeof(PnpDeviceActivationTable));
  PnpDeviceActivationTable.TableContext = 0LL;
  PnpDeviceActivationTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PnpDeviceActivationTable;
  result = 1;
  PnpDeviceActivationTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PnpAllocateGenericTableEntry;
  PnpDeviceActivationTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PnpCompareActivationThread;
  PnpDeviceActivationTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))CMFFreeFn;
  return result;
}
