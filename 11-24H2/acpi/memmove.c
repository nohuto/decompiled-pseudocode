/*
 * XREFs of memmove @ 0x140070C40
 * Callers:
 *     ParseString @ 0x1400014BC (ParseString.c)
 *     RawFieldAccess @ 0x140001978 (RawFieldAccess.c)
 *     ParseObjName @ 0x140001F40 (ParseObjName.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     WriteFieldLoop @ 0x140005880 (WriteFieldLoop.c)
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     DupObjData @ 0x140006F90 (DupObjData.c)
 *     CreateNameSpaceObject @ 0x140009050 (CreateNameSpaceObject.c)
 *     GetNameSpaceObject @ 0x140009900 (GetNameSpaceObject.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     WriteFieldObj @ 0x14000B3B0 (WriteFieldObj.c)
 *     ReadFieldObj @ 0x14000B7E0 (ReadFieldObj.c)
 *     AccessFieldData @ 0x14000BEC0 (AccessFieldData.c)
 *     AccessBaseField @ 0x14000C680 (AccessBaseField.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     ACPIIoctlEvalPreProcessingV1Ex @ 0x140010C04 (ACPIIoctlEvalPreProcessingV1Ex.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x140010F68 (ACPIIoctlEvalPreProcessingV1.c)
 *     PushAccFieldObj @ 0x140011520 (PushAccFieldObj.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 *     ACPIDetectPdoDevices @ 0x140016B58 (ACPIDetectPdoDevices.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140019BA0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x14001B450 (ACPIIoctlEvalPreProcessingV2.c)
 *     ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x14001C360 (ACPIDevicePowerProcessPhase5DeviceSubPhase2.c)
 *     InternalRawAccessOpRegionHandler @ 0x140023860 (InternalRawAccessOpRegionHandler.c)
 *     ParseSuperName @ 0x140024820 (ParseSuperName.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     ToDecStr @ 0x14002DC70 (ToDecStr.c)
 *     ConvertToBuffer @ 0x14002E0E0 (ConvertToBuffer.c)
 *     ToHexStr @ 0x14002EEC0 (ToHexStr.c)
 *     Concat @ 0x14002F1F0 (Concat.c)
 *     ConvertToInteger @ 0x14002F7C4 (ConvertToInteger.c)
 *     ConvertToString @ 0x14002FAA4 (ConvertToString.c)
 *     Field @ 0x140035640 (Field.c)
 *     ParseField @ 0x140035A2C (ParseField.c)
 *     ACPIThermalCompletePendingIrps @ 0x1400381F0 (ACPIThermalCompletePendingIrps.c)
 *     ACPIAmliBuildObjectPathname @ 0x140039780 (ACPIAmliBuildObjectPathname.c)
 *     AMLIGetNameSpaceObjectPath @ 0x140039980 (AMLIGetNameSpaceObjectPath.c)
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x14003A458 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferV2 @ 0x14003AAC0 (ACPIIoctlCalculateOutputBufferV2.c)
 *     CopyObjBuffer @ 0x14003AC48 (CopyObjBuffer.c)
 *     ACPIDetectEjectDevices @ 0x14003CD1C (ACPIDetectEjectDevices.c)
 *     ACPIDetectDockDevices @ 0x14003D250 (ACPIDetectDockDevices.c)
 *     ParseInteger @ 0x14003E5E0 (ParseInteger.c)
 *     Buffer @ 0x14003E650 (Buffer.c)
 *     ACPIGetConvertToCompatibleIDWide @ 0x14003EE60 (ACPIGetConvertToCompatibleIDWide.c)
 *     ACPIMapNamedTable @ 0x140040810 (ACPIMapNamedTable.c)
 *     Method @ 0x140041060 (Method.c)
 *     FindNSObjMainNoLock @ 0x140042848 (FindNSObjMainNoLock.c)
 *     FindNSObj @ 0x140042958 (FindNSObj.c)
 *     ACPIBusIrpQueryInterface @ 0x140043A60 (ACPIBusIrpQueryInterface.c)
 *     ACPIInitStartDevice @ 0x140044BF4 (ACPIInitStartDevice.c)
 *     ACPIGetWorkerForBuffer @ 0x140046220 (ACPIGetWorkerForBuffer.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1400463D4 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AcpiRecordBlackboxInformationWorker @ 0x140047F20 (AcpiRecordBlackboxInformationWorker.c)
 *     ACPIBusAndFilterIrpQueryRemovalRelations @ 0x1400482A0 (ACPIBusAndFilterIrpQueryRemovalRelations.c)
 *     ACPIIoctlEnumChildren @ 0x140049858 (ACPIIoctlEnumChildren.c)
 *     AcpiDeviceResetInterface @ 0x14004ABF0 (AcpiDeviceResetInterface.c)
 *     AMLIFindNameSpaceObject @ 0x14004C134 (AMLIFindNameSpaceObject.c)
 *     AcpiConvertMethodArgumentsToObjData @ 0x14004E238 (AcpiConvertMethodArgumentsToObjData.c)
 *     AcpiDiagTraceDeviceReset @ 0x14004EDF0 (AcpiDiagTraceDeviceReset.c)
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x14004FE24 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIInternalSetDeviceInterface @ 0x1400507B8 (ACPIInternalSetDeviceInterface.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x140053814 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     PnpiBiosInterruptCombineToIoDescriptor @ 0x140054188 (PnpiBiosInterruptCombineToIoDescriptor.c)
 *     ParseFieldConnection @ 0x140054520 (ParseFieldConnection.c)
 *     ACPIBuildProcessorExtension @ 0x14005A0E8 (ACPIBuildProcessorExtension.c)
 *     ACPIDeviceIdMutiStringMatchCallback @ 0x140061370 (ACPIDeviceIdMutiStringMatchCallback.c)
 *     ACPIIoctlEvalPreProcessingV2Ex @ 0x140061F70 (ACPIIoctlEvalPreProcessingV2Ex.c)
 *     ACPIIoctlGetDeviceInformation @ 0x140062418 (ACPIIoctlGetDeviceInformation.c)
 *     ACPIIoctlQueryDeviceBiosNameEx @ 0x140062684 (ACPIIoctlQueryDeviceBiosNameEx.c)
 *     IpmiOpRegionHandler @ 0x1400633E0 (IpmiOpRegionHandler.c)
 *     ACPIProcessorContainerFillIoctlBuffer @ 0x1400662F0 (ACPIProcessorContainerFillIoctlBuffer.c)
 *     ACPIVectorGetEntry @ 0x1400699FC (ACPIVectorGetEntry.c)
 *     AMLICreateOverrideObjectDefault @ 0x14006C648 (AMLICreateOverrideObjectDefault.c)
 *     AMLICreateOverrideObjectDep @ 0x14006C73C (AMLICreateOverrideObjectDep.c)
 *     LoadTable @ 0x14006F600 (LoadTable.c)
 *     LinkNodepRunSrsWorker @ 0x140070260 (LinkNodepRunSrsWorker.c)
 *     RtlCopyVolatileMemory @ 0x140070B40 (RtlCopyVolatileMemory.c)
 *     RtlMoveVolatileMemory @ 0x140070B50 (RtlMoveVolatileMemory.c)
 *     IrqTranslatorEjectInterface @ 0x1400975B0 (IrqTranslatorEjectInterface.c)
 *     ArbAddOrdering @ 0x1400976AC (ArbAddOrdering.c)
 *     ACPIInternalGrowBuffer @ 0x140097794 (ACPIInternalGrowBuffer.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1400979F0 (ACPIIoctlQueryDeviceBiosName.c)
 *     ACPIQuerySpareDsm @ 0x14009826C (ACPIQuerySpareDsm.c)
 *     ACPIDockIrpQueryInterface @ 0x140099D30 (ACPIDockIrpQueryInterface.c)
 *     WppTraceCallback @ 0x14009A4B0 (WppTraceCallback.c)
 *     AcpiArblibAllocateArbiterInstance @ 0x14009ABC0 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIEcConnectHandler @ 0x14009CE70 (ACPIEcConnectHandler.c)
 *     ACPIIoctlTranslateBiosResources @ 0x14009ECE0 (ACPIIoctlTranslateBiosResources.c)
 *     ACPIGetUniqueId @ 0x14009F5D0 (ACPIGetUniqueId.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1400A1F20 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 *     ACPIRegReadEntireAcpiTable @ 0x1400A37D8 (ACPIRegReadEntireAcpiTable.c)
 *     ACPIRegReadEntireSimulatorAcpiTable @ 0x1400A3A38 (ACPIRegReadEntireSimulatorAcpiTable.c)
 *     OSOpenNextSubkey @ 0x1400A3F64 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1400A41A8 (OSReadNextRegValue.c)
 *     ACPIThermalBuildConstraints @ 0x1400A7698 (ACPIThermalBuildConstraints.c)
 *     BuildTranslatorRanges @ 0x1400A7FA0 (BuildTranslatorRanges.c)
 *     ArbPruneOrdering @ 0x1400AB4EC (ArbPruneOrdering.c)
 *     ArbQueryConflict @ 0x1400AB6B0 (ArbQueryConflict.c)
 *     ArbRegReadMmConfigRanges @ 0x1400ABA94 (ArbRegReadMmConfigRanges.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1400AE930 (ACPIProcessPhysicalDeviceLocation.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1400AF408 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIFilterIrpQueryInterface @ 0x1400B0590 (ACPIFilterIrpQueryInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1400B0E50 (ACPIBusIommuBusInterface.c)
 *     IrqArbpSetDeviceProperties @ 0x1400B2FA8 (IrqArbpSetDeviceProperties.c)
 *     ACPIGetPnpLocationString @ 0x1400B5410 (ACPIGetPnpLocationString.c)
 *     OSReadRegValue @ 0x1400B6898 (OSReadRegValue.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1400B7D04 (ACPIBusIrpQueryInstanceId.c)
 *     ACPIBusIrpQueryHardwareId @ 0x1400B7EE4 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1400B85CC (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1400B8F9C (ACPIBusIrpQueryDeviceId.c)
 *     ACPIIommuGetDeviceId @ 0x1400BA140 (ACPIIommuGetDeviceId.c)
 *     ACPIAmliEvaluateOsc @ 0x1400BA520 (ACPIAmliEvaluateOsc.c)
 *     PnpBiosResourcesToNtResources @ 0x1400BB1A4 (PnpBiosResourcesToNtResources.c)
 *     PnpiAddSidebandResources @ 0x1400BFD38 (PnpiAddSidebandResources.c)
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 *     RtlDuplicateCmResourceList @ 0x1400C7D74 (RtlDuplicateCmResourceList.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  void *result; // rax
  __int64 v4; // r11
  __int64 v5; // rdx
  __int128 v6; // xmm1
  bool v7; // cf
  signed __int64 v8; // rdx
  char v9; // r11
  _BYTE *v10; // rcx
  char v11; // r11
  char *v12; // r11
  signed __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __m128 v17; // xmm1
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __m128 v23; // xmm4
  unsigned __int64 j; // r9
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // r9
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  char *v31; // rcx
  __int128 v32; // xmm0
  unsigned __int64 v33; // rcx
  size_t v34; // r8
  _OWORD *v35; // r11
  __int128 v36; // xmm1
  size_t v37; // r9
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  __int128 v40; // xmm3
  __int128 v41; // xmm4
  size_t i; // r9
  size_t v43; // r8

  result = a1;
  if ( Size < 8 )
  {
    if ( Size )
    {
      v7 = Src < a1;
      v8 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 )
      {
        v10 = (char *)a1 + Size;
        do
        {
          v11 = v10[v8 - 1];
          --v10;
          --Size;
          *v10 = v11;
        }
        while ( Size );
      }
      else
      {
        do
        {
          v9 = *((_BYTE *)a1 + v8);
          a1 = (char *)a1 + 1;
          --Size;
          *((char *)a1 - 1) = v9;
        }
        while ( Size );
      }
    }
  }
  else if ( Size > 0x10 )
  {
    if ( Size > 0x20 )
    {
      v12 = (char *)Src + Size;
      v7 = Src < a1;
      v13 = (_BYTE *)Src - (_BYTE *)a1;
      if ( v7 && v12 > a1 )
      {
        v31 = (char *)a1 + Size;
        v32 = *(_OWORD *)&v31[v13 - 16];
        v33 = (unsigned __int64)(v31 - 16);
        v34 = Size - 16;
        if ( (v33 & 0xF) != 0 )
        {
          v35 = (_OWORD *)v33;
          v33 &= 0xFFFFFFFFFFFFFFF0uLL;
          v36 = *(_OWORD *)(v33 + v13);
          *v35 = v32;
          v32 = v36;
          v34 = v33 - (_QWORD)result;
        }
        v37 = v34 >> 6;
        if ( v34 >> 6 )
        {
          v34 &= 0x3Fu;
          do
          {
            v38 = *(_OWORD *)(v33 + v13 - 16);
            v39 = *(_OWORD *)(v33 + v13 - 32);
            v40 = *(_OWORD *)(v33 + v13 - 48);
            v41 = *(_OWORD *)(v33 + v13 - 64);
            *(_OWORD *)v33 = v32;
            v33 -= 64LL;
            --v37;
            *(_OWORD *)(v33 + 48) = v38;
            *(_OWORD *)(v33 + 32) = v39;
            *(_OWORD *)(v33 + 16) = v40;
            v32 = v41;
          }
          while ( v37 );
        }
        for ( i = v34 >> 4; i; --i )
        {
          *(_OWORD *)v33 = v32;
          v32 = *(_OWORD *)(v33 + v13 - 16);
          v33 -= 16LL;
        }
        v43 = v34 & 0xF;
        if ( v43 )
          *(_OWORD *)(v33 - v43) = *(_OWORD *)(v33 - v43 + v13);
        *(_OWORD *)v33 = v32;
      }
      else
      {
        v14 = *(__m128 *)((char *)a1 + v13);
        v15 = (unsigned __int64)a1 + 16;
        if ( (v15 & 0xF) != 0 )
        {
          v16 = v15 & 0xFFFFFFFFFFFFFFF0uLL;
          v17 = *(__m128 *)(v16 + v13);
          *(__m128 *)result = v14;
          v14 = v17;
          v15 = v16 + 16;
        }
        v18 = (unsigned __int64)result + Size - v15;
        v19 = v18 >> 6;
        if ( v18 >> 6 )
        {
          if ( v19 > 0x1000 )
          {
            v26 = v18 >> 6;
            v18 &= 0x3Fu;
            _mm_prefetch((const char *)(v15 + v13 + 64), 0);
            do
            {
              v27 = *(__m128 *)(v15 + v13);
              v28 = *(__m128 *)(v15 + v13 + 16);
              v29 = *(__m128 *)(v15 + v13 + 32);
              v30 = *(__m128 *)(v15 + v13 + 48);
              _mm_stream_ps((float *)(v15 - 16), v14);
              v15 += 64LL;
              _mm_prefetch((const char *)(v15 + v13 + 64), 0);
              --v26;
              _mm_stream_ps((float *)(v15 - 64), v27);
              _mm_stream_ps((float *)(v15 - 48), v28);
              _mm_stream_ps((float *)(v15 - 32), v29);
              v14 = v30;
            }
            while ( v26 );
            _mm_sfence();
          }
          else
          {
            v18 &= 0x3Fu;
            do
            {
              v20 = *(_OWORD *)(v15 + v13);
              v21 = *(_OWORD *)(v15 + v13 + 16);
              v22 = *(_OWORD *)(v15 + v13 + 32);
              v23 = *(__m128 *)(v15 + v13 + 48);
              *(__m128 *)(v15 - 16) = v14;
              v15 += 64LL;
              --v19;
              *(_OWORD *)(v15 - 64) = v20;
              *(_OWORD *)(v15 - 48) = v21;
              *(_OWORD *)(v15 - 32) = v22;
              v14 = v23;
            }
            while ( v19 );
          }
        }
        for ( j = v18 >> 4; j; --j )
        {
          *(__m128 *)(v15 - 16) = v14;
          v14 = *(__m128 *)(v15 + v13);
          v15 += 16LL;
        }
        v25 = v18 & 0xF;
        if ( v25 )
          *(_OWORD *)(v15 + v25 - 16) = *(_OWORD *)(v15 + v25 - 16 + v13);
        *(__m128 *)(v15 - 16) = v14;
      }
    }
    else
    {
      v6 = *(_OWORD *)((char *)Src + Size - 16);
      *(_OWORD *)a1 = *(_OWORD *)Src;
      *(_OWORD *)((char *)a1 + Size - 16) = v6;
    }
  }
  else
  {
    v4 = *(_QWORD *)Src;
    v5 = *(_QWORD *)((char *)Src + Size - 8);
    *(_QWORD *)a1 = v4;
    *(_QWORD *)((char *)a1 + Size - 8) = v5;
  }
  return result;
}
