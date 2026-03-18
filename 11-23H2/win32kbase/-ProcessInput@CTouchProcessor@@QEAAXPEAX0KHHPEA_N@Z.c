/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1C00D41D8
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2D60 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C0079E14 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9674 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00B96E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01BA308 (-AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01BC514 (-CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01BE724 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01CF840 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01D05C4 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x1C01D0844 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x1C01D211C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 */

void __fastcall CTouchProcessor::ProcessInput(
        CTouchProcessor *this,
        void *a2,
        char *a3,
        unsigned int a4,
        int a5,
        int a6,
        bool *a7)
{
  int v7; // esi
  __int64 v8; // rbx
  int v11; // edx
  int v12; // r8d
  bool *v13; // rax
  char v14; // di
  __int64 v15; // r13
  char *v16; // r12
  int v17; // edx
  int v18; // r8d
  char *v19; // rsi
  __int64 v20; // rbx
  PDEVICE_OBJECT v21; // rcx
  __int16 v22; // ax
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v24; // rbx
  struct CPointerInputFrame *v25; // rax
  __int64 v26; // rcx
  struct CPointerInputFrame *v27; // rbx
  CTouchProcessor *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // edx
  void *v32; // r8
  __int64 *v33; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v34[112]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v35; // [rsp+C0h] [rbp+8h] BYREF
  __int64 v36; // [rsp+D0h] [rbp+18h] BYREF
  int v37; // [rsp+D8h] [rbp+20h]

  v7 = (int)a2;
  v8 = a4;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v34,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v13 = a7;
  *((_BYTE *)this + 48) = 0;
  *v13 = 0;
  v14 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v12) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v12) = 0;
  }
  if ( (_BYTE)v11 || (_BYTE)v12 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      10,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  v15 = HMValidateHandleNoSecure(v7, 19);
  v16 = &a3[v8];
  if ( a3 + 240 <= &a3[v8] )
  {
    while ( 1 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v33, "ProcessTouchOrPenInput", 0LL);
      v19 = a3;
      a3 += *(unsigned int *)a3;
      v20 = (__int64)v19;
      if ( qword_1C0296840 && (int)qword_1C0296840() >= 0 )
      {
        if ( !qword_1C0296848 )
          break;
        v20 = qword_1C0296848(v19);
      }
      if ( !v20 )
        break;
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      *(LARGE_INTEGER *)&v19[(isChildPartition() ? 0x48 : 0) + 72] = PerformanceCounter;
      if ( !v15 )
      {
        v37 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 764LL);
      }
      v24 = *(_QWORD *)(v15 + 2272);
      *(_QWORD *)&v19[(isChildPartition() ? 0x48 : 0) + 64] = v24;
      InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v19 + 48));
      v25 = CTouchProcessor::CommitRimCompleteFrame(this, (struct RIMCOMPLETEFRAME *)v19, 0, 0);
      v27 = v25;
      if ( v25 )
      {
        CTouchProcessor::ReferenceFrameInt(v26, v25);
        CTouchProcessor::AddUndispatchedFrameToThreadFrameList(v28, v27);
        CTouchProcessor::CheckAndSendFindMyPenWnf(this, v27);
        if ( CTouchProcessor::ProcessDelayZonePalmRejection(this, v27) )
        {
          CTouchProcessor::ProcessInputPostDelayZonePalmRejection(this, v27, (struct RIMCOMPLETEFRAME *)v19);
        }
        else if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 32LL) )
        {
          a5 = *((_DWORD *)v27 + 10);
          v35 = *((_QWORD *)v27 + 9);
          v36 = *((_QWORD *)v27 + 27);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (int)&dword_1C0289810,
            (int)&unk_1C025CAC0,
            v29,
            v30,
            (__int64)&v36,
            (__int64)&v35,
            (__int64)&a5);
        }
        goto LABEL_40;
      }
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v17) = 0;
      }
      LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = 12;
LABEL_24:
        WPP_RECORDER_AND_TRACE_SF_(
          v21->AttachedDevice,
          v17,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          4,
          v22,
          (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
      }
LABEL_40:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v33);
      if ( a3 + 240 > v16 )
        goto LABEL_41;
    }
    v21 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v17) = 0;
    }
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_40;
    v22 = 11;
    goto LABEL_24;
  }
LABEL_41:
  v31 = (int)a7;
  *a7 = *((_BYTE *)this + 48);
  if ( a3 != v16 )
  {
    v37 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 814LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v31) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v14 = 0;
  if ( (_BYTE)v31 || v14 )
  {
    v32 = &WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids;
    LOBYTE(v32) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v31,
      (_DWORD)v32,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      13,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v34);
}
