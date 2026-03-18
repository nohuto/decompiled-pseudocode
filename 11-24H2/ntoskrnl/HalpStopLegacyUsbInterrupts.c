/*
 * XREFs of HalpStopLegacyUsbInterrupts @ 0x140B4B210
 * Callers:
 *     <none>
 * Callees:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x140B505F0 (HalpStopLegacyUsbInterruptsInternal.c)
 */

__int64 __fastcall HalpStopLegacyUsbInterrupts(int a1)
{
  __int64 result; // rax

  if ( a1 < 5 )
    return HalpStopLegacyUsbInterruptsInternal();
  return result;
}
