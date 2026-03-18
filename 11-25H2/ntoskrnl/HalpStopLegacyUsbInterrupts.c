/*
 * XREFs of HalpStopLegacyUsbInterrupts @ 0x140B3B210
 * Callers:
 *     <none>
 * Callees:
 *     HalpStopLegacyUsbInterruptsInternal @ 0x140B405F0 (HalpStopLegacyUsbInterruptsInternal.c)
 */

__int64 __fastcall HalpStopLegacyUsbInterrupts(int a1)
{
  __int64 result; // rax

  if ( a1 < 5 )
    return HalpStopLegacyUsbInterruptsInternal();
  return result;
}
