/*
 * XREFs of MiSwizzleInvalidPte @ 0x1402FD620
 * Callers:
 *     MiWsleFlush @ 0x140201004 (MiWsleFlush.c)
 *     MiDecayNodeNowEmpty @ 0x140225138 (MiDecayNodeNowEmpty.c)
 *     MiReleasePageFileInfo @ 0x1402486F0 (MiReleasePageFileInfo.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiReplaceTransitionPage @ 0x140251EC4 (MiReplaceTransitionPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402558FC (MiInitializeReadInProgressPfn.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiClearResetPfn @ 0x1402FC454 (MiClearResetPfn.c)
 *     MiMakeSubsectionPte @ 0x1402FC49C (MiMakeSubsectionPte.c)
 *     MiUpdatePfnBackingStore @ 0x1402FD13C (MiUpdatePfnBackingStore.c)
 *     MI_CLEAR_RESET_PTE @ 0x1402FD264 (MI_CLEAR_RESET_PTE.c)
 *     MiDrainZeroLookasides @ 0x1402FD2B0 (MiDrainZeroLookasides.c)
 *     MiCreateDecayPfn @ 0x1402FE8EC (MiCreateDecayPfn.c)
 *     MiPrepareDecayNodeForReuse @ 0x1402FEC64 (MiPrepareDecayNodeForReuse.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403C5F70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404CF418 (MiMakeGlobalSubsectionPte.c)
 *     MiInitializeNewPfns @ 0x14066CDA4 (MiInitializeNewPfns.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14067BE48 (MiFillFileOnlyProtoAsBad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( !qword_140E2DCC0 )
    return a1;
  if ( (qword_140E2DCC0 & a1) != 0 )
    return a1 | 0x10;
  return a1 | qword_140E2DCC0;
}
