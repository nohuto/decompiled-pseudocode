/*
 * XREFs of MmMarkImageForHiberPhase @ 0x140B651FC
 * Callers:
 *     PoSetHiberRange @ 0x14046AD10 (PoSetHiberRange.c)
 *     MiMarkHiberProtectedImages @ 0x140673DC0 (MiMarkHiberProtectedImages.c)
 * Callees:
 *     MmLockLoadedModuleListShared @ 0x14023165C (MmLockLoadedModuleListShared.c)
 *     MmUnlockLoadedModuleListShared @ 0x1402316B0 (MmUnlockLoadedModuleListShared.c)
 *     MmFindDataTableEntryByAddress @ 0x1402BBDCC (MmFindDataTableEntryByAddress.c)
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403D7CB0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140B648FC (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkHotPatchesForHiberPhase @ 0x140B65520 (MiMarkHotPatchesForHiberPhase.c)
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
