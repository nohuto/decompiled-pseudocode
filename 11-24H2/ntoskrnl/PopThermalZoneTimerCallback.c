/*
 * XREFs of PopThermalZoneTimerCallback @ 0x1404089A0
 * Callers:
 *     <none>
 * Callees:
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 */

BOOLEAN __fastcall PopThermalZoneTimerCallback(__int64 a1, __int64 a2)
{
  return IoCancelIrp(*(PIRP *)(a2 + 56));
}
