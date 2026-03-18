/*
 * XREFs of SrbAssignQueueId @ 0x140004320
 * Callers:
 *     ScsiSanitizeRequest @ 0x140001580 (ScsiSanitizeRequest.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x140002030 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x140002140 (NVMeWriteBufferFirmwareDownload.c)
 *     ScsiToNVMe @ 0x140002940 (ScsiToNVMe.c)
 *     ScsiUnmapRequest @ 0x140004080 (ScsiUnmapRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1400047E0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiModeSenseRequest @ 0x1400057D0 (ScsiModeSenseRequest.c)
 *     FirmwareGetInfo @ 0x140005F70 (FirmwareGetInfo.c)
 *     ProtocolCommandToNVMe @ 0x1400062C0 (ProtocolCommandToNVMe.c)
 *     NVMeSetHostMemoryBuffer @ 0x140006A20 (NVMeSetHostMemoryBuffer.c)
 *     QueryProtocolInfoCompletion @ 0x1400111F0 (QueryProtocolInfoCompletion.c)
 *     QueryProtocolInfoLogPageData @ 0x140011650 (QueryProtocolInfoLogPageData.c)
 *     FirmwareActivate @ 0x14001F854 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x14001FABC (FirmwareDownload.c)
 *     IoctlQueryEnduranceInformation @ 0x140020DA0 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1400211FC (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x140021450 (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x140021C84 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x140021E18 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x140022908 (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x140022BBC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeGetLogPageTelemetryHeaderCompletion @ 0x140023260 (NVMeGetLogPageTelemetryHeaderCompletion.c)
 *     NVMeReservationAcquireCommand @ 0x1400239AC (NVMeReservationAcquireCommand.c)
 *     NVMeReservationRegisterAndMoveCommand @ 0x140023B5C (NVMeReservationRegisterAndMoveCommand.c)
 *     NVMeReservationRegisterCommand @ 0x140023CF8 (NVMeReservationRegisterCommand.c)
 *     NVMeReservationReleaseCommand @ 0x140023ED0 (NVMeReservationReleaseCommand.c)
 *     NVMeReservationReportStatus @ 0x140024174 (NVMeReservationReportStatus.c)
 *     QueryProtocolInfoFeatureData @ 0x140025744 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x140025B90 (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x140025E90 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x140026060 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1400261F4 (ScsiModeSelectRequest.c)
 *     SetProtocolInfoFeatureData @ 0x14002672C (SetProtocolInfoFeatureData.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x140027728 (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1400277DC (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x140027940 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1400279FC (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x140027BC8 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x140027C84 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc @ 0x14002C6CC (NVMeSyncHostTime_Feature_TimestampSyncMemoryAlloc.c)
 *     ProcessCommandNvmePacket @ 0x14002C8E8 (ProcessCommandNvmePacket.c)
 * Callees:
 *     ProcessorToIoSqMappingBase @ 0x1400046D0 (ProcessorToIoSqMappingBase.c)
 *     ProcessorToDedicatedIoSqMapping @ 0x14001EF6C (ProcessorToDedicatedIoSqMapping.c)
 *     __security_check_cookie @ 0x140030FC0 (__security_check_cookie.c)
 */

__int64 __fastcall SrbAssignQueueId(__int64 a1, __int64 a2)
{
  char v2; // r11
  __int64 v5; // rdi
  bool v6; // r15
  unsigned int v7; // r12d
  unsigned __int8 *v8; // r10
  unsigned int v9; // eax
  unsigned int *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  unsigned int v15; // r8d
  unsigned int i; // edx
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int *v19; // rcx
  __int64 v20; // r9
  unsigned __int16 v21; // r14
  int v22; // ecx
  unsigned int v23; // ebp
  bool v24; // cl
  unsigned int v25; // r8d
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 result; // rax
  int v29; // ecx
  int v30; // ecx
  int v31; // eax
  unsigned int v32; // edx
  unsigned int v33; // [rsp+20h] [rbp-58h] BYREF
  __int128 v34; // [rsp+28h] [rbp-50h] BYREF
  int v35; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_BYTE *)(a2 + 2);
  if ( v2 == 40 )
    v5 = *(_QWORD *)(a2 + 104);
  else
    v5 = *(_QWORD *)(a2 + 56);
  if ( (v5 & 0xFFF) != 0 )
    v5 = v5 - (v5 & 0xFFF) + 4096;
  v6 = 0;
  v33 = 0;
  v7 = 0;
  if ( (*(_BYTE *)(v5 + 4225) & 1) != 0 )
    goto LABEL_47;
  v35 = 0;
  v8 = 0LL;
  v34 = 0LL;
  if ( v2 == 40 )
  {
    if ( !*(_DWORD *)(a2 + 20) )
    {
      v9 = *(_DWORD *)(a2 + 56);
      if ( v9 )
      {
        v10 = (unsigned int *)(a2 + 120);
        v11 = v9;
        while ( 1 )
        {
          v12 = *v10;
          if ( (unsigned int)v12 < 0x80 || (unsigned int)v12 > *(_DWORD *)(a2 + 16) )
            goto LABEL_15;
          v13 = a2 + v12;
          if ( *(_DWORD *)(a2 + v12) == 64 )
          {
            if ( *(_BYTE *)(v13 + 10) )
              goto LABEL_72;
          }
          else
          {
            if ( *(_DWORD *)(a2 + v12) != 65 )
            {
              if ( *(_DWORD *)(a2 + v12) == 66 && *(_DWORD *)(v13 + 12) )
                v8 = (unsigned __int8 *)(v13 + 32);
              goto LABEL_15;
            }
            if ( *(_BYTE *)(v13 + 10) )
LABEL_72:
              v8 = (unsigned __int8 *)(v13 + 24);
          }
LABEL_15:
          ++v10;
          if ( !--v11 )
            goto LABEL_16;
        }
      }
    }
  }
  else if ( !v2 && *(_BYTE *)(a2 + 10) )
  {
    v8 = (unsigned __int8 *)(a2 + 72);
LABEL_16:
    if ( v8 )
    {
      v14 = *v8;
      if ( v14 == 138 || (v29 = v14 - 40) == 0 || (v30 = v29 - 2) == 0 || v30 == 94 )
      {
        if ( v2 == 40 )
        {
          v15 = *(_DWORD *)(a2 + 56);
          if ( v15 )
          {
            for ( i = 0; i < v15; ++i )
            {
              v17 = *(unsigned int *)(a2 + 4LL * i + 120);
              if ( (unsigned int)v17 >= 0x80 && (unsigned int)v17 < *(_DWORD *)(a2 + 16) )
              {
                v18 = a2 + v17;
                if ( *(_DWORD *)(a2 + v17) == 128 )
                  goto LABEL_27;
              }
            }
          }
        }
        v19 = (unsigned int *)(a2 + 16);
        v18 = 0LL;
        if ( v2 == 40 )
LABEL_27:
          v19 = (unsigned int *)(a2 + 60);
        if ( v19 )
          v7 = *v19;
        if ( v18 )
          v6 = (*(_BYTE *)(v18 + 8) & 2) != 0;
      }
    }
  }
  *(_QWORD *)&v34 = 0x1400000002LL;
  StorPortExtendedFunction(15LL, a1, a2, &v34);
  v21 = WORD4(v34);
  if ( (_WORD)v35 == 0xFFFF && BYTE2(v35) == 0xFF )
    StorPortExtendedFunction(17LL, a1, &v35, v20);
  StorPortExtendedFunction(56LL, a1, &v35, &v33);
  v22 = *(_BYTE *)(a2 + 2) == 40 ? *(_DWORD *)(a2 + 24) : *(_DWORD *)(a2 + 12);
  v23 = v33;
  v24 = (v22 & 0x4000) != 0;
  if ( (*(_BYTE *)(v5 + 4225) & 1) != 0 )
  {
LABEL_47:
    result = *(unsigned __int16 *)(a1 + 384);
    goto LABEL_46;
  }
  if ( *(_BYTE *)(a1 + 20) )
  {
    result = *(_QWORD *)(a1 + 936);
    *(_WORD *)(v5 + 4212) = *(_WORD *)(result + 48);
    return result;
  }
  v25 = *(unsigned __int16 *)(a1 + 234);
  if ( v33 >= v25 )
    v23 = v33 % v25;
  v26 = *(_QWORD *)(a1 + 264);
  if ( v24 )
  {
    if ( !*(_QWORD *)(v26 + 72LL * v23 + 64) )
      ProcessorToDedicatedIoSqMapping(a1, v23, v21);
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v23 + 64);
  }
  else
  {
    if ( !*(_QWORD *)(v26 + 72LL * v23 + 56) )
      ProcessorToIoSqMappingBase(a1, v23, v21, 0LL);
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 264) + 72LL * v23 + 56);
  }
  if ( !*(_BYTE *)(a1 + 3752) || !v7 )
  {
    result = *(unsigned __int16 *)(v27 + 48);
LABEL_46:
    *(_WORD *)(v5 + 4212) = result;
    return result;
  }
  v31 = *(_DWORD *)(a1 + 3764);
  if ( (v31 & 0x80u) == 0 && (v7 > *(_DWORD *)(a1 + 3760) || v6) )
  {
    LOWORD(v32) = *(_WORD *)(a1 + 334) + v23 % (unsigned __int16)(*(_WORD *)(a1 + 332) - *(_WORD *)(a1 + 334));
  }
  else
  {
    if ( (v31 & 0x40) != 0 )
    {
      result = *(_QWORD *)(a1 + 936);
      *(_WORD *)(v5 + 4212) = *(_WORD *)(208LL * (v23 % *(unsigned __int16 *)(a1 + 332)) + result + 48);
      return result;
    }
    v32 = v23 % *(unsigned __int16 *)(a1 + 334);
  }
  result = *(_QWORD *)(a1 + 936);
  *(_WORD *)(v5 + 4212) = *(_WORD *)(208LL * (unsigned __int16)v32 + result + 48);
  return result;
}
