/*
 * XREFs of ExSetPoolFlags @ 0x140654824
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B83980 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverApplyDifVerification @ 0x140B8A038 (VfDriverApplyDifVerification.c)
 *     ViPtInitCircularPoolTrace @ 0x140B8C974 (ViPtInitCircularPoolTrace.c)
 *     VfDeadlockPluginEntry @ 0x140B98240 (VfDeadlockPluginEntry.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140B9B220 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViIovInitialization @ 0x140BA4ED4 (ViIovInitialization.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr((volatile signed __int32 *)&KeNumberProcessorsGroup0[9], a1);
}
