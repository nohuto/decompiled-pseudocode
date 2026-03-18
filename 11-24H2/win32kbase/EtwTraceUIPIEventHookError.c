/*
 * XREFs of EtwTraceUIPIEventHookError @ 0x1400DDA80
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1400DDBE0 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDqq @ 0x14019C388 (WPP_RECORDER_AND_TRACE_SF_qqDqq.c)
 *     McTemplateK0nqxqqddq_EtwWriteTransfer @ 0x1401B5788 (McTemplateK0nqxqqddq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIEventHookError(__int64 a1, struct tagTHREADINFO *a2, const struct tagTHREADINFO *a3)
{
  char v3; // r12
  char v4; // r15
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  bool v10; // bp
  _UNKNOWN **result; // rax
  bool v12; // r14
  int v13; // ebx
  __int64 v14; // rdi
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx
  int v18; // [rsp+20h] [rbp-B8h]
  int v19; // [rsp+28h] [rbp-B0h]
  int v20; // [rsp+30h] [rbp-A8h]
  int v21; // [rsp+38h] [rbp-A0h]
  _OWORD v22[2]; // [rsp+70h] [rbp-68h] BYREF
  int v23; // [rsp+90h] [rbp-48h]

  v3 = (char)a3;
  memset(v22, 0, sizeof(v22));
  v4 = (char)a2;
  v23 = 0;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v22,
    3u,
    a2,
    0LL,
    a3,
    0LL);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqxqqddq_EtwWriteTransfer(
      v7,
      v6,
      v8,
      v9,
      (__int64)v22,
      *(_DWORD *)(a1 + 28),
      *(_QWORD *)(a1 + 32),
      *(_DWORD *)(a1 + 40),
      *(_DWORD *)(a1 + 44),
      *(_DWORD *)(a1 + 48),
      *(_DWORD *)(a1 + 52),
      *(_DWORD *)(a1 + 56));
  v10 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(_DWORD *)(a1 + 56);
    v14 = *(_QWORD *)(a1 + 16);
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v16) = v12;
    LOBYTE(v17) = v10;
    return (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_qqDqq(
                          *((_QWORD *)WPP_GLOBAL_Control + 3),
                          v17,
                          v16,
                          *(_QWORD *)(UserSessionState + 69400),
                          v18,
                          v19,
                          v20,
                          v21,
                          a1,
                          v14,
                          v13,
                          v4,
                          v3);
  }
  return result;
}
