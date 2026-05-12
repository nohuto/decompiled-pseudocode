/*
 * XREFs of RaidReleasePortData @ 0x14000A0FC
 * Callers:
 *     RaUnitGetInstances @ 0x1400097E8 (RaUnitGetInstances.c)
 *     StorEtwEnableCallback @ 0x140009BE0 (StorEtwEnableCallback.c)
 *     StorpLogStatistics @ 0x14003FE88 (StorpLogStatistics.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x14006ABFC (RemoveNvmeIceInterfaceFromList.c)
 *     StorEtwResetCounters @ 0x1400AA828 (StorEtwResetCounters.c)
 *     RaDeleteDriver @ 0x140181190 (RaDeleteDriver.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidReleasePortData(void *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
  {
    RaidpPortData = 0LL;
    ExFreePoolWithTag(a1, 0x44506152u);
  }
}
