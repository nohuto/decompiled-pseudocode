/*
 * XREFs of DpiGetSysMmAdapterFromDevice @ 0x140011EAC
 * Callers:
 *     DxgkAllocateContiguousMemoryCB @ 0x14000F8E0 (DxgkAllocateContiguousMemoryCB.c)
 *     DxgkCreatePhysicalMemoryObjectCB @ 0x14000FC40 (DxgkCreatePhysicalMemoryObjectCB.c)
 *     DxgkOpenPhysicalMemoryObjectCB @ 0x140010090 (DxgkOpenPhysicalMemoryObjectCB.c)
 *     DxgkFreePagesFromMdlCB @ 0x1400105A0 (DxgkFreePagesFromMdlCB.c)
 *     DxgkAllocatePagesForMdlCB @ 0x1400111F0 (DxgkAllocatePagesForMdlCB.c)
 *     DxgkMapMdlToIoMmuCB @ 0x140056940 (DxgkMapMdlToIoMmuCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x140073550 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018D7A8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x140011F28 (DpiGetFdoFromDevice.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 DpiGetSysMmAdapterFromDevice()
{
  __int64 FdoFromDevice; // rbx

  FdoFromDevice = DpiGetFdoFromDevice();
  if ( !FdoFromDevice )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5360;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"FdoContext != nullptr", 5360LL, 0LL, 0LL, 0LL, 0LL);
  }
  return *(_QWORD *)(FdoFromDevice + 5824);
}
