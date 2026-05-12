/*
 * XREFs of RaidIsDeviceQueueLocked @ 0x140055F18
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1401BC368 (RaUnitStartDeviceIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidIsDeviceQueueLocked(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 37);
}
