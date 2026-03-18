/*
 * XREFs of HvpGetCellContextReinitialize @ 0x140875550
 * Callers:
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextMove @ 0x140882E60 (HvpGetCellContextMove.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall HvpGetCellContextReinitialize(__int64 a1)
{
  return HvpGetCellContextInitialize(a1);
}
