/*
 * XREFs of ExClearPoolFlags @ 0x140653E60
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140B8A4F0 (VfDriverRemoveDifVerification.c)
 *     ViPtPluginUnload @ 0x140B8CA50 (ViPtPluginUnload.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140B9B220 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd((volatile signed __int32 *)&KeNumberProcessorsGroup0[9], ~a1);
}
