/*
 * XREFs of HalpIommuInitDiscard @ 0x140C11D18
 * Callers:
 *     HalpIommuInitSystem @ 0x140B4F5A0 (HalpIommuInitSystem.c)
 * Callees:
 *     HviGetHardwareFeatures @ 0x14049E6A0 (HviGetHardwareFeatures.c)
 *     HalpIommuRegisterBuiltinPlugins @ 0x14056511C (HalpIommuRegisterBuiltinPlugins.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 HalpIommuInitDiscard()
{
  bool v0; // zf
  _QWORD *v1; // rax
  _QWORD *v12; // rax
  unsigned int v13; // eax
  ULONG_PTR v14; // rcx
  unsigned int v15; // edx
  int v16; // eax
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF

  HalpIommuParaVirtDeviceCacheLock = 0LL;
  HalpDeviceBlockUnblockPushLock = 0LL;
  HalpIommuDeviceCreatedListPushLock = 0LL;
  IommuInterfaceStateChangeCallbackPushLock = 0LL;
  v0 = HalpHvCpuManager == 0;
  qword_140F8EED8 = (__int64)&HalpIommuParaVirtDeviceCache;
  HalpIommuParaVirtDeviceCache = (__int64)&HalpIommuParaVirtDeviceCache;
  qword_140FC0D78 = (__int64)&HalpIommuDeviceCreatedList;
  HalpIommuDeviceCreatedList = (__int64)&HalpIommuDeviceCreatedList;
  qword_140FC0E18 = (__int64)&HalpRidAliasList;
  HalpRidAliasList = (__int64)&HalpRidAliasList;
  qword_140F8EEC8 = (__int64)&IommuInterfaceStateChangeCallbackListHead;
  IommuInterfaceStateChangeCallbackListHead = (__int64)&IommuInterfaceStateChangeCallbackListHead;
  v1 = (_QWORD *)HalIommuDispatch;
  v18 = 0LL;
  HalpHvParaVirtIommuDomain = 0;
  HalpIommuDmaGuardTableOptIn = 0;
  *(_QWORD *)(HalIommuDispatch + 8) = IommuGetConfiguration;
  v1[2] = IommuGetLibraryContext;
  v1[3] = IommuMapDevice;
  v1[4] = IommuEnableDevicePasid;
  v1[5] = IommuSetAddressSpace;
  v1[6] = IommuDisableDevicePasid;
  v1[7] = IommuUnmapDevice;
  v1[9] = IommuFlushTb;
  v1[10] = IommuFlushAllPasid;
  v1[11] = IommuProcessPageRequestQueue;
  v1[16] = IommuDevicePowerChange;
  v1[17] = IommuBeginDeviceReset;
  v1[18] = IommuFinalizeDeviceReset;
  v1[19] = IommuGetAtsSettings;
  v1[20] = IommuCreateAtsDevice;
  v1[21] = IommuDeleteAtsDevice;
  qword_140FC0DA8 = (__int64)&HalpIommuAtsDeviceList;
  HalpIommuAtsDeviceList = (__int64)&HalpIommuAtsDeviceList;
  HalpHvIommu = 0;
  if ( !v0 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    _RAX = 1073741827LL;
    HalpHvIommuDeviceDomain = BYTE3(_RDX) & 1;
    __asm { cpuid }
    HalpHvParaVirtIommuDomain = (_RDX & 0x2000000) != 0;
    HviGetHardwareFeatures((__int64)&v18);
    if ( (v18 & 0x20) != 0 )
    {
      v12 = (_QWORD *)HalIommuDispatch;
      HalpHvIommu = 1;
      *(_QWORD *)(HalIommuDispatch + 8) = IommuHvGetConfiguration;
      v12[5] = IommuHvSetAddressSpace;
      v12[9] = IommuHvFlushTb;
      v12[10] = IommuHvFlushAllPasid;
      v12[16] = IommuHvDevicePowerChange;
    }
  }
  v13 = HalpIommuRegisterBuiltinPlugins();
  v14 = HalpIommuList;
  v15 = v13;
  if ( (ULONG_PTR *)HalpIommuList != &HalpIommuList )
  {
    while ( 1 )
    {
      v16 = *(_DWORD *)(v14 + 472);
      v14 = *(_QWORD *)v14;
      if ( (v16 & 0x40) == 0 )
        break;
      if ( (ULONG_PTR *)v14 == &HalpIommuList )
        return v15;
    }
  }
  HalpIommuX2ApicSupport = 0;
  return v15;
}
