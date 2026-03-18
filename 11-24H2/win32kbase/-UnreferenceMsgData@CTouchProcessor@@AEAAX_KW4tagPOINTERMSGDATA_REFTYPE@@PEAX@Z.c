/*
 * XREFs of ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D39CC
 * Callers:
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400BA3DC (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D3570 (-UnreferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z @ 0x140184258 (-GenerateDepartureMessage@CTouchProcessor@@IEAAXPEBUCPointerInputFrame@@K_KKHH@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1401F6670 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z @ 0x1401F71B0 (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@PEAH@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z @ 0x1402037CC (-ProcessAndUnreferencePreviousInput@CTouchProcessor@@IEAAXPEBUCPointerInfoNode@@_KKHH@Z.c)
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x140208BB8 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x14020A034 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ??B?$SGTRACINGgBaseLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ @ 0x1400E948C (--B-$SGTRACINGgBaseLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ.c)
 *     ?UnreferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z @ 0x1400F39A0 (-UnreferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FreeMsgData@CTouchProcessor@@AEAAX_K@Z @ 0x1401FC120 (-FreeMsgData@CTouchProcessor@@AEAAX_K@Z.c)
 *     ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x1401FC59C (-FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Lq @ 0x14020A670 (WPP_RECORDER_AND_TRACE_SF_Lq.c)
 */

void __fastcall CTouchProcessor::UnreferenceMsgData(__int64 a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR v3; // r15
  struct CPointerMsgData *NonConstMsgData; // rbx
  char v7; // di
  CTouchProcessor **v8; // rdx
  _UNKNOWN **v9; // r8
  bool v10; // si
  bool v11; // bp
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  char v15; // al
  bool v16; // bp
  int v17; // eax
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rbp
  __int64 v21; // rdx
  int BugCheckParameter4; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+38h] [rbp-40h]

  v3 = a3;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)a1, a2);
  v7 = 1;
  if ( !tagDomLock::IsLockedShared((tagDomLock *)(a1 + 32)) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11314LL);
  if ( !*((_DWORD *)NonConstMsgData + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11330LL);
  _InterlockedDecrement((volatile signed __int32 *)NonConstMsgData + 6);
  v8 = &WPP_GLOBAL_Control;
  v9 = &WPP_RECORDER_INITIALIZED;
  if ( (_DWORD)v3 == 1 )
  {
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) == 0 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11335LL);
      v8 = &WPP_GLOBAL_Control;
      v9 = &WPP_RECORDER_INITIALIZED;
    }
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) == 0 )
    {
      v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v10;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          *(_QWORD *)(UserSessionState + 69400),
          2,
          4,
          286,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
          (char)NonConstMsgData);
      }
    }
    *((_DWORD *)NonConstMsgData + 9) &= ~0x40u;
  }
  else if ( (int)v3 > 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11346LL);
  }
  if ( !*((_BYTE *)NonConstMsgData + v3 + 52) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11347LL);
  v15 = *((_BYTE *)NonConstMsgData + v3 + 52);
  if ( !v15 )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = SGTRACINGgBaseLog<RECORDER_LOG__ *>::operator RECORDER_LOG__ *(WPP_GLOBAL_Control, v8, v9);
      LOBYTE(v18) = v16;
      LOBYTE(v19) = v7;
      WPP_RECORDER_AND_TRACE_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v19,
        v18,
        v17,
        BugCheckParameter4,
        v23,
        287,
        v24,
        v3,
        (char)NonConstMsgData);
    }
    KeBugCheckEx(0x164u, 0x25uLL, (ULONG_PTR)NonConstMsgData, v3, v3);
  }
  *((_BYTE *)NonConstMsgData + v3 + 52) = v15 - 1;
  if ( !*((_DWORD *)NonConstMsgData + 6) )
  {
    v20 = 0LL;
    do
    {
      if ( *((_BYTE *)NonConstMsgData + v20 + 52) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 196609LL, (unsigned __int16)v20 | 0x2C640000u);
        if ( *((_BYTE *)NonConstMsgData + v20 + 52) )
          KeBugCheckEx(0x164u, 0x25uLL, (ULONG_PTR)NonConstMsgData, v3, (unsigned int)v20);
      }
      v20 = (unsigned int)(v20 + 1);
    }
    while ( (unsigned int)v20 <= 8 );
  }
  InputTraceLogging::PointerMsg::UnreferenceMsgData(
    a2,
    *((unsigned int *)NonConstMsgData + 6),
    (unsigned int)v3,
    *((unsigned __int8 *)NonConstMsgData + v3 + 52));
  if ( !*((_DWORD *)NonConstMsgData + 6) )
  {
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x20) == 0 )
      CTouchProcessor::FreePointerInfoNode(
        a1,
        v21,
        *((unsigned int *)NonConstMsgData + 7),
        *((unsigned int *)NonConstMsgData + 8));
    CTouchProcessor::FreeMsgData((CTouchProcessor *)a1, a2);
  }
}
