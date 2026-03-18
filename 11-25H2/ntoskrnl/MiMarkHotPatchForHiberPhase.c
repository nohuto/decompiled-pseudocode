/*
 * XREFs of MiMarkHotPatchForHiberPhase @ 0x140B532A0
 * Callers:
 *     MiMarkHotPatchesForHiberPhase @ 0x140B53300 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403E09E0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140B526FC (MiMarkNonPagedHiberPhasePages.c)
 */

__int64 __fastcall MiMarkHotPatchForHiberPhase(__int64 a1)
{
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(a1, &v4);
  MiMarkNonPagedHiberPhasePages(
    *(_QWORD *)(a1 + 48),
    *(_QWORD *)(a1 + 48) + (unsigned int)(*(_DWORD *)(a1 + 64) - 1),
    0);
  MiMarkNonPagedHiberPhasePages(
    LoadedModuleImageAdditionalTablesAddress,
    LoadedModuleImageAdditionalTablesAddress + (unsigned int)(v4 - 1),
    0);
  return 1LL;
}
