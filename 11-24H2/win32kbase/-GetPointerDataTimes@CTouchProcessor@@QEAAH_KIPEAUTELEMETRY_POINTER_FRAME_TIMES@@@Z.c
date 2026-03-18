/*
 * XREFs of ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D5020
 * Callers:
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1400D4090 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUTELEMETRY_POINTER_F.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x140107684 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019CA14 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FB650 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1401FEB50 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1402008E0 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataTimes(
        CTouchProcessor *this,
        unsigned __int64 a2,
        unsigned int a3,
        struct TELEMETRY_POINTER_FRAME_TIMES *a4)
{
  unsigned int v4; // r12d
  char v5; // di
  CTouchProcessor *v6; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v8; // edx
  unsigned int v9; // r8d
  struct CPointerMsgData *v10; // r12
  CTouchProcessor *v11; // rcx
  __int64 FrameById; // rax
  CPointerInfoNode *v13; // r12
  unsigned int HistoryCount; // esi
  const struct CPointerInputFrame *v16; // rdx
  unsigned int v17; // r12d
  const struct CPointerInputFrame *i; // r8
  _OWORD *v19; // rcx
  void *v20; // r8
  __int16 v21; // [rsp+30h] [rbp-98h]
  struct CPointerInputFrame *v22; // [rsp+48h] [rbp-80h]
  struct CPointerInputFrame *v23; // [rsp+48h] [rbp-80h]
  _BYTE v24[88]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+D8h] [rbp+10h]
  unsigned int v27; // [rsp+E0h] [rbp+18h]

  v27 = a3;
  v26 = a2;
  v4 = a3;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u )
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
    || (LOBYTE(a3) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      148,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v24, (CTouchProcessor *)((char *)this + 32));
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5667LL);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v6, v26);
  v10 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v8) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v5 = 0;
    if ( !(_BYTE)v8 && !v5 )
      goto LABEL_54;
    v21 = 149;
LABEL_53:
    LOBYTE(v9) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v11 + 3),
      v8,
      v9,
      *((_QWORD *)v11 + 8),
      5,
      4,
      v21,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
LABEL_54:
    CInpLockGuardShared::~CInpLockGuardShared((CInpLockGuardShared *)v24);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *((unsigned int *)NonConstMsgData + 7), 4LL);
  v22 = (struct CPointerInputFrame *)FrameById;
  if ( !FrameById )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v8) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v5 = 0;
    if ( !(_BYTE)v8 && !v5 )
      goto LABEL_54;
    v21 = 150;
    goto LABEL_53;
  }
  if ( *((_DWORD *)v10 + 8) >= *(_DWORD *)(FrameById + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5686LL);
  v13 = (CPointerInfoNode *)(*((_QWORD *)v22 + 30) + 480LL * *((unsigned int *)v10 + 8));
  if ( !(unsigned int)CPointerInfoNode::IsValid(v13) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5688LL);
  if ( (*(_DWORD *)v13 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5689LL);
  HistoryCount = CPointerInfoNode::GetHistoryCount(v13);
  v9 = v27;
  if ( v27 > HistoryCount )
  {
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v8) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v5 = 0;
    if ( !(_BYTE)v8 && !v5 )
      goto LABEL_54;
    v21 = 151;
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
  if ( v27 > 1 )
  {
    for ( i = CTouchProcessor::GetPreviousFrameByDevice(this, v16);
          v17 < v27 && i && HistoryCount > 1;
          i = CTouchProcessor::GetPreviousFrameByDevice(this, i) )
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
      ++v17;
      --HistoryCount;
    }
  }
  v20 = &WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(v16) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(v16) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
    v5 = 0;
  if ( (_BYTE)v16 || v5 )
  {
    LOBYTE(v20) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      (_DWORD)v16,
      (_DWORD)v20,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      152,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  }
  CInpLockGuardShared::~CInpLockGuardShared((CInpLockGuardShared *)v24);
  return 1LL;
}
