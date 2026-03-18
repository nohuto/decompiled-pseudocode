/*
 * XREFs of RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01A1ED0
 * Callers:
 *     RIMDeviceNotify @ 0x1C0199BA0 (RIMDeviceNotify.c)
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C0005B28 (RimDeviceTypeToRimInputType.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0037ECC (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C008BA00 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMQueueDeviceNotifyAsyncWorkItem @ 0x1C01A2070 (RIMQueueDeviceNotifyAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_Sd @ 0x1C01A320C (WPP_RECORDER_AND_TRACE_SF_Sd.c)
 */

__int64 __fastcall RIMDeviceNotifyUsingAsyncPnpWorkNotification(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  char v5; // r11
  char v6; // r11
  int v7; // edx
  __int64 v8; // r10
  int v9; // r8d
  unsigned int v10; // ebx
  char v11; // dl
  __int64 v13; // [rsp+40h] [rbp-128h]
  int v14; // [rsp+48h] [rbp-120h]
  int v15; // [rsp+50h] [rbp-118h]
  _BYTE v16[208]; // [rsp+60h] [rbp-108h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  v4 = *(_QWORD *)(a2 + 336);
  if ( *(struct _KTHREAD **)(v4 + 40) == KeGetCurrentThread() )
  {
    v15 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 738);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
    LOBYTE(v7) = v6;
    v13 = *(_QWORD *)(a2 + 216);
    WPP_RECORDER_AND_TRACE_SF_Sd(*(_QWORD *)(v8 + 24), v7, v9, (_DWORD)gRimLog);
  }
  v10 = RIMQueueDeviceNotifyAsyncWorkItem(v4, *(_QWORD *)(a2 + 32), a1 + 4);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v13) = v10;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v11,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)gRimLog,
      4u,
      1u,
      0x1Bu,
      (__int64)&WPP_9c6b916090ed33d376f6c4650ea2e314_Traceguids,
      v13,
      v14,
      v15);
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v16);
  return v10;
}
