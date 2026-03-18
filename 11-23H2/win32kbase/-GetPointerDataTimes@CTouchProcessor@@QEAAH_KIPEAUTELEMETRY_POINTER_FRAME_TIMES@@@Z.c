/*
 * XREFs of ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01C7EE0
 * Callers:
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01C9214 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00B9740 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00D418C (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C00E4038 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01C266C (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7400 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01CBED8 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataTimes(
        struct _KTHREAD **this,
        unsigned __int64 a2,
        unsigned int a3,
        struct TELEMETRY_POINTER_FRAME_TIMES *a4)
{
  unsigned int v4; // r15d
  char v5; // di
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v8; // edx
  struct CPointerMsgData *v9; // r15
  PDEVICE_OBJECT v10; // rcx
  int v11; // r8d
  struct CPointerInputFrame *FrameById; // rax
  CPointerInfoNode *v13; // r15
  unsigned int HistoryCount; // esi
  const struct CPointerInputFrame *v16; // rdx
  unsigned int v17; // r15d
  const struct CPointerInputFrame *PreviousFrameByDevice; // r8
  _OWORD *v19; // rcx
  void *v20; // r8
  __int16 v21; // [rsp+30h] [rbp-98h]
  struct CPointerInputFrame *v22; // [rsp+48h] [rbp-80h]
  struct CPointerInputFrame *v23; // [rsp+48h] [rbp-80h]
  CInpLockGuard *v24; // [rsp+50h] [rbp-78h] BYREF
  int v25; // [rsp+58h] [rbp-70h]
  int v26; // [rsp+60h] [rbp-68h]
  unsigned int v27; // [rsp+64h] [rbp-64h]
  const struct CPointerInputFrame *v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v30; // [rsp+D8h] [rbp+10h]
  unsigned int v31; // [rsp+E0h] [rbp+18h]

  v31 = a3;
  v30 = a2;
  v4 = a3;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
  {
    LOBYTE(a2) = 0;
    v5 = 1;
  }
  else
  {
    v5 = 1;
    LOBYTE(a2) = 1;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      149,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)&v24, (struct CInpLockGuard *)(this + 4));
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5601);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, v30);
  v9 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v5 = 0;
    if ( !(_BYTE)v8 && !v5 )
      goto LABEL_54;
    v11 = 150;
LABEL_53:
    v21 = v11;
    LOBYTE(v11) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      v10->AttachedDevice,
      v8,
      v11,
      v10->DeviceExtension,
      5,
      4,
      v21,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
LABEL_54:
    if ( !v25 )
      CInpLockGuard::UnLock(v24);
    return 0LL;
  }
  FrameById = (struct CPointerInputFrame *)CTouchProcessor::FindFrameById(this, *((_DWORD *)NonConstMsgData + 7), 4);
  v22 = FrameById;
  if ( !FrameById )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v5 = 0;
    if ( !(_BYTE)v8 && !v5 )
      goto LABEL_54;
    v11 = 151;
    goto LABEL_53;
  }
  if ( *((_DWORD *)v9 + 8) >= *((_DWORD *)FrameById + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5620);
  v13 = (CPointerInfoNode *)(*((_QWORD *)v22 + 30) + 480LL * *((unsigned int *)v9 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v13) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5622);
  if ( (*(_DWORD *)v13 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5623);
  HistoryCount = CPointerInfoNode::GetHistoryCount(v13);
  v27 = HistoryCount;
  if ( v31 > HistoryCount )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v5 = 0;
    if ( !(_BYTE)v8 && !v5 )
      goto LABEL_54;
    v11 = 152;
    goto LABEL_53;
  }
  v16 = v22;
  v23 = (struct CPointerInputFrame *)((char *)v22 + 72);
  *(_OWORD *)a4 = *(_OWORD *)v23;
  *((_OWORD *)a4 + 1) = *((_OWORD *)v23 + 1);
  *((_OWORD *)a4 + 2) = *((_OWORD *)v23 + 2);
  *((_OWORD *)a4 + 3) = *((_OWORD *)v23 + 3);
  *((_OWORD *)a4 + 4) = *((_OWORD *)v23 + 4);
  *((_OWORD *)a4 + 5) = *((_OWORD *)v23 + 5);
  *((_OWORD *)a4 + 6) = *((_OWORD *)v23 + 6);
  *((_OWORD *)a4 + 7) = *((_OWORD *)v23 + 7);
  *((_OWORD *)a4 + 8) = *((_OWORD *)v23 + 8);
  v17 = 1;
  v26 = 1;
  if ( v31 > 1 )
  {
    PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, v16);
    v28 = PreviousFrameByDevice;
    while ( v17 < v31 && PreviousFrameByDevice && HistoryCount > 1 )
    {
      v19 = (_OWORD *)((char *)a4 + 144 * v17);
      *v19 = *(_OWORD *)v23;
      v19[1] = *((_OWORD *)v23 + 1);
      v19[2] = *((_OWORD *)v23 + 2);
      v19[3] = *((_OWORD *)v23 + 3);
      v19[4] = *((_OWORD *)v23 + 4);
      v19[5] = *((_OWORD *)v23 + 5);
      v19[6] = *((_OWORD *)v23 + 6);
      v19[7] = *((_OWORD *)v23 + 7);
      v19[8] = *((_OWORD *)v23 + 8);
      v26 = ++v17;
      v27 = --HistoryCount;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, PreviousFrameByDevice);
      v28 = PreviousFrameByDevice;
    }
  }
  v20 = &WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v16) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v5 = 0;
  if ( (_BYTE)v16 || v5 )
  {
    LOBYTE(v20) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v16,
      (_DWORD)v20,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      153,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  }
  if ( !v25 )
    CInpLockGuard::UnLock(v24);
  return 1LL;
}
