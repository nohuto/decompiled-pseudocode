/*
 * XREFs of Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline @ 0x14059F458
 * Callers:
 *     IopAddBugcheckPnpTriageData @ 0x14059F59C (IopAddBugcheckPnpTriageData.c)
 *     PnpBugcheckPowerTimeout @ 0x1405A59E4 (PnpBugcheckPowerTimeout.c)
 *     PnpPoFxActivateDevice @ 0x1408BB7C0 (PnpPoFxActivateDevice.c)
 *     PnpInitPhase0 @ 0x140C22600 (PnpInitPhase0.c)
 * Callees:
 *     Feature_9F_PnpDumpFixes__private_IsEnabledFallback @ 0x14059F490 (Feature_9F_PnpDumpFixes__private_IsEnabledFallback.c)
 */

__int64 Feature_9F_PnpDumpFixes__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_9F_PnpDumpFixes__private_featureState & 0x10) != 0 )
    return Feature_9F_PnpDumpFixes__private_featureState & 1;
  else
    return Feature_9F_PnpDumpFixes__private_IsEnabledFallback(
             (unsigned int)Feature_9F_PnpDumpFixes__private_featureState,
             3LL);
}
