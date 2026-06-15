/*
 * XREFs of ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140033590
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073B4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000761C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079B0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x14000DE58 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E2F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z @ 0x140026C04 (-TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027A18 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?StringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x140033AC4 (-StringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140034710 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14005867C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperSrv::CreateSystemEffect(
        __int64 a1,
        __int128 *a2,
        const unsigned __int16 *a3,
        int a4,
        struct _GUID *a5,
        __int64 *a6)
{
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rdx
  int ApoDeviceIdPKey; // r12d
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  struct IUnknown *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  int APOProcessingHostInstance; // eax
  void *v21; // rcx
  void *v23; // rcx
  __int64 v24; // rdx
  char *v25; // [rsp+28h] [rbp-D8h]
  __int64 v26; // [rsp+30h] [rbp-D0h]
  __int64 v27; // [rsp+38h] [rbp-C8h]
  __int64 v28; // [rsp+40h] [rbp-C0h]
  __int64 v29; // [rsp+48h] [rbp-B8h]
  __int64 v30; // [rsp+50h] [rbp-B0h]
  __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h]
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  struct IUnknown *v35; // [rsp+88h] [rbp-78h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+98h] [rbp-68h] BYREF
  int v38; // [rsp+A0h] [rbp-60h]
  void **p_pv; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v40; // [rsp+B0h] [rbp-50h] BYREF
  char v41; // [rsp+B8h] [rbp-48h]
  const unsigned __int16 *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int64 *v44; // [rsp+D0h] [rbp-30h]
  __int128 v45; // [rsp+D8h] [rbp-28h]
  __int128 v46; // [rsp+E8h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v38 = a4;
  v42 = a3;
  v43 = a1;
  v44 = a6;
  v45 = *a2;
  v46 = v45;
  EtwEventActivityIdControl(4LL, &v46);
  *a6 = 0LL;
  if ( !a4 )
  {
    ApoDeviceIdPKey = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)0x80070057LL);
    goto LABEL_25;
  }
  StringCchPrintfA(
    (char *)(a1 + 140),
    0x27uLL,
    "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    a5->Data1,
    a5->Data2,
    a5->Data3,
    a5->Data4[0],
    a5->Data4[1],
    a5->Data4[2],
    a5->Data4[3],
    a5->Data4[4],
    a5->Data4[5],
    a5->Data4[6],
    a5->Data4[7]);
  v10 = AudioDgTelemetryProvider::Provider(v9);
  CPerfTracker::CPerfTracker(&PerformanceCount, v10, "SrvSystemEffect_Create", (const char *const)(a1 + 140));
  pv = 0LL;
  p_pv = &pv;
  v40 = 0LL;
  v41 = 1;
  ApoDeviceIdPKey = TryGetApoDeviceIdPKey(a5, a3, (const wchar_t **)&v40);
  if ( v41 )
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      p_pv,
      v40);
  if ( ApoDeviceIdPKey < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)ApoDeviceIdPKey);
LABEL_40:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      0LL);
LABEL_31:
    CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
    goto LABEL_25;
  }
  v36 = 0LL;
  ApoDeviceIdPKey = CSystemEffectWrapper::Create((__int64)a5, v11, (__int64)v42, v38, 0LL, (__int64)pv, (__int64)&v36);
  if ( ApoDeviceIdPKey < 0 )
  {
    LODWORD(v33) = a5->Data4[5];
    LODWORD(v32) = a5->Data4[4];
    LODWORD(v31) = a5->Data4[3];
    LODWORD(v30) = a5->Data4[2];
    LODWORD(v29) = a5->Data4[1];
    LODWORD(v28) = a5->Data4[0];
    LODWORD(v27) = a5->Data3;
    LODWORD(v26) = a5->Data2;
    LODWORD(v25) = a5->Data1;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x6A,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)ApoDeviceIdPKey,
      (int)"APO CLSID {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      v25,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      a5->Data4[6],
      a5->Data4[7]);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    v23 = pv;
    pv = 0LL;
    goto LABEL_29;
  }
  v35 = 0LL;
  v13 = v36;
  v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IUnknown **))v36)(
          v36,
          &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10,
          &v35);
  ApoDeviceIdPKey = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)v14);
LABEL_39:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v36);
    goto LABEL_40;
  }
  v15 = 0LL;
  v37 = 0LL;
  v16 = v35;
  if ( v35 )
  {
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v35->lpVtbl->QueryInterface)(
      v35,
      &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
      &v37);
    v16 = v35;
    v15 = v37;
  }
  if ( !v15 )
  {
    ApoDeviceIdPKey = -2147467262;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x70,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)0x80004002LL);
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    if ( v35 )
      ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->Release)(v35);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v23 = pv;
    pv = 0LL;
LABEL_29:
    if ( v23 )
      CoTaskMemFree(v23);
    goto LABEL_31;
  }
  v17 = v43;
  if ( *(struct IUnknown **)(v43 + 96) != v16 )
    ATL::AtlComPtrAssign((struct IUnknown **)(v43 + 96), v16);
  v18 = (v17 + 8) & -(__int64)(v17 != 0);
  *v44 = v18;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64))v35->lpVtbl->QueryInterface)(
         v35,
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         v17 + 112) < 0 )
    goto LABEL_17;
  v19 = *(_QWORD *)(v17 + 88);
  *(_QWORD *)(v17 + 88) = 0LL;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  APOProcessingHostInstance = GetAPOProcessingHostInstance((struct IAPOProcessingHost **)(v17 + 88));
  ApoDeviceIdPKey = APOProcessingHostInstance;
  if ( APOProcessingHostInstance < 0 )
  {
    v24 = 120LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)APOProcessingHostInstance);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v37);
    goto LABEL_39;
  }
  APOProcessingHostInstance = (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**(_QWORD **)(v17 + 88) + 24LL))(
                                *(_QWORD *)(v17 + 88),
                                v35);
  ApoDeviceIdPKey = APOProcessingHostInstance;
  if ( APOProcessingHostInstance < 0 )
  {
    v24 = 122LL;
    goto LABEL_43;
  }
LABEL_17:
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v35 )
    ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->Release)(v35);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v21 = pv;
  pv = 0LL;
  if ( v21 )
    CoTaskMemFree(v21);
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  ApoDeviceIdPKey = 0;
LABEL_25:
  EtwEventActivityIdControl(4LL, &v46);
  return (unsigned int)ApoDeviceIdPKey;
}
