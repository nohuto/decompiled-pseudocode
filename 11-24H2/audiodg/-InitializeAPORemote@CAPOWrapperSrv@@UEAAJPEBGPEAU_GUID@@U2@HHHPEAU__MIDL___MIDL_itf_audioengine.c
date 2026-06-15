/*
 * XREFs of ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14004EC80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1CPerfTracker@@QEAA@XZ @ 0x14000764C (--1CPerfTracker@@QEAA@XZ.c)
 *     ??0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z @ 0x1400079E0 (--0CPerfTracker@@QEAA@PEBU_tlgProvider_t@@QEBD1@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400089F8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E320 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140033DF0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     _lambda_9ea61389800d10a92a31feda1ef8f987_::operator() @ 0x1400347B8 (_lambda_9ea61389800d10a92a31feda1ef8f987_--operator().c)
 *     ??0?$CComQIPtr@UIApoAcousticEchoCancellation@@$1?_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003E884 (--0-$CComQIPtr@UIApoAcousticEchoCancellation@@$1-_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U_.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003F2D4 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     ??0?$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1?_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003F79C (--0-$CComQIPtr@UIAudioSystemEffectsCustomFormats@@$1-_GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097@.c)
 *     ??0?$CComQIPtr@UIApoAcousticEchoCancellation2@@$1?_GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140041394 (--0-$CComQIPtr@UIApoAcousticEchoCancellation2@@$1-_GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2@@3U.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectPreferredFormatSupport@@$1?_GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140043814 (--0-$CComQIPtr@UIAudioProcessingObjectPreferredFormatSupport@@$1-_GUID_51cbd3c4_f1f3_4d2f_a0e1_7.c)
 *     ?RegisterAPONotifications@CAPOWrapperSrv@@AEAAJPEBG@Z @ 0x140049F28 (-RegisterAPONotifications@CAPOWrapperSrv@@AEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOWrapperSrv::InitializeAPORemote(
        CAPOWrapperSrv *this,
        const unsigned __int16 *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        BOOL a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        int a7,
        struct __MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002 *a8)
{
  const char *v11; // r12
  const struct _tlgProvider_t *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  HRESULT v15; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  const struct _tlgProvider_t *v19; // rax
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  void (__fastcall ***v28)(_QWORD, GUID *, struct _GUID **); // rcx
  struct _GUID *v29; // rax
  struct _GUID *v31; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID ppv; // [rsp+40h] [rbp-C0h] BYREF
  struct IUnknown *v34; // [rsp+48h] [rbp-B8h] BYREF
  struct IMMDevice *v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v37[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v38; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int128 v40; // [rsp+90h] [rbp-70h] BYREF
  int v41; // [rsp+A0h] [rbp-60h]
  int v42; // [rsp+A4h] [rbp-5Ch]
  _OWORD v43[2]; // [rsp+A8h] [rbp-58h]
  struct APOInitSystemEffects2 v44; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v45; // [rsp+130h] [rbp+30h] BYREF
  int v46; // [rsp+140h] [rbp+40h]
  int v47; // [rsp+144h] [rbp+44h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+148h] [rbp+48h]
  __int64 v49; // [rsp+150h] [rbp+50h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+158h] [rbp+58h]
  UINT nSoftwareIoDeviceInCollection; // [rsp+160h] [rbp+60h]
  UINT nSoftwareIoConnectorIndex; // [rsp+164h] [rbp+64h]
  GUID AudioProcessingMode; // [rsp+168h] [rbp+68h]
  BOOL InitializeForDiscoveryOnly; // [rsp+178h] [rbp+78h]
  LARGE_INTEGER v55; // [rsp+180h] [rbp+80h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+270h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3A8h] [rbp+2A8h]

  v31 = a4;
  v11 = (char *)this + 140;
  v12 = AudioDgTelemetryProvider::Provider((__int64)this);
  CPerfTracker::CPerfTracker(&PerformanceCount, v12, "SrvSystemEffect_Initialize", v11);
  if ( !a2 )
  {
    v13 = -2147024809;
    v14 = 157LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)v13);
    goto LABEL_44;
  }
  if ( !*((_QWORD *)this + 12) )
  {
    v13 = -2147024882;
    v14 = 158LL;
    goto LABEL_5;
  }
  v39 = 0LL;
  *(_OWORD *)a8 = 0LL;
  *((_QWORD *)a8 + 2) = v39;
  *((_DWORD *)a8 + 6) = 0;
  ppv = 0LL;
  v15 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  v13 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)v15);
LABEL_8:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
    goto LABEL_44;
  }
  v35 = 0LL;
  v16 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, struct IMMDevice **))(*(_QWORD *)ppv + 40LL))(
          ppv,
          a2,
          &v35);
  v13 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)v16);
LABEL_11:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
    goto LABEL_8;
  }
  v36 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 12))(
         *((_QWORD *)this + 12),
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         &v32) < 0 )
  {
    v17 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IUnknown **))this + 12))(
            *((_QWORD *)this + 12),
            &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
            &v34);
    v13 = v17;
    if ( v17 < 0 )
    {
      if ( a7 == 1 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB7,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
          (const char *)(unsigned int)v17);
LABEL_16:
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v34);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v36);
        goto LABEL_11;
      }
      if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 12))(
             *((_QWORD *)this + 12),
             &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
             &v36) < 0 )
      {
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v34);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v36);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
        v13 = 0;
        goto LABEL_44;
      }
    }
  }
  v44.APOInit.cbSize = 0;
  *((_DWORD *)&v44.APOInit + 5) = 0;
  memset_0(&v44.APOInit.clsid, 0, 0x54uLL);
  v19 = AudioDgTelemetryProvider::Provider(v18);
  CPerfTracker::CPerfTracker(&v55, v19, "SrvSystemEffect_InitApo", v11);
  v38 = *v31;
  v20 = FillAPOInitSystemEffectsStructure(v35, a3, &v38, a5, a6, &v44);
  v13 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC3,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
      (const char *)(unsigned int)v20);
    CPerfTracker::~CPerfTracker((CPerfTracker *)&v55);
    goto LABEL_16;
  }
  CPerfTracker::~CPerfTracker((CPerfTracker *)&v55);
  *(_QWORD *)&v38.Data1 = &v44;
  if ( v32 )
  {
    v47 = 0;
    memset_0((char *)&v45 + 4, 0, 0x4CuLL);
    v45 = *(_OWORD *)&v44.APOInit.cbSize;
    v46 = *(_DWORD *)&v44.APOInit.clsid.Data4[4];
    LODWORD(v45) = 80;
    pAPOEndpointProperties = v44.pAPOEndpointProperties;
    pDeviceCollection = v44.pDeviceCollection;
    nSoftwareIoDeviceInCollection = v44.nSoftwareIoDeviceInCollection;
    nSoftwareIoConnectorIndex = v44.nSoftwareIoConnectorIndex;
    AudioProcessingMode = v44.AudioProcessingMode;
    InitializeForDiscoveryOnly = v44.InitializeForDiscoveryOnly;
    v21 = (__int64 *)*((_QWORD *)this + 11);
    v22 = *v21;
    v37[0] = 0LL;
    v23 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v22 + 56))(v21, *((_QWORD *)this + 12), v37);
    v13 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD9,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v23);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v37);
      v38.Data4[0] = 0;
      lambda_9ea61389800d10a92a31feda1ef8f987_::operator()((__int64 *)&v38);
      goto LABEL_16;
    }
    v49 = v37[0];
    v24 = (*(__int64 (__fastcall **)(char *, __int64, __int128 *))(*((_QWORD *)this + 1) + 48LL))(
            (char *)this + 8,
            80LL,
            &v45);
    v13 = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDC,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v24);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v37);
      v38.Data4[0] = 0;
      lambda_9ea61389800d10a92a31feda1ef8f987_::operator()((__int64 *)&v38);
      goto LABEL_16;
    }
    if ( a5 )
      CAPOWrapperSrv::RegisterAPONotifications(this, a2);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v37);
  }
  else if ( v34 )
  {
    v25 = (*(__int64 (__fastcall **)(char *, __int64, struct APOInitSystemEffects2 *))(*((_QWORD *)this + 1) + 48LL))(
            (char *)this + 8,
            88LL,
            &v44);
    v13 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE7,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v25);
      v38.Data4[0] = 0;
      lambda_9ea61389800d10a92a31feda1ef8f987_::operator()((__int64 *)&v38);
      goto LABEL_16;
    }
  }
  else if ( v36 )
  {
    v42 = 0;
    v40 = *(_OWORD *)&v44.APOInit.cbSize;
    v41 = *(_DWORD *)&v44.APOInit.clsid.Data4[4];
    LODWORD(v40) = 56;
    v43[0] = *(_OWORD *)&v44.pAPOEndpointProperties;
    v43[1] = *(_OWORD *)&v44.pReserved;
    v26 = (*(__int64 (__fastcall **)(char *, __int64, __int128 *))(*((_QWORD *)this + 1) + 48LL))(
            (char *)this + 8,
            56LL,
            &v40);
    v13 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF4,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
        (const char *)(unsigned int)v26);
      v38.Data4[0] = 0;
      lambda_9ea61389800d10a92a31feda1ef8f987_::operator()((__int64 *)&v38);
      goto LABEL_16;
    }
  }
  if ( a7 )
  {
    if ( v32 )
    {
      v27 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, char *))this + 12))(
              *((_QWORD *)this + 12),
              &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
              (char *)this + 104);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xFB,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp",
          (const char *)(unsigned int)v27);
    }
    else if ( *((struct IUnknown **)this + 13) != v34 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 13, v34);
    }
  }
  v28 = (void (__fastcall ***)(_QWORD, GUID *, struct _GUID **))*((_QWORD *)this + 12);
  v29 = 0LL;
  v31 = 0LL;
  if ( v28 )
  {
    (**v28)(v28, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, &v31);
    v29 = v31;
  }
  *(_DWORD *)a8 = v29 != 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
  ATL::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>(
    &v31,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 12));
  *((_DWORD *)a8 + 1) = v31 != 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
  ATL::CComQIPtr<IApoAcousticEchoCancellation2,&__s_GUID const _GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2>::CComQIPtr<IApoAcousticEchoCancellation2,&__s_GUID const _GUID_f235855f_f06d_45b3_a63f_ee4b71509dc2>(
    &v31,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 12));
  *((_DWORD *)a8 + 2) = v31 != 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
  ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
    &v31,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 12));
  *((_DWORD *)a8 + 3) = v31 != 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
  ATL::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>::CComQIPtr<IAudioSystemEffectsCustomFormats,&__s_GUID const _GUID_b1176e34_bb7f_4f05_bebd_1b18a534e097>(
    &v31,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 12));
  *((_DWORD *)a8 + 4) = v31 != 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
  ATL::CComQIPtr<IAudioProcessingObjectPreferredFormatSupport,&__s_GUID const _GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3>::CComQIPtr<IAudioProcessingObjectPreferredFormatSupport,&__s_GUID const _GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3>(
    &v31,
    *((void (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 12));
  *((_DWORD *)a8 + 5) = v31 != 0LL;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v31);
  *((_DWORD *)a8 + 6) = v32 != 0;
  v38.Data4[0] = 0;
  lambda_9ea61389800d10a92a31feda1ef8f987_::operator()((__int64 *)&v38);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v32);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v34);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v36);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v35);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppv);
  v13 = 0;
LABEL_44:
  CPerfTracker::~CPerfTracker((CPerfTracker *)&PerformanceCount);
  return v13;
}
