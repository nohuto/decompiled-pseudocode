/*
 * XREFs of WPP_RECORDER_SF_d @ 0x14003A7DC
 * Callers:
 *     ACPIDeviceDiscoverDependencies @ 0x140026F6C (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x140027364 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIBuildDeviceExtension @ 0x140047880 (ACPIBuildDeviceExtension.c)
 *     ACPIRangeValidatePciMemoryResource @ 0x14004D288 (ACPIRangeValidatePciMemoryResource.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053814 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIVectorBuildVectorMasks @ 0x140056420 (ACPIVectorBuildVectorMasks.c)
 *     ACPIBuildPowerResourceExtension @ 0x140058A34 (ACPIBuildPowerResourceExtension.c)
 *     ACPIDispatchAddDevice @ 0x14005DCE0 (ACPIDispatchAddDevice.c)
 *     ACPIBusIrpStartDevice @ 0x14009B960 (ACPIBusIrpStartDevice.c)
 *     ACPIProcessHardwareInformation @ 0x14009EFF0 (ACPIProcessHardwareInformation.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1400A35AC (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1400A37D8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1400A3A38 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1400A3F64 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1400A41A8 (OSReadNextRegValue.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400A43CC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400A4820 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpCmResourcesToBiosResources @ 0x1400A5714 (PnpCmResourcesToBiosResources.c)
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1400A9FFC (IrqArbpAssignIrqFromLinkNode.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1400B6E24 (ACPIRegReadAMLRegistryEntry.c)
 *     OSOpenHandle @ 0x1400B7118 (OSOpenHandle.c)
 *     OSOpenUnicodeHandle @ 0x1400B71E8 (OSOpenUnicodeHandle.c)
 *     OSCreateHandle @ 0x1400B7660 (OSCreateHandle.c)
 *     OSWriteRegValue @ 0x1400B77B8 (OSWriteRegValue.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400BADE8 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1400BB1A4 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400BC174 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     ACPIFilterIrpStartDevice @ 0x1400BC6E0 (ACPIFilterIrpStartDevice.c)
 *     ACPIInitialize @ 0x1400C4008 (ACPIInitialize.c)
 *     ACPIInitializeAMLI @ 0x1400C4A38 (ACPIInitializeAMLI.c)
 *     OSReadAcpiConfigurationData @ 0x1400C4D0C (OSReadAcpiConfigurationData.c)
 *     OSInterruptVector @ 0x1400C6D78 (OSInterruptVector.c)
 *     ACPILoadProcessFACS @ 0x1400C7618 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1400C9308 (ACPILoadProcessRSDT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rbx
  unsigned int v9; // edi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v7 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v7),
      43LL,
      a5,
      a4,
      va,
      4LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v12, va, 4LL, 0LL);
}
