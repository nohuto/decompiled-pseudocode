/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x1403BF220
 * Callers:
 *     KiScanInterruptObjectList @ 0x1406ACB80 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x1403BFCA4 (IoProcessPassiveInterrupts.c)
 */

__int64 __fastcall KiDispatchPassiveInterrupts(__int64 a1)
{
  return IoProcessPassiveInterrupts(*(unsigned int *)(a1 + 88));
}
