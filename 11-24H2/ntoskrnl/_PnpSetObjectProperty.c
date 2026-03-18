/*
 * XREFs of _PnpSetObjectProperty @ 0x1408B88E8
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     IoGetDeviceDirectory @ 0x14071EEF0 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x1407239C8 (PnpUpdateRebootRequiredReason.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x140732300 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x1407323E8 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x140736040 (PiIommuSaveDeviceAtsSettings.c)
 *     PipSetGuestAssignedProperty @ 0x140736308 (PipSetGuestAssignedProperty.c)
 *     PiDrvDbRegisterNode @ 0x140738408 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodeHive @ 0x140739634 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbSetupNodes @ 0x140739ABC (PiDrvDbSetupNodes.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081E810 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B84A0 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     _CmUpdateDevicePanelInterface @ 0x14098EC58 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x14098EE00 (_CmUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     _CmDeleteDeviceWorker @ 0x1409B2CB8 (_CmDeleteDeviceWorker.c)
 *     PipClearDevNodeProblem @ 0x1409C5678 (PipClearDevNodeProblem.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140A0EDE0 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpStartDeviceNode @ 0x140A10740 (PnpStartDeviceNode.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140A427EC (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140A689C0 (PnpInitializeInheritedRestrictedSd.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A6B488 (PnpDeleteLockedDeviceNodes.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140A7761C (PnpClearDeviceTemporaryProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A79530 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpInitializeSessionId @ 0x140A7C000 (PnpInitializeSessionId.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A80898 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140A984F8 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A9E6E0 (PiDcContainerRequiresConfiguration.c)
 *     PipMigrateResetDeviceCallback @ 0x140C21B20 (PipMigrateResetDeviceCallback.c)
 *     PipInitComputerIds @ 0x140C63B74 (PipInitComputerIds.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     _PnpSetObjectPropertyWorker @ 0x1408B8BB0 (_PnpSetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpSetObjectProperty(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        ULONG a9,
        int a10)
{
  __int64 v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  unsigned int v18; // eax
  int v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  _DWORD v22[4]; // [rsp+58h] [rbp-39h] BYREF
  int v23[2]; // [rsp+68h] [rbp-29h]
  __int64 v24; // [rsp+70h] [rbp-21h]
  __int64 v25; // [rsp+78h] [rbp-19h]
  int v26; // [rsp+80h] [rbp-11h]
  __int64 v27; // [rsp+88h] [rbp-9h]
  ULONG SecurityDescriptorLength; // [rsp+90h] [rbp-1h]
  int v29; // [rsp+94h] [rbp+3h]

  memset_0(v22, 0, 0x50uLL);
  v14 = *(_QWORD *)(a1 + 488);
  v24 = a5;
  v25 = a6;
  v26 = a7;
  v27 = a8;
  SecurityDescriptorLength = a9;
  v29 = a10;
  *(_QWORD *)v23 = a4;
  if ( v14 )
  {
    v15 = guard_dispatch_icall_no_overrides(a1, a2, a3, 9LL);
    if ( v15 == -1073741822 )
    {
      v14 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        return v22[0];
      if ( v15 )
        return (unsigned int)-1073741595;
    }
  }
  v18 = PnpSetObjectPropertyWorker(a1, a2, a3, v23[0], v24, v25, v26, v27, SecurityDescriptorLength, v29);
  v16 = v18;
  if ( v14 )
  {
    v22[0] = v18;
    v19 = guard_dispatch_icall_no_overrides(a1, a2, a3, 9LL);
    v20 = v19;
    if ( v19 != -1073741822 )
    {
      if ( v19 == -1073741536 )
        return v22[0];
      v21 = v16;
      if ( v20 )
        return (unsigned int)-1073741595;
      return v21;
    }
  }
  return v16;
}
