/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x140A85920
 * Callers:
 *     PipHardwareConfigClearStartOverrides @ 0x140717BB4 (PipHardwareConfigClearStartOverrides.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14081B760 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14081BC70 (_CmEnumSubkeyCallback.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14081C0AC (_CmGetMatchingCommonClassListWorker.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14081C3C0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14081D7D0 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14081DEB0 (_CmGetMatchingDevicePanelListWorker.c)
 *     _PnpGetGenericObjectList @ 0x14082110C (_PnpGetGenericObjectList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x14092644C (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCreateDriverSwDevices @ 0x14097B774 (PiCreateDriverSwDevices.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1409AA8EC (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409F8880 (DrvDbGetObjectSubKeyCallback.c)
 *     PipMigratePnpState @ 0x140C235F4 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x14097D7A0 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *(_QWORD *)(a1 + 224);
  v7[0] = v4;
  v7[1] = (__int64)PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v7[2] = (__int64)v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2, (__int64)a2, v7);
}
