/*
 * XREFs of MmMarkImageForHiberPhase @ 0x140B6312C
 * Callers:
 *     PoSetHiberRange @ 0x1402649E0 (PoSetHiberRange.c)
 *     MiMarkHiberProtectedImages @ 0x140672BF0 (MiMarkHiberProtectedImages.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14027C0CC (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x14027C120 (MmUnlockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x1402C724C (MmFindDataTableEntryByAddress.c)
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403EA010 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140B6282C (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140B63450 (MiMarkHotPatchesForHiberPhase.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  __int64 *DataTableEntryByAddress; // rdi
  unsigned __int8 v3; // r11
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rbx
  __int64 result; // rax
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  MmLockLoadedModuleListShared();
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  MmUnlockLoadedModuleListShared(v3);
  LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(
                                               (__int64)DataTableEntryByAddress,
                                               &v6);
  result = MiMarkNonPagedHiberPhasePages(
             DataTableEntryByAddress[6],
             DataTableEntryByAddress[6] + (unsigned int)(*((_DWORD *)DataTableEntryByAddress + 16) - 1),
             0);
  if ( v6 )
  {
    MiMarkNonPagedHiberPhasePages(
      LoadedModuleImageAdditionalTablesAddress,
      LoadedModuleImageAdditionalTablesAddress + (unsigned int)(v6 - 1),
      0);
    return MiMarkHotPatchesForHiberPhase(DataTableEntryByAddress);
  }
  return result;
}
