/*
 * XREFs of _anonymous_namespace_::ValidateUIPI @ 0x14021ED84
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14005E1E8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z @ 0x140141044 (-CanAccessMouseOwner@CMouseProcessor@@QEBA_NUtagUIPI_INFO@@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x14018FBDC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x14021D248 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     EtwTraceUIPIInputError @ 0x1400256B0 (EtwTraceUIPIInputError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1400E39B0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A5A58 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 */

char __fastcall anonymous_namespace_::ValidateUIPI(UIPrivilegeIsolation *this, CInputDest *a2)
{
  __int64 PtiFromInputDest; // rax
  __int64 v5; // rsi
  __int64 v7; // rcx
  char v8; // bp
  __int64 v9; // rdi
  int v10; // ebx
  struct tagTHREADINFO *v11; // rax
  char v12; // bl
  bool v13; // di
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  int v18; // [rsp+48h] [rbp-20h]
  __int64 v19; // [rsp+78h] [rbp+10h]

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 183);
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 2);
  v5 = PtiFromInputDest;
  if ( !PtiFromInputDest )
    return 1;
  v8 = UIPrivilegeIsolation::CheckAccessEx(
         this,
         (const struct tagUIPI_INFO *)(*(_QWORD *)(PtiFromInputDest + 464) + 872LL),
         0LL);
  if ( !v8 )
  {
    v9 = *(_QWORD *)(v5 + 472);
    v10 = *(_DWORD *)(v9 + 480);
    v19 = *(_QWORD *)(v9 + 472);
    v11 = PtiCurrent(v7);
    v18 = v10;
    v12 = 1;
    v17 = v19;
    EtwTraceUIPIInputError((__int64)v11, v5, v9, &v17, 1);
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 3u )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v15) = v13;
      LOBYTE(v16) = v12;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v16,
        v15,
        *(_QWORD *)(UserSessionState + 69400),
        3,
        6,
        10,
        (__int64)&WPP_f61ee55f31d8345b2339769354926a3f_Traceguids);
    }
  }
  return v8;
}
