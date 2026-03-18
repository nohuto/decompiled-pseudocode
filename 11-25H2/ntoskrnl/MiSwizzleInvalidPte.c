/*
 * XREFs of MiSwizzleInvalidPte @ 0x14021A0C0
 * Callers:
 *     MiDecayNodeNowEmpty @ 0x14021BFD8 (MiDecayNodeNowEmpty.c)
 *     MiCreateDecayPfn @ 0x14021C248 (MiCreateDecayPfn.c)
 *     MiPrepareDecayNodeForReuse @ 0x14021C5C0 (MiPrepareDecayNodeForReuse.c)
 *     MiReleasePageFileInfo @ 0x1402346B0 (MiReleasePageFileInfo.c)
 *     MiInitializeReadInProgressPfn @ 0x14023B62C (MiInitializeReadInProgressPfn.c)
 *     MiWsleFlush @ 0x1402479D4 (MiWsleFlush.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     MiInitializePfn @ 0x14024CD40 (MiInitializePfn.c)
 *     MiReplaceTransitionPage @ 0x1402C6590 (MiReplaceTransitionPage.c)
 *     MiUpdatePfnBackingStore @ 0x1402CC130 (MiUpdatePfnBackingStore.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MI_CLEAR_RESET_PTE @ 0x14045BA80 (MI_CLEAR_RESET_PTE.c)
 *     MiMakeSubsectionPte @ 0x140471750 (MiMakeSubsectionPte.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404D68D8 (MiMakeGlobalSubsectionPte.c)
 *     MiInitializeNewPfns @ 0x140660094 (MiInitializeNewPfns.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14066F4A8 (MiFillFileOnlyProtoAsBad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( !qword_140E2D940 )
    return a1;
  if ( (qword_140E2D940 & a1) != 0 )
    return a1 | 0x10;
  return a1 | qword_140E2D940;
}
