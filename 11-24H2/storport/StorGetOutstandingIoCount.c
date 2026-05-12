/*
 * XREFs of StorGetOutstandingIoCount @ 0x140055E34
 * Callers:
 *     RaidAdapterResetBus @ 0x14002F998 (RaidAdapterResetBus.c)
 *     StorRemoveIoGatewayItem @ 0x140050F10 (StorRemoveIoGatewayItem.c)
 *     RaidAdapterReclaimIoResourceTimerDpcRoutine @ 0x14005D9C0 (RaidAdapterReclaimIoResourceTimerDpcRoutine.c)
 *     RaidAdapterResetBusNoLock @ 0x14005E034 (RaidAdapterResetBusNoLock.c)
 *     StorSetAllIoGatewayBusy @ 0x1400A6F30 (StorSetAllIoGatewayBusy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorGetOutstandingIoCount(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned int i; // r10d

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 968); ++i )
    v1 += _InterlockedCompareExchange((volatile signed __int32 *)(320LL * i + *(_QWORD *)(a1 + 960) + 192), 0, 0);
  return v1;
}
