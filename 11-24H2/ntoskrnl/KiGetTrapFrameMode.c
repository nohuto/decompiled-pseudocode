/*
 * XREFs of KiGetTrapFrameMode @ 0x140441A00
 * Callers:
 *     KiSwInterruptDispatch @ 0x1405061B0 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
