/*
 * XREFs of ACPIDebugGetIrpText @ 0x140040AF4
 * Callers:
 *     ACPIFanStartDevice @ 0x140096820 (ACPIFanStartDevice.c)
 *     ACPIBusAndFilterIrpEject @ 0x140096CA0 (ACPIBusAndFilterIrpEject.c)
 *     ACPIDockIrpQueryCapabilities @ 0x140099350 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x140099600 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x140099A00 (ACPIDockIrpQueryID.c)
 *     ACPIDockIrpQueryInterface @ 0x140099D30 (ACPIDockIrpQueryInterface.c)
 *     ACPIDockIrpQueryPnpDeviceState @ 0x140099F10 (ACPIDockIrpQueryPnpDeviceState.c)
 *     ACPIBusAndFilterIrpSetLock @ 0x14009B480 (ACPIBusAndFilterIrpSetLock.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x14009B550 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x14009B7D0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x14009BC90 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpQueryIdCompletion @ 0x14009E6C0 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIFilterIrpStopDevice @ 0x14009E910 (ACPIFilterIrpStopDevice.c)
 *     ACPIRootIrpCancelRemoveOrStopDevice @ 0x1400A6D40 (ACPIRootIrpCancelRemoveOrStopDevice.c)
 *     ACPIRootIrpQueryCapabilities @ 0x1400A6E70 (ACPIRootIrpQueryCapabilities.c)
 *     ACPIRootIrpStopDevice @ 0x1400A7100 (ACPIRootIrpStopDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1400AC190 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIBusIrpQueryResources @ 0x1400AC540 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1400AC9B0 (ACPIBusIrpQueryResourceRequirements.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1400ACEA0 (ACPIFilterIrpFilterResourceRequirements.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400ADF10 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIBusIrpDeviceUsageNotification @ 0x1400AF640 (ACPIBusIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryInterface @ 0x1400B0340 (ACPIRootIrpQueryInterface.c)
 *     ACPIFilterIrpQueryDeviceRelations @ 0x1400B3C10 (ACPIFilterIrpQueryDeviceRelations.c)
 *     ACPIRootIrpQueryBusRelations @ 0x1400B3F44 (ACPIRootIrpQueryBusRelations.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1400B4A80 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1400B4C70 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusAndFilterIrpQueryPnpDeviceState @ 0x1400B78F0 (ACPIBusAndFilterIrpQueryPnpDeviceState.c)
 *     ACPIBusIrpQueryId @ 0x1400B8CC0 (ACPIBusIrpQueryId.c)
 *     ACPIFilterIrpStartDeviceWorker @ 0x1400B9850 (ACPIFilterIrpStartDeviceWorker.c)
 *     ACPIRootIrpQueryDeviceRelations @ 0x1400BA750 (ACPIRootIrpQueryDeviceRelations.c)
 *     ACPIFilterIrpStartDevice @ 0x1400BC6E0 (ACPIFilterIrpStartDevice.c)
 *     ACPIFilterIrpDeviceEnumeratedCompletion @ 0x1400BCC50 (ACPIFilterIrpDeviceEnumeratedCompletion.c)
 *     ACPIFilterIrpSurpriseRemoval @ 0x1400BDC20 (ACPIFilterIrpSurpriseRemoval.c)
 *     ACPIFilterIrpDeviceUsageNotification @ 0x1400BDD20 (ACPIFilterIrpDeviceUsageNotification.c)
 *     ACPIRootIrpQueryRemoveOrStopDevice @ 0x1400BE7D0 (ACPIRootIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1400C0DF0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     <none>
 */

char *__fastcall ACPIDebugGetIrpText(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax

  v2 = a2;
  if ( a2 >= 0x1Au )
    v2 = 26LL;
  return ACPIDispatchPnpTableNames[v2];
}
