/*
 * XREFs of KsepPoolAllocatePaged @ 0x14049AA70
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1405C7DDC (KsepEvntLogShimsApplied.c)
 *     KsepDbGetShimInfo @ 0x14073C4E4 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14073C704 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseRegisterShimEx @ 0x14073CB20 (KseRegisterShimEx.c)
 *     KsepSdbBootInitialize @ 0x14073DE3C (KsepSdbBootInitialize.c)
 *     KsepGetLoadedModulesList @ 0x14073DFB0 (KsepGetLoadedModulesList.c)
 *     KsepStringSplitMultiString @ 0x14073E198 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x14073E3EC (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x14073E4CC (KsepCacheInitialize.c)
 *     KsepRegistryEnumValue @ 0x14073E89C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x14073EAE8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQuerySZ @ 0x14073EBDC (KsepRegistryQuerySZ.c)
 *     KsepRegistryQueryValue @ 0x14073EE48 (KsepRegistryQueryValue.c)
 *     KsepGetShimsForDriver @ 0x140941A34 (KsepGetShimsForDriver.c)
 *     KsepStringDuplicateUnicode @ 0x140941D34 (KsepStringDuplicateUnicode.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140942038 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x140942360 (KseAddHardwareId.c)
 *     KsepDbGetDriverShimsInternal @ 0x1409428D4 (KsepDbGetDriverShimsInternal.c)
 *     KsepDbGetDriverShims @ 0x140942B68 (KsepDbGetDriverShims.c)
 *     KsepStringConcatenate @ 0x140943A10 (KsepStringConcatenate.c)
 *     KsepDbCacheReadDevice @ 0x140943C38 (KsepDbCacheReadDevice.c)
 *     KsepStringDuplicate @ 0x1409445C4 (KsepStringDuplicate.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

void *__fastcall KsepPoolAllocatePaged(size_t Size)
{
  void *Pool2; // rax
  void *v3; // rbx

  Pool2 = (void *)ExAllocatePool2(0x100uLL, Size, 0x6145534Bu);
  v3 = Pool2;
  if ( Pool2 )
  {
    _InterlockedIncrement(&dword_140F0F600);
    memset_0(Pool2, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_140F0F610);
  }
  return v3;
}
