/*
 * XREFs of WPP_RECORDER_SF_Lqss @ 0x14001E4C0
 * Callers:
 *     ACPIDetectFilterDevices @ 0x140016708 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x140016B58 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1400175C0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x140017990 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     OSNotifyDeviceWake @ 0x140018190 (OSNotifyDeviceWake.c)
 *     ACPIDevicePowerProcessPhase0DeviceSubPhase2 @ 0x14001CCE0 (ACPIDevicePowerProcessPhase0DeviceSubPhase2.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x14001DC20 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x14001E030 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x14001E1D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x14001E6F0 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessDevicePhasePsc @ 0x14001FF30 (ACPIBuildProcessDevicePhasePsc.c)
 *     ACPIBuildProcessDevicePhasePep @ 0x140020340 (ACPIBuildProcessDevicePhasePep.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x140020890 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1400213A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDelayedDependencyPhase1 @ 0x140021920 (ACPIBuildProcessDelayedDependencyPhase1.c)
 *     ACPICMLidWorker @ 0x1400241F0 (ACPICMLidWorker.c)
 *     ACPIBuildProcessDevicePhaseEjd @ 0x140029280 (ACPIBuildProcessDevicePhaseEjd.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1400294B0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCrs @ 0x140029900 (ACPIBuildProcessDevicePhaseCrs.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140031A38 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x140031C68 (ACPIWakeDisableAsync.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1400322E0 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032750 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140032D20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x14003B890 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x14003BDF0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPIDetectDockDevices @ 0x14003D250 (ACPIDetectDockDevices.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1400444A4 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x140046670 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1400482A0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x140048850 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x140049E60 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x14004A1E0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x14004CD90 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIInitDosDeviceName @ 0x14004DA9C (ACPIInitDosDeviceName.c)
 *     ACPISystemPowerInitializeRootMapping @ 0x14004F400 (ACPISystemPowerInitializeRootMapping.c)
 *     ACPIInternalSetDeviceInterface @ 0x1400507B8 (ACPIInternalSetDeviceInterface.c)
 *     ACPIBuildThermalZoneExtension @ 0x140052428 (ACPIBuildThermalZoneExtension.c)
 *     ACPIBuildDockExtension @ 0x140058480 (ACPIBuildDockExtension.c)
 *     ACPIBuildProcessDelayedDependencyPhase0 @ 0x140058C10 (ACPIBuildProcessDelayedDependencyPhase0.c)
 *     ACPIBuildProcessDevicePhasePrs @ 0x140058E20 (ACPIBuildProcessDevicePhasePrs.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x140059370 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x140059470 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1400598C0 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZoneHid @ 0x140059B60 (ACPIBuildProcessThermalZoneHid.c)
 *     ACPIBuildProcessThermalZonePep @ 0x140059CF0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x140059F80 (ACPIBuildProcessThermalZoneUid.c)
 *     ACPIBuildProcessorExtension @ 0x14005A0E8 (ACPIBuildProcessorExtension.c)
 *     ACPIBuildWakeEventDeviceContext @ 0x14005A504 (ACPIBuildWakeEventDeviceContext.c)
 *     ACPICMButtonStartWorker @ 0x14005BB60 (ACPICMButtonStartWorker.c)
 *     ACPICMButtonWaitWakeComplete @ 0x14005C160 (ACPICMButtonWaitWakeComplete.c)
 *     ACPIDispatchAddDevice @ 0x14005DCE0 (ACPIDispatchAddDevice.c)
 *     ACPIFanStartDevice @ 0x140096820 (ACPIFanStartDevice.c)
 *     ACPIDockIrpQueryCapabilities @ 0x140099350 (ACPIDockIrpQueryCapabilities.c)
 *     ACPIBusIrpQueryBusInformationEIO @ 0x14009B6B0 (ACPIBusIrpQueryBusInformationEIO.c)
 *     ACPISystemPowerProcessSxD @ 0x1400A7574 (ACPISystemPowerProcessSxD.c)
 *     ACPIThermalStartDevice @ 0x1400A78E0 (ACPIThermalStartDevice.c)
 *     ACPIInternalDeviceQueryCapabilities @ 0x1400ADDC0 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1400ADF10 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400AE5B0 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIInitStopDevice @ 0x1400B439C (ACPIInitStopDevice.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400B529C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusInformation @ 0x1400BF750 (ACPIBusIrpQueryBusInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Lqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        const char *a8,
        const char *a9)
{
  __int64 v9; // rsi
  __int64 v11; // rdi
  __int64 v12; // rbx
  unsigned __int64 v14; // r14
  unsigned int v15; // ebp
  unsigned int v16; // r12d
  int v17; // eax
  unsigned __int8 v18; // cf
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v22; // r8
  const char *v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rdx
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-78h]

  v9 = (__int64)a8;
  v11 = (__int64)a9;
  v12 = -1LL;
  v14 = (unsigned __int64)a3 >> 16;
  v15 = a2;
  v16 = a4;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v14 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v18 = _bittest(&v17, (a3 - 1) & 0x1F);
  v19 = 5LL;
  if ( v18 && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v14 + 1) >= a2 )
  {
    if ( a9 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a9[v22] );
      v19 = v22 + 1;
    }
    v23 = a9;
    if ( !a9 )
      v23 = "NULL";
    if ( a8 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a8[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a8;
    if ( !a8 )
      v26 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v14),
      43LL,
      a5,
      v16,
      &a6,
      4LL,
      &a7,
      8LL,
      v26,
      v25,
      v23,
      v19,
      0LL);
  }
  if ( v11 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( *(_BYTE *)(v11 + v20) );
  }
  if ( v9 )
  {
    do
      ++v12;
    while ( *(_BYTE *)(v9 + v12) );
  }
  LOWORD(v27) = v16;
  return WppAutoLogTrace(a1, v15, a3, a5, v27, &a6, 4LL, &a7);
}
