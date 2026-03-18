/*
 * XREFs of _CmGetDeviceRegProp @ 0x1408C5BB0
 * Callers:
 *     IopIsReportedAlready @ 0x14071D7EC (IopIsReportedAlready.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1407267A4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140727980 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140727BD0 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072897C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x14072A1C0 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14072A970 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072C4F4 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072C8FC (PpDevCfgProcessDeviceExtensions.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     _CmClassFilterCallback @ 0x14081ADD0 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x14081BE80 (_CmServiceFilterCallback.c)
 *     PnpCheckDeviceIdsChanged @ 0x140888A78 (PnpCheckDeviceIdsChanged.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B84A0 (PiPnpRtlSetObjectProperty.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1408BC37C (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceStatus @ 0x1408BC8C8 (_CmGetDeviceStatus.c)
 *     IoGetDeviceProperty @ 0x1408BCAC0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1408BD05C (PiGetDeviceRegProperty.c)
 *     PiControlGetPropertyData @ 0x1408BD4B0 (PiControlGetPropertyData.c)
 *     PiCMValidateDeviceInstance @ 0x1408BE2FC (PiCMValidateDeviceInstance.c)
 *     PiCMHandleIoctl @ 0x1408C3A00 (PiCMHandleIoctl.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C5D70 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1409095F0 (_CmGetDeviceSoftwareKeyPath.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140964374 (PiDevCfgEnumDeviceKeys.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140990834 (PiDcUpdateDeviceContainerMembership.c)
 *     PipGetRegistryDwordWithFallback @ 0x140994A6C (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x140994B48 (PipGetRegistrySecurityWithFallback.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140996D60 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x140996E44 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14099B5CC (PiPnpRtlSetDeviceRegProperty.c)
 *     _CmDeleteDeviceWorker @ 0x1409B2CB8 (_CmDeleteDeviceWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409B5B50 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1409C5A04 (PnpCallDriverQueryServiceHelper.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EEF24 (PiDcHandleCustomDeviceEvent.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409FD9D0 (PiPnpRtlServiceFilterCallback.c)
 *     PiDeviceRegistration @ 0x140A0CBC4 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140A0CE90 (PpForEachDeviceInstanceDriver.c)
 *     PiQueryRemovableDeviceOverride @ 0x140A32AF8 (PiQueryRemovableDeviceOverride.c)
 *     IopPnPDispatch @ 0x140A5D2E0 (IopPnPDispatch.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5DBC0 (PnpIsDeviceInstanceEnabled.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140A6EC48 (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140A7063C (PipGenerateContainerID.c)
 *     _CmIsLocalMachineContainer @ 0x140A76C64 (_CmIsLocalMachineContainer.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A84170 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A9C7E4 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140AA3320 (PiCreateDriverSwDeviceCallback.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140ABB70C (PiCMQueryRemove.c)
 *     PipMigrateResetDeviceCallback @ 0x140C21B20 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140C21D70 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C5D70 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 */

__int64 __fastcall CmGetDeviceRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  __int64 (__fastcall *v12)(_QWORD, _QWORD); // r15
  int v13; // eax
  __int64 result; // rax
  unsigned int v15; // ebx
  int v16; // eax
  _DWORD v17[4]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-A8h]
  unsigned int v19; // [rsp+58h] [rbp-A0h]
  __int64 v20; // [rsp+60h] [rbp-98h]
  __int64 v21; // [rsp+68h] [rbp-90h]
  __int64 v22; // [rsp+70h] [rbp-88h]
  int v23; // [rsp+78h] [rbp-80h]

  memset_0(v17, 0, 0x58uLL);
  v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 504);
  v21 = a6;
  v18 = a3;
  v19 = a4;
  v20 = a5;
  v22 = a7;
  v23 = a8;
  if ( !v12 )
    goto LABEL_7;
  if ( v12 == PiPnpRtlCmActionCallback )
    v13 = PiPnpRtlCmActionCallback(a1, a2);
  else
    v13 = guard_dispatch_icall_no_overrides(a1, a2, 1LL, 9LL);
  switch ( v13 )
  {
    case -1073741822:
      v12 = 0LL;
      goto LABEL_7;
    case -1073741536:
      return v17[0];
    case 0:
LABEL_7:
      result = CmGetDeviceRegPropWorker(a1, a2, v18, v19, v20, v21, v22, v23);
      v15 = result;
      if ( !v12 )
        return result;
      v17[0] = result;
      if ( v12 == PiPnpRtlCmActionCallback )
        v16 = PiPnpRtlCmActionCallback(a1, a2);
      else
        v16 = guard_dispatch_icall_no_overrides(a1, a2, 1LL, 9LL);
      if ( v16 == -1073741822 )
        return v15;
      if ( v16 != -1073741536 )
      {
        if ( v16 )
          return 3221225701LL;
        return v15;
      }
      return v17[0];
  }
  return 3221225701LL;
}
