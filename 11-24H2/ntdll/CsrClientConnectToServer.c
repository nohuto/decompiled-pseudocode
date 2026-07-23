/*
 * XREFs of CsrClientConnectToServer @ 0x180023B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateTagHeap @ 0x180022EE0 (RtlCreateTagHeap.c)
 *     CsrpClientConnectToServer @ 0x180023D80 (CsrpClientConnectToServer.c)
 *     CsrpConnectToServer @ 0x1800243D4 (CsrpConnectToServer.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800319F0 (LdrGetProcedureAddressForCaller.c)
 *     LdrGetDllHandleEx @ 0x180037360 (LdrGetDllHandleEx.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 */

NTSTATUS __fastcall CsrClientConnectToServer(void *Src, unsigned int a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  char v9; // al
  NTSTATUS result; // eax
  struct _PEB *v11; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-28h] BYREF
  PVOID DllHandle; // [rsp+38h] [rbp-20h] BYREF
  PVOID *Callback; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  DllHandle = 0LL;
  OutHeaders = 0LL;
  LODWORD(v15) = -1073741823;
  if ( a3 && !a4 )
    return -1073741811;
  if ( !CsrInitOnceDone )
  {
    v11 = NtCurrentPeb();
    CsrInitOnceDone = 1;
    CsrHeap = v11->ProcessHeap;
  }
  if ( CsrServerApiRoutine && !CsrClientProcess )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0;
  }
  RtlImageNtHeaderEx(3u, NtCurrentPeb()->ImageBaseAddress, 0LL, &OutHeaders);
  if ( OutHeaders->OptionalHeader.Subsystem == 1 )
  {
    v9 = CsrClientProcess;
  }
  else
  {
    v9 = 1;
    CsrClientProcess = 1;
  }
  if ( !v9 )
  {
    result = LdrGetDllHandleEx(1u, 0LL, 0LL, (PUNICODE_STRING)&DllName, &DllHandle);
    if ( result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(
               DllHandle,
               (PANSI_STRING)&ProcedureName,
               0,
               &CsrServerApiRoutine,
               0,
               Callback);
    if ( result < 0 )
      return result;
    CsrPortHeap = NtCurrentPeb()->ProcessHeap;
    CsrPortBaseTag = RtlCreateTagHeap(CsrPortHeap, 0, (PWSTR)L"CSRPORT!", (PWSTR)L"CAPTURE");
    goto LABEL_23;
  }
  result = 0;
  if ( a3 )
  {
    if ( CsrPortHandle )
      goto LABEL_11;
    result = CsrpConnectToServer(Src, (__int64)&v15);
    if ( result < 0 )
      return result;
    if ( (int)v15 < 0 )
LABEL_11:
      result = CsrpClientConnectToServer(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
