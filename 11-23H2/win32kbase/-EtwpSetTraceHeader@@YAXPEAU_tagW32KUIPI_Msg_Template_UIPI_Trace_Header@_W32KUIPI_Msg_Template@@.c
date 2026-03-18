/*
 * XREFs of ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1C0074858
 * Callers:
 *     EtwTraceUIPIInputError @ 0x1C0074560 (EtwTraceUIPIInputError.c)
 *     EtwTraceUIPISystemError @ 0x1C0074670 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C007476C (EtwTraceUIPIHandleValidationError.c)
 *     EtwTraceUIPIMsgError @ 0x1C00764A0 (EtwTraceUIPIMsgError.c)
 *     EtwTraceUIPIClipboardError @ 0x1C013B860 (EtwTraceUIPIClipboardError.c)
 *     EtwTraceUIPIEventHookError @ 0x1C013B9A0 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPIHookError @ 0x1C013BAD0 (EtwTraceUIPIHookError.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpSetTraceHeader(
        struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *a1,
        int a2,
        PETHREAD *a3,
        PEPROCESS *a4,
        PETHREAD *a5,
        PEPROCESS *a6)
{
  *(_DWORD *)a1 = a2;
  if ( a3 )
  {
    *((_DWORD *)a1 + 2) = (unsigned int)PsGetThreadId(*a3);
    a4 = (PEPROCESS *)a3[53];
  }
  if ( a4 )
  {
    *((_DWORD *)a1 + 1) = (unsigned int)PsGetProcessId(*a4);
    *((_DWORD *)a1 + 3) = *((_DWORD *)a4 + 224);
    *((_DWORD *)a1 + 4) = *((_DWORD *)a4 + 225);
  }
  if ( a5 )
  {
    *((_DWORD *)a1 + 6) = (unsigned int)PsGetThreadId(*a5);
    a6 = (PEPROCESS *)a5[53];
  }
  if ( a6 )
  {
    *((_DWORD *)a1 + 5) = (unsigned int)PsGetProcessId(*a6);
    *((_DWORD *)a1 + 7) = *((_DWORD *)a6 + 224);
    *((_DWORD *)a1 + 8) = *((_DWORD *)a6 + 225);
  }
}
