/*
 * XREFs of ?StopActivity@OnShellHookMessage@IamTraceLogging@@MEAAXXZ @ 0x180123660
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x180083248 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456445@Z @ 0x180214918 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U_ea_180214918.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C8224 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

void __fastcall IamTraceLogging::OnShellHookMessage::StopActivity(IamTraceLogging::OnShellHookMessage *this)
{
  __int64 v1; // rdi
  int v3; // eax
  RTL_SRWLOCK *v4; // rbx
  RTL_SRWLOCK *v5; // rbx
  __int64 v6; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  int v9; // r9d
  _DWORD *v10; // rcx
  __int64 **v11; // rbx
  __int64 v12; // rax
  void (*v13)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  void (*v14)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v15; // rdi
  RTL_SRWLOCK *v16; // rbx
  RTL_SRWLOCK *v17; // rbx
  __int64 v18; // r8
  int UserDataCount; // [rsp+20h] [rbp-120h]
  WINBOOL fPending; // [rsp+C0h] [rbp-80h] BYREF
  LPVOID Context; // [rsp+C8h] [rbp-78h] BYREF
  unsigned int v22; // [rsp+D0h] [rbp-70h] BYREF
  int v23; // [rsp+D4h] [rbp-6Ch] BYREF
  __int64 v24; // [rsp+D8h] [rbp-68h] BYREF
  PSRWLOCK SRWLock; // [rsp+E0h] [rbp-60h] BYREF
  int v26; // [rsp+E8h] [rbp-58h] BYREF
  int v27; // [rsp+ECh] [rbp-54h] BYREF
  int v28; // [rsp+F0h] [rbp-50h] BYREF
  int v29; // [rsp+F4h] [rbp-4Ch] BYREF
  int v30; // [rsp+F8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+100h] [rbp-40h] BYREF
  __int64 v32; // [rsp+110h] [rbp-30h] BYREF
  __int64 v33; // [rsp+118h] [rbp-28h] BYREF
  __int64 v34; // [rsp+120h] [rbp-20h] BYREF
  __int64 v35; // [rsp+128h] [rbp-18h] BYREF
  __int64 v36; // [rsp+130h] [rbp-10h] BYREF
  __int64 v37; // [rsp+138h] [rbp-8h] BYREF
  __int64 v38; // [rsp+140h] [rbp+0h] BYREF
  __int64 v39; // [rsp+148h] [rbp+8h] BYREF
  __int64 v40; // [rsp+150h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+160h] [rbp+20h] BYREF
  void *v42; // [rsp+170h] [rbp+30h]
  int v43; // [rsp+178h] [rbp+38h]
  int v44; // [rsp+17Ch] [rbp+3Ch]
  PSRWLOCK *p_SRWLock; // [rsp+180h] [rbp+40h]
  __int64 v46; // [rsp+188h] [rbp+48h]
  int *v47; // [rsp+190h] [rbp+50h]
  __int64 v48; // [rsp+198h] [rbp+58h]
  __int64 *v49; // [rsp+1A0h] [rbp+60h]
  __int64 v50; // [rsp+1A8h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+98h]

  v1 = *((_QWORD *)this + 34);
  v3 = *(_DWORD *)(v1 + 72);
  if ( v3 < 0 && v3 == *(_DWORD *)(v1 + 88) && (v15 = v1 + 80) != 0 )
  {
    v16 = (RTL_SRWLOCK *)*((_QWORD *)this + 35);
    if ( v16 )
    {
      v17 = v16 + 33;
      AcquireSRWLockExclusive(v17);
      Context = 0LL;
    }
    else
    {
      v17 = 0LL;
      v24 = 0LL;
    }
    **((_DWORD **)this + 34) = 2;
    if ( v17 )
      ReleaseSRWLockExclusive(v17);
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
    v10 = (_DWORD *)*((_QWORD *)Context + 1);
    if ( *v10 > 5u )
    {
      v32 = *(_QWORD *)(v15 + 48);
      v26 = *(_DWORD *)(v15 + 68);
      v27 = *(_DWORD *)(v15 + 16);
      v33 = *(_QWORD *)(v15 + 120);
      v34 = *(_QWORD *)(v15 + 112);
      v18 = *((_QWORD *)this + 34);
      v28 = *(_DWORD *)(v15 + 104);
      v35 = *(_QWORD *)(v15 + 96);
      v36 = *(_QWORD *)(v15 + 88);
      v29 = *(_DWORD *)(v15 + 80);
      v37 = *(_QWORD *)(v15 + 72);
      v30 = *(_DWORD *)(v15 + 32);
      v38 = *(_QWORD *)(v15 + 24);
      v22 = *(_DWORD *)v15;
      v39 = *(_QWORD *)(v15 + 128);
      v23 = *(_DWORD *)(v15 + 64);
      v40 = *(_QWORD *)(v15 + 56);
      LODWORD(v24) = *(_DWORD *)(v15 + 8);
      *(_QWORD *)&EventDescriptor.Id = 0x1000000LL;
      SRWLock = 0LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        (_DWORD)v10,
        (unsigned int)&unk_1807E1007,
        v18 + 8,
        v9,
        (__int64)&SRWLock,
        (__int64)&EventDescriptor,
        (__int64)&v24,
        (__int64)&v40,
        (__int64)&v23,
        (__int64)&v39,
        (__int64)&v22,
        (__int64)&v38,
        (__int64)&v30,
        (__int64)&v37,
        (__int64)&v29,
        (__int64)&v36,
        (__int64)&v35,
        (__int64)&v28,
        (__int64)&v34,
        (__int64)&v33,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v32);
    }
  }
  else
  {
    v4 = (RTL_SRWLOCK *)*((_QWORD *)this + 35);
    if ( v4 )
    {
      v5 = v4 + 33;
      AcquireSRWLockExclusive(v5);
      SRWLock = 0LL;
    }
    else
    {
      v5 = 0LL;
      *(_QWORD *)&EventDescriptor.Id = 0LL;
    }
    **((_DWORD **)this + 34) = 2;
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
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
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1808C91F8, qword_1808C9210, v14);
      InitOnceComplete(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &qword_1808C91F8);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 5u )
    {
      CurrentThreadId = GetCurrentThreadId();
      v8 = *((_QWORD *)this + 34);
      LODWORD(v24) = CurrentThreadId;
      v50 = 4LL;
      v48 = 4LL;
      v23 = *(_DWORD *)(v8 + 72);
      SRWLock = 0LL;
      v49 = &v24;
      v47 = &v23;
      p_SRWLock = &SRWLock;
      *(_DWORD *)&EventDescriptor.Level = 517;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      v46 = 8LL;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 0LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v42 = &unk_1807E115F;
      UserData.Reserved = 2;
      v43 = 71;
      v44 = 1;
      v22 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v6 + 32), &EventDescriptor, (LPCGUID)(v8 + 8), 0LL, 5u, &UserData);
    }
  }
  if ( *((_DWORD *)this + 78) )
  {
    v11 = (__int64 **)((char *)this + 288);
    if ( *((_DWORD *)this + 78) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3BE,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        UserDataCount);
    *((_DWORD *)this + 78) = 0;
    while ( 1 )
    {
      v12 = **v11;
      if ( !v12 )
        break;
      if ( (__int64 **)v12 == v11 )
      {
        **v11 = *((_QWORD *)this + 38);
        break;
      }
      *v11 = (__int64 *)(v12 + 16);
    }
    *v11 = 0LL;
  }
}
