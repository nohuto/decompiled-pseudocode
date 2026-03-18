/*
 * XREFs of ACPIRootInitialize @ 0x1400A67CC
 * Callers:
 *     ACPITableLoad @ 0x14004A4E0 (ACPITableLoad.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     ACPIInitReferenceDeviceExtension @ 0x140017C58 (ACPIInitReferenceDeviceExtension.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_ @ 0x1400283FC (WPP_RECORDER_SF_.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     IsHypervisorLpiCapable @ 0x14004A708 (IsHypervisorLpiCapable.c)
 *     _ACPIInternalError @ 0x14004C514 (_ACPIInternalError.c)
 *     ACPIInternalSetDeviceInterface @ 0x1400507B8 (ACPIInternalSetDeviceInterface.c)
 *     HviGetHypervisorFeatures @ 0x14005326C (HviGetHypervisorFeatures.c)
 *     AMLISetNSObjectContext @ 0x140054458 (AMLISetNSObjectContext.c)
 *     ACPIRootDeviceNotifyPepDiscoverDevice @ 0x140054FE8 (ACPIRootDeviceNotifyPepDiscoverDevice.c)
 *     ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice @ 0x140055404 (ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice.c)
 *     ACPIFixedFeatureButtonInitialize @ 0x140055534 (ACPIFixedFeatureButtonInitialize.c)
 *     ACPIVerifyUSB4Presence @ 0x1400679BC (ACPIVerifyUSB4Presence.c)
 *     Feature_MultiSubNodeHeteroScheduler__private_ReportDeviceUsage @ 0x140067BCC (Feature_MultiSubNodeHeteroScheduler__private_ReportDeviceUsage.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     ACPIEvaluateOscMethodOnRootBus @ 0x140098204 (ACPIEvaluateOscMethodOnRootBus.c)
 *     AcpiDiagTraceS4DsmFailure @ 0x140098EC4 (AcpiDiagTraceS4DsmFailure.c)
 *     ACPIPccLegacyInitialize @ 0x14009F9A0 (ACPIPccLegacyInitialize.c)
 *     ACPIEvaluateDsmEmcaMethodOnRootBus @ 0x1400A6348 (ACPIEvaluateDsmEmcaMethodOnRootBus.c)
 *     ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus @ 0x1400A64C4 (ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus.c)
 *     ACPIEvaluateOscWheaMethodOnRootBus @ 0x1400A664C (ACPIEvaluateOscWheaMethodOnRootBus.c)
 *     IsHypervisorCpcCapable @ 0x1400A7224 (IsHypervisorCpcCapable.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 *     ACPIWriteOscSupportToRegistry @ 0x1400B740C (ACPIWriteOscSupportToRegistry.c)
 *     OSCreateHandle @ 0x1400B7660 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1400B77B8 (OSWriteRegValue.c)
 *     ACPIAmliEvaluateOsc @ 0x1400BA520 (ACPIAmliEvaluateOsc.c)
 */

__int64 ACPIRootInitialize()
{
  unsigned __int16 v0; // r15
  unsigned int v1; // r12d
  int v2; // edi
  int v3; // esi
  unsigned int v4; // r13d
  int v5; // edx
  __int64 v6; // rbx
  __int64 *v7; // rcx
  __int64 *v8; // rbx
  __int64 *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // r9
  bool v14; // al
  bool v15; // bl
  unsigned __int16 v16; // bx
  unsigned __int16 v17; // r14
  int NodeActiveProcessorCount; // eax
  unsigned __int16 v19; // cx
  USHORT ActiveGroupCount; // ax
  __int64 v21; // rcx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r8d
  unsigned int v26; // ebx
  __int64 v27; // rcx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rcx
  int v31; // r8d
  __int64 v32; // rcx
  unsigned __int8 v33; // al
  bool v34; // cc
  int v35; // eax
  _QWORD *v36; // rax
  HANDLE Handle; // [rsp+30h] [rbp-50h] BYREF
  int v39; // [rsp+38h] [rbp-48h] BYREF
  int v40[4]; // [rsp+40h] [rbp-40h] BYREF
  int v41[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 Data; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v43[8]; // [rsp+68h] [rbp-18h] BYREF

  v0 = 0;
  v39 = 0;
  v43[0] = 0;
  Data = 0LL;
  *(_QWORD *)v40 = 0LL;
  v1 = 0;
  Usb4ControlGranted = 0;
  v2 = 0;
  v3 = 0;
  LOBYTE(v4) = 0;
  if ( (int)AMLIGetNameSpaceObject("\\_SB", 0LL, v40, 0) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        22,
        30,
        (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids);
    }
    ACPIInternalError(0x110C56uLL);
  }
  ACPIInitReferenceDeviceExtension(RootDeviceExtension);
  v6 = *(_QWORD *)v40;
  v7 = *(__int64 **)v40;
  *(_QWORD *)(RootDeviceExtension + 760) = *(_QWORD *)v40;
  AMLISetNSObjectContext(v7, RootDeviceExtension);
  ACPIRootDeviceNotifyPepDiscoverDevice();
  ACPIAmliPreDefinedRootObjectsNotifyPepDiscoverDevice();
  ACPIFixedFeatureButtonInitialize();
  v8 = (__int64 *)AMLIGetParent(v6);
  v9 = AMLIGetNamedChild(v8, 1229867359);
  AMLIDereferenceHandleEx((__int64)v8);
  if ( v9 )
  {
    AMLIAsyncEvalObject(v9, 0LL, 0, 0LL, 0LL, 0LL);
    AMLIDereferenceHandleEx((__int64)v9);
  }
  if ( (AcpiOverrideAttributes & 0x4000) == 0 )
  {
    v40[0] = 0;
    if ( !(unsigned int)ACPIEvaluateOscWheaMethodOnRootBus(v11, v10, v12, v13, v40) )
      v2 = 1;
  }
  ACPIPccLegacyInitialize(v11);
  v14 = IsHypervisorLpiCapable();
  *(_OWORD *)v41 = 0LL;
  v15 = v14;
  HviGetHypervisorFeatures();
  if ( (*(_QWORD *)v41 & 0x100000000000LL) != 0 )
  {
    if ( !(unsigned __int8)IsHypervisorCpcCapable() )
      AcpiRootFeaturesSupported &= 0xFFFEEF9F;
    if ( !v15 )
      AcpiRootFeaturesSupported &= ~1u;
    v39 |= 1u;
  }
  v16 = 0;
  v17 = KeQueryHighestNodeNumber() + 1;
  if ( v17 )
  {
    do
    {
      NodeActiveProcessorCount = KeQueryNodeActiveProcessorCount(v0);
      v19 = v16 + 1;
      if ( !NodeActiveProcessorCount )
        v19 = v16;
      ++v0;
      v16 = v19;
    }
    while ( v0 < v17 );
    v3 = 0;
  }
  ActiveGroupCount = KeQueryActiveGroupCount();
  if ( v16 > 1u || ActiveGroupCount > 1u )
    Feature_MultiSubNodeHeteroScheduler__private_ReportDeviceUsage();
  LODWORD(Handle) = 4;
  *(_QWORD *)v41 = 0LL;
  v40[0] = 0;
  if ( (int)OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters") >= 0
    && (int)OSReadRegValue("USB4OSNativeCMPresent") >= 0 )
  {
    if ( v40[0] )
      AcpiRootFeaturesSupported |= 0x40000u;
    else
      AcpiRootFeaturesSupported &= ~0x40000u;
  }
  if ( (AcpiOverrideAttributes & 0x8000000) != 0 )
    AcpiRootFeaturesSupported &= ~0x200000u;
  if ( !(unsigned int)ACPIEvaluateOscMethodOnRootBus(v21, 0, v22) )
  {
    v26 = ((unsigned int)AcpiRootFeaturesSupported >> 4) & 1;
    AcpiRootFeaturesGranted = AcpiRootFeaturesSupported;
    if ( v26 )
      v2 = 1;
    if ( (AcpiRootFeaturesSupported & 0x20) != 0 )
    {
      LOBYTE(v24) = -(AcpiRootFeaturesSupported & 0x40);
      v3 = ((AcpiRootFeaturesSupported & 0x40) != 0) + 1;
    }
    if ( (AcpiRootFeaturesSupported & 0x40000) != 0 )
    {
      if ( (int)ACPIVerifyUSB4Presence(v24, v23, v25) < 0 )
      {
        Usb4ControlGranted = 0;
        Usb4ControlRetained = 0;
      }
      else
      {
        Usb4ControlGranted = 1;
        Usb4ControlRetained = 1;
      }
    }
    v1 = v26;
    v4 = ((unsigned int)AcpiRootFeaturesSupported >> 19) & 1;
    if ( (AcpiRootFeaturesSupported & 0x200000) != 0 && (AcpiOverrideAttributes & 0x8000000) == 0 )
      AcpiPrmSupportGranted = 1;
  }
  v27 = *(_QWORD *)(RootDeviceExtension + 760);
  *(_OWORD *)v41 = SB_OSC_IOV_UUID;
  ACPIAmliEvaluateOsc(v27, (int)v41, v25, 1, &v39);
  Handle = 0LL;
  *(_OWORD *)v41 = SB_OSC_VSM_UUID;
  ACPIAmliEvaluateOsc(*(_QWORD *)(RootDeviceExtension + 760), (int)v41, v28, 2, &Handle);
  ACPIWriteOscSupportToRegistry(v2, v1, v3, v29, v4, AcpiPrmSupportGranted);
  if ( v2 )
  {
    ACPIEvaluateDsmEmcaMethodOnRootBus(v30, (__int64)&Data);
    Handle = 0LL;
    if ( (int)OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters") >= 0 )
    {
      OSWriteRegValue("EMcaLoggingSupport", Handle, &Data, 1u);
      OSWriteRegValue("EMcaL1DirectoryBase", Handle, v43, 8u);
      if ( Handle )
        ZwClose(Handle);
    }
  }
  AcpiInterruptCombiningSupported = 0;
  v32 = *((_QWORD *)AcpiInformation + 1);
  v33 = *(_BYTE *)(v32 + 8);
  v34 = v33 <= 6u;
  if ( v33 != 6 )
  {
LABEL_47:
    if ( v34 )
      goto LABEL_49;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v32 + 131) < 2u )
  {
    v34 = 1;
    goto LABEL_47;
  }
LABEL_48:
  AcpiRootFeaturesSupported |= 0x2000u;
  ACPIEvaluateOscMethodOnRootBus(v32, 1u, v31);
  AcpiInterruptCombiningSupported = (AcpiRootFeaturesSupported & 0x2000) != 0;
LABEL_49:
  if ( *((_BYTE *)AcpiInformation + 133) )
  {
    v35 = ACPIEvaluateDsmEnforceS4SupportCheckOnRootBus();
    if ( v35 < 0 )
      AcpiDiagTraceS4DsmFailure(v35);
    Handle = 0LL;
    if ( (int)OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters") >= 0 )
    {
      OSWriteRegValue("StrictS4CheckSupport", Handle, &AcpiStrictS4Supported, 1u);
      if ( Handle )
        ZwClose(Handle);
    }
  }
  v36 = (_QWORD *)(RootDeviceExtension + 864);
  *(_QWORD *)(RootDeviceExtension + 872) = RootDeviceExtension + 864;
  *v36 = v36;
  KeInitializeEvent((PRKEVENT)(RootDeviceExtension + 904), SynchronizationEvent, 1u);
  Usb4FeatureControlPushLock = 0LL;
  AcpiUsb4FeatureControlGranted = 0;
  ACPIInternalSetDeviceInterface(*(PDEVICE_OBJECT *)(RootDeviceExtension + 784), &GUID_ACPI_ROOT_DEVICE_UUID);
  return 0LL;
}
