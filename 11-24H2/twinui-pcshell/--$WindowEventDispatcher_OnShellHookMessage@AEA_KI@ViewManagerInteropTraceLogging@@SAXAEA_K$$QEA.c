/*
 * XREFs of ??$WindowEventDispatcher_OnShellHookMessage@AEA_KI@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAI@Z @ 0x18014E364
 * Callers:
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x180249290 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

ULONG __fastcall ViewManagerInteropTraceLogging::WindowEventDispatcher_OnShellHookMessage<unsigned __int64 &,unsigned int>(
        __int64 *a1,
        int *a2)
{
  ULONG result; // eax
  __int64 v5; // rcx
  int v6; // eax
  void (*v7)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v9[3]; // [rsp+34h] [rbp-25h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-19h] BYREF
  __int64 v11; // [rsp+48h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp+7h] BYREF
  void *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  __int64 *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]
  _DWORD *v20; // [rsp+90h] [rbp+37h]
  int v21; // [rsp+98h] [rbp+3Fh]
  int v22; // [rsp+9Ch] [rbp+43h]

  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    qword_1808CB5F0 = 0LL;
    dword_1808CB5FC = 0;
    Context = &qword_1808CB5E8;
    qword_1808CB5E8 = &ShellScreenClippingLogging::`vftable';
    byte_1808CB5F8 = 0;
    qword_1808CB600 = (struct _tlgProvider_t *)&`ViewManagerInteropLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808CB5E8, qword_1808CB600, v7);
    InitOnceComplete(&`ViewManagerInteropLogging::Instance'::`2'::wrapper, 0, &qword_1808CB5E8);
  }
  result = (unsigned int)Context;
  v5 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v6 = *a2;
    v22 = 0;
    v19 = 0;
    EventDescriptor.Keyword = 0LL;
    v9[0] = v6;
    v11 = *a1;
    v20 = v9;
    v17 = &v11;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *(_QWORD *)(v5 + 8);
    v21 = 4;
    v18 = 8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v14 = &unk_1807F7FE0;
    UserData.Reserved = 2;
    v15 = 59;
    v16 = 1;
    v9[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EventWriteTransfer(*(_QWORD *)(v5 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return result;
}
