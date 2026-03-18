/*
 * XREFs of VfSetVerifierInformation @ 0x140B9C4FC
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 *     VfFaultsSetParameters @ 0x140B967F4 (VfFaultsSetParameters.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403379B0 (KeReleaseMutex.c)
 *     VfInitSystemNoRebootNeeded @ 0x140B83980 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverLock @ 0x140B8A4B4 (VfDriverLock.c)
 *     VfSettingsCheckForChanges @ 0x140B9B260 (VfSettingsCheckForChanges.c)
 */

__int64 __fastcall VfSetVerifierInformation(unsigned int *a1, unsigned int a2)
{
  __int64 i; // rcx
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  int v10; // edi
  unsigned int v11; // esi

  if ( a2 < 4 )
    return 3221225476LL;
  if ( (_DWORD)InitSafeBootMode )
    return 3221226335LL;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *((_DWORD *)&VfRuleClasses + i) )
      return 3221228559LL;
  }
  v5 = *a1;
  VfDriverLock();
  if ( !MmVerifierData )
    MmVerifyDriverLevel = 0;
  VfInitSystemNoRebootNeeded(v6, 0, v7, v8);
  v9 = v5 & VerifierModifyableOptions;
  v10 = VerifierModifyableOptions & ~v5;
  v11 = ~v10 & (MmVerifierData | v9);
  if ( v11 != MmVerifierData )
  {
    VfSettingsCheckForChanges(MmVerifierData, v9, v10, v11);
    ++dword_140F03F00;
    MmVerifierData = v11;
    *a1 = v11;
  }
  ViLegacyVolatile = 1;
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return 0LL;
}
