/*
 * XREFs of KsepPoolFreePaged @ 0x1404A64EC
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405C6094 (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x1405C62E0 (KsepCacheHwIdFree.c)
 *     KsepDbGetShimInfo @ 0x140732594 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407327B4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseRegisterShimEx @ 0x140732BD0 (KseRegisterShimEx.c)
 *     KseUnregisterShim @ 0x140732F00 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140733868 (KsepResolveApplicableShimsForDriver.c)
 *     KsepSdbBootInitialize @ 0x140733EEC (KsepSdbBootInitialize.c)
 *     KsepSdbBootRelease @ 0x140734024 (KsepSdbBootRelease.c)
 *     KsepGetLoadedModulesList @ 0x140734060 (KsepGetLoadedModulesList.c)
 *     KsepStringSplitMultiString @ 0x140734248 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x14073449C (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x14073457C (KsepCacheInitialize.c)
 *     KsepCacheUninitialize @ 0x1407346B0 (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x14073494C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140734B98 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQuerySZ @ 0x140734C8C (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x140734EF8 (KsepRegistryQueryValue.c)
 *     KsepRegistryQueryDriverShims @ 0x1408292E4 (KsepRegistryQueryDriverShims.c)
 *     KsepRegistryOpenKey @ 0x140829E68 (KsepRegistryOpenKey.c)
 *     KsepCacheDeviceFree @ 0x14082A3C0 (KsepCacheDeviceFree.c)
 *     KsepDbQueryRegistryDeviceData @ 0x14082A834 (KsepDbQueryRegistryDeviceData.c)
 *     KsepStringFree @ 0x14082BBBC (KsepStringFree.c)
 *     KseAddHardwareId @ 0x14082C174 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x140A4FCB0 (KseDriverUnloadImage.c)
 *     KseDriverLoadImage @ 0x140A4FD90 (KseDriverLoadImage.c)
 *     KseShimDriverIoCallbacks @ 0x140A500CC (KseShimDriverIoCallbacks.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A5054C (KsepEngineGetShimsFromRegistry.c)
 *     KsepDbFreeDriverShims @ 0x140AB2B60 (KsepDbFreeDriverShims.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_140F0EC24);
  }
}
