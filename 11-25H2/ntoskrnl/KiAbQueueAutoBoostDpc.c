/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x1402E5E60
 * Callers:
 *     KiSetBasePriorityAndClearDecrement @ 0x14020D7F0 (KiSetBasePriorityAndClearDecrement.c)
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x14020E09C (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140293DB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExpAcquireResourceSharedLite @ 0x1402955C0 (ExpAcquireResourceSharedLite.c)
 *     PsBoostThreadIoQoS @ 0x1402E4A70 (PsBoostThreadIoQoS.c)
 *     KiAbIoBoostOwners @ 0x1402E61E0 (KiAbIoBoostOwners.c)
 *     KiWakePriQueueWaiter @ 0x1402E6BE0 (KiWakePriQueueWaiter.c)
 *     KiAbCpuBoostOwners @ 0x1402E72F0 (KiAbCpuBoostOwners.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402E9E70 (KiAbSetMinimumThreadPriority.c)
 *     PsBoostThreadIo @ 0x1402EA3A0 (PsBoostThreadIo.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140325DB0 (ExpBoostIoAfterAcquire.c)
 *     PsEnterPriorityRegion @ 0x1403F0DA0 (PsEnterPriorityRegion.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140429870 (KeAbProcessEffectiveIoPriorityChange.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
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
