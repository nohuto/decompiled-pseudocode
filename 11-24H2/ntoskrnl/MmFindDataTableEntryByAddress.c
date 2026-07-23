/*
 * XREFs of MmFindDataTableEntryByAddress @ 0x1402BBDCC
 * Callers:
 *     MiIsDriverPage @ 0x1402BA964 (MiIsDriverPage.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x1402BBA7C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 *     MmUnlockPagableImageSection @ 0x1402BBBB0 (MmUnlockPagableImageSection.c)
 *     RtlPcToFileName @ 0x1403F9FF0 (RtlPcToFileName.c)
 *     ViAddVerifierSpecialThunks @ 0x14060E8EC (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x14060EA0C (ViAddVerifierThunks.c)
 *     MmGetImageRetpolineCodePage @ 0x14067DB60 (MmGetImageRetpolineCodePage.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x1407FBD58 (MiCheckVerifierFunctionsCfgState.c)
 *     MmMarkImageForHiberPhase @ 0x140B651FC (MmMarkImageForHiberPhase.c)
 *     MmReapplyBootPatchImports @ 0x140C58C98 (MmReapplyBootPatchImports.c)
 *     MiBuildImportsForBootDrivers @ 0x140C5CAB4 (MiBuildImportsForBootDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C65540 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C65954 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiImageContainsVa @ 0x1404A2444 (MiImageContainsVa.c)
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
  v2 = (_QWORD *)qword_140E2D9C0;
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
