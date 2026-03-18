/*
 * XREFs of KsepPoolFreePaged @ 0x1404A6F94
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405CA6B4 (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x1405CA900 (KsepCacheHwIdFree.c)
 *     KsepDbGetShimInfo @ 0x14073E5B4 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14073E7D4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseRegisterShimEx @ 0x14073EBF0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x14073EF20 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x14073F888 (KsepResolveApplicableShimsForDriver.c)
 *     KsepSdbBootInitialize @ 0x14073FF0C (KsepSdbBootInitialize.c)
 *     KsepSdbBootRelease @ 0x140740044 (KsepSdbBootRelease.c)
 *     KsepGetLoadedModulesList @ 0x140740080 (KsepGetLoadedModulesList.c)
 *     KsepStringSplitMultiString @ 0x140740268 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407404BC (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x14074059C (KsepCacheInitialize.c)
 *     KsepCacheUninitialize @ 0x1407406D0 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x14074096C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140740BB8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQuerySZ @ 0x140740CAC (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x140740F18 (KsepRegistryQueryValue.c)
 *     KsepDbFreeDriverShims @ 0x140959C50 (KsepDbFreeDriverShims.c)
 *     KseDriverUnloadImage @ 0x140959CDC (KseDriverUnloadImage.c)
 *     KseDriverLoadImage @ 0x140959DBC (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x14095A0F8 (KseShimDriverIoCallbacks.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14095A578 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14095A8A0 (KseAddHardwareId.c)
 *     KsepRegistryQueryDriverShims @ 0x14095AB74 (KsepRegistryQueryDriverShims.c)
 *     KsepStringFree @ 0x14095B694 (KsepStringFree.c)
 *     KsepRegistryOpenKey @ 0x14095BE4C (KsepRegistryOpenKey.c)
 *     KsepCacheDeviceFree @ 0x14095C3B0 (KsepCacheDeviceFree.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14095C824 (KsepDbQueryRegistryDeviceData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140F0F304);
  }
}
