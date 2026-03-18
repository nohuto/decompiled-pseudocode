/*
 * XREFs of WPP_RECORDER_SF_sds @ 0x140045A8C
 * Callers:
 *     XilCommand_SendAddCommandCRBToRingRequest @ 0x14000A398 (XilCommand_SendAddCommandCRBToRingRequest.c)
 *     DynamicLock_Acquire @ 0x14000BF40 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x14000C970 (DynamicLock_Release.c)
 *     Bulk_WdfEvtIoQueueReadyNotification @ 0x14000D810 (Bulk_WdfEvtIoQueueReadyNotification.c)
 *     Controller_RaiseAndTrackIrql @ 0x14000DA20 (Controller_RaiseAndTrackIrql.c)
 *     Bulk_MapStage @ 0x1400176E0 (Bulk_MapStage.c)
 *     Debug_FreAssertMsg @ 0x140019AC8 (Debug_FreAssertMsg.c)
 *     Interrupter_ReleaseEventRingLock @ 0x140022364 (Interrupter_ReleaseEventRingLock.c)
 *     Interrupter_AcquireEventRingLock @ 0x140022440 (Interrupter_AcquireEventRingLock.c)
 *     RootHub_UcxEvtGetPortStatus @ 0x140024160 (RootHub_UcxEvtGetPortStatus.c)
 *     RootHub_UcxEvtInterruptTransfer @ 0x1400251A0 (RootHub_UcxEvtInterruptTransfer.c)
 *     RootHub_UcxEvtSetPortFeature @ 0x140026440 (RootHub_UcxEvtSetPortFeature.c)
 *     RootHub_UcxEvtClearPortFeature @ 0x1400277B0 (RootHub_UcxEvtClearPortFeature.c)
 *     UsbDevice_StopEndpointToOffloadedEndpointCompletion @ 0x140034900 (UsbDevice_StopEndpointToOffloadedEndpointCompletion.c)
 *     UsbDevice_HandleAssignPinsForEndpointsToOffloadState @ 0x140034EE4 (UsbDevice_HandleAssignPinsForEndpointsToOffloadState.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140035038 (XilEndpoint_AllocateStreamContextArray.c)
 *     XilUsbDevice_GetDeviceContextBufferSize @ 0x14003C964 (XilUsbDevice_GetDeviceContextBufferSize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char *a6,
        char a7,
        const char *a8)
{
  const char *v8; // rsi
  __int64 v9; // rbx
  const char *v10; // rdi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rdx
  const char *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  int v20; // [rsp+20h] [rbp-58h]

  v8 = a6;
  v9 = -1LL;
  v10 = a8;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a8[v12] );
    }
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = a6;
    if ( !a6 )
      v15 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids,
      10LL,
      v15,
      v14,
      &a7);
  }
  if ( v10 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v10[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( a6 )
  {
    do
      ++v9;
    while ( a6[v9] );
    v18 = v9 + 1;
  }
  else
  {
    v18 = 5LL;
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v20) = 10;
  return WppAutoLogTrace(
           a1,
           2LL,
           2LL,
           &WPP_5ace6a9c3ff4347ed3a705afad901349_Traceguids,
           v20,
           v8,
           v18,
           &a7,
           4LL,
           v10,
           v17,
           0LL);
}
