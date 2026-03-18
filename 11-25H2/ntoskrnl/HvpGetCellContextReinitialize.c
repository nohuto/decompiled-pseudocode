/*
 * XREFs of HvpGetCellContextReinitialize @ 0x140879030
 * Callers:
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextMove @ 0x140880F68 (HvpGetCellContextMove.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 * Callees:
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall HvpGetCellContextReinitialize(_QWORD *a1)
{
  return HvpGetCellContextInitialize(a1);
}
