/*
 * XREFs of KsepPoolFreePaged @ 0x1404A18F4
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405C7DDC (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x1405C8020 (KsepCacheHwIdFree.c)
 *     KsepDbGetShimInfo @ 0x14073C4E4 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14073C704 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseRegisterShimEx @ 0x14073CB20 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14073CE50 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073D7B8 (KsepResolveApplicableShimsForDriver.c)
 *     KsepSdbBootInitialize @ 0x14073DE3C (KsepSdbBootInitialize.c)
 *     KsepSdbBootRelease @ 0x14073DF74 (KsepSdbBootRelease.c)
 *     KsepGetLoadedModulesList @ 0x14073DFB0 (KsepGetLoadedModulesList.c)
 *     KsepStringSplitMultiString @ 0x14073E198 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x14073E3EC (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x14073E4CC (KsepCacheInitialize.c)
 *     KsepCacheUninitialize @ 0x14073E600 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x14073E89C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x14073EAE8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQuerySZ @ 0x14073EBDC (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x14073EE48 (KsepRegistryQueryValue.c)
 *     KsepDbFreeDriverShims @ 0x140941710 (KsepDbFreeDriverShims.c)
 *     KseDriverUnloadImage @ 0x14094179C (KseDriverUnloadImage.c)
 *     KseDriverLoadImage @ 0x14094187C (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140941BB8 (KseShimDriverIoCallbacks.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140942038 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x140942360 (KseAddHardwareId.c)
 *     KsepRegistryQueryDriverShims @ 0x140942634 (KsepRegistryQueryDriverShims.c)
 *     KsepStringFree @ 0x140943154 (KsepStringFree.c)
 *     KsepRegistryOpenKey @ 0x14094390C (KsepRegistryOpenKey.c)
 *     KsepCacheDeviceFree @ 0x140943E70 (KsepCacheDeviceFree.c)
 *     KsepDbQueryRegistryDeviceData @ 0x1409442E4 (KsepDbQueryRegistryDeviceData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140F0F604);
  }
}
