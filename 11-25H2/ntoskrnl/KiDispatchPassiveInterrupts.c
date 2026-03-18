/*
 * XREFs of KiDispatchPassiveInterrupts @ 0x140205790
 * Callers:
 *     KiScanInterruptObjectList @ 0x1406A18B0 (KiScanInterruptObjectList.c)
 * Callees:
 *     IoProcessPassiveInterrupts @ 0x140206710 (IoProcessPassiveInterrupts.c)
 */

__int64 __fastcall KiDispatchPassiveInterrupts(__int64 a1)
{
  return IoProcessPassiveInterrupts(*(unsigned int *)(a1 + 88));
}
