/*
 * XREFs of memset @ 0x140070F40
 * Callers:
 *     NewNameSpaceObject @ 0x140001CFC (NewNameSpaceObject.c)
 *     ParseObjName @ 0x140001F40 (ParseObjName.c)
 *     WriteField @ 0x14000229C (WriteField.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     PushScope @ 0x1400050C0 (PushScope.c)
 *     FreeObjOwner @ 0x140005670 (FreeObjOwner.c)
 *     WriteFieldLoop @ 0x140005880 (WriteFieldLoop.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     PushTerm @ 0x14000A040 (PushTerm.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     PushAccFieldObj @ 0x140011520 (PushAccFieldObj.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 *     NewContext @ 0x140011FB0 (NewContext.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     InitContext @ 0x140012A34 (InitContext.c)
 *     PushCall @ 0x140013020 (PushCall.c)
 *     PciConfigSpaceHandlerWorker @ 0x140014A50 (PciConfigSpaceHandlerWorker.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x140017990 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIEcOpRegionHandler @ 0x140018460 (ACPIEcOpRegionHandler.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x140019370 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x14001DC20 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x14001E810 (ACPIBuildSpecialSynchronizationRequest.c)
 *     IsPciBusAsync @ 0x14001E9A0 (IsPciBusAsync.c)
 *     ACPIBuildRunMethodRequest @ 0x14001F5EC (ACPIBuildRunMethodRequest.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1400213A0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x140021D00 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x140029D5C (ACPIBuildSynchronizationRequestInternal.c)
 *     LinkNodeCrackPrt @ 0x14002B0F8 (LinkNodeCrackPrt.c)
 *     NewObjOwner @ 0x14002FE10 (NewObjOwner.c)
 *     OpRegion @ 0x140030DC0 (OpRegion.c)
 *     ACPIWakeDisableAsync @ 0x140031C68 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032750 (ACPIWakeEnableDisableAsync.c)
 *     ACPIAssociateWakeInterrupt @ 0x140033F48 (ACPIAssociateWakeInterrupt.c)
 *     IndexField @ 0x140035220 (IndexField.c)
 *     BankField @ 0x140035420 (BankField.c)
 *     Field @ 0x140035640 (Field.c)
 *     ParseField @ 0x140035A2C (ParseField.c)
 *     CopyObjBuffer @ 0x14003AC48 (CopyObjBuffer.c)
 *     CreateXField @ 0x14003B324 (CreateXField.c)
 *     Buffer @ 0x14003E650 (Buffer.c)
 *     Package @ 0x1400400A0 (Package.c)
 *     EnableDisableCMOSRegions @ 0x140040CC0 (EnableDisableCMOSRegions.c)
 *     Method @ 0x140041060 (Method.c)
 *     RtlStringCchPrintfExW @ 0x140041E00 (RtlStringCchPrintfExW.c)
 *     FindNSObj @ 0x140042958 (FindNSObj.c)
 *     RtlStringCbPrintfExW @ 0x140043050 (RtlStringCbPrintfExW.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1400463D4 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     ACPICMLidPowerStateCallBack @ 0x140046FD0 (ACPICMLidPowerStateCallBack.c)
 *     ACPIBuildDeviceExtension @ 0x140047880 (ACPIBuildDeviceExtension.c)
 *     ACPIBuildDeviceRequest @ 0x140048B6C (ACPIBuildDeviceRequest.c)
 *     ACPIInternalQueryExtendedAddress @ 0x140049438 (ACPIInternalQueryExtendedAddress.c)
 *     RtlStringCchPrintfExA @ 0x14004BC9C (RtlStringCchPrintfExA.c)
 *     InitMutex @ 0x14004E58C (InitMutex.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x14004FE24 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     Simulator_AllocAndInitTestData @ 0x140052074 (Simulator_AllocAndInitTestData.c)
 *     ACPIBuildThermalZoneRequest @ 0x140052698 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x140052E00 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIWriteEventLogEntry @ 0x140053A50 (ACPIWriteEventLogEntry.c)
 *     AcpiHandleDeviceFirmwareLock @ 0x140054470 (AcpiHandleDeviceFirmwareLock.c)
 *     IrqLibpGetVectorInput @ 0x1400549E0 (IrqLibpGetVectorInput.c)
 *     AcpiSetupNativeMethodContext @ 0x140054B44 (AcpiSetupNativeMethodContext.c)
 *     ACPIEcLogError @ 0x140056040 (ACPIEcLogError.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1400580BC (RtlStringExHandleOtherFlagsW.c)
 *     ACPIBuildPowerResourceRequest @ 0x140058B30 (ACPIBuildPowerResourceRequest.c)
 *     PerformHandlerInvocation @ 0x14005C858 (PerformHandlerInvocation.c)
 *     ACPIDispatchAddDevice @ 0x14005DCE0 (ACPIDispatchAddDevice.c)
 *     RtlStringExHandleOtherFlagsA @ 0x140060CF0 (RtlStringExHandleOtherFlagsA.c)
 *     ACPIGpeClearEventMasks @ 0x140060E30 (ACPIGpeClearEventMasks.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x140061370 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIQueryGedDeviceInterface @ 0x1400617C8 (ACPIQueryGedDeviceInterface.c)
 *     ACPIInternalEvaluateOST @ 0x140061980 (ACPIInternalEvaluateOST.c)
 *     ACPIIoctlGetDeviceInformation @ 0x140062418 (ACPIIoctlGetDeviceInformation.c)
 *     EnableDisableDeviceRegionSpace @ 0x140065944 (EnableDisableDeviceRegionSpace.c)
 *     ACPIWakeInitializePmeRouting @ 0x140069B18 (ACPIWakeInitializePmeRouting.c)
 *     ACPIWmiRegisterGuids @ 0x14006A460 (ACPIWmiRegisterGuids.c)
 *     ParseDLMObjectInternal @ 0x14006CF34 (ParseDLMObjectInternal.c)
 *     AMLICreateNativeNamespaceObject @ 0x14006D5F4 (AMLICreateNativeNamespaceObject.c)
 *     SetLogSize @ 0x14006E6BC (SetLogSize.c)
 *     Debugger @ 0x14006E888 (Debugger.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     InitEvent @ 0x14006EB00 (InitEvent.c)
 *     PowerRes @ 0x14006EC70 (PowerRes.c)
 *     Processor @ 0x14006EDE0 (Processor.c)
 *     RtlSetVolatileMemory @ 0x140070B60 (RtlSetVolatileMemory.c)
 *     memset$thunk$772440563353939046 @ 0x140072020 (memset$thunk$772440563353939046.c)
 *     ACPIConnectWakeInterrupt @ 0x140096FB8 (ACPIConnectWakeInterrupt.c)
 *     ArbBootAllocation @ 0x140097830 (ArbBootAllocation.c)
 *     WppTraceCallback @ 0x14009A4B0 (WppTraceCallback.c)
 *     AcpiArblibIsAliasedRangeAvailable @ 0x14009B124 (AcpiArblibIsAliasedRangeAvailable.c)
 *     ACPIEcConnectGpioInterrupt @ 0x14009C82C (ACPIEcConnectGpioInterrupt.c)
 *     QueryExternalTranslatorInterface @ 0x14009D7D4 (QueryExternalTranslatorInterface.c)
 *     EnableDisableIPMIRegions @ 0x14009EEB0 (EnableDisableIPMIRegions.c)
 *     ACPIEvaluateSpareDsm @ 0x14009F4B4 (ACPIEvaluateSpareDsm.c)
 *     AcpiSetupNativeMethodInterface @ 0x1400A1BC0 (AcpiSetupNativeMethodInterface.c)
 *     UnRegisterOperationRegionHandler @ 0x1400A2424 (UnRegisterOperationRegionHandler.c)
 *     AcpiQueryPrmInterface @ 0x1400A3288 (AcpiQueryPrmInterface.c)
 *     PcisuppInitializePciRouting @ 0x1400A9148 (PcisuppInitializePciRouting.c)
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IrqArbpQueryConflictIsa @ 0x1400AA46C (IrqArbpQueryConflictIsa.c)
 *     ArbQueryConflict @ 0x1400AB6B0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1400ABC40 (ArbRetestAllocation.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1400ADA38 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPISystemPowerQueryDeviceCapabilities @ 0x1400AE5B0 (ACPISystemPowerQueryDeviceCapabilities.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400AE930 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIFilterQueryBusD3ColdSupport @ 0x1400AF558 (ACPIFilterQueryBusD3ColdSupport.c)
 *     AcpiQueryPciBusInterface @ 0x1400AF830 (AcpiQueryPciBusInterface.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1400AFD10 (ACPIInternalGetDeviceCapabilities.c)
 *     ACPIMatchHardwareAddress @ 0x1400AFD8C (ACPIMatchHardwareAddress.c)
 *     ACPIMatchHardwareId @ 0x1400B00B4 (ACPIMatchHardwareId.c)
 *     ACPIBusIommuBusInterface @ 0x1400B0E50 (ACPIBusIommuBusInterface.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1400B15D0 (IrqTranslatepQueryDeviceIrql.c)
 *     IcUpdateControllers @ 0x1400B1BF8 (IcUpdateControllers.c)
 *     PcisuppIsPciDevice @ 0x1400B1EC4 (PcisuppIsPciDevice.c)
 *     IcClearPossibleData @ 0x1400B27A4 (IcClearPossibleData.c)
 *     IrqPolicyGetDevicePolicy @ 0x1400B3440 (IrqPolicyGetDevicePolicy.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1400B85CC (ACPIBusIrpQueryCompatibleId.c)
 *     ArbpBuildAllocationStack @ 0x1400BDA20 (ArbpBuildAllocationStack.c)
 *     RegisterOperationRegionHandler @ 0x1400BFA6C (RegisterOperationRegionHandler.c)
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 *     AcpipInitPciBusStatePool @ 0x1400C62C8 (AcpipInitPciBusStatePool.c)
 *     DriverEntry @ 0x1400C64B0 (DriverEntry.c)
 *     OSInterruptVector @ 0x1400C6D78 (OSInterruptVector.c)
 *     Simulator_NotifyTablesAreLoaded @ 0x1400C82BC (Simulator_NotifyTablesAreLoaded.c)
 *     InitIllegalIOAddressListFromHAL @ 0x1400C8494 (InitIllegalIOAddressListFromHAL.c)
 *     IrqLibpSetSciConnectionData @ 0x1400C87D0 (IrqLibpSetSciConnectionData.c)
 *     ProcessorInitGlobalState @ 0x1400C895C (ProcessorInitGlobalState.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  __m128 v5; // xmm0
  char *v6; // r8
  __m128 *v7; // rdx
  _OWORD *v8; // r9
  size_t v9; // r8
  __m128 *v10; // r9
  size_t v11; // r8
  _DWORD *v12; // r9
  size_t v13; // r8

  result = a1;
  v4 = 0x101010101010101LL * (unsigned __int8)Val;
  v5 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
  if ( Size >= 0x40 )
  {
    if ( (_isa_info & 2) != 0 && Size >= 0x320 )
      return (void *)_memset_repmovs();
    *(__m128 *)a1 = v5;
    v6 = (char *)a1 + Size;
    a1 = (void *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
    Size = v6 - (_BYTE *)a1;
    if ( Size >= 0x40 )
    {
      v7 = (__m128 *)((char *)a1 + Size - 16);
      v8 = (_OWORD *)(((unsigned __int64)a1 + Size - 48) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = Size >> 6;
      do
      {
        *(__m128 *)a1 = v5;
        *((__m128 *)a1 + 1) = v5;
        a1 = (char *)a1 + 64;
        --v9;
        *((__m128 *)a1 - 2) = v5;
        *((__m128 *)a1 - 1) = v5;
      }
      while ( v9 );
      *v8 = v5;
      v8[1] = v5;
      v8[2] = v5;
      *v7 = v5;
      return result;
    }
LABEL_9:
    v10 = (__m128 *)((char *)a1 + Size - 16);
    *(__m128 *)a1 = v5;
    v11 = (Size & 0x20) >> 1;
    *v10 = v5;
    *(__m128 *)((char *)a1 + v11) = v5;
    *(__m128 *)((char *)v10 - v11) = v5;
    return result;
  }
  if ( Size >= 0x10 )
    goto LABEL_9;
  if ( Size < 4 )
  {
    if ( Size )
    {
      *(_BYTE *)a1 = v4;
      if ( Size != 1 )
        *(_WORD *)((char *)a1 + Size - 2) = v4;
    }
  }
  else
  {
    v12 = (char *)a1 + Size - 4;
    *(_DWORD *)a1 = v4;
    v13 = (Size & 8) >> 1;
    *v12 = v4;
    *(_DWORD *)((char *)a1 + v13) = v4;
    *(_DWORD *)((char *)v12 - v13) = v4;
  }
  return result;
}
