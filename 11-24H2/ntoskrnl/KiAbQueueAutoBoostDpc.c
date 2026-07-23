/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x140284100
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x14022DEF0 (ExpBoostIoAfterAcquire.c)
 *     PsBoostThreadIo @ 0x14027DF60 (PsBoostThreadIo.c)
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14027E9B0 (PsBoostThreadIoQoS.c)
 *     KiAbSetMinimumThreadPriority @ 0x14027EB30 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14027F070 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14027F900 (KiAbCpuBoostOwners.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     ExpAcquireResourceSharedLite @ 0x1403217E0 (ExpAcquireResourceSharedLite.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140322FB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x140330DCC (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     PsEnterPriorityRegion @ 0x1403EB900 (PsEnterPriorityRegion.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140414EE0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiDirectSwitchThread @ 0x14041E720 (KiDirectSwitchThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x1404476F4 (KiSetBasePriorityAndClearDecrement.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 */

BOOLEAN __fastcall KiAbQueueAutoBoostDpc(struct _KDPC *SystemArgument1)
{
  BOOLEAN result; // al

  if ( !SystemArgument1[582].DeferredContext )
  {
    result = KeInsertQueueDpc(SystemArgument1 + 582, SystemArgument1, 0LL);
    SystemArgument1[582].DeferredContext = (PVOID)1;
  }
  return result;
}
