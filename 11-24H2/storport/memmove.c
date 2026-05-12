/*
 * XREFs of memmove @ 0x140143780
 * Callers:
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x14000D4E0 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     StorpTelemetryGetUnitIoCounters @ 0x14000DC10 (StorpTelemetryGetUnitIoCounters.c)
 *     RaidXrbSetDataBufferAddress @ 0x140012540 (RaidXrbSetDataBufferAddress.c)
 *     RaidpBuildAdapterBusRelations @ 0x1400173D8 (RaidpBuildAdapterBusRelations.c)
 *     StorUnmapSenseInfo @ 0x140025620 (StorUnmapSenseInfo.c)
 *     TranslateToExtendedSrb @ 0x140027B60 (TranslateToExtendedSrb.c)
 *     RaidUnitAssignIdentity @ 0x14002FE48 (RaidUnitAssignIdentity.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x1400324B0 (PortPassThroughMarshalResultsFromSrb.c)
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1400325F8 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     StorpTelemetryMiniportEventWStr @ 0x140035200 (StorpTelemetryMiniportEventWStr.c)
 *     RaUnitBuildDsmNotifyBufferForMiniport @ 0x140035B20 (RaUnitBuildDsmNotifyBufferForMiniport.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x140038D88 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaUnitBuildDsmGeneralBufferForMiniport @ 0x140040C88 (RaUnitBuildDsmGeneralBufferForMiniport.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x140041298 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaidInitializeCryptoEngine @ 0x1400457B4 (RaidInitializeCryptoEngine.c)
 *     StorPortNotification @ 0x14004B4F0 (StorPortNotification.c)
 *     StorpTelemetrySendUnitPerfData @ 0x140051BC8 (StorpTelemetrySendUnitPerfData.c)
 *     StorpUnitInitializePoFxPower @ 0x14005456C (StorpUnitInitializePoFxPower.c)
 *     RaMiniportSaveFeatureList @ 0x1400559E0 (RaMiniportSaveFeatureList.c)
 *     memcpy_s @ 0x140056418 (memcpy_s.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x14006552C (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1400659E4 (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x14006651C (RaidSetStorageAdapterProtocolSpecificProperty.c)
 *     RaidAcquireNvmeIceKeyResources @ 0x1400697EC (RaidAcquireNvmeIceKeyResources.c)
 *     RaidInitializeNvmeIce @ 0x14006A850 (RaidInitializeNvmeIce.c)
 *     AddNvmeAuthKey @ 0x14006D86C (AddNvmeAuthKey.c)
 *     CreateNvmeAuthKeyFromSecret @ 0x14006DA44 (CreateNvmeAuthKeyFromSecret.c)
 *     GetNvmeHostNQN @ 0x14006E10C (GetNvmeHostNQN.c)
 *     GetNvmeHostName @ 0x14006E238 (GetNvmeHostName.c)
 *     RaidAddEnclosureIdMapping @ 0x14006F228 (RaidAddEnclosureIdMapping.c)
 *     TransformNvmeAuthKey @ 0x140070F4C (TransformNvmeAuthKey.c)
 *     StorPortMoveMemory @ 0x140074160 (StorPortMoveMemory.c)
 *     StorPortReadDriverRegistry @ 0x140074540 (StorPortReadDriverRegistry.c)
 *     StorpAdapterInitializePoFxPower @ 0x140074E94 (StorpAdapterInitializePoFxPower.c)
 *     StorpMarkDeviceFailed @ 0x140075234 (StorpMarkDeviceFailed.c)
 *     StorpPopulateErrorData @ 0x14007B0AC (StorpPopulateErrorData.c)
 *     NvmeProtocolSpecificRequestShiftBuffer @ 0x1400886D4 (NvmeProtocolSpecificRequestShiftBuffer.c)
 *     RaBuildHwFirmwareDownloadBufferForMiniport @ 0x140089400 (RaBuildHwFirmwareDownloadBufferForMiniport.c)
 *     RaBuildSetProtocolSpecificPropertyBufferForMiniport @ 0x140089944 (RaBuildSetProtocolSpecificPropertyBufferForMiniport.c)
 *     RaGetProtocolCommandEffects @ 0x140089EC0 (RaGetProtocolCommandEffects.c)
 *     RaProcessStorageEventNotification @ 0x14008A428 (RaProcessStorageEventNotification.c)
 *     RaidFillTcgAuthKey @ 0x14008C178 (RaidFillTcgAuthKey.c)
 *     RaidSetTcgLockingObjectMetadata @ 0x14008E5CC (RaidSetTcgLockingObjectMetadata.c)
 *     StorCreateAnsiString @ 0x14008EFC8 (StorCreateAnsiString.c)
 *     StorCreateSystemLogEntry @ 0x14008F060 (StorCreateSystemLogEntry.c)
 *     StorGUIDToSCSINameString @ 0x14008F32C (StorGUIDToSCSINameString.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x14009634C (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x14009AF44 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceFruIdPropertyIoctl @ 0x14009B3D8 (RaUnitStorageQueryDeviceFruIdPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x14009BCE8 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x14009C17C (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl @ 0x14009C684 (RaUnitStorageSetDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStreamsIoctl @ 0x14009CC74 (RaUnitStreamsIoctl.c)
 *     RaidUnitHierarchicalReset @ 0x14009F474 (RaidUnitHierarchicalReset.c)
 *     NvmeAdapterWmiDeferredRoutine @ 0x1400A5AC0 (NvmeAdapterWmiDeferredRoutine.c)
 *     RaidAdapterWmiDeferredRoutine @ 0x1400A5BA0 (RaidAdapterWmiDeferredRoutine.c)
 *     StorpTelemetryNvmeSendNamespaceIoSizeDistributionData @ 0x1400B7B28 (StorpTelemetryNvmeSendNamespaceIoSizeDistributionData.c)
 *     StorpTelemetryNvmeSendNamespacePerfData @ 0x1400B835C (StorpTelemetryNvmeSendNamespacePerfData.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1400BB4B0 (StorpTelemetrySendUnitIoSizeDistributionData.c)
 *     ReplaceDeviceId @ 0x1400BDD10 (ReplaceDeviceId.c)
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400BEE0C (NvmeControllerIdentifyChangedNamespaces.c)
 *     NvmeControllerStartReenumeration @ 0x1400BF540 (NvmeControllerStartReenumeration.c)
 *     NvmeNamespaceIdentify @ 0x1400BF954 (NvmeNamespaceIdentify.c)
 *     NvmeControllerGetCommandEffectsLog @ 0x1400C7A20 (NvmeControllerGetCommandEffectsLog.c)
 *     NvmeControllerSetHostIdentifier @ 0x1400C9A0C (NvmeControllerSetHostIdentifier.c)
 *     NvmeControllerSetHostMemoryBuffer @ 0x1400C9C40 (NvmeControllerSetHostMemoryBuffer.c)
 *     NvmeAdapterFirmwareDownloadIoctl @ 0x1400D17BC (NvmeAdapterFirmwareDownloadIoctl.c)
 *     NvmeAdapterQueryDeviceRelationsIrp @ 0x1400D59E8 (NvmeAdapterQueryDeviceRelationsIrp.c)
 *     NvmeAdapterStorageInternalQueryPropertyIoctl @ 0x1400D99FC (NvmeAdapterStorageInternalQueryPropertyIoctl.c)
 *     NvmeAdapterStorageProtocolCommandIoctlCompletion @ 0x1400D9FA0 (NvmeAdapterStorageProtocolCommandIoctlCompletion.c)
 *     PopulateNvmeAuthenticationKeyInfo @ 0x1400DD428 (PopulateNvmeAuthenticationKeyInfo.c)
 *     NvmeAdapterFabricControllerStartUpdateNamespaces @ 0x1400E24C4 (NvmeAdapterFabricControllerStartUpdateNamespaces.c)
 *     NvmeAdapterGetControllerNvmSetData @ 0x1400E3960 (NvmeAdapterGetControllerNvmSetData.c)
 *     NvmeControllerFilterResourceRequirements @ 0x1400ED610 (NvmeControllerFilterResourceRequirements.c)
 *     NvmeControllerGetTelemetryLog @ 0x1400EEEB0 (NvmeControllerGetTelemetryLog.c)
 *     NvmeControllerIdentify @ 0x1400EF360 (NvmeControllerIdentify.c)
 *     NvmeControllerIdentifyUUIDList @ 0x1400EF538 (NvmeControllerIdentifyUUIDList.c)
 *     NvmeControllerInitHostMemoryBuffer @ 0x1400EF734 (NvmeControllerInitHostMemoryBuffer.c)
 *     NvmeFabricControllerQueueComputeSharedDHValue @ 0x1400F6FD0 (NvmeFabricControllerQueueComputeSharedDHValue.c)
 *     NvmeFabricControllerQueueGenerateHostDHKey @ 0x1400F7308 (NvmeFabricControllerQueueGenerateHostDHKey.c)
 *     NvmeFabricControllerQueueProcessAuthChallenge @ 0x1400F768C (NvmeFabricControllerQueueProcessAuthChallenge.c)
 *     NvmeGetNVMSetAttributeList @ 0x1400F8C74 (NvmeGetNVMSetAttributeList.c)
 *     FormInquiryStandardData @ 0x1400FA2AC (FormInquiryStandardData.c)
 *     NvmeNamepspaceExecuteNvmeSrb @ 0x1400FB5C8 (NvmeNamepspaceExecuteNvmeSrb.c)
 *     NvmeNamespaceExecuteScsiSrbComplete @ 0x140100360 (NvmeNamespaceExecuteScsiSrbComplete.c)
 *     NvmeNamespaceExecuteScsiSrbExComplete @ 0x140100E50 (NvmeNamespaceExecuteScsiSrbExComplete.c)
 *     NvmeNamespaceQueryIdentifyControllerProperty @ 0x14010929C (NvmeNamespaceQueryIdentifyControllerProperty.c)
 *     NvmeNamespaceQueryIdentifyIoCommandSetProperty @ 0x140109654 (NvmeNamespaceQueryIdentifyIoCommandSetProperty.c)
 *     NvmeNamespaceQueryIdentifyNamespaceProperty @ 0x140109A18 (NvmeNamespaceQueryIdentifyNamespaceProperty.c)
 *     NvmeNamespaceReservationReport @ 0x14010CD08 (NvmeNamespaceReservationReport.c)
 *     NvmeNamespaceStorageProtocolCommandIoctlCompletion @ 0x140113700 (NvmeNamespaceStorageProtocolCommandIoctlCompletion.c)
 *     ScsiReadWriteRequest @ 0x140115E44 (ScsiReadWriteRequest.c)
 *     ScsiToNVMeCommand @ 0x140116554 (ScsiToNVMeCommand.c)
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 *     NvmeNamespacePopulateInquiryDeviceIdentifiersData @ 0x1401179CC (NvmeNamespacePopulateInquiryDeviceIdentifiersData.c)
 *     NvmeNamespacePopulateInquirySerialNumberData @ 0x140117AA4 (NvmeNamespacePopulateInquirySerialNumberData.c)
 *     NvmeNamespacePopulateInquiryStandardData @ 0x140117B60 (NvmeNamespacePopulateInquiryStandardData.c)
 *     BuildNvmeAuthReplyMessage @ 0x140118FDC (BuildNvmeAuthReplyMessage.c)
 *     NvmeCopyCachedLogPage @ 0x14012AC98 (NvmeCopyCachedLogPage.c)
 *     NvmeQueryProtocolInfoCompletion @ 0x14012AD40 (NvmeQueryProtocolInfoCompletion.c)
 *     NvmeSetProtocolInfoCompletion @ 0x14012CC50 (NvmeSetProtocolInfoCompletion.c)
 *     NvmeAdapterInitializePoFx @ 0x14012EA7C (NvmeAdapterInitializePoFx.c)
 *     NvmeAdapterProcessStorageEventNotification @ 0x140138030 (NvmeAdapterProcessStorageEventNotification.c)
 *     PortpBinaryReadCallBack @ 0x14013AC50 (PortpBinaryReadCallBack.c)
 *     PortPassThroughExNormalize @ 0x14013B0E4 (PortPassThroughExNormalize.c)
 *     PortTraceErrorDrainList @ 0x14013B350 (PortTraceErrorDrainList.c)
 *     ParseAssignNamespace @ 0x14013D4F0 (ParseAssignNamespace.c)
 *     ParseBandMetadata @ 0x14013D640 (ParseBandMetadata.c)
 *     ParseLockingObjectInfo @ 0x14013D7F0 (ParseLockingObjectInfo.c)
 *     GenSetTableColumnParams @ 0x14013E8C0 (GenSetTableColumnParams.c)
 *     ParseGetTableColumnData @ 0x14013EA80 (ParseGetTableColumnData.c)
 *     ParseSyncSessionData @ 0x140140DC0 (ParseSyncSessionData.c)
 *     ParseTPerProperties @ 0x140140F20 (ParseTPerProperties.c)
 *     ParseTokenData @ 0x1401429AC (ParseTokenData.c)
 *     GenLongDataBytes @ 0x140142FCC (GenLongDataBytes.c)
 *     GenMediumDataBytes @ 0x14014309C (GenMediumDataBytes.c)
 *     GenShortDataBytes @ 0x1401432C8 (GenShortDataBytes.c)
 *     RaidAdapterDiagnosticIoctl @ 0x14018169C (RaidAdapterDiagnosticIoctl.c)
 *     RaidGetStorageAdapterFruIdProperty @ 0x14018363C (RaidGetStorageAdapterFruIdProperty.c)
 *     RaSaveDriverInitData @ 0x14018427C (RaSaveDriverInitData.c)
 *     WppInitGlobalLogger @ 0x14018439C (WppInitGlobalLogger.c)
 *     WppTraceCallback @ 0x1401847E0 (WppTraceCallback.c)
 *     RaDuplicateCmResourceList @ 0x140184D4C (RaDuplicateCmResourceList.c)
 *     RaUnitStorageDiagnosticIoctl @ 0x140188188 (RaUnitStorageDiagnosticIoctl.c)
 *     RaUnitStorageManageBypassIOIoctl @ 0x140189F08 (RaUnitStorageManageBypassIOIoctl.c)
 *     StorAdapterQueryIdentifyControllerProperty @ 0x14018CF64 (StorAdapterQueryIdentifyControllerProperty.c)
 *     StorUnitQueryDeviceIdentifyIoCommandSetProperty @ 0x14018CFD0 (StorUnitQueryDeviceIdentifyIoCommandSetProperty.c)
 *     StorUnitQueryDeviceIdentifyNamespaceProperty @ 0x14018D394 (StorUnitQueryDeviceIdentifyNamespaceProperty.c)
 *     StorUnitAssignNVMeIdentity @ 0x14018E3E0 (StorUnitAssignNVMeIdentity.c)
 *     StorQueryMFNDNamespacePageMap @ 0x140190768 (StorQueryMFNDNamespacePageMap.c)
 *     NvmeAdapterStorageProtocolCommandIoctl @ 0x14019CCFC (NvmeAdapterStorageProtocolCommandIoctl.c)
 *     NvmeControllerGetDeviceInternalLogIoctl @ 0x14019EAD8 (NvmeControllerGetDeviceInternalLogIoctl.c)
 *     NvmeNamespaceGetStorageDeviceIdProperty @ 0x1401A5160 (NvmeNamespaceGetStorageDeviceIdProperty.c)
 *     NvmeNamespaceGetStorageDeviceProperty @ 0x1401A5244 (NvmeNamespaceGetStorageDeviceProperty.c)
 *     NvmeNamespaceManageBypassIO @ 0x1401A57D8 (NvmeNamespaceManageBypassIO.c)
 *     NvmeNamespaceStorageProtocolCommandIoctl @ 0x1401AA82C (NvmeNamespaceStorageProtocolCommandIoctl.c)
 *     StorProcessNotification @ 0x1401B2620 (StorProcessNotification.c)
 *     PortpReadDriverParameterEntry @ 0x1401B3864 (PortpReadDriverParameterEntry.c)
 *     PortQueryInterfaceFdoQdr @ 0x1401B3FE8 (PortQueryInterfaceFdoQdr.c)
 *     PortPassThroughExBuildSrbEx @ 0x1401B411C (PortPassThroughExBuildSrbEx.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1401B4A30 (RaGetUnitStorageDeviceProperty.c)
 *     PortPassThroughExSendAsync @ 0x1401B5774 (PortPassThroughExSendAsync.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1401B6FF8 (RaGetUnitStorageDeviceIdProperty.c)
 *     PortpRegQueryRoutine @ 0x1401BB630 (PortpRegQueryRoutine.c)
 *     RaWmiIrpRegisterRequest @ 0x1401BBBA0 (RaWmiIrpRegisterRequest.c)
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
