/*
 * XREFs of EtwReferenceSpinLockCounters @ 0x14079DA74
 * Callers:
 *     KiSynchCounterSetCallback @ 0x140A47490 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A5EA90 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1408DBCB4 (EtwpUpdateGlobalGroupMasks.c)
 */

LONG EtwReferenceSpinLockCounters()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( ++EtwpSpinLockCountersCount == 1 )
  {
    v0 = EtwpHostSiloState;
    *(_DWORD *)(EtwpHostSiloState + 4544) |= 0x200000u;
    EtwpUpdateGlobalGroupMasks(v0, 0LL, 8LL);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}
