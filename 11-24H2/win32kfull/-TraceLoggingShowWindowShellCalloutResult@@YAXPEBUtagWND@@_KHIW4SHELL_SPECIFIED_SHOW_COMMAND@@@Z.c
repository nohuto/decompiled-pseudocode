/*
 * XREFs of ?TraceLoggingShowWindowShellCalloutResult@@YAXPEBUtagWND@@_KHIW4SHELL_SPECIFIED_SHOW_COMMAND@@@Z @ 0x1402B6814
 * Callers:
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1402C1964 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapSz@D@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapSz@D@@334@Z @ 0x140004574 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapSz@D@@U1@U1@U2@@-.c)
 *     _tlgKeywordOn @ 0x14017A844 (_tlgKeywordOn.c)
 */

char __fastcall TraceLoggingShowWindowShellCalloutResult(int *a1, __int64 a2, int a3, int a4, int a5)
{
  PEPROCESS *v9; // rdi
  char result; // al
  PEPROCESS v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // [rsp+7Ch] [rbp+13h] BYREF
  int v16; // [rsp+80h] [rbp+17h] BYREF
  int v17; // [rsp+84h] [rbp+1Bh] BYREF
  int v18; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+90h] [rbp+27h]
  __int64 ProcessImageFileName; // [rsp+98h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+A0h] [rbp+37h] BYREF

  v9 = *(PEPROCESS **)(*((_QWORD *)a1 + 2) + 464LL);
  result = (unsigned __int8)PsGetProcessId(*v9);
  if ( (unsigned int)dword_140398BB8 > 5 )
  {
    result = tlgKeywordOn((__int64)&dword_140398BB8, 0x400000000000LL);
    if ( result )
    {
      v11 = *v9;
      v19 = 0x1000000LL;
      v16 = a4;
      ProcessImageFileName = PsGetProcessImageFileName(v11);
      v15 = a5;
      v18 = *a1;
      v17 = a3;
      v21 = a2;
      return _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
               v12,
               (__int64)&unk_14036764A,
               v13,
               v14,
               (__int64)&v18,
               (__int64)&v21,
               (__int64)&v17,
               (__int64)&v16,
               (__int64)&v15,
               &ProcessImageFileName);
    }
  }
  return result;
}
