/*
 * XREFs of ??$FreeIsolatedTypeAndClearStackReferences@UtagPOPUPMENU@@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAUtagPOPUPMENU@@@Z @ 0x140264D88
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxMNEndMenuState @ 0x14009A5F0 (xxxMNEndMenuState.c)
 *     MNFlushDestroyedPopups @ 0x14021A820 (MNFlushDestroyedPopups.c)
 *     xxxMNStartMenuState @ 0x14024F334 (xxxMNStartMenuState.c)
 * Callees:
 *     NullifyLookasideRef @ 0x140264DB0 (NullifyLookasideRef.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x140264DF4 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0GAAA@$0GA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

__int64 __fastcall FreeIsolatedTypeAndClearStackReferences<tagPOPUPMENU,NSInstrumentation::CTypeIsolation<24576,96>>(
        __int64 a1)
{
  NullifyLookasideRef(*(_QWORD *)(a1 + 88));
  return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<24576,96>>(a1);
}
