/*
 * XREFs of ?EtwpSetTraceHeader@@YAXPEAU_tagW32KUIPI_Msg_Template_UIPI_Trace_Header@_W32KUIPI_Msg_Template@@KPEAUtagTHREADINFO@@PEBUtagPROCESSINFO@@PEBU3@2@Z @ 0x1400DDBE0
 * Callers:
 *     EtwTraceUIPIEventHookError @ 0x1400DDA80 (EtwTraceUIPIEventHookError.c)
 *     EtwTraceUIPISystemError @ 0x14016A710 (EtwTraceUIPISystemError.c)
 *     EtwTraceUIPIClipboardError @ 0x1401B52B0 (EtwTraceUIPIClipboardError.c)
 * Callees:
 *     <none>
 */

void __fastcall EtwpSetTraceHeader(
        struct _W32KUIPI_Msg_Template::_tagW32KUIPI_Msg_Template_UIPI_Trace_Header *a1,
        int a2,
        PETHREAD *a3,
        PEPROCESS *a4,
        PETHREAD *a5,
        const struct tagPROCESSINFO *a6)
{
  const struct tagPROCESSINFO *v9; // rdi

  *(_DWORD *)a1 = a2;
  if ( a3 )
  {
    *((_DWORD *)a1 + 2) = (unsigned int)PsGetThreadId(*a3);
    a4 = (PEPROCESS *)a3[58];
  }
  if ( a4 )
  {
    *((_DWORD *)a1 + 1) = (unsigned int)PsGetProcessId(*a4);
    *((_DWORD *)a1 + 3) = *((_DWORD *)a4 + 218);
    *((_DWORD *)a1 + 4) = *((_DWORD *)a4 + 219);
  }
  if ( a5 )
  {
    *((_DWORD *)a1 + 6) = (unsigned int)PsGetThreadId(*a5);
    v9 = a5[58];
  }
  else
  {
    v9 = a6;
  }
  if ( v9 )
  {
    *((_DWORD *)a1 + 5) = (unsigned int)PsGetProcessId(*(PEPROCESS *)v9);
    *((_DWORD *)a1 + 7) = *((_DWORD *)v9 + 218);
    *((_DWORD *)a1 + 8) = *((_DWORD *)v9 + 219);
  }
}
