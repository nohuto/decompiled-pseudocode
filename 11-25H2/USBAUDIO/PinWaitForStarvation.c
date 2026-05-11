/*
 * XREFs of PinWaitForStarvation @ 0x14000BDE4
 * Callers:
 *     USBHwDataPipeReset @ 0x14002D70C (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x14003A540 (USBMidiOutStateChangePin.c)
 * Callees:
 *     PinWaitForStarvationTimeout @ 0x1400052B0 (PinWaitForStarvationTimeout.c)
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}
