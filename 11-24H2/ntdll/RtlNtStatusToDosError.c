/*
 * XREFs of RtlNtStatusToDosError @ 0x18001C620
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x18001B9D0 (EtwpProviderArrivalCallback.c)
 *     EtwEventActivityIdControl @ 0x18001C4A0 (EtwEventActivityIdControl.c)
 *     EtwpRegisterProvider @ 0x18001DD30 (EtwpRegisterProvider.c)
 *     EtwEventWrite @ 0x18003AA80 (EtwEventWrite.c)
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 *     EtwpEventWriteFull @ 0x18003B0D0 (EtwpEventWriteFull.c)
 *     EtwpFinalizeLogFileHeader @ 0x18003ED60 (EtwpFinalizeLogFileHeader.c)
 *     EtwEventWriteNoRegistration @ 0x180066310 (EtwEventWriteNoRegistration.c)
 *     EtwpStopUmLogger @ 0x18008C4B4 (EtwpStopUmLogger.c)
 *     EtwpIncrementUmLoggerFile @ 0x18008C9F0 (EtwpIncrementUmLoggerFile.c)
 *     EtwpUpdateUmLogger @ 0x18008CAC4 (EtwpUpdateUmLogger.c)
 *     EtwpStartUmLogger @ 0x18008CCDC (EtwpStartUmLogger.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     EtwTraceMessage @ 0x1800D7060 (EtwTraceMessage.c)
 *     EtwTraceMessageVa @ 0x1800D7150 (EtwTraceMessageVa.c)
 *     EtwLogTraceEvent @ 0x1800E58D0 (EtwLogTraceEvent.c)
 *     EtwpSetProviderTraits @ 0x1800E8690 (EtwpSetProviderTraits.c)
 *     EtwEventWriteString @ 0x1800E9540 (EtwEventWriteString.c)
 *     EtwSendNotification @ 0x1800EE760 (EtwSendNotification.c)
 *     EtwpReceiveReplyDataBlock @ 0x1800EE9F8 (EtwpReceiveReplyDataBlock.c)
 *     EtwWriteUMSecurityEvent @ 0x1800F44A0 (EtwWriteUMSecurityEvent.c)
 *     RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800FB650 (RtlSetLastWin32ErrorAndNtStatusFromNtStatus.c)
 *     EtwReplyNotification @ 0x18010ED10 (EtwReplyNotification.c)
 *     EtwpTrackProviderBinary @ 0x18011A13C (EtwpTrackProviderBinary.c)
 *     EtwRegisterSecurityProvider @ 0x18015BE30 (EtwRegisterSecurityProvider.c)
 *     EtwpUseDescriptorType @ 0x18015BE88 (EtwpUseDescriptorType.c)
 *     EtwSetMark @ 0x18015C020 (EtwSetMark.c)
 *     EtwTraceEventInstance @ 0x18015C050 (EtwTraceEventInstance.c)
 *     EtwpBufferingModeFlush @ 0x18015C218 (EtwpBufferingModeFlush.c)
 * Callees:
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 */

ULONG __stdcall RtlNtStatusToDosError(NTSTATUS Status)
{
  NTSTATUS v1; // edx
  struct _TEB *v2; // rax
  unsigned int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // r11d
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
  v7 = 341;
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
