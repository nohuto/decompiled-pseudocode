/*
 * XREFs of xxxRemotePassthruEnable @ 0x1402B7B88
 * Callers:
 *     NtUserRemotePassthruEnable @ 0x14029BAB0 (NtUserRemotePassthruEnable.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1400A5B18 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxRemoteStopScreenUpdates @ 0x1401DF978 (xxxRemoteStopScreenUpdates.c)
 *     GreDrvDisconnect @ 0x1402634A4 (GreDrvDisconnect.c)
 *     bDrvDisconnect @ 0x14033D51C (bDrvDisconnect.c)
 */

__int64 xxxRemotePassthruEnable()
{
  Gre::Base *RemoteContext; // rbp
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // rsi
  bool v5; // bl
  bool v6; // di
  __int64 v7; // rax
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  void *OutputBuffer; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  ULONG InputBufferLength; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  IoStatusBlock = 0LL;
  RemoteContext = (Gre::Base *)GreGetRemoteContext();
  UserSessionState = W32GetUserSessionState(v2, v1);
  v5 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    v3 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( (v3 & 4) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u )
      v5 = 1;
  }
  v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v7 = W32GetUserSessionState(v3, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v8) = v6;
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v9,
      v8,
      *(_QWORD *)(v7 + 69416),
      4,
      3,
      25,
      (__int64)&WPP_30f900ad07153b515057d0b02bb8d839_Traceguids);
  }
  v10 = *(_QWORD *)(W32GetUserGdiSessionState(v3) + 40);
  if ( PsGetCurrentProcess(v11) != v10 )
    return 3221225506LL;
  *(_DWORD *)(UserSessionState + 69308) = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 13976) != gapulCvt_VK_84;
  ZwDeviceIoControlFile(
    *(HANDLE *)(UserSessionState + 68912),
    0LL,
    0LL,
    0LL,
    &IoStatusBlock,
    0x38080Fu,
    (PVOID)(UserSessionState + 69308),
    4u,
    0LL,
    0);
  if ( *(_DWORD *)(W32GetUserSessionState(v16, v15) + 14216) )
  {
    OutputBuffer = *(void **)(W32GetUserSessionState(v18, v17) + 14064);
    InputBufferLength = *(_DWORD *)(W32GetUserSessionState(v21, v20) + 14216);
    v25 = W32GetUserSessionState(v24, v23);
    ZwDeviceIoControlFile(
      *(HANDLE *)(UserSessionState + 68912),
      0LL,
      0LL,
      0LL,
      &IoStatusBlock,
      0x380807u,
      *(PVOID *)(v25 + 14208),
      InputBufferLength,
      OutputBuffer,
      0);
  }
  xxxRemoteStopScreenUpdates(v18, v17);
  if ( *(_DWORD *)(UserSessionState + 69020) )
    bDrvDisconnect(
      *(_QWORD *)(UserSessionState + 69064),
      *(_QWORD *)(UserSessionState + 69056),
      *(_QWORD *)(UserSessionState + 69088));
  else
    GreDrvDisconnect(RemoteContext);
  return 0LL;
}
