/*
 * XREFs of ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800128E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180012F68 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ?LogInitialMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18007ECDC (-LogInitialMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800843FC (-LogInitialMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180085704 (-LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180097BEC (-LogMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180097E08 (-LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ??1Completer@?$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ @ 0x180098D6C (--1Completer@-$static_lazy@VRawInputProvidersContinuousTracing@@@details@wil@@QEAA@XZ.c)
 *     ?LogMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180099B9C (-LogMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18009A970 (-LogInitialMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     atexit @ 0x18009CD84 (atexit.c)
 *     ?LogInitialMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C7030 (-LogInitialMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C718C (-LogInitialMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogInitialMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C72E8 (-LogInitialMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C7444 (-LogMPCHandInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C7824 (-LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z.c)
 *     ?ReportPerf@MPCPerfCounter@@AEAAX_K@Z @ 0x1800C982C (-ReportPerf@MPCPerfCounter@@AEAAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputProviderBase::OnInputReport(MPCInputProviderBase *this, struct InputInfo *a2)
{
  int v4; // esi
  bool v5; // r12
  struct MPCHolographicInputManager *Instance; // rbx
  char *v7; // r15
  int v8; // r14d
  __int64 v9; // rbx
  char v10; // al
  BOOL inited; // eax
  void *v12; // r8
  _DWORD *v13; // rcx
  __int64 v14; // rax
  char *v15; // rcx
  int v16; // eax
  const char *v17; // r9
  wil::details::in1diag3 *v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  _DWORD *v21; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  union _RTL_RUN_ONCE *v26; // [rsp+20h] [rbp-10h] BYREF
  int v27; // [rsp+28h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  bool v29; // [rsp+70h] [rbp+40h] BYREF
  __int64 fPending; // [rsp+78h] [rbp+48h] BYREF
  LPVOID Context; // [rsp+80h] [rbp+50h] BYREF

  v4 = 0;
  if ( !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3364)
    || (v5 = 1, !*((_QWORD *)MPCHolographicInputManager::GetInstance() + 418)) )
  {
    v5 = 0;
  }
  v29 = v5;
  Instance = MPCHolographicInputManager::GetInstance();
  v7 = (char *)this + 24;
  v8 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 56LL))((char *)this + 24);
  v9 = **((_QWORD **)Instance + 450);
  fPending = v9;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9) )
      v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 56LL))(v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v8 == v4 )
      goto LABEL_8;
  }
  if ( (*(unsigned int (__fastcall **)(char *))(*(_QWORD *)v7 + 48LL))((char *)this + 24) != 0x40000 )
LABEL_8:
    v10 = 1;
  else
    v10 = 0;
  *((_BYTE *)this + 3572) = v10;
  Context = 0LL;
  LODWORD(fPending) = 0;
  inited = __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context);
  v12 = &`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
  if ( inited && (_DWORD)fPending )
  {
    v26 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180247638;
    qword_180247640 = 0LL;
    byte_180247648 = 0;
    dword_18024764C = 0;
    qword_180247638 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180247650 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v27 = 0;
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v26);
  }
  v13 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v13 && *v13 )
  {
    Context = 0LL;
    LODWORD(fPending) = 0;
    if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
      && (_DWORD)fPending )
    {
      v26 = &`ISMTracing::Instance'::`2'::wrapper;
      Context = &qword_180247638;
      qword_180247640 = 0LL;
      byte_180247648 = 0;
      dword_18024764C = 0;
      qword_180247638 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
      qword_180247650 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      v27 = 0;
      wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v26);
    }
    if ( ISMTracing::IsVerboseEnabled(v25) )
    {
      if ( (*(_DWORD *)a2 & 0x200) != 0 )
      {
        ISMTracing::LogInitialMPCHandInputReport(a2, (const bool *)this + 3572);
      }
      else if ( (*(_DWORD *)a2 & 0x40000) != 0 )
      {
        ISMTracing::LogInitialMPCVoiceInputReport(a2, (const bool *)this + 3572);
      }
      else if ( (*(_DWORD *)a2 & 0x400) != 0 )
      {
        ISMTracing::LogInitialMPCClickerInputReport(a2, (const bool *)this + 3572);
      }
      else if ( (*(_DWORD *)a2 & 0x2000) != 0 )
      {
        ISMTracing::LogInitialMPCSpatialControllerInputReport(a2, (const bool *)this + 3572);
      }
      else if ( (*(_BYTE *)a2 & 2) != 0 )
      {
        ISMTracing::LogInitialMPCMouseInputReport(a2, (const bool *)this + 3572);
      }
      else if ( (*(_BYTE *)a2 & 0x40) != 0 )
      {
        ISMTracing::LogInitialMPCGameControllerInputReport(a2, (const bool *)this + 3572);
      }
    }
  }
  v14 = *(_QWORD *)v7;
  v15 = (char *)this + 24;
  if ( !v5 )
  {
    v16 = (*(__int64 (__fastcall **)(char *, struct InputInfo *, void *))(v14 + 288))(v15, a2, v12);
    v18 = retaddr;
    if ( v16 >= 0 )
      goto LABEL_16;
    v23 = 231LL;
    goto LABEL_29;
  }
  v16 = (*(__int64 (__fastcall **)(char *, struct InputInfo *, void *))(v14 + 280))(v15, a2, v12);
  v18 = retaddr;
  if ( v16 < 0 )
  {
    v23 = 226LL;
LABEL_29:
    wil::details::in1diag3::_Log_Hr(
      v18,
      (void *)v23,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcinputproviderbase.cpp",
      (const char *)(unsigned int)v16,
      (int)v26);
  }
LABEL_16:
  v19 = *((_QWORD *)a2 + 2);
  if ( !*((_QWORD *)this + 450) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x46,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcperfcounter.cpp",
      v17);
  v20 = *((_QWORD *)this + 451);
  if ( !v20 )
  {
    *((_QWORD *)this + 451) = v19;
    v20 = v19;
  }
  ++*((_QWORD *)this + 452);
  if ( v19 - v20 > *((_QWORD *)this + 450) )
    MPCPerfCounter::ReportPerf((MPCInputProviderBase *)((char *)this + 3576), v19);
  Context = 0LL;
  LODWORD(fPending) = 0;
  if ( __std_init_once_begin_initialize(&`ISMTracing::Instance'::`2'::wrapper, 0, (PBOOL)&fPending, &Context)
    && (_DWORD)fPending )
  {
    v26 = &`ISMTracing::Instance'::`2'::wrapper;
    Context = &qword_180247638;
    qword_180247640 = 0LL;
    byte_180247648 = 0;
    dword_18024764C = 0;
    qword_180247638 = (__int64)&RawInputProvidersContinuousTracing::`vftable';
    qword_180247650 = (__int64)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    v27 = 0;
    wil::details::static_lazy<RawInputProvidersContinuousTracing>::Completer::~Completer(&v26);
  }
  v21 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v21 )
  {
    if ( *v21 )
    {
      ISMTracing::Instance();
      if ( ISMTracing::IsVerboseEnabled(v24) )
      {
        if ( (*(_DWORD *)a2 & 0x200) != 0 )
        {
          ISMTracing::LogMPCHandInputReport(a2, &v29);
        }
        else if ( (*(_DWORD *)a2 & 0x40000) != 0 )
        {
          ISMTracing::LogMPCVoiceInputReport(a2, &v29);
        }
        else if ( (*(_DWORD *)a2 & 0x400) != 0 )
        {
          ISMTracing::LogMPCClickerInputReport(a2, &v29);
        }
        else if ( (*(_DWORD *)a2 & 0x2000) != 0 )
        {
          ISMTracing::LogMPCSpatialControllerInputReport(a2, &v29);
        }
        else if ( (*(_BYTE *)a2 & 2) != 0 )
        {
          ISMTracing::LogMPCMouseInputReport(a2, &v29);
        }
        else if ( (*(_BYTE *)a2 & 0x40) != 0 )
        {
          ISMTracing::LogMPCGameControllerInputReport(a2, &v29);
        }
      }
    }
  }
  return 0LL;
}
