/*
 * XREFs of HvpGetCellContextReinitialize @ 0x140879880
 * Callers:
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextMove @ 0x140886D10 (HvpGetCellContextMove.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall HvpGetCellContextReinitialize(__int64 a1)
{
  return HvpGetCellContextInitialize(a1);
}
