/*
 * XREFs of HvpGetCellContextMove @ 0x140882E60
 * Callers:
 *     HvReallocateCell @ 0x1408814EC (HvReallocateCell.c)
 *     HvpDoAllocateCell @ 0x140882054 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x1408822D8 (HvAllocateCell.c)
 *     CmpRemoveSubKeyFromList @ 0x140A1EEA8 (CmpRemoveSubKeyFromList.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140A28CFC (CmpMarkIndexDirtyInStorageType.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x140875550 (HvpGetCellContextReinitialize.c)
 *     HvpGetBinContextMove @ 0x140882E8C (HvpGetBinContextMove.c)
 */

__int64 __fastcall HvpGetCellContextMove(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // r8

  *a1 = *a2;
  HvpGetBinContextMove(a1 + 1, a2 + 1, a2);
  return HvpGetCellContextReinitialize(v2);
}
