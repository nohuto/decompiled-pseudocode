/*
 * XREFs of ?GenerateWindowLeaveMessage@CTouchProcessor@@IEAAX_KVCInputDest@@KHHH@Z @ 0x1401FE524
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1402037CC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x14013E944 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140184868 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140205418 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateWindowLeaveMessage(
        __int64 a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  CInputDest *v8; // r12
  unsigned __int64 v9; // rbp
  char v11; // si
  CTouchProcessor *v12; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v14; // edx
  struct CPointerMsgData *v15; // rdi
  char v16; // bl
  _UNKNOWN **v17; // r8
  bool v18; // di
  __int64 v19; // rax
  int v20; // r8d
  int v21; // edx
  CTouchProcessor *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r14
  char v25; // bl
  bool v26; // di
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx
  CPointerInfoNode *v30; // rbx
  int Message; // eax
  char v32; // bp
  char v33; // r15
  __int64 UserSessionState; // rax
  int v35; // [rsp+28h] [rbp-D0h]
  __int16 v36; // [rsp+30h] [rbp-C8h]
  int v37; // [rsp+38h] [rbp-C0h]
  _BYTE v38[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v39; // [rsp+C1h] [rbp-37h]
  __int16 v40; // [rsp+C5h] [rbp-33h]
  char v41; // [rsp+C7h] [rbp-31h]

  v8 = a3;
  v9 = a2;
  v11 = 1;
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
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      203,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  if ( !tagDomLock::IsLockedShared((PERESOURCE *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7202);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v12, v9);
  v15 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v23 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)NonConstMsgData + 7));
    LODWORD(v17) = 0;
    v24 = v23;
    if ( v23 )
    {
      if ( *((_DWORD *)v15 + 8) >= *(_DWORD *)(v23 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7220);
      v30 = (CPointerInfoNode *)(*(_QWORD *)(v24 + 240) + 480LL * *((unsigned int *)v15 + 8));
      if ( !(unsigned int)CPointerInfoNode::IsValid(v30) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7222);
      if ( *((_WORD *)v30 + 86) != *((_WORD *)v15 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7223);
      if ( !a5 )
      {
        v39 = 0;
        v40 = 0;
        v41 = 0;
        memset(v38, 0, sizeof(v38));
        Message = CTouchProcessor::GenerateMessage(
                    a1,
                    (__int64)v30,
                    v9,
                    (const struct CPointerInputFrame *)v24,
                    0x24Au,
                    a4,
                    a6,
                    a7,
                    (CInputDest *)v38);
        v32 = 0;
        if ( !Message )
        {
          if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0 )
          {
            v32 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          }
          v33 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
            WPP_RECORDER_AND_TRACE_SF_HL(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v32,
              v33,
              *(_QWORD *)(UserSessionState + 69400),
              2u,
              v35,
              0xD0u,
              v37);
          }
        }
      }
      CTouchProcessor::UnreferenceFrame(a1, v24);
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v11 = 0;
      if ( (_BYTE)v14 || v11 )
      {
        v36 = 209;
        goto LABEL_73;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v25 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
      {
        v25 = 0;
      }
      v26 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v28) = v26;
        LOBYTE(v29) = v25;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v29,
          v28,
          *(_QWORD *)(v27 + 69400),
          2,
          4,
          206,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
        LODWORD(v17) = 0;
      }
      v22 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
        v11 = 0;
      if ( (_BYTE)v14 || v11 )
      {
        v36 = 207;
        goto LABEL_73;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v16 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v16 = 0;
    }
    v17 = &WPP_RECORDER_INITIALIZED;
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v20) = v18;
      LOBYTE(v21) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v21,
        v20,
        *(_QWORD *)(v19 + 69400),
        4,
        4,
        204,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      v17 = &WPP_RECORDER_INITIALIZED;
    }
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (LOBYTE(v14) = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 5u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !*((_WORD *)WPP_GLOBAL_Control + 36) )
      v11 = 0;
    if ( (_BYTE)v14 || v11 )
    {
      v36 = 205;
LABEL_73:
      LOBYTE(v17) = v11;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v22 + 3),
        v14,
        (_DWORD)v17,
        *((_QWORD *)v22 + 8),
        5,
        4,
        v36,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
  }
  CInputDest::~CInputDest(v8);
}
