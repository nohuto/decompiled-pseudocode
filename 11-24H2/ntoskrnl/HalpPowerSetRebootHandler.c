/*
 * XREFs of HalpPowerSetRebootHandler @ 0x140544B00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPowerSetRebootHandler(__int64 a1)
{
  return _InterlockedExchange64(&HalpRebootHandler, a1);
}
