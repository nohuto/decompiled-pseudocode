/*
 * XREFs of HvpGetBinContextMove @ 0x140886D3C
 * Callers:
 *     HvpGetCellContextMove @ 0x140886D10 (HvpGetCellContextMove.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpGetBinContextMove(_WORD *a1, _WORD *a2)
{
  *a1 = *a2;
  return HvpGetBinContextInitialize(a2);
}
