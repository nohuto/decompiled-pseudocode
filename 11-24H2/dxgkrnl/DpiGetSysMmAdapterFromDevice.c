/*
 * XREFs of DpiGetSysMmAdapterFromDevice @ 0x14002133C
 * Callers:
 *     DxgkAllocateContiguousMemoryCB @ 0x14001ED70 (DxgkAllocateContiguousMemoryCB.c)
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x14001F0D0 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     DxgkOpenPhysicalMemoryObjectCB @ 0x14001F520 (DxgkOpenPhysicalMemoryObjectCB.c)
 *     DxgkFreePagesFromMdlCB @ 0x14001FA30 (DxgkFreePagesFromMdlCB.c)
 *     DxgkAllocatePagesForMdlCB @ 0x140020680 (DxgkAllocatePagesForMdlCB.c)
 *     DxgkMapMdlToIoMmuCB @ 0x1400561F0 (DxgkMapMdlToIoMmuCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x140073FF0 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     DpiGetFdoFromDevice @ 0x1400213B8 (DpiGetFdoFromDevice.c)
 */

__int64 DpiGetSysMmAdapterFromDevice()
{
  __int64 FdoFromDevice; // rbx

  FdoFromDevice = DpiGetFdoFromDevice();
  if ( !FdoFromDevice )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5365;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"FdoContext != nullptr", 5365LL, 0LL, 0LL, 0LL, 0LL);
  }
  return *(_QWORD *)(FdoFromDevice + 5824);
}
