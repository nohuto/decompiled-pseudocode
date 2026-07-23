/*
 * XREFs of _CmGetDeviceRegProp @ 0x1408C35E0
 * Callers:
 *     IopIsReportedAlready @ 0x14071B37C (IopIsReportedAlready.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140724334 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140725510 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140725760 (PiDcResetChildDeviceContainers.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072650C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgInitDeviceCallback @ 0x140727E10 (PiDevCfgInitDeviceCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140728690 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x14072A508 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14072A910 (PpDevCfgProcessDeviceExtensions.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     _CmClassFilterCallback @ 0x14081B510 (_CmClassFilterCallback.c)
 *     _CmServiceFilterCallback @ 0x14081C5C0 (_CmServiceFilterCallback.c)
 *     PnpCheckDeviceIdsChanged @ 0x14088C928 (PnpCheckDeviceIdsChanged.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1408B9CCC (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceStatus @ 0x1408BA218 (_CmGetDeviceStatus.c)
 *     IoGetDeviceProperty @ 0x1408BA410 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1408BA9AC (PiGetDeviceRegProperty.c)
 *     PiControlGetPropertyData @ 0x1408BAE00 (PiControlGetPropertyData.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C37A0 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1408E0D10 (_CmGetDeviceSoftwareKeyPath.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14094C14C (PiDevCfgEnumDeviceKeys.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14097B874 (PiDcUpdateDeviceContainerMembership.c)
 *     PipGetRegistryDwordWithFallback @ 0x14097FAAC (PipGetRegistryDwordWithFallback.c)
 *     PipGetRegistrySecurityWithFallback @ 0x14097FB88 (PipGetRegistrySecurityWithFallback.c)
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140982CA8 (PnpCallDriverQueryServiceHelper.c)
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409ACEE0 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiDeviceRegistration @ 0x1409BAFC8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1409BB294 (PpForEachDeviceInstanceDriver.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1409C94B4 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x1409C9598 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1409CDD3C (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EC964 (PiDcHandleCustomDeviceEvent.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1409F6C40 (PiPnpRtlServiceFilterCallback.c)
 *     PiQueryRemovableDeviceOverride @ 0x140A26B08 (PiQueryRemovableDeviceOverride.c)
 *     IopPnPDispatch @ 0x140A55010 (IopPnPDispatch.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A55FE0 (PnpIsDeviceInstanceEnabled.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A5AFD8 (IopInitializeDeviceInstanceKey.c)
 *     PpHotSwapUpdateRemovalPolicy @ 0x140A680CC (PpHotSwapUpdateRemovalPolicy.c)
 *     PipGenerateContainerID @ 0x140A69ACC (PipGenerateContainerID.c)
 *     _CmIsLocalMachineContainer @ 0x140A70D84 (_CmIsLocalMachineContainer.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     PpDevCfgProcessDeviceReset @ 0x140A7EC90 (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A97D54 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140A9E6B0 (PiCreateDriverSwDeviceCallback.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 *     PipMigrateResetDeviceCallback @ 0x140C23B60 (PipMigrateResetDeviceCallback.c)
 *     PipResetDevice @ 0x140C23DB0 (PipResetDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C37A0 (_CmGetDeviceRegPropWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
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
    v13 = guard_dispatch_icall_no_overrides(a1, a2);
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
        v16 = guard_dispatch_icall_no_overrides(a1, a2);
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
