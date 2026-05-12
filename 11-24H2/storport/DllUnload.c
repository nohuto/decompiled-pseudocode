/*
 * XREFs of DllUnload @ 0x1400A5120
 * Callers:
 *     <none>
 * Callees:
 *     FreeNvmeAuthKeyTable @ 0x14006DE74 (FreeNvmeAuthKeyTable.c)
 *     RaidFreeATADeviceIdMappings @ 0x14006F394 (RaidFreeATADeviceIdMappings.c)
 *     RaidFreeEnclosureIdMappings @ 0x14006F410 (RaidFreeEnclosureIdMappings.c)
 *     StorpShutdownRegistryWatch @ 0x140070418 (StorpShutdownRegistryWatch.c)
 *     UnloadExtensionDriver @ 0x140071204 (UnloadExtensionDriver.c)
 *     RaidSecondaryDumpDeregister @ 0x1400BD65C (RaidSecondaryDumpDeregister.c)
 *     FreeCpuInformation @ 0x140127FDC (FreeCpuInformation.c)
 *     FreeNvmeIceList @ 0x140183948 (FreeNvmeIceList.c)
 *     StorpWheaRemoveErrorSource @ 0x140184CB0 (StorpWheaRemoveErrorSource.c)
 *     wil_UninitializeFeatureStaging @ 0x14018BC54 (wil_UninitializeFeatureStaging.c)
 *     StorpUnregisterShim @ 0x14018CE5C (StorpUnregisterShim.c)
 *     StorKsrUninitialize @ 0x140192B68 (StorKsrUninitialize.c)
 */

__int64 __fastcall DllUnload(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( _InterlockedExchangeAdd(&NumDllInitialize, 0xFFFFFFFF) == 1 )
  {
    StorpUnregisterShim();
    RaidFreeEnclosureIdMappings();
    ExDeleteResourceLite(&EnclosureIdListLock);
    RaidFreeATADeviceIdMappings();
    ExDeleteResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceExtension);
    FreeNvmeIceList();
    ExDeleteResourceLite(&NvmeIceListLock);
    FreeNvmeAuthKeyTable();
    ExDeleteResourceLite((PERESOURCE)&WPP_MAIN_CB.DeviceQueue.32);
    if ( RegWatchContext )
    {
      StorpShutdownRegistryWatch((__int64)RegWatchContext);
      ExFreePoolWithTag(RegWatchContext, 0x57526152u);
      RegWatchContext = 0LL;
    }
    StorpWheaRemoveErrorSource();
    UnloadExtensionDriver(v5, v4, v6);
    StorKsrUninitialize();
    FreeCpuInformation();
    wil_UninitializeFeatureStaging();
  }
  return RaidSecondaryDumpDeregister(a1, a2, a3, a4);
}
