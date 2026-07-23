/*
 * XREFs of VfInitSystemNoRebootNeeded @ 0x140B85980
 * Callers:
 *     VfAddVerifierEntry @ 0x140B9E32C (VfAddVerifierEntry.c)
 *     VfSetVerifierInformation @ 0x140B9E4FC (VfSetVerifierInformation.c)
 *     ViInitSystemPhase0 @ 0x140C3D83C (ViInitSystemPhase0.c)
 * Callees:
 *     ExSetPoolFlags @ 0x140652F24 (ExSetPoolFlags.c)
 *     ExDisableAllLookasideLists @ 0x14065587C (ExDisableAllLookasideLists.c)
 *     PsSetCreateProcessNotifyRoutine @ 0x14077A310 (PsSetCreateProcessNotifyRoutine.c)
 *     MmLockPagableDataSection @ 0x140A54770 (MmLockPagableDataSection.c)
 *     IoVerifierInit @ 0x140B84318 (IoVerifierInit.c)
 *     VfInitVerifierComponents @ 0x140B85AD0 (VfInitVerifierComponents.c)
 *     VfPendingInitPhase1 @ 0x140B93AB4 (VfPendingInitPhase1.c)
 *     VfFaultsInitPhase0 @ 0x140B98338 (VfFaultsInitPhase0.c)
 *     VfPoolInitPhase1 @ 0x140B9C3F0 (VfPoolInitPhase1.c)
 *     VfSettingsMiscellaneousChecksInitPhase1 @ 0x140B9D33C (VfSettingsMiscellaneousChecksInitPhase1.c)
 */

void __fastcall VfInitSystemNoRebootNeeded(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  int v6; // eax

  v5 = KernelVerifier;
  if ( !ViFullyInitialized )
  {
    if ( !a2 )
    {
      VfInitializedWithoutReboot = 1;
      ViCodeSectionHandle = MmLockPagableDataSection(VfInitVerifierComponents);
      ViDataSectionHandle = MmLockPagableDataSection(&ViLoadedDriversCount);
      MmLockPagableDataSection((PVOID)&ViShortTime);
    }
    if ( v5 || !a2 )
      ExDisableAllLookasideLists();
    VerifierModifyableOptions = 0x1FFF;
    v6 = MmVerifyDriverLevel;
    if ( MmVerifyDriverLevel == -1 )
      v6 = 2491;
    MmVerifierData = v6;
    if ( v5 == 1 )
    {
      MmVerifyDriverLevel &= ~0x20u;
      MmVerifierData = v6 & 0xFFFFFFDF;
      ExSetPoolFlags(8u);
    }
    *((_QWORD *)&ViVerifierDriverAddedThunkListHead + 1) = &ViVerifierDriverAddedThunkListHead;
    *(_QWORD *)&ViVerifierDriverAddedThunkListHead = &ViVerifierDriverAddedThunkListHead;
    *(&ViVerifierDriverAddedSpecialThunkListHead + 1) = &ViVerifierDriverAddedSpecialThunkListHead;
    ViVerifierDriverAddedSpecialThunkListHead = &ViVerifierDriverAddedSpecialThunkListHead;
    if ( !a2 )
    {
      LOBYTE(a4) = 1;
      VfInitVerifierComponents(
        (unsigned int)MmVerifierData,
        (unsigned int)ViVerifyAllDrivers,
        (unsigned int)KernelVerifier,
        a4);
      VfFaultsInitPhase0();
      VfPoolInitPhase1();
      VfSettingsMiscellaneousChecksInitPhase1();
      VfPendingInitPhase1();
      IoVerifierInit(MmVerifierData);
      PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)VfCreateProcessCallback, 0);
      ViFaultsProcessNotifyRoutineSet = 1;
    }
    ViFullyInitialized = 1;
  }
}
