/*
 * XREFs of ExSetPoolFlags @ 0x140652F24
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B85980 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverApplyDifVerification @ 0x140B8C038 (VfDriverApplyDifVerification.c)
 *     ViPtInitCircularPoolTrace @ 0x140B8E974 (ViPtInitCircularPoolTrace.c)
 *     VfDeadlockPluginEntry @ 0x140B9A240 (VfDeadlockPluginEntry.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140B9D220 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViIovInitialization @ 0x140BA6ED4 (ViIovInitialization.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr((volatile signed __int32 *)&KeNumberProcessorsGroup0[9], a1);
}
