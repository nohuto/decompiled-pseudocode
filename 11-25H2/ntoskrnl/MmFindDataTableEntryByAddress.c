/*
 * XREFs of MmFindDataTableEntryByAddress @ 0x14036E0D0
 * Callers:
 *     RtlPcToFileName @ 0x14036CC30 (RtlPcToFileName.c)
 *     MiIsDriverPage @ 0x14036D6BC (MiIsDriverPage.c)
 *     MiLockLoadedDataTableEntryIfNecessary @ 0x14036DE9C (MiLockLoadedDataTableEntryIfNecessary.c)
 *     MiLockLoadedDataTableEntry @ 0x14036DEDC (MiLockLoadedDataTableEntry.c)
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     ViAddVerifierSpecialThunks @ 0x14060436C (ViAddVerifierSpecialThunks.c)
 *     ViAddVerifierThunks @ 0x14060448C (ViAddVerifierThunks.c)
 *     MmGetImageRetpolineCodePage @ 0x1406711C0 (MmGetImageRetpolineCodePage.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x1407EB758 (MiCheckVerifierFunctionsCfgState.c)
 *     MmMarkImageForHiberPhase @ 0x140B52FFC (MmMarkImageForHiberPhase.c)
 *     MmReapplyBootPatchImports @ 0x140C45828 (MmReapplyBootPatchImports.c)
 *     MiBuildImportsForBootDrivers @ 0x140C49598 (MiBuildImportsForBootDrivers.c)
 *     PipInitializeCoreDriversAndElam @ 0x140C520B0 (PipInitializeCoreDriversAndElam.c)
 *     PipInitializeDriverDependentDLLs @ 0x140C524C4 (PipInitializeDriverDependentDLLs.c)
 * Callees:
 *     MiImageContainsVa @ 0x14036D08C (MiImageContainsVa.c)
 */

__int64 *__fastcall MmFindDataTableEntryByAddress(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  _QWORD *v2; // rdx
  unsigned __int64 v3; // r8
  __int64 v5; // r10
  __int64 *v6; // r10
  __int64 i; // r8
  __int64 *v8; // r8

  v1 = a1;
  if ( !PsLoadedModuleList )
  {
    v5 = *(_QWORD *)&KeNumberProcessorsGroup0[1];
    v6 = (__int64 *)(v5 + 16);
    for ( i = *v6; (__int64 *)i != v6; i = *v8 )
    {
      if ( MiImageContainsVa(i, v1) )
        return v8;
    }
    return 0LL;
  }
  v2 = (_QWORD *)qword_140E2D640;
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
