/*
 * XREFs of ?ProcessInput@CTouchProcessor@@QEAAXPEAX0KHHPEA_N@Z @ 0x1401853C0
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x140188E00 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ?ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x140052364 (-ProcessInput@Pointer@TelemetryDebug@InputTraceLogging@@SAXAEBUTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x140062674 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1400C2D48 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1400C47E4 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x14011046C (-AddUndispatchedFrameToThreadFrameList@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x140182E00 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z @ 0x1401F6318 (--0CInpLockGuardExclusive@@QEAA@AEAVCEResourceLock@@PEAX@Z.c)
 *     ?BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z @ 0x1401F6FCC (-BufferInDelayZone@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     ?CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1401F7680 (-CheckAndSendFindMyPenWnf@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@@Z @ 0x140204168 (-ProcessInputPostDelayZonePalmRejection@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@PEAURIMCOM.c)
 *     ?ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@@@Z @ 0x14020547C (-ReferenceFrameInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEAU2@W4CPointerInputFramePhase@.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CTouchProcessor::ProcessInput(
        CTouchProcessor *this,
        __int64 a2,
        char *a3,
        unsigned int a4,
        int a5,
        int a6,
        bool *a7)
{
  __int64 v8; // rbx
  int v11; // edx
  int v12; // r8d
  bool *v13; // rax
  char v14; // di
  __int64 v15; // r13
  char *v16; // r12
  char *v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int (*v21)(void); // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(char *); // rax
  bool v25; // bl
  bool v26; // si
  __int64 UserSessionState; // rax
  int v28; // edx
  int v29; // r8d
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rbx
  bool v34; // zf
  _QWORD *v35; // rax
  struct CPointerInputFrame *v36; // rax
  __int64 v37; // rcx
  const struct CPointerInputFrame *v38; // rbx
  CTouchProcessor *v39; // rcx
  int v40; // edx
  void *v41; // r8
  __int16 v42; // [rsp+30h] [rbp-78h]
  PERESOURCE *v43[13]; // [rsp+40h] [rbp-68h] BYREF
  __int64 *v44; // [rsp+B0h] [rbp+8h] BYREF
  int v45; // [rsp+C8h] [rbp+20h]

  v8 = a4;
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v43,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v13 = a7;
  *((_BYTE *)this + 40) = 0;
  *v13 = 0;
  v14 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v11) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v11) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v12) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v12) = 0;
  }
  if ( (_BYTE)v11 || (_BYTE)v12 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      10,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  v15 = HMValidateHandleNoSecure(a2, 19);
  v16 = &a3[v8];
  while ( a3 + 240 <= v16 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v44, "ProcessTouchOrPenInput", 0LL);
    v17 = a3;
    a3 += *(unsigned int *)a3;
    v18 = (__int64)v17;
    v21 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v20, v19) + 48) + 5952LL);
    if ( v21 && v21() >= 0 )
    {
      v24 = *(__int64 (__fastcall **)(char *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v23, v22) + 48) + 5960LL);
      if ( !v24 )
        goto LABEL_17;
      v18 = v24(v17);
    }
    if ( !v18 )
    {
LABEL_17:
      v25 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_42;
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      v42 = 11;
      goto LABEL_25;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v32 = isChildPartition(v31) ? 0x48 : 0;
    *(LARGE_INTEGER *)&v17[v32 + 72] = PerformanceCounter;
    if ( !v15 )
    {
      v45 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 813LL);
    }
    v33 = *(_QWORD *)(v15 + 2272);
    v34 = !isChildPartition(v32);
    v35 = v17 + 64;
    if ( !v34 )
      v35 = v17 + 136;
    *v35 = v33;
    InputTraceLogging::TelemetryDebug::Pointer::ProcessInput((const struct TELEMETRY_POINTER_FRAME_TIMES *)(v17 + 48));
    v36 = CTouchProcessor::CommitRimCompleteFrame((PERESOURCE *)this, (struct RIMCOMPLETEFRAME *)v17, 0, 0);
    v38 = v36;
    if ( v36 )
    {
      CTouchProcessor::ReferenceFrameInt(v37, v36);
      CTouchProcessor::AddUndispatchedFrameToThreadFrameList(v39, v38);
      CTouchProcessor::CheckAndSendFindMyPenWnf(this, v38);
      if ( CTouchProcessor::ProcessDelayZonePalmRejection(this, v38) )
        CTouchProcessor::ProcessInputPostDelayZonePalmRejection(this, v38, (struct RIMCOMPLETEFRAME *)v17);
      else
        InputTraceLogging::Pointer::BufferInDelayZone(v38);
      goto LABEL_42;
    }
    v25 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_42;
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    v42 = 12;
LABEL_25:
    LOBYTE(v29) = v26;
    LOBYTE(v28) = v25;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v28,
      v29,
      *(_QWORD *)(UserSessionState + 69400),
      2,
      4,
      v42,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
LABEL_42:
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v44);
  }
  v40 = (int)a7;
  *a7 = *((_BYTE *)this + 40);
  if ( a3 != v16 )
  {
    v45 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 863LL);
  }
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v40) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v40) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v14 = 0;
  if ( (_BYTE)v40 || v14 )
  {
    v41 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
    LOBYTE(v41) = v14;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v40,
      (_DWORD)v41,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      13,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v43);
}
