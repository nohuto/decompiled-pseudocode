/*
 * XREFs of KiAbQueueAutoBoostDpc @ 0x140253AF0
 * Callers:
 *     KeAbProcessBaseIoPriorityChangeInternal @ 0x1402097EC (KeAbProcessBaseIoPriorityChangeInternal.c)
 *     PsBoostThreadIo @ 0x14024D950 (PsBoostThreadIo.c)
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14024E3A0 (PsBoostThreadIoQoS.c)
 *     KiAbSetMinimumThreadPriority @ 0x14024E520 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14024EA60 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14024F2F0 (KiAbCpuBoostOwners.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 *     ExpBoostIoAfterAcquire @ 0x140278960 (ExpBoostIoAfterAcquire.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiWakePriQueueWaiter @ 0x1403248F0 (KiWakePriQueueWaiter.c)
 *     ExpAcquireResourceSharedLite @ 0x140342300 (ExpAcquireResourceSharedLite.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140343AD0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsEnterPriorityRegion @ 0x1403F54C0 (PsEnterPriorityRegion.c)
 *     KeAbProcessEffectiveIoPriorityChange @ 0x14041F1A0 (KeAbProcessEffectiveIoPriorityChange.c)
 *     KiDirectSwitchThread @ 0x14042B970 (KiDirectSwitchThread.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140452644 (KiSetBasePriorityAndClearDecrement.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
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
