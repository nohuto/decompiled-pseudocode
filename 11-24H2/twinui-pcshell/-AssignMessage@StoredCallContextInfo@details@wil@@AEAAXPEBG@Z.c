/*
 * XREFs of ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x18013B008
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::Invoke @ 0x180030DB0 (CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___--Invoke.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18013AF5C (-ContinueOnCurrentThread@-$ActivityBase@VMeetAndChatTelemetryLogging@@$00$0EAAAAAAAAAAA@$04$0CAA.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x1802D24B6 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

void __fastcall wil::details::StoredCallContextInfo::AssignMessage(
        wil::details::StoredCallContextInfo *this,
        const unsigned __int16 *a2)
{
  __int64 v2; // rax
  SIZE_T v5; // rbx
  HANDLE ProcessHeap; // rax
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  if ( v2 )
  {
    v5 = 2 * v2 + 2;
    ProcessHeap = GetProcessHeap();
    v7 = HeapAlloc(ProcessHeap, 0, v5);
    *((_QWORD *)this + 2) = v7;
    if ( v7 )
    {
      *((_BYTE *)this + 24) = 1;
      if ( v5 )
      {
        if ( a2 )
        {
          memcpy_0(v7, a2, v5);
        }
        else
        {
          memset_0(v7, 0, v5);
          *(_DWORD *)_o__errno(v9, v8) = 22;
          invalid_parameter_noinfo();
        }
      }
    }
  }
}
