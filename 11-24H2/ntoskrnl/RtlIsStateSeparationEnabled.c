/*
 * XREFs of RtlIsStateSeparationEnabled @ 0x140A579B0
 * Callers:
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x1405995A0 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     RtlpGetBootStatusPath @ 0x1405E6CBC (RtlpGetBootStatusPath.c)
 *     BcdGetSystemStorePath @ 0x140A57798 (BcdGetSystemStorePath.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     PpDevCfgInit @ 0x140C26FC4 (PpDevCfgInit.c)
 *     PopInitializePowerButtonHold @ 0x140C34230 (PopInitializePowerButtonHold.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140C413AC (BapdpProcessVsmKeyBlobs.c)
 *     CmFcManagerStartRuntimePhase @ 0x140C4F31C (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404941EC (CmIsStateSeparationEnabled.c)
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return CmIsStateSeparationEnabled();
}
