/*
 * XREFs of EtwReferenceSpinLockCounters @ 0x1407AD314
 * Callers:
 *     KiSynchCounterSetCallback @ 0x140A41380 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A58E70 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14085C8B8 (EtwpUpdateGlobalGroupMasks.c)
 */

LONG EtwReferenceSpinLockCounters()
{
  __int64 v0; // rcx

  KeWaitForSingleObject(&EtwpCrimsonMaskMutex, Executive, 0, 0, 0LL);
  if ( ++EtwpSpinLockCountersCount == 1 )
  {
    v0 = EtwpHostSiloState;
    *(_DWORD *)(EtwpHostSiloState + 4816) |= 0x200000u;
    EtwpUpdateGlobalGroupMasks(v0, 0LL, 8LL);
  }
  return KeReleaseMutex(&EtwpCrimsonMaskMutex, 0);
}
