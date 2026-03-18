/*
 * XREFs of MiSwizzleInvalidPte @ 0x14022A3B0
 * Callers:
 *     MiReleasePageFileInfo @ 0x14021B9A0 (MiReleasePageFileInfo.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiReplaceTransitionPage @ 0x140224B14 (MiReplaceTransitionPage.c)
 *     MiClearResetPfn @ 0x140229254 (MiClearResetPfn.c)
 *     MiMakeSubsectionPte @ 0x14022929C (MiMakeSubsectionPte.c)
 *     MiUpdatePfnBackingStore @ 0x140229ECC (MiUpdatePfnBackingStore.c)
 *     MI_CLEAR_RESET_PTE @ 0x140229FF4 (MI_CLEAR_RESET_PTE.c)
 *     MiDrainZeroLookasides @ 0x14022A040 (MiDrainZeroLookasides.c)
 *     MiCreateDecayPfn @ 0x14022AFD8 (MiCreateDecayPfn.c)
 *     MiPrepareDecayNodeForReuse @ 0x14022B350 (MiPrepareDecayNodeForReuse.c)
 *     MiDecayNodeNowEmpty @ 0x14026FBA8 (MiDecayNodeNowEmpty.c)
 *     MiWsleFlush @ 0x140286410 (MiWsleFlush.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiInitializeReadInProgressPfn @ 0x1402EF9B8 (MiInitializeReadInProgressPfn.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140403D20 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiMakeGlobalSubsectionPte @ 0x1404D5FC8 (MiMakeGlobalSubsectionPte.c)
 *     MiInitializeNewPfns @ 0x14066BBD4 (MiInitializeNewPfns.c)
 *     MiFillFileOnlyProtoAsBad @ 0x14067AC68 (MiFillFileOnlyProtoAsBad.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSwizzleInvalidPte(__int64 a1)
{
  if ( !qword_140E2DB80 )
    return a1;
  if ( (qword_140E2DB80 & a1) != 0 )
    return a1 | 0x10;
  return a1 | qword_140E2DB80;
}
