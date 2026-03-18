/*
 * XREFs of KiGetTrapFrameMode @ 0x14044B6C0
 * Callers:
 *     KiSwInterruptDispatch @ 0x140506170 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

char __fastcall KiGetTrapFrameMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 368) & 1;
}
