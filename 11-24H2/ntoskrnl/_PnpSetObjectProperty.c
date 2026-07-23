/*
 * XREFs of _PnpSetObjectProperty @ 0x1408B6258
 * Callers:
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071AE90 (IoReportRootDevice.c)
 *     IoGetDeviceDirectory @ 0x14071CA80 (IoGetDeviceDirectory.c)
 *     PnpUpdateRebootRequiredReason @ 0x140721558 (PnpUpdateRebootRequiredReason.c)
 *     PipDmgSaveDeviceDmarPolicy @ 0x140730310 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x1407303F8 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x140733F70 (PiIommuSaveDeviceAtsSettings.c)
 *     PipSetGuestAssignedProperty @ 0x140734238 (PipSetGuestAssignedProperty.c)
 *     PiDrvDbRegisterNode @ 0x140736338 (PiDrvDbRegisterNode.c)
 *     PiDrvDbSetupNodeHive @ 0x140737564 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbSetupNodes @ 0x1407379EC (PiDrvDbSetupNodes.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x14081EF50 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 *     _CmUpdateDevicePanelInterface @ 0x140979C90 (_CmUpdateDevicePanelInterface.c)
 *     _CmUpdateDevicePanel @ 0x140979E38 (_CmUpdateDevicePanel.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PipCallDriverAddDevice @ 0x140980ED0 (PipCallDriverAddDevice.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     _CmDeleteDeviceWorker @ 0x1409AA048 (_CmDeleteDeviceWorker.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpStartDeviceNode @ 0x1409BEB50 (PnpStartDeviceNode.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x140A3802C (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PnpInitializeInheritedRestrictedSd @ 0x140A61D70 (PnpInitializeInheritedRestrictedSd.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A649E8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpClearDeviceTemporaryProperties @ 0x140A7173C (PnpClearDeviceTemporaryProperties.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x140A73830 (PiDrvDbLoadNodeWorkerCallback.c)
 *     PnpInitializeSessionId @ 0x140A76300 (PnpInitializeSessionId.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     _CmGetDeviceCompoundFiltersWorker @ 0x140A7B2F8 (_CmGetDeviceCompoundFiltersWorker.c)
 *     _CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues @ 0x140A94CB4 (_CmDeleteDeviceMappedPropertyForAllDriverKeyRegValues.c)
 *     PiDcContainerRequiresConfiguration @ 0x140A99C50 (PiDcContainerRequiresConfiguration.c)
 *     PipMigrateResetDeviceCallback @ 0x140C23B60 (PipMigrateResetDeviceCallback.c)
 *     PipInitComputerIds @ 0x140C65CF0 (PipInitComputerIds.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     _PnpSetObjectPropertyWorker @ 0x1408B6520 (_PnpSetObjectPropertyWorker.c)
 */

__int64 __fastcall PnpSetObjectProperty(
        __int64 a1,
        __int64 a2,
        int a3,
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
    v15 = guard_dispatch_icall_no_overrides(a1, a2);
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
    v19 = guard_dispatch_icall_no_overrides(a1, a2);
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
