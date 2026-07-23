/*
 * XREFs of KsepStringFree @ 0x140943154
 * Callers:
 *     KsepLoadShimProvider @ 0x1405C7C3C (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1405C8020 (KsepCacheHwIdFree.c)
 *     KseSetDeviceFlags @ 0x14073C170 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14073C704 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x14073E198 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x14073E3EC (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x14073E658 (KsepRegistryCreateKey.c)
 *     KsepDbFreeDriverShims @ 0x140941710 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x140942038 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x140942360 (KseAddHardwareId.c)
 *     KsepCacheDeviceFree @ 0x140943E70 (KsepCacheDeviceFree.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 */

void __fastcall KsepStringFree(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rax

  if ( a1 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 )
    {
      KsepPoolFreePaged(v2);
      *(_OWORD *)a1 = 0LL;
    }
  }
  else
  {
    v3 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v3 + 1] = -1073740768;
    KsepHistoryErrors[2 * v3] = 197451;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("String != NULL", "minkernel\\ntos\\kshim\\ksemisc.c", 0x34Bu, 0LL);
  }
}
