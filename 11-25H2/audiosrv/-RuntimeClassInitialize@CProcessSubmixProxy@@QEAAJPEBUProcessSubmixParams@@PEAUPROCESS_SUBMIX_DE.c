/*
 * XREFs of ?RuntimeClassInitialize@CProcessSubmixProxy@@QEAAJPEBUProcessSubmixParams@@PEAUPROCESS_SUBMIX_DESCRIPTOR@@PEAUIStreamGroupProxy@@K@Z @ 0x18006CC74
 * Callers:
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180024E40 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 * Callees:
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x18000C640 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x18000C978 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180059010 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18007B554 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@@-$_tlgWrite.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CProcessSubmixProxy::RuntimeClassInitialize(
        CProcessSubmixProxy *this,
        const struct ProcessSubmixParams *a2,
        const struct tWAVEFORMATEX **a3,
        struct IStreamGroupProxy *a4)
{
  struct AudioSrvTelemetryProvider *v8; // rax
  HRESULT Instance; // eax
  int v10; // ebx
  LARGE_INTEGER *p_PerformanceCount; // rcx
  HRESULT v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  struct AudioSrvTelemetryProvider *v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  IUnknown *v21; // rcx
  __int64 v22; // rbx
  _DWORD *v23; // rbx
  int v24; // r9d
  _BYTE v26[8]; // [rsp+40h] [rbp-C0h] BYREF
  IUnknown *pProxy; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  char *v31; // [rsp+68h] [rbp-98h] BYREF
  struct tWAVEFORMATEX *v32; // [rsp+70h] [rbp-90h] BYREF
  char v33; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER v35; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  pProxy = 0LL;
  v8 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v8 + 1),
    "ProcessSubmix_CoCreate",
    0LL);
  pProxy = 0LL;
  Instance = CoCreateInstance(
               &GUID_9db0b5d8_7db4_445f_a896_38636dc7c07a,
               0LL,
               0x17u,
               &GUID_c4ae3ba8_7b85_4184_9796_ad34113fda89,
               (LPVOID *)&pProxy);
  v10 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD76,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)Instance);
    p_PerformanceCount = &PerformanceCount;
LABEL_8:
    CPerfTracker::~CPerfTracker((CPerfTracker *)p_PerformanceCount);
    goto LABEL_27;
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  v12 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v10 = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v14 = 3453LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v13);
    goto LABEL_27;
  }
  v15 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(&v35, *((const struct _tlgProvider_t **)v15 + 1), "ProcessSubmix_Initialize", 0LL);
  v16 = ((__int64 (__fastcall *)(IUnknown *, const struct tWAVEFORMATEX **))pProxy->lpVtbl[1].AddRef)(pProxy, a3);
  v10 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD81,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v16);
    p_PerformanceCount = &v35;
    goto LABEL_8;
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&v35);
  *((_BYTE *)this + 124) = *((_BYTE *)a2 + 8);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 14, *(_QWORD *)a2);
  v31 = (char *)this + 208;
  v32 = 0LL;
  v33 = 1;
  v10 = CloneWaveFormat(a3[6], &v32);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v31);
  if ( v10 < 0 )
  {
    v13 = (unsigned int)v10;
    v14 = 3462LL;
    goto LABEL_5;
  }
  v17 = *(_QWORD *)a4;
  v28 = 0LL;
  v18 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, __int64 *))(v17 + 272))(a4, &v28);
  v10 = v18;
  if ( v18 < 0 )
  {
    v19 = 3466LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v18);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
    goto LABEL_27;
  }
  v18 = ((__int64 (__fastcall *)(IUnknown *, __int64))pProxy->lpVtbl[1].Release)(pProxy, v28);
  v10 = v18;
  if ( v18 < 0 )
  {
    v19 = 3467LL;
    goto LABEL_13;
  }
  v20 = *((_QWORD *)this + 6);
  v21 = pProxy;
  *((_QWORD *)this + 6) = pProxy;
  if ( v21 )
    ((void (__fastcall *)(IUnknown *))v21->lpVtbl->AddRef)(v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v22 = *((_QWORD *)this + 25);
  *((_QWORD *)this + 25) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  v23 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v23 > 4u )
  {
    v26[0] = *((_BYTE *)this + 124);
    v29 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14));
    v30 = ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (_DWORD)v23,
      (unsigned int)&unk_1801A187F,
      (_DWORD)this + 8,
      v24,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)v26);
  }
  *((_QWORD *)this + 27) = _InterlockedIncrement64(&CProcessSubmixProxy::s_processSubmixId);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
  v10 = 0;
LABEL_27:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&pProxy);
  return (unsigned int)v10;
}
