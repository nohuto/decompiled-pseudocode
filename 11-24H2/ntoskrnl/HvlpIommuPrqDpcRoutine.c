/*
 * XREFs of HvlpIommuPrqDpcRoutine @ 0x14058AFE0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 */

void __fastcall HvlpIommuPrqDpcRoutine(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 4) = 3;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 72), HyperCriticalWorkQueue);
}
