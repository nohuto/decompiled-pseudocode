/*
 * XREFs of CsrClientConnectToServer @ 0x1800A67A0
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x180004FF0 (LdrGetProcedureAddressForCaller.c)
 *     LdrGetDllHandleEx @ 0x18000A960 (LdrGetDllHandleEx.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     RtlCreateTagHeap @ 0x1800A5370 (RtlCreateTagHeap.c)
 *     CsrpClientConnectToServer @ 0x1800A6990 (CsrpClientConnectToServer.c)
 *     CsrpConnectToServer @ 0x1800A7080 (CsrpConnectToServer.c)
 */

__int64 __fastcall CsrClientConnectToServer(void *Src, unsigned int a2, __int64 a3, unsigned int a4, _BYTE *a5)
{
  char v9; // al
  __int64 result; // rax
  struct _PEB *v11; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v13[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v13[0] = 0LL;
  v12 = 0LL;
  LODWORD(v15) = -1073741823;
  if ( a3 && !a4 )
    return 3221225485LL;
  if ( !CsrInitOnceDone )
  {
    v11 = NtCurrentPeb();
    CsrInitOnceDone = 1;
    CsrHeap = (__int64)v11->ProcessHeap;
  }
  if ( CsrServerApiRoutine && !CsrClientProcess )
  {
LABEL_23:
    if ( a5 )
      *a5 = 1;
    return 0LL;
  }
  RtlImageNtHeaderEx(3, (unsigned __int64)NtCurrentPeb()->ImageBaseAddress, 0LL, &v12);
  if ( *(_WORD *)(v12 + 92) == 1 )
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
    result = LdrGetDllHandleEx(1, 0LL, 0LL, (__int64)&unk_180173B70, v13);
    if ( (int)result < 0 )
      return result;
    result = LdrGetProcedureAddressForCaller(
               v13[0],
               &qword_180173B80,
               0,
               (unsigned __int64 *)&CsrServerApiRoutine,
               0,
               retaddr);
    if ( (int)result < 0 )
      return result;
    CsrPortHeap = (__int64)NtCurrentPeb()->ProcessHeap;
    CsrPortBaseTag = RtlCreateTagHeap((void *)CsrPortHeap, 0, (__int64)L"CSRPORT!", L"CAPTURE");
    goto LABEL_23;
  }
  result = 0LL;
  if ( a3 )
  {
    if ( CsrPortHandle )
      goto LABEL_11;
    result = CsrpConnectToServer(Src, (__int64)&v15);
    if ( (int)result < 0 )
      return result;
    if ( (int)v15 < 0 )
LABEL_11:
      result = CsrpClientConnectToServer(a2, a3, a4);
  }
  if ( a5 )
    *a5 = 0;
  return result;
}
