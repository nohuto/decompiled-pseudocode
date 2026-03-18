/*
 * XREFs of VfSettingsApplyMiscellaneousChecks @ 0x140B9B220
 * Callers:
 *     VfSettingsCheckForChanges @ 0x140B9B260 (VfSettingsCheckForChanges.c)
 *     VfMiscPluginEntry @ 0x140B9E670 (VfMiscPluginEntry.c)
 * Callees:
 *     ExClearPoolFlags @ 0x140653E60 (ExClearPoolFlags.c)
 *     ExSetPoolFlags @ 0x140654824 (ExSetPoolFlags.c)
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
