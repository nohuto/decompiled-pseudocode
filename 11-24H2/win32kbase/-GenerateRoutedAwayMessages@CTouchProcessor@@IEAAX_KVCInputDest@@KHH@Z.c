/*
 * XREFs of ?GenerateRoutedAwayMessages@CTouchProcessor@@IEAAX_KVCInputDest@@KHH@Z @ 0x1401FDA74
 * Callers:
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1402037CC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1400C3C74 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F4710 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x14013E944 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     ?AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z @ 0x14015B750 (-AddRoutedAwayTarget@CTouchProcessor@@AEAAXGVCInputDest@@@Z.c)
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x140184868 (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x140205418 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x140208B58 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CTouchProcessor::GenerateRoutedAwayMessages(
        PERESOURCE *a1,
        unsigned __int64 a2,
        CInputDest *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  CInputDest *v7; // r12
  unsigned __int64 v8; // rbp
  char v10; // si
  CTouchProcessor *v11; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  int v13; // edx
  struct CPointerMsgData *v14; // rdi
  char v15; // bl
  _UNKNOWN **v16; // r8
  bool v17; // di
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  CTouchProcessor *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r14
  char v24; // bl
  bool v25; // di
  __int64 v26; // rax
  int v27; // r8d
  int v28; // edx
  unsigned __int16 *v29; // rbx
  int Message; // eax
  char v31; // bp
  char v32; // r15
  __int64 UserSessionState; // rax
  CInputDest *v34; // rax
  int v35; // [rsp+28h] [rbp-D0h]
  __int16 v36; // [rsp+30h] [rbp-C8h]
  int v37; // [rsp+38h] [rbp-C0h]
  _BYTE v38[113]; // [rsp+50h] [rbp-A8h] BYREF
  int v39; // [rsp+C1h] [rbp-37h]
  __int16 v40; // [rsp+C5h] [rbp-33h]
  char v41; // [rsp+C7h] [rbp-31h]

  v7 = a3;
  v8 = a2;
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
      (_DWORD)a3,
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      5,
      4,
      219,
      (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
  if ( !tagDomLock::IsLockedShared(a1 + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7506);
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v11, v8);
  v14 = NonConstMsgData;
  if ( NonConstMsgData )
  {
    v22 = CTouchProcessor::ReferenceFrame(a1, *((unsigned int *)NonConstMsgData + 7));
    LODWORD(v16) = 0;
    v23 = v22;
    if ( v22 )
    {
      if ( *((_DWORD *)v14 + 8) >= *(_DWORD *)(v22 + 48) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7524);
      v29 = (unsigned __int16 *)(*(_QWORD *)(v23 + 240) + 480LL * *((unsigned int *)v14 + 8));
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v29) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7526);
      if ( v29[86] != *((_WORD *)v14 + 8) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7527);
      v39 = 0;
      v40 = 0;
      v41 = 0;
      memset(v38, 0, sizeof(v38));
      Message = CTouchProcessor::GenerateMessage(
                  (__int64)a1,
                  (__int64)v29,
                  v8,
                  (const struct CPointerInputFrame *)v23,
                  0x252u,
                  a4,
                  a5,
                  a6,
                  (CInputDest *)v38);
      v31 = 0;
      if ( Message )
      {
        v34 = CInputDest::CInputDest((CInputDest *)v38, (const struct CInputDest *)(v29 + 176));
        CTouchProcessor::AddRoutedAwayTarget((CTouchProcessor *)a1, v29[86], v34);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0 )
        {
          v31 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        }
        v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_HL(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v31,
            v32,
            *(_QWORD *)(UserSessionState + 69400),
            2u,
            v35,
            0xE0u,
            v37);
        }
      }
      CTouchProcessor::UnreferenceFrame(a1, v23);
      v21 = WPP_GLOBAL_Control;
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
        v36 = 225;
        goto LABEL_72;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
        || (v24 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
      {
        v24 = 0;
      }
      v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v27) = v25;
        LOBYTE(v28) = v24;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v28,
          v27,
          *(_QWORD *)(v26 + 69400),
          4,
          4,
          222,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
        LODWORD(v16) = 0;
      }
      v21 = WPP_GLOBAL_Control;
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
        v36 = 223;
        goto LABEL_72;
      }
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || (v15 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
    {
      v15 = 0;
    }
    v16 = &WPP_RECORDER_INITIALIZED;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v15;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 69400),
        4,
        4,
        220,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
      v16 = &WPP_RECORDER_INITIALIZED;
    }
    v21 = WPP_GLOBAL_Control;
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
      v36 = 221;
LABEL_72:
      LOBYTE(v16) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)v21 + 3),
        v13,
        (_DWORD)v16,
        *((_QWORD *)v21 + 8),
        5,
        4,
        v36,
        (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids);
    }
  }
  CInputDest::~CInputDest(v7);
}
