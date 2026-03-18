/*
 * XREFs of HvpGetBinContextMove @ 0x140880F94
 * Callers:
 *     HvpGetCellContextMove @ 0x140880F68 (HvpGetCellContextMove.c)
 * Callees:
 *     HvpGetBinContextInitialize @ 0x140BA99C0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpGetBinContextMove(_WORD *a1, _WORD *a2)
{
  *a1 = *a2;
  return HvpGetBinContextInitialize(a2);
}
