/*
 * XREFs of ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D2744
 * Callers:
 *     ?ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400C2A4C (-ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1400D29C0 (-ReferenceMsgDataExternal@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H@Z @ 0x1401F6670 (-AddThreadPointerData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@H.c)
 *     ?AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDEST@@@Z @ 0x1401F6A90 (-AddThreadPointerHookData@CTouchProcessor@@QEAAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIUtagINPUTDES.c)
 *     ?CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z @ 0x1401F8F00 (-CreateAndReferenceMsgData@CTouchProcessor@@AEAA_KGKW4tagHPD_TYPE@@KIH@Z.c)
 *     ?MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z @ 0x140201B80 (-MarkPointerMessageGenerated@CTouchProcessor@@QEAAXI_JHPEAX@Z.c)
 *     ?UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z @ 0x14020A034 (-UpdateMsgData@CTouchProcessor@@AEAAX_KKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?ReferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z @ 0x1400F3E30 (-ReferenceMsgData@PointerMsg@InputTraceLogging@@SAX_KKW4tagPOINTERMSGDATA_REFTYPE@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1401FEFCC (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_Lq @ 0x14020A670 (WPP_RECORDER_AND_TRACE_SF_Lq.c)
 */

__int64 __fastcall CTouchProcessor::ReferenceMsgData(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // r14
  struct CPointerMsgData *NonConstMsgData; // rdi
  bool IsLockedShared; // al
  char v8; // bl
  bool v9; // si
  bool v10; // bp
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  bool v15; // bp
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  int v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+38h] [rbp-40h]

  v3 = a3;
  NonConstMsgData = CTouchProcessor::GetNonConstMsgData((CTouchProcessor *)a1, a2);
  IsLockedShared = tagDomLock::IsLockedShared((tagDomLock *)(a1 + 32));
  v8 = 1;
  if ( !IsLockedShared )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11263LL);
  if ( !_InterlockedIncrement((volatile signed __int32 *)NonConstMsgData + 6) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11271LL);
  if ( (_DWORD)v3 == 1 )
  {
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11275LL);
    if ( (*((_DWORD *)NonConstMsgData + 9) & 0x40) != 0 )
    {
      v9 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v12) = v10;
        LOBYTE(v13) = v9;
        WPP_RECORDER_AND_TRACE_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v13,
          v12,
          *(_QWORD *)(UserSessionState + 69400),
          2,
          4,
          284,
          (__int64)&WPP_61ce117451293dedbe606f30fcdcf8fb_Traceguids,
          (char)NonConstMsgData);
      }
    }
    *((_DWORD *)NonConstMsgData + 9) |= 0x40u;
  }
  else if ( (int)v3 > 8 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11286LL);
  }
  if ( (*((_BYTE *)NonConstMsgData + v3 + 52))++ == 0xFF )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 131073LL, 11288LL);
  if ( !*((_BYTE *)NonConstMsgData + v3 + 52) )
  {
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 8) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v8 = 0;
    }
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v8;
      WPP_RECORDER_AND_TRACE_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v18,
        v17,
        *(_QWORD *)(v16 + 69400),
        v20,
        v21,
        285,
        v22,
        v3,
        (char)NonConstMsgData);
    }
  }
  return InputTraceLogging::PointerMsg::ReferenceMsgData(
           a2,
           *((unsigned int *)NonConstMsgData + 6),
           (unsigned int)v3,
           *((unsigned __int8 *)NonConstMsgData + v3 + 52));
}
