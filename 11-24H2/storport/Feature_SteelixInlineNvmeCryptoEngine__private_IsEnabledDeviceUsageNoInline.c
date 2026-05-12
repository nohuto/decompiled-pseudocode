/*
 * XREFs of Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x140017A7C (RaidBusEnumeratorVisitUnit.c)
 *     RaidIsUnitControlSupported @ 0x14001DD30 (RaidIsUnitControlSupported.c)
 *     RaCallMiniportUnitControl @ 0x14001DEE0 (RaCallMiniportUnitControl.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidUnitCompleteRequest @ 0x14001F490 (RaidUnitCompleteRequest.c)
 *     StorAllocateContiguousIoResourcesWithPreferredNode @ 0x140021D94 (StorAllocateContiguousIoResourcesWithPreferredNode.c)
 *     RaUnitAsyncError @ 0x140029460 (RaUnitAsyncError.c)
 *     RaidUnitProcessBusyRequest @ 0x140031200 (RaidUnitProcessBusyRequest.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x140034B54 (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitCompleteResetRequest @ 0x14003C670 (RaidUnitCompleteResetRequest.c)
 *     RaidDeleteAdapter @ 0x1400437A8 (RaidDeleteAdapter.c)
 *     RaidAdapterAcquireCryptoKeyResources @ 0x14004537C (RaidAdapterAcquireCryptoKeyResources.c)
 *     RaidInitializeCryptoEngine @ 0x1400457B4 (RaidInitializeCryptoEngine.c)
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x14004DDC4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaUnitStartIo @ 0x14004E6F0 (RaUnitStartIo.c)
 *     RaidUnitClaimIrp @ 0x14004FB60 (RaidUnitClaimIrp.c)
 *     RaidAdapterStartDevice @ 0x140061808 (RaidAdapterStartDevice.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x1400652F0 (RaidGetStorageAdapterCryptoProperty.c)
 *     AddNvmeIceInterfaceToList @ 0x140069104 (AddNvmeIceInterfaceToList.c)
 *     FreeNvmeIceEntry @ 0x1400695BC (FreeNvmeIceEntry.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x1400697EC (RaidAcquireNvmeIceKeyResources.c)
 *     RaidClearAllNvmeIceKeyTables @ 0x14006A3BC (RaidClearAllNvmeIceKeyTables.c)
 *     RaidReleaseNvmeIceKeyResources @ 0x14006AB70 (RaidReleaseNvmeIceKeyResources.c)
 *     RemoveNvmeIceInterfaceFromList @ 0x14006ABFC (RemoveNvmeIceInterfaceFromList.c)
 *     RaidNvmeIceIoStart @ 0x140072D4C (RaidNvmeIceIoStart.c)
 *     RaUnitStartResetIo @ 0x14009942C (RaUnitStartResetIo.c)
 *     DllInitialize @ 0x1400A3C90 (DllInitialize.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x140182524 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x140182A40 (RaidAdapterPopulateMiniportDumpInfo.c)
 *     FreeNvmeIceList @ 0x140183948 (FreeNvmeIceList.c)
 *     GetNvmeIceInterface @ 0x1401839B0 (GetNvmeIceInterface.c)
 *     RegisterForNvmeIceInterfaceCallback @ 0x140183D80 (RegisterForNvmeIceInterfaceCallback.c)
 *     RaUnitStorageDumpControl @ 0x140188700 (RaUnitStorageDumpControl.c)
 *     RaUnitStorageGetDumpInfoIoctl @ 0x140188924 (RaUnitStorageGetDumpInfoIoctl.c)
 *     RaidUnitCreateDumpData @ 0x1401BC0A4 (RaidUnitCreateDumpData.c)
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401BEAB0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback @ 0x140056680 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback.c)
 */

__int64 Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 0x10) != 0 )
    return Feature_SteelixInlineNvmeCryptoEngine__private_featureState & 1;
  else
    return Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledFallback(
             (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_featureState,
             3LL);
}
