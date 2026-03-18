/*
 * XREFs of ACPIDockIsDockDevice @ 0x1400284D4
 * Callers:
 *     ACPIBusIrpQueryPower @ 0x140028D80 (ACPIBusIrpQueryPower.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140029280 (ACPIBuildProcessDevicePhaseEjd.c)
 *     OSNotifyDeviceEnum @ 0x1400297A0 (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceCheck @ 0x140029BD4 (OSNotifyDeviceCheck.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x14003CA6C (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIFilterIrpQueryPower @ 0x140045EA0 (ACPIFilterIrpQueryPower.c)
 *     ACPIBuildIssueNotifyDeviceEject @ 0x1400587F0 (ACPIBuildIssueNotifyDeviceEject.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400ADF10 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400B529C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 */

bool ACPIDockIsDockDevice()
{
  return (int)AMLIGetNameSpaceObject("_DCK") >= 0;
}
