/*
 * XREFs of EtwTraceUIPIClipboardError @ 0x1401B52B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1400DDBE0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1400E67B0 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     McTemplateK0nqqq_EtwWriteTransfer @ 0x140126EAC (McTemplateK0nqqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIClipboardError(PEPROCESS *a1, const struct tagPROCESSINFO *a2, int a3, _DWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char v10; // bl
  _UNKNOWN **result; // rax
  char v12; // di
  __int64 UserSessionState; // rax
  _OWORD v14[2]; // [rsp+60h] [rbp-48h] BYREF
  int v15; // [rsp+80h] [rbp-28h]

  memset(v14, 0, sizeof(v14));
  v15 = 0;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v14,
    6,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqqq_EtwWriteTransfer(v7, &UIPIClipboardEvent, v8, v9, (__int64)v14, a3, *a4, a4[1]);
  v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qDD(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v10,
                          v12,
                          *(_QWORD *)(UserSessionState + 69400),
                          4u,
                          0xEu,
                          0xFu,
                          (__int64)&WPP_2eef1cb2cf433bc9240e3b515d9d6f93_Traceguids,
                          a2,
                          a3,
                          *a4);
  }
  return result;
}
