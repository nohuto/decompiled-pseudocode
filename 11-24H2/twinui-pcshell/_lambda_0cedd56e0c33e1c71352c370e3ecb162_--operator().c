/*
 * XREFs of _lambda_0cedd56e0c33e1c71352c370e3ecb162_::operator() @ 0x18048E5D0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_21254f52bfb74b477eaa3c26e6f84fb2___::Invoke @ 0x18048F870 (CAsyncCallbackWithLambda__lambda_21254f52bfb74b477eaa3c26e6f84fb2___--Invoke.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@555@Z @ 0x18000A8FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@@-$_tlgWrit.c)
 *     ?Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18048FB74 (-Provider@GazeUITraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_0cedd56e0c33e1c71352c370e3ecb162_::operator()(unsigned int **a1)
{
  unsigned int *v1; // rdx
  __int64 v2; // rcx
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  const char *v7; // [rsp+50h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF

  v1 = *a1;
  v2 = *((_QWORD *)*a1 + 51);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int))(*(_QWORD *)v2 + 64LL))(
      v2,
      v1[112],
      v1[114],
      v1[113],
      v1[115]);
    v3 = GazeUITraceLogging::Provider();
    if ( *(_DWORD *)v3 > 5u )
    {
      v7 = "AccessibilityExperienceManager::NotifyWorkspaceRect";
      v8 = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v3,
        (__int64)&unk_180804F27,
        v4,
        v5,
        (__int64)&v8,
        &v7);
    }
  }
  return 0LL;
}
