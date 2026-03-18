/*
 * XREFs of RIMVirtQueueRootPnpEndSyncAsyncWorkItem @ 0x1C01A3090
 * Callers:
 *     ?ivHandlePnpSyncPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C01EDFF0 (-ivHandlePnpSyncPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     RIMQueueAndSignalAsyncPnpWorkItem @ 0x1C0072FE8 (RIMQueueAndSignalAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     RIMAllocateAsyncPnpWorkItem @ 0x1C0074AA0 (RIMAllocateAsyncPnpWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1C018E248 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall RIMVirtQueueRootPnpEndSyncAsyncWorkItem(_QWORD *a1, const UNICODE_STRING *a2)
{
  int v2; // edi
  __int64 v4; // rax
  char v5; // dl
  char v6; // dl
  int v7; // [rsp+28h] [rbp-60h]
  __int64 v8; // [rsp+40h] [rbp-48h]

  v2 = 0;
  v4 = RIMAllocateAsyncPnpWorkItem(a1, 0LL, 0LL, 0LL, 0, 0LL, 0LL, a2, 0, 4);
  if ( v4 )
  {
    RIMQueueAndSignalAsyncPnpWorkItem((__int64)a1, v4);
  }
  else
  {
    v2 = -1073741801;
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = a1[9];
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v5,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        50LL,
        4u,
        v7,
        0x32u,
        (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids);
    }
  }
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v8) = v2;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x33u,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      v8);
  }
}
