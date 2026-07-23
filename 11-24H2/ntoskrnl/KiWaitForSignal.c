/*
 * XREFs of KiWaitForSignal @ 0x1405B7BE0
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x1404057CC (KxWaitForLockOwnerShipWithIrql.c)
 *     KiHaltOnAddress @ 0x1404F7B98 (KiHaltOnAddress.c)
 * Callees:
 *     HalProcessorIdle @ 0x1406A6AA0 (HalProcessorIdle.c)
 */

__int64 __fastcall KiWaitForSignal(__int64 a1)
{
  return HalProcessorIdle(a1);
}
