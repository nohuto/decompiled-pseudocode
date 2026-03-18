/*
 * XREFs of UserKSTInitialize @ 0x1C0084060
 * Callers:
 *     NtKSTInitialize @ 0x1C0083F60 (NtKSTInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C0077540 (-Read@CBaseInput@@QEAAJXZ.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KSTIOCPDispatcher_Destroy @ 0x1C0080AB0 (KSTIOCPDispatcher_Destroy.c)
 *     ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1C0083224 (-CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z.c)
 *     ?DestroyEventHandles@CKernelSensorThread@@QEAAXXZ @ 0x1C0083CB4 (-DestroyEventHandles@CKernelSensorThread@@QEAAXXZ.c)
 *     ?RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z @ 0x1C00842E0 (-RegisterThreadDispatcherObjectWithCallback@IOCPDispatcher@@QEAAXPEAXP6AX0@Z0@Z.c)
 *     ?RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z @ 0x1C0084370 (-RegisterThreadDispatcherObject@IOCPDispatcher@@QEAAXPEAX@Z.c)
 *     ActivateKSTInputProcessingHelper @ 0x1C00843D0 (ActivateKSTInputProcessingHelper.c)
 *     ?InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z @ 0x1C0084608 (-InitializeEventHandles@CKernelSensorThread@@QEAAJPEAX0@Z.c)
 *     ?ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ @ 0x1C008498C (-ActivateInputProcessing@CInputThreadBase@@QEAA_NXZ.c)
 *     ?DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ @ 0x1C0084A30 (-DeclareThreadAsInput@CInputThreadBase@@QEAA_NXZ.c)
 *     ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C00B30F0 (-HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserKSTInitialize(void *a1, void *a2)
{
  void *v2; // rsi
  char v4; // bl
  char v5; // r8
  int v6; // edx
  CKernelSensorThread *v7; // rcx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v15; // edx
  unsigned __int8 v16; // di
  __int64 v18; // rax
  unsigned int v19; // r8d
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+48h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+68h] [rbp-50h] BYREF

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      2,
      10,
      (__int64)&WPP_f24dfba830553ecb8fc554e2a66e2779_Traceguids);
  if ( (unsigned int)dword_1C0289810 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
    {
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0289810,
        (unsigned __int8 *)dword_1C025E3D5,
        0LL,
        0LL,
        2u,
        &v21);
      v19 = dword_1C0289810;
    }
    if ( v19 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0289810,
        (unsigned __int8 *)dword_1C025E1A7,
        0LL,
        0LL,
        2u,
        &v20);
  }
  if ( CInputThreadBase::DeclareThreadAsInput((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
  {
    if ( *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 43LL);
    if ( (int)CKernelSensorThread::InitializeEventHandles(v7, a1, v2) >= 0
      && (int)IOCPDispatcher::CreateInstance((struct IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters) >= 0
      && (unsigned int)ActivateKSTInputProcessingHelper() )
    {
      if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 2LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0289810,
          (unsigned __int8 *)dword_1C025E152,
          0LL,
          0LL,
          2u,
          &v20);
      CInputThreadBase::ActivateInputProcessing((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
      IOCPDispatcher::RegisterThreadDispatcherObject(
        *(IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        *((void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 7));
      IOCPDispatcher::RegisterThreadDispatcherObject(
        *(IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        *((void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 8));
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        *((void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 9),
        lambda_41d3d8e444f2107bdec37176a1b6496a_::_lambda_invoker_cdecl_,
        0LL);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        *((void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 10),
        lambda_8c448fb33d037e95b4f6f526a46cb96d_::_lambda_invoker_cdecl_,
        0LL);
      IOCPDispatcher::RegisterThreadDispatcherObjectWithCallback(
        *(IOCPDispatcher **)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters,
        *((void **)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 11),
        lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_,
        0LL);
      if ( qword_1C02962C0 && (unsigned int)qword_1C02962C0(v11) )
      {
        v18 = SGDGetUserSessionState(v11, v10, v12, v13);
        CBaseInput::HandleTSRequest(*(_QWORD *)(v18 + 3272), 0LL);
      }
      v14 = SGDGetUserSessionState(v11, v10, v12, v13);
      CBaseInput::Read(*(CBaseInput **)(v14 + 3304));
      v16 = 1;
    }
    else
    {
      v16 = 0;
      KSTIOCPDispatcher_Destroy(v9, v8);
      CKernelSensorThread::DestroyEventHandles((CKernelSensorThread *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          2,
          13,
          (__int64)&WPP_f24dfba830553ecb8fc554e2a66e2779_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v4 = 0;
    if ( (_BYTE)v15 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v4,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        14,
        (__int64)&WPP_f24dfba830553ecb8fc554e2a66e2779_Traceguids);
    return v16;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        11,
        (__int64)&WPP_f24dfba830553ecb8fc554e2a66e2779_Traceguids);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v6) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v4 = 0;
    if ( (_BYTE)v6 || v4 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v4,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        12,
        (__int64)&WPP_f24dfba830553ecb8fc554e2a66e2779_Traceguids);
    return 0LL;
  }
}
