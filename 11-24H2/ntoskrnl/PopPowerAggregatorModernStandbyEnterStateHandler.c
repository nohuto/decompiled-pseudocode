/*
 * XREFs of PopPowerAggregatorModernStandbyEnterStateHandler @ 0x1407598D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x1409025F8 (PopPowerAggregatorDisengageModernStandby.c)
 */

__int64 __fastcall PopPowerAggregatorModernStandbyEnterStateHandler(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 72) )
  {
    PopPowerAggregatorDisengageModernStandby();
  }
  else if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(a1 + 32) && !*(_BYTE *)(a1 + 88) )
  {
    *(_BYTE *)(a1 + 88) = 1;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
  }
  return 0LL;
}
