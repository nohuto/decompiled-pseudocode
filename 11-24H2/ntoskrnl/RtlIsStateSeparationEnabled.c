/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x14085F810
 * Callers:
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14059C620 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     RtlpGetBootStatusPath @ 0x1405E976C (RtlpGetBootStatusPath.c)
 *     BcdGetSystemStorePath @ 0x14085F5F8 (BcdGetSystemStorePath.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     PpDevCfgInit @ 0x140C24F94 (PpDevCfgInit.c)
 *     PopInitializePowerButtonHold @ 0x140C320F0 (PopInitializePowerButtonHold.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C3F25C (BapdpProcessVsmKeyBlobs.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4D180 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x14049985C (CmIsStateSeparationEnabled.c)
 */

bool RtlIsStateSeparationEnabled()
{
  return CmIsStateSeparationEnabled();
}
