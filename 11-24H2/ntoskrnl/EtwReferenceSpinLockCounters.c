/*
 * XREFs of EtwReferenceSpinLockCounters @ 0x1407ACE44
 * Callers:
 *     KiSynchCounterSetCallback @ 0x140A4A660 (KiSynchCounterSetCallback.c)
 *     KiSynchNumaCounterSetCallback @ 0x140A60920 (KiSynchNumaCounterSetCallback.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1408EB088 (EtwpUpdateGlobalGroupMasks.c)
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
