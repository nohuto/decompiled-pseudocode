/*
 * XREFs of ?ConnectToStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180025C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x180024FB0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x1800252E8 (--1CPerfTracker@@QEAA@XZ.c)
 *     ?OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z @ 0x180025FE0 (-OnConnectedToStream@CProcessSubmixProxy@@IEAAXPEAUIAudioStreamInfo@@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixProxy::ConnectToStream(unsigned __int64 this, struct IAudioStreamInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rcx
  __int64 (__fastcall **v11)(_QWORD, GUID *, __int64 *); // rax
  int v12; // eax
  struct AudioSrvTelemetryProvider *v13; // rax
  int v14; // eax
  __int64 v15; // rbx
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-C0h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v24[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER PerformanceCount; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v27; // [rsp+170h] [rbp+70h]
  int v28; // [rsp+178h] [rbp+78h]
  int v29; // [rsp+17Ch] [rbp+7Ch]
  void *v30; // [rsp+180h] [rbp+80h]
  int v31; // [rsp+188h] [rbp+88h]
  int v32; // [rsp+18Ch] [rbp+8Ch]
  unsigned __int64 *v33; // [rsp+190h] [rbp+90h]
  int v34; // [rsp+198h] [rbp+98h]
  int v35; // [rsp+19Ch] [rbp+9Ch]
  __int64 *v36; // [rsp+1A0h] [rbp+A0h]
  int v37; // [rsp+1A8h] [rbp+A8h]
  int v38; // [rsp+1ACh] [rbp+ACh]
  __int64 *v39; // [rsp+1B0h] [rbp+B0h]
  int v40; // [rsp+1B8h] [rbp+B8h]
  int v41; // [rsp+1BCh] [rbp+BCh]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 48));
  v20 = v4;
  v5 = *(_QWORD *)a2;
  v19 = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 **))(v5 + 192))(a2, &v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v6);
LABEL_24:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v20);
    return v7;
  }
  v8 = *v19;
  v17 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 80))(v19, &v17);
  v7 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9);
LABEL_23:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
    goto LABEL_24;
  }
  v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(this + 40);
  v11 = *v10;
  v18 = 0LL;
  v12 = (*v11)(v10, &GUID_c3876f08_e8f4_47e9_b42f_3bc3418c0675, &v18);
  v7 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF15,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v12);
LABEL_22:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v18);
    goto LABEL_23;
  }
  v13 = AudioSrvTelemetryProvider::Instance();
  CPerfTracker::CPerfTracker(
    &PerformanceCount,
    *((const struct _tlgProvider_t **)v13 + 1),
    "ProcessSubmix_ConnectToStream",
    0LL);
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 72LL))(v17, v18);
  v7 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF19,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v14);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    goto LABEL_22;
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  CProcessSubmixProxy::OnConnectedToStream((CProcessSubmixProxy *)(this - 8), a2);
  v15 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *(_DWORD *)v15 > 4u
    && (*(_DWORD *)(v15 + 16) & 0x200LL) != 0
    && (*(_QWORD *)(v15 + 24) & 0x200LL) == *(_QWORD *)(v15 + 24) )
  {
    v21 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    v22 = *(_QWORD *)(this + 192);
    v23 = this & -(__int64)(this != 8);
    v39 = &v21;
    v40 = 8;
    v41 = 0;
    v36 = &v22;
    v37 = 8;
    v38 = 0;
    v33 = &v23;
    v34 = 8;
    v35 = 0;
    v24[0] = 184549376;
    v24[1] = 4;
    v25 = 512LL;
    v27 = *(unsigned __int16 **)(v15 + 8);
    v28 = *v27;
    v29 = 2;
    v30 = &unk_1801AC3BB;
    v31 = 72;
    v32 = 1;
    LODWORD(v20) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v15 + 32), v24, 0LL, 0LL);
  }
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v19 )
    (*(void (__fastcall **)(__int64 *))(*v19 + 16))(v19);
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
