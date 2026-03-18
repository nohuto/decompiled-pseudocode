/*
 * XREFs of EtwTraceUIPIMsgError @ 0x1C00764A0
 * Callers:
 *     <none>
 * Callees:
 *     ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C0074858 (-EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDDD @ 0x1C00763A8 (WPP_RECORDER_AND_TRACE_SF_qqDDD.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     McTemplateK0nqxx_EtwWriteTransfer @ 0x1C013C9D0 (McTemplateK0nqxx_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceUIPIMsgError(PEPROCESS *a1, PEPROCESS *a2, char a3, char a4, __int64 a5)
{
  char v6; // bl
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r9
  _UNKNOWN **result; // rax
  int v13; // [rsp+20h] [rbp-A8h]
  int v14; // [rsp+28h] [rbp-A0h]
  int v15; // [rsp+30h] [rbp-98h]
  int v16; // [rsp+38h] [rbp-90h]
  _OWORD v17[2]; // [rsp+70h] [rbp-58h] BYREF
  int v18; // [rsp+90h] [rbp-38h]

  memset(v17, 0, sizeof(v17));
  v18 = 0;
  v6 = 1;
  EtwpSetTraceHeader(
    (struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *)v17,
    1,
    0LL,
    a1,
    0LL,
    a2);
  if ( (Microsoft_Windows_Win32kEnableBits & 4) != 0 )
    McTemplateK0nqxx_EtwWriteTransfer(v9, v8, v10, v11, (__int64)v17, a3, a4, a5);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_AND_TRACE_SF_qqDDD(
             (__int64)WPP_GLOBAL_Control->AttachedDevice,
             v6,
             WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
             v11,
             v13,
             v14,
             v15,
             v16);
  return result;
}
