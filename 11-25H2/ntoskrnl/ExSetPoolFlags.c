/*
 * XREFs of ExSetPoolFlags @ 0x140648924
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B739A0 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverApplyDifVerification @ 0x140B7A058 (VfDriverApplyDifVerification.c)
 *     ViPtInitCircularPoolTrace @ 0x140B7C994 (ViPtInitCircularPoolTrace.c)
 *     VfDeadlockPluginEntry @ 0x140B88260 (VfDeadlockPluginEntry.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140B8B240 (VfSettingsApplyMiscellaneousChecks.c)
 *     ViIovInitialization @ 0x140B94EF4 (ViIovInitialization.c)
 * Callees:
 *     <none>
 */

void __fastcall ExSetPoolFlags(unsigned int a1)
{
  _InterlockedOr(&ExpPoolFlags, a1);
}
