/*
 * XREFs of ExClearPoolFlags @ 0x140647F60
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140B7A510 (VfDriverRemoveDifVerification.c)
 *     ViPtPluginUnload @ 0x140B7CA70 (ViPtPluginUnload.c)
 *     VfSettingsApplyMiscellaneousChecks @ 0x140B8B240 (VfSettingsApplyMiscellaneousChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall ExClearPoolFlags(int a1)
{
  _InterlockedAnd(&ExpPoolFlags, ~a1);
}
