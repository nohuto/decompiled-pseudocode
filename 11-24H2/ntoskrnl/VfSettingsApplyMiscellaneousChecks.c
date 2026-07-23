/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x140B9D220
 * Callers:
 *     VfSettingsCheckForChanges @ 0x140B9D260 (VfSettingsCheckForChanges.c)
 *     VfMiscPluginEntry @ 0x140BA0670 (VfMiscPluginEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x1406525C0 (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x140652F24 (ExSetPoolFlags.c)
 */

void VfSettingsApplyMiscellaneousChecks()
{
  int v0; // ecx

  v0 = (VfRuleClasses & 0x400000) == 0 ? 0x206 : 0;
  if ( (MmVerifierData & 0x800) != 0 )
    ExSetPoolFlags(v0);
  else
    ExClearPoolFlags(v0);
}
