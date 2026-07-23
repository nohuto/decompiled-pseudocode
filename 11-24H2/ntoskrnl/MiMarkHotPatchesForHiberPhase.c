/*
 * XREFs of MiMarkHotPatchesForHiberPhase @ 0x140B65520
 * Callers:
 *     MmMarkImageForHiberPhase @ 0x140B651FC (MmMarkImageForHiberPhase.c)
 * Callees:
 *     MmGetLoadedModuleImageAdditionalTablesAddress @ 0x1403D7CB0 (MmGetLoadedModuleImageAdditionalTablesAddress.c)
 *     MiGetBaseLoaderPortion @ 0x1404C96FC (MiGetBaseLoaderPortion.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140B648FC (MiMarkNonPagedHiberPhasePages.c)
 *     MiEnumerateBasePatches @ 0x140B65448 (MiEnumerateBasePatches.c)
 *     MiMarkHotPatchForHiberPhase @ 0x140B654C0 (MiMarkHotPatchForHiberPhase.c)
 */

__int64 __fastcall MiMarkHotPatchesForHiberPhase(__int64 a1)
{
  __int64 v1; // rdi
  __int64 BaseLoaderPortion; // rax
  unsigned __int64 LoadedModuleImageAdditionalTablesAddress; // rbx
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v1 = a1;
  BaseLoaderPortion = MiGetBaseLoaderPortion(a1);
  if ( (*(_DWORD *)(BaseLoaderPortion + 184) & 0x80u) != 0 )
  {
    v1 = *(_QWORD *)(BaseLoaderPortion + 248);
    LoadedModuleImageAdditionalTablesAddress = MmGetLoadedModuleImageAdditionalTablesAddress(v1, &v5);
    MiMarkNonPagedHiberPhasePages(
      *(_QWORD *)(v1 + 48),
      *(_QWORD *)(v1 + 48) + (unsigned int)(*(_DWORD *)(v1 + 64) - 1),
      0);
    MiMarkNonPagedHiberPhasePages(
      LoadedModuleImageAdditionalTablesAddress,
      LoadedModuleImageAdditionalTablesAddress + (unsigned int)(v5 - 1),
      0);
  }
  result = MiEnumerateBasePatches(v1, (__int64)MiMarkHotPatchForHiberPhase, 0LL);
  if ( qword_140E375E0 == v1 )
    return MiMarkHotPatchForHiberPhase(qword_140E375D8);
  return result;
}
