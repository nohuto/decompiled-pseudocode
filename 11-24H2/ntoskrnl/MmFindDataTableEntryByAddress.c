/*
 * XREFs of MmFindDataTableEntryByAddress @ 0x1402C724C
 * Callers:
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402C6EFC (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiLockLoadedDataTableEntry @ 0x1402C6F3C (MiLockLoadedDataTableEntry.c)
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 *     MiIsDriverPage @ 0x1402C80A4 (MiIsDriverPage.c)
 *     RtlPcToFileName @ 0x1403FFB00 (RtlPcToFileName.c)
 *     ViAddVerifierSpecialThunks @ 0x14061032C (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x14061044C (ViAddVerifierThunks.c)
 *     MmGetImageRetpolineCodePage @ 0x14067C980 (MmGetImageRetpolineCodePage.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x1407FB5E8 (MiCheckVerifierFunctionsCfgState.c)
 *     MmMarkImageForHiberPhase @ 0x140B6312C (MmMarkImageForHiberPhase.c)
 *     MmReapplyBootPatchImports @ 0x140C56B08 (MmReapplyBootPatchImports.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5A924 (MiBuildImportsForBootDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C633C4 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C637D8 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiImageContainsVa @ 0x1402C9B38 (MiImageContainsVa.c)
 */

__int64 *__fastcall MmFindDataTableEntryByAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  _QWORD *v2; // rdx
  unsigned __int64 v3; // r8
  __int64 v5; // r10
  __int64 i; // r8
  __int64 *v7; // r8

  v1 = a1;
  if ( !PsLoadedModuleList )
  {
    v5 = KeLoaderBlock_0 + 16;
    for ( i = *(_QWORD *)(KeLoaderBlock_0 + 16); i != v5; i = *v7 )
    {
      if ( (unsigned int)MiImageContainsVa(i, v1) )
        return v7;
    }
    return 0LL;
  }
  v2 = (_QWORD *)qword_140E2D880;
  while ( v2 )
  {
    v3 = *(v2 - 20);
    if ( a1 > v3 + (unsigned int)(*((_DWORD *)v2 - 36) - 1) )
    {
      v2 = (_QWORD *)v2[1];
    }
    else
    {
      if ( a1 >= v3 )
        break;
      v2 = (_QWORD *)*v2;
    }
  }
  if ( !v2 )
    return 0LL;
  return v2 - 26;
}
