/*
 * XREFs of ??1CStreamInstanceProxy@@UEAA@XZ @ 0x180021E94
 * Callers:
 *     ??_GCStreamInstanceProxy@@UEAAPEAXI@Z @ 0x180021B10 (--_GCStreamInstanceProxy@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1CStreamInstanceProxyImpl@@QEAA@XZ @ 0x1800220C4 (--1CStreamInstanceProxyImpl@@QEAA@XZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStreamInstanceProxy::~CStreamInstanceProxy(CStreamInstanceProxy *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  struct AudioSrvTelemetryProvider *v5; // rax
  int v6; // eax
  int v7; // [rsp+20h] [rbp-E0h]
  __int64 v8; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h] BYREF
  CStreamInstanceProxy *v11; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v12[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A0h]
  LARGE_INTEGER PerformanceCount; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v15; // [rsp+160h] [rbp+60h]
  int v16; // [rsp+168h] [rbp+68h]
  int v17; // [rsp+16Ch] [rbp+6Ch]
  void *v18; // [rsp+170h] [rbp+70h]
  int v19; // [rsp+178h] [rbp+78h]
  int v20; // [rsp+17Ch] [rbp+7Ch]
  CStreamInstanceProxy **v21; // [rsp+180h] [rbp+80h]
  int v22; // [rsp+188h] [rbp+88h]
  int v23; // [rsp+18Ch] [rbp+8Ch]
  __int64 *v24; // [rsp+190h] [rbp+90h]
  int v25; // [rsp+198h] [rbp+98h]
  int v26; // [rsp+19Ch] [rbp+9Ch]
  __int64 *v27; // [rsp+1A0h] [rbp+A0h]
  int v28; // [rsp+1A8h] [rbp+A8h]
  int v29; // [rsp+1ACh] [rbp+ACh]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  *(_QWORD *)this = &CStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<CStreamInstanceProxyImpl,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IStreamInstanceProxy>>'};
  *((_QWORD *)this + 5) = &CStreamInstanceProxy::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IStreamInstanceProxy>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IStreamInstanceProxy>>'};
  v2 = (__int64 *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    v4 = *v2;
    v8 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *))(v4 + 72))(v2, &v8) >= 0 )
    {
      v5 = AudioSrvTelemetryProvider::Instance();
      CPerfTracker::CPerfTracker(
        &PerformanceCount,
        *((const struct _tlgProvider_t **)v5 + 1),
        "StreamInstance_DisconnectFromRightSubmix",
        0LL);
      v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 80LL))(*((_QWORD *)this + 2), v8);
      if ( v6 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xFC7,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)v6,
          v7);
      CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v8);
  }
  v3 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v3 > 4u
    && (*(_DWORD *)(v3 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v3 + 24) & 0x200LL) == *(_QWORD *)(v3 + 24) )
  {
    v9 = *((_QWORD *)this + 4);
    v10 = *((_QWORD *)this + 3);
    v11 = this;
    v27 = &v9;
    v28 = 8;
    v29 = 0;
    v24 = &v10;
    v25 = 8;
    v26 = 0;
    v21 = &v11;
    v22 = 8;
    v23 = 0;
    v12[0] = 184549376;
    v12[1] = 4;
    v13 = 512LL;
    v15 = *(unsigned __int16 **)(v3 + 8);
    v16 = *v15;
    v17 = 2;
    v18 = &unk_1801AC27C;
    v19 = 91;
    v20 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v3 + 32), v12, 0LL, 0LL);
  }
  *((_DWORD *)this + 13) = -1073741823;
  CStreamInstanceProxyImpl::~CStreamInstanceProxyImpl(this);
}
