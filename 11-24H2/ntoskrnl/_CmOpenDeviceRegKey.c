/*
 * XREFs of _CmOpenDeviceRegKey @ 0x1408C6880
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14071D7EC (IopIsReportedAlready.c)
 *     PipApplyFunctionToServiceInstances @ 0x140722AC0 (PipApplyFunctionToServiceInstances.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x140724908 (PiUEventBroadcastPortsChangedEvent.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14072A318 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14072A970 (PiDevCfgProcessDeviceCallback.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     _CmDeleteDeviceMappedPropertyFromDriverKeyRegValue @ 0x14081E024 (_CmDeleteDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     _CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14081E148 (_CmDeleteDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmSetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x14081F61C (_CmSetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     PnpCheckDeviceIdsChanged @ 0x140888A78 (PnpCheckDeviceIdsChanged.c)
 *     _CmGetDeviceRegPropWorker @ 0x1408C5D70 (_CmGetDeviceRegPropWorker.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C6A30 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpDispatchDevice @ 0x1408CDBB0 (_PnpDispatchDevice.c)
 *     PiCMOpenDeviceKey @ 0x1409638F0 (PiCMOpenDeviceKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140964374 (PiDevCfgEnumDeviceKeys.c)
 *     PiQueryAndAllocateBootResources @ 0x14098DD70 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x14098DEA4 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14098E280 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x14098E5B0 (PiQueryResourceRequirements.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x140990DBC (PnpDeviceObjectToDeviceInstance.c)
 *     _CmSetDeviceRegPropWorker @ 0x140990F90 (_CmSetDeviceRegPropWorker.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140995494 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgInitDeviceContext @ 0x140997624 (PiDevCfgInitDeviceContext.c)
 *     _CmDeleteDeviceWorker @ 0x1409B2CB8 (_CmDeleteDeviceWorker.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1409B5B50 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1409B6034 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceCompoundFilters @ 0x1409B62B0 (_CmGetDeviceCompoundFilters.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     IoOpenDeviceRegistryKey @ 0x1409CAEC0 (IoOpenDeviceRegistryKey.c)
 *     _CmCreateDeviceWorker @ 0x1409D4358 (_CmCreateDeviceWorker.c)
 *     PpForEachDeviceInstanceDriver @ 0x140A0CE90 (PpForEachDeviceInstanceDriver.c)
 *     IopReleaseDeviceResources @ 0x140A10CF8 (IopReleaseDeviceResources.c)
 *     PipMakeGloballyUniqueId @ 0x140A582C0 (PipMakeGloballyUniqueId.c)
 *     PnpIsDeviceInstanceEnabled @ 0x140A5DBC0 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x140A5DEE0 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopGetRootDevices @ 0x140A624B8 (IopGetRootDevices.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140A797FC (_CmDeleteDeviceRegKeyWorker.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A847DC (PiDevCfgResetDeviceDriverSettings.c)
 *     IopWriteAllocatedResourcesToRegistry @ 0x140A8D634 (IopWriteAllocatedResourcesToRegistry.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A9C7E4 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     PnpGetDeviceInstanceRegistryValue @ 0x140ABC880 (PnpGetDeviceInstanceRegistryValue.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1408C6A30 (_CmOpenDeviceRegKeyWorker.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKey(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  __int64 (__fastcall *v8)(_QWORD, _QWORD); // rsi
  __int64 Pool2; // rax
  char *v14; // rbx
  int v15; // eax
  int v16; // edi
  _DWORD *v17; // rax
  int v19; // ecx

  v8 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 504);
  Pool2 = ExAllocatePool2(0x100uLL);
  v14 = (char *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 16) = a3;
    *(_DWORD *)(Pool2 + 20) = a4;
    *(_DWORD *)(Pool2 + 24) = a5;
    *(_BYTE *)(Pool2 + 28) = a6;
    *(_QWORD *)(Pool2 + 32) = a7;
    if ( v8 )
    {
      if ( v8 == PiPnpRtlCmActionCallback )
        v15 = PiPnpRtlCmActionCallback(a1, a2);
      else
        v15 = guard_dispatch_icall_no_overrides(a1, a2, 1LL, 11LL);
      if ( v15 == -1073741822 )
      {
        v8 = 0LL;
      }
      else
      {
        if ( v15 == -1073741536 )
        {
          v16 = *(_DWORD *)v14;
          v17 = v14 + 40;
          goto LABEL_8;
        }
        if ( v15 )
          goto LABEL_20;
      }
    }
    v16 = CmOpenDeviceRegKeyWorker(a1, *((_DWORD *)v14 + 6), v14[28], *((_QWORD *)v14 + 4), (__int64)(v14 + 40));
    v17 = v14 + 40;
    if ( !v8 )
      goto LABEL_8;
    *(_DWORD *)v14 = v16;
    v19 = guard_dispatch_icall_no_overrides(a1, a2, 1LL, 11LL);
    v17 = v14 + 40;
    switch ( v19 )
    {
      case -1073741822:
        goto LABEL_8;
      case -1073741536:
        v16 = *(_DWORD *)v14;
        goto LABEL_8;
      case 0:
LABEL_8:
        if ( v16 >= 0 )
        {
          if ( a8 )
            *a8 = *v17;
        }
        goto LABEL_11;
    }
LABEL_20:
    v16 = -1073741595;
LABEL_11:
    ExFreePoolWithTag(v14, 0);
    return (unsigned int)v16;
  }
  return 3221225495LL;
}
