/*
 * XREFs of ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x140048CB0
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14005EDC8 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IPEAGPEAIK@Z @ 0x1402096B8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUCPointerInputFrame@@PEBU.c)
 * Callees:
 *     IsInputProcessingActivated @ 0x140048E30 (IsInputProcessingActivated.c)
 *     ApiSetAddMagnificationOutputTransform @ 0x140048EA8 (ApiSetAddMagnificationOutputTransform.c)
 *     ?SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z @ 0x14004902C (-SendCoreMessagingK@Win32k@InputTraceLogging@@SAXW4_MIT_ENDPOINT@@@Z.c)
 *     CoreMsgSend @ 0x140049098 (CoreMsgSend.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020B7F4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
        CSpatialProcessor *this,
        int a2,
        struct tagPOINT a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  int v10; // eax
  __int64 v11; // rcx
  void *v12; // rdi
  __int64 v13; // rsi
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-1B8h] BYREF
  _DWORD v15[104]; // [rsp+30h] [rbp-1A8h] BYREF

  if ( (unsigned __int8)IsInputProcessingActivated() )
  {
    v10 = *((_DWORD *)this + 6);
    if ( v10 == a2 && (v10 != 2 || *((_DWORD *)this + 7) == a5) )
    {
      PerformanceFrequency.QuadPart = 0LL;
      KeQueryPerformanceCounter(&PerformanceFrequency);
      if ( a4 - *((_QWORD *)this + 2) > PerformanceFrequency.QuadPart / 0x1EuLL )
      {
        *((_QWORD *)this + 2) = a4;
        memset(v15, 0, 0x198uLL);
        v15[6] = a6;
        v15[0] = 1;
        v15[2] = a2;
        *(struct tagPOINT *)&v15[3] = a3;
        v15[5] = a5;
        ApiSetAddMagnificationOutputTransform(&v15[3]);
        v12 = 0LL;
        v13 = *(_QWORD *)(W32GetUserSessionState(v11) + 16408);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v13 + 8, 0LL);
        if ( (unsigned __int8)InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v13, 4LL) )
        {
          InputTraceLogging::Win32k::SendCoreMessagingK(4LL);
          v12 = *(void **)(v13 + 184);
        }
        ExReleasePushLockSharedEx(v13 + 8, 0LL);
        KeLeaveCriticalRegion();
        if ( v12 )
          CoreMsgSend(v12);
      }
    }
  }
}
