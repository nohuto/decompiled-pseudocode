/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1401FF120
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x140184DFC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x140107684 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019CA14 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FB650 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1401FEB50 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1402008E0 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        PERESOURCE *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  unsigned int v6; // r12d
  __int64 v7; // rsi
  unsigned int v9; // ebx
  char v10; // di
  CTouchProcessor *v11; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v13; // edx
  int v14; // r8d
  struct CPointerMsgData *v15; // rsi
  CTouchProcessor *v16; // rcx
  const struct CPointerInputFrame *FrameById; // rax
  const struct CPointerInputFrame *v18; // rbp
  __int64 v19; // rsi
  unsigned int HistoryCount; // r14d
  unsigned int v21; // r15d
  unsigned int v22; // esi
  const struct CPointerInputFrame *PreviousFrameByDevice; // rbp
  __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int16 v28; // [rsp+30h] [rbp-68h]
  PERESOURCE *v29[10]; // [rsp+48h] [rbp-50h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || (LOBYTE(a2) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
  {
    LOBYTE(a2) = 0;
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
      142,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v29, this + 4);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5557);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, v7);
  v15 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    FrameById = (const struct CPointerInputFrame *)CTouchProcessor::FindFrameById(
                                                     (__int64)this,
                                                     *((_DWORD *)NonConstMsgData + 7),
                                                     4);
    v18 = FrameById;
    if ( FrameById )
    {
      if ( *((_DWORD *)v15 + 8) >= *((_DWORD *)FrameById + 12) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5576);
      v19 = *((_QWORD *)v18 + 30) + 480LL * *((unsigned int *)v15 + 8);
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v19) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5578);
      if ( a5 && *a5 && (*(_DWORD *)(v19 + 180) & 0x400000) == 0 )
      {
        *a5 = 0;
        v16 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
          v10 = 0;
        if ( (_BYTE)v13 || v10 )
        {
          v28 = 145;
          goto LABEL_63;
        }
      }
      else
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v19);
        if ( v6 <= HistoryCount )
        {
          *a4 = *(_QWORD *)(v19 + 248);
          v21 = 1;
          if ( v6 > 1 )
          {
            v22 = *(_DWORD *)(v19 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice((CTouchProcessor *)this, v18);
            do
            {
              if ( !PreviousFrameByDevice || HistoryCount <= 1 )
                break;
              if ( v22 >= *((_DWORD *)PreviousFrameByDevice + 12) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5623);
              v24 = *((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v22;
              if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v24) )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5625);
              v25 = v21++;
              a4[v25] = *(_QWORD *)(v24 + 248);
              if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v24) != HistoryCount - 1 )
                MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5635);
              v26 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v24);
              v22 = *(_DWORD *)(v24 + 344);
              HistoryCount = v26;
              PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                        (CTouchProcessor *)this,
                                        PreviousFrameByDevice);
            }
            while ( v21 < v6 );
          }
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            LOBYTE(v13) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v14) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
          {
            LOBYTE(v14) = 0;
          }
          if ( (_BYTE)v13 || (_BYTE)v14 )
            WPP_RECORDER_AND_TRACE_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v13,
              v14,
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              5,
              4,
              147,
              (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
          v9 = 1;
        }
        else
        {
          v16 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
            || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
            || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
          {
            LOBYTE(v13) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
            v10 = 0;
          if ( (_BYTE)v13 || v10 )
          {
            v28 = 146;
            goto LABEL_63;
          }
        }
      }
    }
    else
    {
      v16 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v10 = 0;
      if ( (_BYTE)v13 || v10 )
      {
        v28 = 144;
        goto LABEL_63;
      }
    }
  }
  else
  {
    v16 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v13) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v10 = 0;
    if ( (_BYTE)v13 || v10 )
    {
      v28 = 143;
LABEL_63:
      LOBYTE(v14) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v16 + 3),
        v13,
        v14,
        *((_QWORD *)v16 + 8),
        5,
        4,
        v28,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(v29);
  return v9;
}
