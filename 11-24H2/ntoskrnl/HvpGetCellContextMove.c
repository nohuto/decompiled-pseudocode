/*
 * XREFs of HvpGetCellContextMove @ 0x140886D10
 * Callers:
 *     HvReallocateCell @ 0x14088539C (HvReallocateCell.c)
 *     HvpDoAllocateCell @ 0x140885F04 (HvpDoAllocateCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     CmpRemoveSubKeyFromList @ 0x140A13FA8 (CmpRemoveSubKeyFromList.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140A1D6C0 (CmpMarkIndexDirtyInStorageType.c)
 * Callees:
 *     HvpGetCellContextReinitialize @ 0x140879880 (HvpGetCellContextReinitialize.c)
 *     HvpGetBinContextMove @ 0x140886D3C (HvpGetBinContextMove.c)
 */

__int64 __fastcall HvpGetCellContextMove(_DWORD *a1, _DWORD *a2)
{
  __int64 v2; // r8

  *a1 = *a2;
  HvpGetBinContextMove(a1 + 1, a2 + 1, a2);
  return HvpGetCellContextReinitialize(v2);
}
