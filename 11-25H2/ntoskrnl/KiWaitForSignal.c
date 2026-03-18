/*
 * XREFs of KiWaitForSignal @ 0x1405B678C
 * Callers:
 *     KxWaitForLockOwnerShip @ 0x140301110 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x14041FAB0 (KxWaitForLockOwnerShipWithIrql.c)
 *     KiHaltOnAddress @ 0x1404F7BE4 (KiHaltOnAddress.c)
 * Callees:
 *     HalProcessorIdle @ 0x14069A870 (HalProcessorIdle.c)
 */

__int64 __fastcall KiWaitForSignal(__int64 a1)
{
  return HalProcessorIdle(a1);
}
