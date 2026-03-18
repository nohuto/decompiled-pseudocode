/*
 * XREFs of PnpInitPhase0 @ 0x140C22600
 * Callers:
 *     PpInitSystem @ 0x140C22754 (PpInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline @ 0x14059F458 (Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     PnpInitializeDeviceActivationTableV1 @ 0x1405A9340 (PnpInitializeDeviceActivationTableV1.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

char PnpInitPhase0()
{
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
  PnpDeviceReferenceTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PnpCompareInstancePath;
  PnpDeviceReferenceTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PnpAllocateGenericTableEntry;
  PnpDeviceReferenceTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))CMFFreeFn;
  PnpDeviceReferenceTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PnpDeviceReferenceTable;
  if ( (unsigned int)Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline() )
  {
    PnpDeviceActivationTableSpinLock = 0LL;
    memset_0(&PnpDeviceActivationTable, 0, sizeof(PnpDeviceActivationTable));
    PnpDeviceActivationTable.TableContext = 0LL;
    PnpDeviceActivationTable.CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))PnpCompareActivationThreadV2;
    PnpDeviceActivationTable.AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))PnpAllocateGenericTableEntryNonPaged;
    PnpDeviceActivationTable.FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))PnpFreeGenericTableEntryNonPaged;
    PnpDeviceActivationTable.BalancedRoot.Parent = (_RTL_BALANCED_LINKS *)&PnpDeviceActivationTable;
  }
  else
  {
    PnpInitializeDeviceActivationTableV1();
  }
  return 1;
}
