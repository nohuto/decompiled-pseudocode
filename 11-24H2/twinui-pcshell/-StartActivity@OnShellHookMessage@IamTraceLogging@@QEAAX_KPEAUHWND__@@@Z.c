/*
 * XREFs of ?StartActivity@OnShellHookMessage@IamTraceLogging@@QEAAX_KPEAUHWND__@@@Z @ 0x1800321C0
 * Callers:
 *     ?OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z @ 0x1800312D0 (-OnShellHookMessage@CApplicationManager@@UEAAJ_K_J@Z.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031110 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Instance@CAppManagerLogging@@KAPEAV1@XZ @ 0x1800327B4 (-Instance@CAppManagerLogging@@KAPEAV1@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::StartActivity(
        IamTraceLogging::OnShellHookMessage *this,
        __int64 a2,
        HWND a3)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbx
  DWORD CurrentThreadId; // eax
  const GUID *v11; // rax
  __int64 v12; // r8
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  WINBOOL fPending; // [rsp+30h] [rbp-89h] BYREF
  __int64 v15; // [rsp+38h] [rbp-81h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-79h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-71h] BYREF
  HWND v18; // [rsp+50h] [rbp-69h] BYREF
  __int64 v19; // [rsp+58h] [rbp-61h] BYREF
  __int64 v20; // [rsp+60h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-39h] BYREF
  void *v23; // [rsp+90h] [rbp-29h]
  int v24; // [rsp+98h] [rbp-21h]
  int v25; // [rsp+9Ch] [rbp-1Dh]
  __int64 *v26; // [rsp+A0h] [rbp-19h]
  __int64 v27; // [rsp+A8h] [rbp-11h]
  PSRWLOCK *p_SRWLock; // [rsp+B0h] [rbp-9h]
  __int64 v29; // [rsp+B8h] [rbp-1h]
  __int64 *v30; // [rsp+C0h] [rbp+7h]
  __int64 v31; // [rsp+C8h] [rbp+Fh]
  HWND *v32; // [rsp+D0h] [rbp+17h]
  __int64 v33; // [rsp+D8h] [rbp+1Fh]

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 35);
  if ( v3 )
  {
    v7 = v3 + 33;
    AcquireSRWLockExclusive(v7);
    v15 = 0LL;
  }
  else
  {
    v7 = 0LL;
    SRWLock = 0LL;
  }
  v8 = *((_QWORD *)this + 34);
  if ( **((_DWORD **)CAppManagerLogging::Instance() + 1) > 5u )
    EventActivityIdControl(3u, (LPGUID)(v8 + 8));
  else
    *(_OWORD *)(v8 + 8) = 0LL;
  *(_DWORD *)v8 = 1;
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  Context = 0LL;
  fPending = 0;
  if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    qword_1808C9200 = 0LL;
    Context = &qword_1808C91F8;
    qword_1808C91F8 = &ShellScreenClippingLogging::`vftable';
    byte_1808C9208 = 0;
    dword_1808C920C = 0;
    qword_1808C9210 = (struct _tlgProvider_t *)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808C91F8, qword_1808C9210, v13);
    InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1808C91F8);
  }
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 5u )
  {
    v18 = a3;
    v19 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v20 = 0LL;
    LODWORD(SRWLock) = CurrentThreadId;
    v11 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    v12 = *((_QWORD *)this + 34);
    v29 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    v33 = 8LL;
    v32 = &v18;
    v31 = 8LL;
    v30 = &v19;
    p_SRWLock = &SRWLock;
    v26 = &v20;
    *(_DWORD *)&EventDescriptor.Level = 261;
    UserData.Ptr = *(_QWORD *)(v9 + 8);
    v27 = 8LL;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v23 = &unk_1807E0270;
    UserData.Reserved = 2;
    v24 = 78;
    v25 = 1;
    LODWORD(v15) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(*(_QWORD *)(v9 + 32), &EventDescriptor, (LPCGUID)(v12 + 8), v11, 6u, &UserData);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((IamTraceLogging::OnShellHookMessage *)((char *)this + 288));
}
