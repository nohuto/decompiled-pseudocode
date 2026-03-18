/*
 * XREFs of RIMVirtQueueDeviceClassNotifyAsyncWorkItem @ 0x1C01A2D78
 * Callers:
 *     RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C01A2688 (RIMVirtDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 * Callees:
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0 (RIMAllocateAsyncPnpWorkItem.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C018E248 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

__int64 __fastcall RIMVirtQueueDeviceClassNotifyAsyncWorkItem(_QWORD *a1, int a2, char *a3, const UNICODE_STRING *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  char v8; // dl
  char v9; // dl
  int v11; // [rsp+28h] [rbp-60h]
  __int64 v12; // [rsp+40h] [rbp-48h]

  v4 = 0;
  v7 = RIMAllocateAsyncPnpWorkItem(a1, 0LL, (__int64)a3, (__int64)a4, a2, 0LL, 0LL, a4, 0, 2);
  if ( v7 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, v7);
  }
  else
  {
    if ( a3 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, a3);
    v4 = -1073741801;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = a1[9];
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        32LL,
        4u,
        v11,
        0x20u,
        (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids);
    }
  }
  v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v12) = v4;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v9,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x21u,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      v12);
  }
  return v4;
}
