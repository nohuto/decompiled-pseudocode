/*
 * XREFs of xxxRemotePassthruEnable @ 0x1C02037E8
 * Callers:
 *     NtUserRemotePassthruEnable @ 0x1C01D9290 (NtUserRemotePassthruEnable.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1C00A0E18 (xxxRemoteStopScreenUpdates.c)
 *     GreDrvDisconnect @ 0x1C0134D74 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x1C02DC760 (bDrvDisconnect.c)
 */

__int64 xxxRemotePassthruEnable()
{
  __int64 v0; // rdx
  __int64 Timer_high; // rcx
  Gre::Base *RemoteContext; // rsi
  __int64 v3; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void *OutputBuffer; // rdi
  __int64 v10; // rcx
  ULONG InputBufferLength; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  RemoteContext = (Gre::Base *)GreGetRemoteContext();
  LOBYTE(v0) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (Timer_high = HIDWORD(WPP_GLOBAL_Control->Timer), (Timer_high & 4) != 0)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v3,
      (_DWORD)WPP_GLOBAL_Control,
      4,
      3,
      25,
      (__int64)&WPP_38afe8d8a8303f1671169ac824553c0d_Traceguids);
  if ( PsGetCurrentProcess(Timer_high, v0, v3) != gpepCSRSS )
    return 3221225506LL;
  dword_1C035F89C = *(_QWORD *)(SGDGetUserSessionState(gpepCSRSS) + 13760) != gapulCvt_VK_84;
  ZwDeviceIoControlFile(
    gRemoteKeyboardChannelHandlePair,
    0LL,
    0LL,
    0LL,
    &IoStatusBlock,
    0x38080Fu,
    &dword_1C035F89C,
    4u,
    0LL,
    0);
  if ( *(_DWORD *)(SGDGetUserSessionState(v5) + 13888) )
  {
    OutputBuffer = *(void **)(SGDGetUserSessionState(v7) + 13840);
    InputBufferLength = *(_DWORD *)(SGDGetUserSessionState(v10) + 13888);
    v13 = SGDGetUserSessionState(v12);
    ZwDeviceIoControlFile(
      gRemoteKeyboardChannelHandlePair,
      0LL,
      0LL,
      0LL,
      &IoStatusBlock,
      0x380807u,
      *(PVOID *)(v13 + 13880),
      InputBufferLength,
      OutputBuffer,
      0);
  }
  xxxRemoteStopScreenUpdates(v7, v6, v8);
  if ( gfRemotingConsole )
    bDrvDisconnect();
  else
    GreDrvDisconnect(RemoteContext);
  return 0LL;
}
