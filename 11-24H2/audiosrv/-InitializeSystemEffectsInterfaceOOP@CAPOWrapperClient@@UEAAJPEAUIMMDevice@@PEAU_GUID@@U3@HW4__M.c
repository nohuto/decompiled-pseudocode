/*
 * XREFs of ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180024B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     atexit @ 0x1800A424C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x1800AAB3C (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOWrapperClient::InitializeSystemEffectsInterfaceOOP(
        CAPOWrapperClient *this,
        struct IMMDevice *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v12; // eax
  unsigned int v13; // edi
  __int64 (__fastcall *v14)(__int64, LPVOID, struct _GUID *, __int128 *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, bool, char *); // rax
  __int64 v15; // rcx
  int v16; // eax
  void *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  LPVOID pv; // [rsp+50h] [rbp-B0h] BYREF
  WINBOOL fPending; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+70h] [rbp-90h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  Context = 0LL;
  fPending = 0;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    *(_QWORD *)&v25 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
    Context = &qword_1801DB900;
    qword_1801DB900 = (__int64)&AudioSrvTelemetryProvider::`vftable';
    qword_1801DB908 = 0LL;
    byte_1801DB910 = 0;
    dword_1801DB914 = 0;
    qword_1801DB918 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    DWORD2(v25) = 0;
    wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v25);
  }
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)Context + 1),
    "SystemEffect_Initialize",
    (const char *const)this + 132);
  if ( !a2 )
  {
    v19 = 129LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)0x80070057LL);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return 2147942487LL;
  }
  if ( !*((_QWORD *)this + 11) )
  {
    v19 = 130LL;
    goto LABEL_16;
  }
  lpVtbl = a2->lpVtbl;
  pv = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))lpVtbl->GetId)(a2, &pv);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)(unsigned int)v12);
    v18 = pv;
    if ( !pv )
      goto LABEL_14;
    goto LABEL_13;
  }
  v14 = *(__int64 (__fastcall **)(__int64, LPVOID, struct _GUID *, __int128 *, int, enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001, bool, char *))(**((_QWORD **)this + 11) + 32LL);
  v15 = *((_QWORD *)this + 11);
  v25 = (__int128)*a4;
  v16 = v14(v15, pv, a3, &v25, a5, a6, a7 != 0LL, (char *)this + 104);
  v13 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)(unsigned int)v16);
    v18 = pv;
    if ( !pv )
    {
LABEL_14:
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
      return v13;
    }
LABEL_13:
    CoTaskMemFree(v18);
    goto LABEL_14;
  }
  if ( a7
    && (v20 = (**(__int64 (__fastcall ***)(CAPOWrapperClient *, GUID *, struct IAudioSystemEffects2 **))this)(
                this,
                &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
                a7),
        v21 = v20,
        v20 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\apowrapperclient.cpp",
      (const char *)(unsigned int)v20);
    if ( pv )
      CoTaskMemFree(pv);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return v21;
  }
  else
  {
    if ( pv )
      CoTaskMemFree(pv);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    return 0LL;
  }
}
