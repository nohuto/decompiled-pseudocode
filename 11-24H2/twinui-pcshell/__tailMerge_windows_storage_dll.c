/*
 * XREFs of __tailMerge_windows_storage_dll @ 0x1802D9F6A
 * Callers:
 *     __imp_load_SHExtCoCreateInstanceString @ 0x1802D9FE9 (__imp_load_SHExtCoCreateInstanceString.c)
 *     __imp_load_SHGetStockIconInfo @ 0x1802D9FFB (__imp_load_SHGetStockIconInfo.c)
 *     __imp_load_DetermineFolderDestinationParentAppID @ 0x1802DA00D (__imp_load_DetermineFolderDestinationParentAppID.c)
 *     __imp_load_SHBindToFolderIDListParentEx @ 0x1802DA02B (__imp_load_SHBindToFolderIDListParentEx.c)
 *     __imp_load_SHBindToParent @ 0x1802DA049 (__imp_load_SHBindToParent.c)
 *     __imp_load_SHGetKnownFolderIDList @ 0x1802DA05B (__imp_load_SHGetKnownFolderIDList.c)
 *     __imp_load_ILIsParent @ 0x1802DA06D (__imp_load_ILIsParent.c)
 *     __imp_load_ILGetSize @ 0x1802DA07F (__imp_load_ILGetSize.c)
 *     __imp_load_SHBindToObject @ 0x1802DA091 (__imp_load_SHBindToObject.c)
 *     __imp_load_ILCombine @ 0x1802DA0AF (__imp_load_ILCombine.c)
 *     __imp_load_DragQueryFileW @ 0x1802DA0C1 (__imp_load_DragQueryFileW.c)
 *     __imp_load_PathComparePaths @ 0x1802DA0D3 (__imp_load_PathComparePaths.c)
 *     __imp_load_IsProcessAnExplorer @ 0x1802DA0E5 (__imp_load_IsProcessAnExplorer.c)
 *     __imp_load_SHLogILFromFSIL @ 0x1802DA0F7 (__imp_load_SHLogILFromFSIL.c)
 *     __imp_load_ILIsEqual @ 0x1802DA109 (__imp_load_ILIsEqual.c)
 *     __imp_load_SHRemoveLocalizedName @ 0x1802DA11B (__imp_load_SHRemoveLocalizedName.c)
 *     __imp_load_SHGetPathFromIDListW @ 0x1802DA139 (__imp_load_SHGetPathFromIDListW.c)
 *     __imp_load_PathYetAnotherMakeUniqueName @ 0x1802DA14B (__imp_load_PathYetAnotherMakeUniqueName.c)
 *     __imp_load_SHILCreateFromPath @ 0x1802DA15D (__imp_load_SHILCreateFromPath.c)
 *     __imp_load_ILFindChild @ 0x1802DA16F (__imp_load_ILFindChild.c)
 *     __imp_load_PathCleanupSpec @ 0x1802DA181 (__imp_load_PathCleanupSpec.c)
 *     __imp_load_SHGetLocalizedName @ 0x1802DA193 (__imp_load_SHGetLocalizedName.c)
 *     __imp_load_SHSetLocalizedName @ 0x1802DA1A5 (__imp_load_SHSetLocalizedName.c)
 *     __imp_load_SHGetPathFromIDListEx @ 0x1802DA1B7 (__imp_load_SHGetPathFromIDListEx.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1801C0930 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_windows_storage_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_windows_storage_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
