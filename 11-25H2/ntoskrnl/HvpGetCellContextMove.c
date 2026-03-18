/*
 * XREFs of HvpGetCellContextMove @ 0x140880F68
 * Callers:
 *     HvReallocateCell @ 0x14087F5A4 (HvReallocateCell.c)
 *     HvpDoAllocateCell @ 0x140880110 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140887B34 (CmpMarkIndexDirtyInStorageType.c)
 *     CmpRemoveSubKeyFromList @ 0x140887DF8 (CmpRemoveSubKeyFromList.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x140879030 (HvpGetCellContextReinitialize.c)
 *     HvpGetBinContextMove @ 0x140880F94 (HvpGetBinContextMove.c)
 */

__int64 __fastcall HvpGetCellContextMove(_DWORD *a1, _DWORD *a2)
{
  _QWORD *v2; // r8

  *a1 = *a2;
  HvpGetBinContextMove(a1 + 1, a2 + 1, a2);
  return HvpGetCellContextReinitialize(v2);
}
