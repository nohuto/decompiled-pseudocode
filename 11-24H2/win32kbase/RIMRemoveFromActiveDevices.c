/*
 * XREFs of RIMRemoveFromActiveDevices @ 0x1401E0EE0
 * Callers:
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1401807E4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMFreePointerDevice @ 0x1401E03EC (RIMFreePointerDevice.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1400C95A8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     RIMUpdatePrimaryDevice @ 0x1400D94BC (RIMUpdatePrimaryDevice.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x14011317C (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     ApiSetPostPointerDeviceOutOfRangeMessage @ 0x1401255DC (ApiSetPostPointerDeviceOutOfRangeMessage.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x14012D12C (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFindLastDeviceFrame @ 0x1401ED55C (rimFindLastDeviceFrame.c)
 */

__int64 __fastcall RIMRemoveFromActiveDevices(struct RawInputManagerObject *a1, __int64 a2)
{
  __int64 v4; // rdx
  struct RawInputManagerObject *v5; // rdi
  __int64 LastDeviceFrame; // rax
  __int64 v7; // rbp
  unsigned int v8; // esi
  char *v9; // r15
  struct RawInputManagerObject *v10; // rsi
  __int64 v12; // rbp
  char v13; // di
  bool v14; // r12
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rdx
  struct RawInputManagerObject **v19; // rax
  char v20; // [rsp+98h] [rbp+10h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
    (RIMLOCKExclusiveIfNeeded *)&v20,
    (struct RawInputManagerObject *)((char *)a1 + 760));
  v4 = *(_QWORD *)(a2 + 16);
  v5 = (struct RawInputManagerObject *)*((_QWORD *)a1 + 56);
  if ( v4 )
  {
    LastDeviceFrame = rimFindLastDeviceFrame(a1, v4);
    v7 = LastDeviceFrame;
    if ( LastDeviceFrame )
    {
      v8 = 0;
      if ( *(_DWORD *)(LastDeviceFrame + 24) )
      {
        do
        {
          if ( !gbIgnoreStressedOutStuff && (*(_DWORD *)(192LL * v8 + *(_QWORD *)(v7 + 232) + 28) & 0x2000006) != 0 )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131080, 2726);
          ++v8;
        }
        while ( v8 != *(_DWORD *)(v7 + 24) );
      }
    }
  }
  if ( *((_QWORD *)a1 + 60) == a2 )
    RIMUpdatePrimaryDevice((__int64)a1, 0LL);
  while ( v5 != (struct RawInputManagerObject *)((char *)a1 + 448) )
  {
    v9 = (char *)v5 - 8;
    v10 = v5;
    v5 = *(struct RawInputManagerObject **)v5;
    if ( *(_QWORD *)v9 == a2 )
    {
      v12 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v12 + 172) &= ~0x10u;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || (v13 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v13 = 0;
      }
      v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v16) = v14;
        LOBYTE(v17) = v13;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v17,
          v16,
          *(_QWORD *)(UserSessionState + 19392),
          4,
          1,
          37,
          (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids,
          v12);
      }
      if ( (*((_DWORD *)v9 + 6) & 1) == 0 )
      {
        if ( (*(_DWORD *)(PsGetCurrentThreadWin32Thread() + 24) & 0xC) != 0 )
          ApiSetPostPointerDeviceOutOfRangeMessage(a2);
        else
          rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem(a1, v12, 0);
      }
      v18 = *(_QWORD *)v10;
      if ( *(struct RawInputManagerObject **)(*(_QWORD *)v10 + 8LL) != v10
        || (v19 = (struct RawInputManagerObject **)*((_QWORD *)v10 + 1), *v19 != v10) )
      {
        __fastfail(3u);
      }
      *v19 = (struct RawInputManagerObject *)v18;
      *(_QWORD *)(v18 + 8) = v19;
      GreDeleteFastMutex(v9);
      if ( !*((_DWORD *)a1 + 116) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2777);
      --*((_DWORD *)a1 + 116);
      break;
    }
  }
  RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v20);
  return 1LL;
}
