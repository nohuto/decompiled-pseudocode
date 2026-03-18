/*
 * XREFs of MmMarkImageForHiberPhase @ 0x140B52FFC
 * Callers:
 *     PoSetHiberRange @ 0x140472260 (PoSetHiberRange.c)
 *     MiMarkHiberProtectedImages @ 0x140667140 (MiMarkHiberProtectedImages.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x14025D3B0 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x14025D41C (MmLockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x14036E0D0 (MmFindDataTableEntryByAddress.c)
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403E09E0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140B526FC (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140B53300 (MiMarkHotPatchesForHiberPhase.c)
 */

__int64 __fastcall MmMarkImageForHiberPhase(unsigned __int64 a1)
{
  __int64 *DataTableEntryByAddress; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int8 v5; // r11
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rbx
  __int64 result; // rax
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  MmLockLoadedModuleListShared();
  DataTableEntryByAddress = MmFindDataTableEntryByAddress(a1);
  MmUnlockLoadedModuleListShared(v5, v3, v4);
  LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(
                                               (__int64)DataTableEntryByAddress,
                                               &v8);
  result = MiMarkNonPagedHiberPhasePages(
             DataTableEntryByAddress[6],
             DataTableEntryByAddress[6] + (unsigned int)(*((_DWORD *)DataTableEntryByAddress + 16) - 1),
             0);
  if ( v8 )
  {
    MiMarkNonPagedHiberPhasePages(
      LoadedModuleImageAdditionalTablesAddress,
      LoadedModuleImageAdditionalTablesAddress + (unsigned int)(v8 - 1),
      0);
    return MiMarkHotPatchesForHiberPhase(DataTableEntryByAddress);
  }
  return result;
}
