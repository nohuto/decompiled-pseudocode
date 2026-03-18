/*
 * XREFs of MiMarkHotPatchForHiberPhase @ 0x140B633F0
 * Callers:
 *     MiMarkHotPatchesForHiberPhase @ 0x140B63450 (MiMarkHotPatchesForHiberPhase.c)
 * Callees:
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403EA010 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140B6282C (MiMarkNonPagedHiberPhasePages.c)
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
