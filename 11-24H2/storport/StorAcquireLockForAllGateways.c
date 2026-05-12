/*
 * XREFs of StorAcquireLockForAllGateways @ 0x1400A6238
 * Callers:
 *     RaidResumeAdapterQueue @ 0x14000FA30 (RaidResumeAdapterQueue.c)
 *     StorPortAdapterActiveCondition @ 0x140024390 (StorPortAdapterActiveCondition.c)
 *     StorResumeIoGateway @ 0x140028340 (StorResumeIoGateway.c)
 * Callees:
 *     <none>
 */

char __fastcall StorAcquireLockForAllGateways(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 6072) )
    return 0;
  if ( *(_DWORD *)(a1 + 968) )
  {
    do
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(*(_QWORD *)(a1 + 960) + 320LL * v1),
        (PKLOCK_QUEUE_HANDLE)(*(_QWORD *)(a1 + 6072) + 24LL * v1));
      ++v1;
    }
    while ( v1 < *(_DWORD *)(a1 + 968) );
  }
  return 1;
}
