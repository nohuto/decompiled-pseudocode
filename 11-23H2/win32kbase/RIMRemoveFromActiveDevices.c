/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x1C018B484
 * Callers:
 *     RIMFreePointerDevice @ 0x1C0188818 (RIMFreePointerDevice.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A7560 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 * Callees:
 *     Win32FreePool @ 0x1C0038570 (Win32FreePool.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006F118 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006FBD8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMUpdatePrimaryDevice @ 0x1C018C46C (RIMUpdatePrimaryDevice.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x1C018E804 (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     rimFindLastDeviceFrame @ 0x1C01A4438 (rimFindLastDeviceFrame.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1C0208064 (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(__int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  _QWORD *v7; // r15
  _QWORD *v8; // rdi
  __int64 LastDeviceFrame; // rax
  __int64 v10; // rbp
  unsigned int v11; // esi
  char *v12; // rbp
  _QWORD *v13; // rsi
  __int64 v15; // rdi
  PDEVICE_OBJECT v16; // rcx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  char v19; // [rsp+98h] [rbp+10h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v19, (struct _KTHREAD **)(a1 + 760));
  v6 = *(_QWORD *)(a2 + 16);
  v7 = (_QWORD *)(a1 + 448);
  v8 = *(_QWORD **)(a1 + 448);
  if ( v6 )
  {
    LastDeviceFrame = rimFindLastDeviceFrame(a1);
    v10 = LastDeviceFrame;
    if ( LastDeviceFrame )
    {
      v11 = 0;
      if ( *(_DWORD *)(LastDeviceFrame + 24) )
      {
        do
        {
          if ( (*(_DWORD *)(192LL * v11 + *(_QWORD *)(v10 + 232) + 28) & 0x2000006) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2690);
          ++v11;
        }
        while ( v11 != *(_DWORD *)(v10 + 24) );
        v7 = (_QWORD *)(a1 + 448);
      }
    }
  }
  if ( *(_QWORD *)(a1 + 480) == a2 )
    RIMUpdatePrimaryDevice(a1, 0LL);
  while ( v8 != v7 )
  {
    v12 = (char *)(v8 - 1);
    v13 = v8;
    v8 = (_QWORD *)*v8;
    if ( *(_QWORD *)v12 == a2 )
    {
      v15 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v15 + 188) &= ~0x10u;
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v6) = 0;
      }
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v6,
          v4,
          (_DWORD)gRimLog,
          4,
          1,
          37,
          (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids,
          v15);
      if ( (*((_DWORD *)v12 + 6) & 1) == 0 )
      {
        if ( IS_USERCRIT_OWNED_AT_ALL((__int64)v16, v6, v4, v5) )
          ApiSetPostPointerDeviceOutOfRangeMessage(a2);
        else
          rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(a1, v15, 0LL);
      }
      v17 = *v13;
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v18 = (_QWORD *)v13[1], (_QWORD *)*v18 != v13) )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      Win32FreePool(v12);
      if ( !*(_DWORD *)(a1 + 464) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2741);
      --*(_DWORD *)(a1 + 464);
      break;
    }
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v19);
  return 1LL;
}
