/*
 * XREFs of RiIsDeviceQueueBusy @ 0x1400146C4
 * Callers:
 *     RaidStallDeviceQueue @ 0x1400131FC (RaidStallDeviceQueue.c)
 *     RaidInsertDeviceQueue @ 0x140013CA0 (RaidInsertDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x140014570 (RiGetEnqueueReason.c)
 *     RaUnitSetUnresponsiveAttribute @ 0x140098540 (RaUnitSetUnresponsiveAttribute.c)
 * Callees:
 *     <none>
 */

bool __fastcall RiIsDeviceQueueBusy(__int64 a1)
{
  return *(_DWORD *)(a1 + 28) || ((*(__int64 *)(a1 + 88) >> 2) & 0x3FFFFFFF) >= *(_DWORD *)(a1 + 4);
}
