/*
 * XREFs of RtlNtStatusToDosError @ 0x180049020
 * Callers:
 *     EtwEventWrite @ 0x18001AD00 (EtwEventWrite.c)
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 *     EtwpEventWriteFull @ 0x18001B350 (EtwpEventWriteFull.c)
 *     EtwpFinalizeLogFileHeader @ 0x18001EFE0 (EtwpFinalizeLogFileHeader.c)
 *     EtwpProviderArrivalCallback @ 0x1800483D0 (EtwpProviderArrivalCallback.c)
 *     EtwEventActivityIdControl @ 0x180048EA0 (EtwEventActivityIdControl.c)
 *     EtwpRegisterProvider @ 0x18004A730 (EtwpRegisterProvider.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180080610 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpStopUmLogger @ 0x1800A7F74 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x1800A84B0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x1800A8584 (EtwpUpdateUmLogger.c)
 *     EtwpStartUmLogger @ 0x1800A879C (EtwpStartUmLogger.c)
 *     EtwEventWriteNoRegistration @ 0x1800AE4F0 (EtwEventWriteNoRegistration.c)
 *     EtwTraceMessage @ 0x1800D23D0 (EtwTraceMessage.c)
 *     EtwTraceMessageVa @ 0x1800D24C0 (EtwTraceMessageVa.c)
 *     EtwLogTraceEvent @ 0x1800E0D80 (EtwLogTraceEvent.c)
 *     EtwpSetProviderTraits @ 0x1800E3D80 (EtwpSetProviderTraits.c)
 *     EtwEventWriteString @ 0x1800E4C30 (EtwEventWriteString.c)
 *     EtwSendNotification @ 0x1800E9940 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800E9BD8 (EtwpReceiveReplyDataBlock.c)
 *     EtwWriteUMSecurityEvent @ 0x1800EEBB0 (EtwWriteUMSecurityEvent.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800F6580 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwReplyNotification @ 0x180109CF0 (EtwReplyNotification.c)
 *     EtwpTrackProviderBinary @ 0x18011836C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18015A1F0 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18015A248 (EtwpUseDescriptorType.c)
 *     EtwSetMark @ 0x18015A3E0 (EtwSetMark.c)
 *     EtwTraceEventInstance @ 0x18015A410 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x18015A5D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     DbgPrint @ 0x18000F790 (DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  NTSTATUS v1; // edx
  struct _TEB *v2; // rax
  unsigned __int32 v3; // eax
  unsigned __int32 v4; // ecx
  unsigned __int32 v5; // r11d
  unsigned int v6; // ecx
  unsigned int v7; // r10d
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // r8d
  int v12; // eax

  v1 = Status;
  v2 = NtCurrentTeb();
  if ( v2 )
    v2->LastStatusValue = Status;
  if ( !Status )
    return 0;
  if ( Status == 259 )
    return 997;
  if ( (Status & 0x20000000) != 0 )
    return Status;
  if ( (Status & 0xFF0000) == 0x70000 && ((HIBYTE(Status) - 128) & 0xFFFFFFBF) == 0 )
    return (unsigned __int16)Status;
  v3 = Status & 0xF0000000;
  v4 = Status & 0xCFFFFFFF;
  if ( v3 != -805306368 )
    v4 = v1;
  v5 = v4;
  v6 = 0;
  v7 = 342;
  while ( 1 )
  {
    v8 = (v6 + v7) >> 1;
    v9 = 2 * v8;
    v10 = RtlpRunTable[2 * v8];
    v11 = v5 - v10;
    if ( v5 < v10 )
    {
      v7 = v8 - 1;
      goto LABEL_17;
    }
    if ( v11 < LOBYTE(RtlpRunTable[v9 + 1]) )
      break;
    v6 = v8 + 1;
LABEL_17:
    if ( v6 > v7 )
    {
      if ( (v5 & 0xFFFF0000) == 0xC0010000 )
        return (unsigned __int16)v5;
      DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v5);
      DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
      DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
      return 317;
    }
  }
  v12 = HIWORD(RtlpRunTable[v9 + 1]);
  if ( BYTE1(RtlpRunTable[v9 + 1]) == 1 )
    return (unsigned __int16)RtlpStatusTable[v11 + v12];
  return (unsigned __int16)RtlpStatusTable[2 * v11 + v12] | ((unsigned __int16)RtlpStatusTable[2 * v11 + 1 + v12] << 16);
}
