/*
 * XREFs of HalpIommuInitDiscard @ 0x140BFED18
 * Callers:
 *     HalpIommuInitSystem @ 0x140B3D550 (HalpIommuInitSystem.c)
 * Callees:
 *     HviGetHardwareFeatures @ 0x1404A37E0 (HviGetHardwareFeatures.c)
 *     HalpIommuRegisterBuiltinPlugins @ 0x140564AC0 (HalpIommuRegisterBuiltinPlugins.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
  qword_140F8E548 = (__int64)&HalpIommuParaVirtDeviceCache;
  HalpIommuParaVirtDeviceCache = (__int64)&HalpIommuParaVirtDeviceCache;
  qword_140FC0378 = (__int64)&HalpIommuDeviceCreatedList;
  HalpIommuDeviceCreatedList = (__int64)&HalpIommuDeviceCreatedList;
  qword_140FC0408 = (__int64)&HalpRidAliasList;
  HalpRidAliasList = (__int64)&HalpRidAliasList;
  qword_140F8E538 = (__int64)&IommuInterfaceStateChangeCallbackListHead;
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
  qword_140FC03A8 = (__int64)&HalpIommuAtsDeviceList;
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
