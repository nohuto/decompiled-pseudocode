/*
 * XREFs of ExClearPoolFlags @ 0x1406525C0
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140B8C4F0 (VfDriverRemoveDifVerification.c)
 *     ViPtPluginUnload @ 0x140B8EA50 (ViPtPluginUnload.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140B9D220 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd((volatile signed __int32 *)&KeNumberProcessorsGroup0[9], ~a1);
}
