/*
 * XREFs of KsepPoolAllocatePaged @ 0x1404A0CB0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405C6094 (KsepEvntLogShimsApplied.c)
 *     KsepDbGetShimInfo @ 0x140732594 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x1407327B4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseRegisterShimEx @ 0x140732BD0 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x140733EEC (KsepSdbBootInitialize.c)
 *     KsepGetLoadedModulesList @ 0x140734060 (KsepGetLoadedModulesList.c)
 *     KsepStringSplitMultiString @ 0x140734248 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x14073449C (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x14073457C (KsepCacheInitialize.c)
 *     KsepRegistryEnumValue @ 0x14073494C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140734B98 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQuerySZ @ 0x140734C8C (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x140734EF8 (KsepRegistryQueryValue.c)
 *     KsepDbGetDriverShimsInternal @ 0x14082941C (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetDriverShims @ 0x1408296B0 (KsepDbGetDriverShims.c)
 *     KsepStringConcatenate @ 0x140829F6C (KsepStringConcatenate.c)
 *     KsepDbCacheReadDevice @ 0x14082A190 (KsepDbCacheReadDevice.c)
 *     KsepStringDuplicate @ 0x14082AB14 (KsepStringDuplicate.c)
 *     KseAddHardwareId @ 0x14082C174 (KseAddHardwareId.c)
 *     KsepGetShimsForDriver @ 0x140A4FF48 (KsepGetShimsForDriver.c)
 *     KsepStringDuplicateUnicode @ 0x140A50248 (KsepStringDuplicateUnicode.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140A5054C (KsepEngineGetShimsFromRegistry.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocatePaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140F0EC20);
    memset_0(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140F0EC30);
  }
  return v3;
}
