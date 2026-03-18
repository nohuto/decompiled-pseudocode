/*
 * XREFs of EtwTraceUIPISystemError @ 0x14016A710
 * Callers:
 *     NtUserSystemParametersInfo @ 0x140171AA0 (NtUserSystemParametersInfo.c)
 *     NtUserEnableTouchPad @ 0x1401BA850 (NtUserEnableTouchPad.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14005DCC0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_Dd @ 0x14009782C (WPP_RECORDER_AND_TRACE_SF_Dd.c)
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1400DDBE0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     McTemplateK0nq_EtwWriteTransfer @ 0x14019B810 (McTemplateK0nq_EtwWriteTransfer.c)
 *     Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline @ 0x1401A3DE0 (Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPISystemError(PEPROCESS *a1, const struct tagPROCESSINFO *a2, int a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  _UNKNOWN **result; // rax
  char v10; // di
  char v11; // si
  int v12; // ebx
  __int64 UserSessionState; // rax
  bool v14; // di
  bool v15; // bl
  __int64 v16; // rax
  int v17; // r8d
  int v18; // edx
  _OWORD v19[2]; // [rsp+50h] [rbp-48h] BYREF
  int v20; // [rsp+70h] [rbp-28h]

  v20 = 0;
  memset(v19, 0, sizeof(v19));
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v19,
    7,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nq_EtwWriteTransfer(v6, v5, v7, v8, (__int64)v19);
  result = (_UNKNOWN **)Feature_UIPIAlwaysOn2__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( a1 )
    {
      v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
      result = &WPP_RECORDER_INITIALIZED;
      v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = *((_DWORD *)a1 + 14);
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_Dd(
                              *((_QWORD *)WPP_GLOBAL_Control + 3),
                              v10,
                              v11,
                              *(_QWORD *)(UserSessionState + 69400),
                              3u,
                              8u,
                              0x10u,
                              (__int64)&WPP_2eef1cb2cf433bc9240e3b515d9d6f93_Traceguids,
                              v12,
                              a3);
      }
    }
  }
  else
  {
    v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    result = &WPP_RECORDER_INITIALIZED;
    v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v17) = v15;
      LOBYTE(v18) = v14;
      return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v18,
                            v17,
                            *(_QWORD *)(v16 + 69400),
                            4,
                            8,
                            17,
                            (__int64)&WPP_2eef1cb2cf433bc9240e3b515d9d6f93_Traceguids,
                            (char)a1);
    }
  }
  return result;
}
