/*
 * XREFs of KiWaitForSignal @ 0x1405BA5B0
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x1402D6990 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14040D57C (KxWaitForLockOwnerShipWithIrql.c)
 *     KiHaltOnAddress @ 0x1404FA2B8 (KiHaltOnAddress.c)
 * Callees:
 *     HalProcessorIdle @ 0x1406A5AA0 (HalProcessorIdle.c)
 */

__int64 __fastcall KiWaitForSignal(__int64 a1)
{
  return HalProcessorIdle(a1);
}
