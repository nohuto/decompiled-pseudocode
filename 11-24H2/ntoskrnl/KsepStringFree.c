/*
 * XREFs of KsepStringFree @ 0x14095B694
 * Callers:
 *     KsepLoadShimProvider @ 0x1405CA514 (KsepLoadShimProvider.c)
 *     KsepCacheHwIdFree @ 0x1405CA900 (KsepCacheHwIdFree.c)
 *     KseSetDeviceFlags @ 0x14073E240 (KseSetDeviceFlags.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x14073E7D4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140740268 (KsepStringSplitMultiString.c)
 *     KsepCacheDeviceInsertData @ 0x1407404BC (KsepCacheDeviceInsertData.c)
 *     KsepRegistryCreateKey @ 0x140740728 (KsepRegistryCreateKey.c)
 *     KsepDbFreeDriverShims @ 0x140959C50 (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14095A578 (KsepEngineGetShimsFromRegistry.c)
 *     KseAddHardwareId @ 0x14095A8A0 (KseAddHardwareId.c)
 *     KsepCacheDeviceFree @ 0x14095C3B0 (KsepCacheDeviceFree.c)
 * Callees:
 *     KsepPoolFreePaged @ 0x1404A6F94 (KsepPoolFreePaged.c)
 *     RtlAssert @ 0x1405E9340 (RtlAssert.c)
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
