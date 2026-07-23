/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x140A28CA0
 * Callers:
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x140598F10 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     RtlpGetBootStatusPath @ 0x1405DD61C (RtlpGetBootStatusPath.c)
 *     BcdGetSystemStorePath @ 0x140A28A88 (BcdGetSystemStorePath.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     PpDevCfgInit @ 0x140C13F04 (PpDevCfgInit.c)
 *     PopInitializePowerButtonHold @ 0x140C20FEC (PopInitializePowerButtonHold.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C2DF80 (BapdpProcessVsmKeyBlobs.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C3BE84 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404996EC (CmIsStateSeparationEnabled.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return CmIsStateSeparationEnabled();
}
