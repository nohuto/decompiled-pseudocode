/*
 * XREFs of KsepPoolAllocatePaged @ 0x1404A03F0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405CA6B4 (KsepEvntLogShimsApplied.c)
 *     KsepDbGetShimInfo @ 0x14073E5B4 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14073E7D4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseRegisterShimEx @ 0x14073EBF0 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x14073FF0C (KsepSdbBootInitialize.c)
 *     KsepGetLoadedModulesList @ 0x140740080 (KsepGetLoadedModulesList.c)
 *     KsepStringSplitMultiString @ 0x140740268 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407404BC (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x14074059C (KsepCacheInitialize.c)
 *     KsepRegistryEnumValue @ 0x14074096C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140740BB8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQuerySZ @ 0x140740CAC (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x140740F18 (KsepRegistryQueryValue.c)
 *     KsepGetShimsForDriver @ 0x140959F74 (KsepGetShimsForDriver.c)
 *     KsepStringDuplicateUnicode @ 0x14095A274 (KsepStringDuplicateUnicode.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14095A578 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14095A8A0 (KseAddHardwareId.c)
 *     KsepDbGetDriverShimsInternal @ 0x14095AE14 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetDriverShims @ 0x14095B0A8 (KsepDbGetDriverShims.c)
 *     KsepStringConcatenate @ 0x14095BF50 (KsepStringConcatenate.c)
 *     KsepDbCacheReadDevice @ 0x14095C178 (KsepDbCacheReadDevice.c)
 *     KsepStringDuplicate @ 0x14095CB04 (KsepStringDuplicate.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocatePaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140F0F300);
    memset_0(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140F0F310);
  }
  return v3;
}
