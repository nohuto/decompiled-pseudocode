/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1400D5510
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1400D3F20 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x140107684 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     IsExemptInjectionDevice @ 0x140125E9C (IsExemptInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x14019C8E0 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x14019CA14 (--0CInpLockGuardShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1401FB650 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1401FEB50 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x140200390 (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1402008E0 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     RtlSetVolatileMemory @ 0x14023F430 (RtlSetVolatileMemory.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataWithHistory(
        CTouchProcessor *this,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        int *a7)
{
  unsigned __int64 v7; // r15
  char v8; // di
  _UNKNOWN **v9; // r8
  int v10; // edx
  CTouchProcessor *v11; // rcx
  char v12; // si
  _UNKNOWN **v13; // r8
  bool v14; // r15
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  CTouchProcessor *v18; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  struct CPointerMsgData *v20; // rsi
  char v21; // si
  bool v22; // r15
  __int64 v23; // rax
  int v24; // r8d
  int v25; // edx
  __int64 FrameById; // rax
  __int64 v27; // r12
  char v28; // si
  bool v29; // r15
  __int64 v30; // rax
  int v31; // r8d
  int v32; // edx
  __int64 v34; // r15
  unsigned int HistoryCount; // ecx
  unsigned int PointerRawData; // esi
  char v37; // r15
  bool v38; // r12
  __int64 v39; // rax
  unsigned int v40; // edx
  int v41; // r8d
  int v42; // edx
  char v43; // r15
  bool v44; // r12
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  CTouchProcessor *v48; // rcx
  _UNKNOWN **v49; // r8
  char v50; // r15
  bool v51; // r12
  __int64 v52; // rax
  int v53; // r8d
  int v54; // edx
  unsigned int v55; // r15d
  const struct CPointerInputFrame *PreviousFrameByDevice; // r12
  __int64 v57; // r15
  char v58; // si
  bool v59; // r13
  __int64 v60; // rax
  int v61; // r8d
  int v62; // edx
  int v63; // [rsp+28h] [rbp-90h]
  __int16 v64; // [rsp+30h] [rbp-88h]
  __int16 v65; // [rsp+30h] [rbp-88h]
  int v66; // [rsp+38h] [rbp-80h]
  __int64 v67; // [rsp+50h] [rbp-68h]
  __int64 v68; // [rsp+58h] [rbp-60h]
  size_t Size; // [rsp+60h] [rbp-58h]
  int *v70; // [rsp+68h] [rbp-50h]
  _BYTE v71[64]; // [rsp+78h] [rbp-40h] BYREF
  unsigned int v75; // [rsp+E8h] [rbp+30h]
  int *v76; // [rsp+F0h] [rbp+38h]

  v7 = a2;
  Size = a6;
  v70 = &a7[Size];
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u )
  {
    LOBYTE(a2) = 0;
    v8 = 1;
  }
  else
  {
    v8 = 1;
    LOBYTE(a2) = 1;
  }
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v9) = 1, !*((_WORD *)WPP_GLOBAL_Control + 36)) )
  {
    LOBYTE(v9) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)v9 )
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      a2,
      (_DWORD)v9,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      128,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v71, (CTouchProcessor *)((char *)this + 32));
  if ( a6 != a4 * a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5400LL);
  if ( a6 < a4 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v12 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v12 = 0;
    }
    v13 = &WPP_RECORDER_INITIALIZED;
    v14 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v16) = v14;
      LOBYTE(v17) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v17,
        v16,
        *(_QWORD *)(UserSessionState + 69400),
        3,
        4,
        129,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      v13 = &WPP_RECORDER_INITIALIZED;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_69;
    v64 = 130;
LABEL_68:
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)v18 + 3),
      v10,
      (_DWORD)v13,
      *((_QWORD *)v18 + 8),
      5,
      4,
      v64,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
LABEL_69:
    CInpLockGuardShared::~CInpLockGuardShared((CInpLockGuardShared *)v71);
    return 0LL;
  }
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, v7);
  v20 = NonConstMsgData;
  if ( !NonConstMsgData )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v21 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v21 = 0;
    }
    v13 = &WPP_RECORDER_INITIALIZED;
    v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v21 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v24) = v22;
      LOBYTE(v25) = v21;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v25,
        v24,
        *(_QWORD *)(v23 + 69400),
        3,
        4,
        131,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      v13 = &WPP_RECORDER_INITIALIZED;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_69;
    v64 = 132;
    goto LABEL_68;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *((unsigned int *)NonConstMsgData + 7), 4LL);
  v27 = FrameById;
  v68 = FrameById;
  if ( !FrameById )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v28 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v28 = 0;
    }
    v13 = &WPP_RECORDER_INITIALIZED;
    v29 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v31) = v29;
      LOBYTE(v32) = v28;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v32,
        v31,
        *(_QWORD *)(v30 + 69400),
        3,
        4,
        133,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      v13 = &WPP_RECORDER_INITIALIZED;
    }
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v10) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v10 && !v8 )
      goto LABEL_69;
    v64 = 134;
    goto LABEL_68;
  }
  if ( *((_DWORD *)v20 + 8) >= *(_DWORD *)(FrameById + 48) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5428LL);
  v34 = *(_QWORD *)(v27 + 240) + 480LL * *((unsigned int *)v20 + 8);
  v67 = v34;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v34) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5430LL);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v34);
  v75 = HistoryCount;
  if ( a3 == 1 || (PointerRawData = 0, a3 == HistoryCount) )
    PointerRawData = 1;
  if ( !PointerRawData )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v37 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
    {
      v37 = 0;
    }
    v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      v40 = a3;
      LOBYTE(v41) = v38;
      LOBYTE(v40) = v37;
      WPP_RECORDER_AND_TRACE_SF_LL(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v40,
        v41,
        *(_QWORD *)(v39 + 69400),
        3,
        v63,
        135,
        v66,
        a3,
        v75);
    }
    v34 = v67;
    v27 = v68;
  }
  if ( (unsigned __int8)IsExemptInjectionDevice(*(_QWORD *)(v27 + 64)) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v43 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v43 = 0;
    }
    v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v45 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
      LOBYTE(v46) = v44;
      LOBYTE(v47) = v43;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v47,
        v46,
        *(_QWORD *)(v45 + 69400),
        4,
        4,
        136,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
    RtlSetVolatileMemory(a7, 0, Size * 4);
    v48 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v42) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v42) = 0;
    }
    v49 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v42 && !v8 )
      goto LABEL_148;
    v65 = 138;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         this,
                         (const struct CPointerInputFrame *)v27,
                         *(_DWORD *)(v34 + 156),
                         *(_WORD *)(v34 + 162),
                         a4,
                         a5,
                         a7);
      if ( !PointerRawData )
      {
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
          || (v50 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
        {
          v50 = 0;
        }
        v51 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v52 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
          LOBYTE(v53) = v51;
          LOBYTE(v54) = v50;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v54,
            v53,
            *(_QWORD *)(v52 + 69400),
            3,
            4,
            139,
            (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
        }
        v27 = v68;
      }
      if ( PointerRawData )
      {
        v76 = &a7[a4];
        if ( a3 > 1 )
        {
          v55 = *(_DWORD *)(v67 + 344);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                    this,
                                    (const struct CPointerInputFrame *)v27);
          do
          {
            if ( !PreviousFrameByDevice || v75 <= 1 )
              break;
            if ( v55 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5499LL);
            v57 = *((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v55;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v57) )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5501LL);
            if ( &v76[a4] > v70 )
            {
              if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
                || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
                || (v58 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u) )
              {
                v58 = 0;
              }
              v59 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( v58 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                v60 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED);
                LOBYTE(v61) = v59;
                LOBYTE(v62) = v58;
                WPP_RECORDER_AND_TRACE_SF_(
                  *((_QWORD *)WPP_GLOBAL_Control + 3),
                  v62,
                  v61,
                  *(_QWORD *)(v60 + 69400),
                  3,
                  4,
                  140,
                  (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
              }
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 this,
                                 PreviousFrameByDevice,
                                 *(_DWORD *)(v57 + 156),
                                 *(_WORD *)(v57 + 162),
                                 a4,
                                 a5,
                                 v76);
              if ( PointerRawData )
                v76 += a4;
            }
            if ( CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v57) != v75 - 1 )
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5523LL);
            v75 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v57);
            v55 = *(_DWORD *)(v57 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
    }
    v48 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v42) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v42) = 0;
    }
    v49 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v8 = 0;
    if ( !(_BYTE)v42 && !v8 )
      goto LABEL_148;
    v65 = 141;
  }
  LOBYTE(v49) = v8;
  WPP_RECORDER_AND_TRACE_SF_(
    *((_QWORD *)v48 + 3),
    v42,
    (_DWORD)v49,
    *((_QWORD *)v48 + 8),
    5,
    4,
    v65,
    (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
LABEL_148:
  CInpLockGuardShared::~CInpLockGuardShared((CInpLockGuardShared *)v71);
  return PointerRawData;
}
