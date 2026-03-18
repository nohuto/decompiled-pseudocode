/*
 * XREFs of PnpInitializeDeviceActivationTableV1 @ 0x1405A9340
 * Callers:
 *     PnpInitPhase0 @ 0x140C22600 (PnpInitPhase0.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void *PnpInitializeDeviceActivationTableV1()
{
  void *result; // rax

  PnpDeviceActivationTableLock.Owner = 0LL;
  PnpDeviceActivationTableLock.Contention = 0;
  PnpDeviceActivationTableLock.Event.Header.SignalState = 0;
  PnpDeviceActivationTableLock.Count = 1;
  LOWORD(PnpDeviceActivationTableLock.Event.Header.Lock) = 1;
  PnpDeviceActivationTableLock.Event.Header.Size = 6;
  PnpDeviceActivationTableLock.Event.Header.WaitListHead.Blink = &PnpDeviceActivationTableLock.Event.Header.WaitListHead;
  PnpDeviceActivationTableLock.Event.Header.WaitListHead.Flink = &PnpDeviceActivationTableLock.Event.Header.WaitListHead;
  memset_0(&PnpDeviceActivationTable, 0, sizeof(PnpDeviceActivationTable));
  PnpDeviceActivationTable.TableContext = 0LL;
  PnpDeviceActivationTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PnpCompareActivationThreadV1;
  PnpDeviceActivationTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PnpAllocateGenericTableEntry;
  result = &CMFFreeFn;
  PnpDeviceActivationTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))&CMFFreeFn;
  PnpDeviceActivationTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PnpDeviceActivationTable;
  return result;
}
