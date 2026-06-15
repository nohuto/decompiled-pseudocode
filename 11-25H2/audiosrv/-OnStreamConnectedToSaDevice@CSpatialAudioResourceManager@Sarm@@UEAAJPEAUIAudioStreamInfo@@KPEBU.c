/*
 * XREFs of ?OnStreamConnectedToSaDevice@CSpatialAudioResourceManager@Sarm@@UEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@@Z @ 0x180119530
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18003B888 (Create_SpatialAudioDevicePropertyReader.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18005CA10 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005E3AC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Find@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@@Z @ 0x180066D68 (-Find@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sa.c)
 *     ?IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x18006D1B8 (-IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x180088A70 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800C133C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x180118450 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?GetKey@?$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@AEAAPEAUISaDeviceProxy@@PEAU3@@Z @ 0x18011897C (-GetKey@-$InterfaceMap@UISaDeviceProxy@@VCEndpointResourcePool@Sarm@@@util@@AEAAPEAUISaDevicePro.c)
 *     ?GetNode@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@AEBAPEAVCNode@12@AEBQEAUISaDeviceProxy@@AEAI1AEAPEAV312@@Z @ 0x180118A34 (-GetNode@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUISaDev.c)
 *     ?OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z @ 0x1801192E0 (-OnRequestDynamicObjects@CSpatialAudioResourceManager@Sarm@@UEAAJ_JII@Z.c)
 *     ?RemoveAtPos@?$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V?$CElementTraits@PEAUISaDeviceProxy@@@ATL@@V?$CElementTraits@VCEndpointResourcePool@Sarm@@@5@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18011A374 (-RemoveAtPos@-$CAtlMap@PEAUISaDeviceProxy@@VCEndpointResourcePool@Sarm@@V-$CElementTraits@PEAUIS.c)
 *     ?SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCEndpointResourcePool@2@@Z @ 0x18011A70C (-SetupEndpointResourcePool@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUISaDeviceProxy@@PEAPEAVCE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        struct _GUID *a4,
        const struct SPATIAL_STREAM_PROPERTIES *a5)
{
  const struct SPATIAL_STREAM_PROPERTIES *v5; // r13
  __int64 v10; // r8
  const char *v11; // r9
  void (__fastcall **v12)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall *v13)(struct IAudioStreamInfo *, __int64 *); // rbx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, struct ISaDeviceProxy **); // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct ISaDeviceProxy *v21; // rdx
  int v22; // r12d
  void (__fastcall **v23)(_QWORD, GUID *, _QWORD *); // rax
  __int64 (__fastcall *v24)(struct IAudioStreamInfo *, __int64 *); // rbx
  int v25; // eax
  unsigned __int16 *v26; // rax
  int v27; // r9d
  __int64 v28; // rdx
  struct Sarm::CEndpointResourcePool *v29; // rbx
  __int64 Key; // rax
  __int64 Node; // rax
  const char *v32; // r9
  int v33; // edi
  unsigned int v34; // ebx
  unsigned int v35; // edi
  __int64 v36; // rax
  int v37; // eax
  struct ISaDeviceProxy *v38; // [rsp+30h] [rbp-71h] BYREF
  __int64 v39; // [rsp+38h] [rbp-69h] BYREF
  struct Sarm::CEndpointResourcePool *v40; // [rsp+40h] [rbp-61h] BYREF
  __int64 v41; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v42; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v43; // [rsp+54h] [rbp-4Dh]
  struct Sarm::CEndpointResourcePool *v44; // [rsp+58h] [rbp-49h] BYREF
  struct _GUID *v45; // [rsp+60h] [rbp-41h]
  char *v46; // [rsp+68h] [rbp-39h]
  __int64 v47; // [rsp+70h] [rbp-31h] BYREF
  _OWORD v48[3]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v49; // [rsp+A8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = a5;
  v45 = a4;
  v43 = a3;
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::OnStreamConnectedToSaDevice", 300);
  v49 = 0LL;
  memset(v48, 0, sizeof(v48));
  if ( !a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      304LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v11);
  if ( !a4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      305LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v11);
  if ( !a5 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      306LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v11);
  if ( util::InterfaceMap<IAudioStreamInfo,Sarm::CStreamResource>::Find(
         (__int64)this + 192,
         (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2,
         v10) )
  {
    return 0LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v12 = *(void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  v39 = 0LL;
  v13 = (__int64 (__fastcall *)(struct IAudioStreamInfo *, __int64 *))v12[15];
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v39);
  v14 = v13(a2, &v39);
  if ( v14 < 0 )
  {
    v15 = 322LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_11;
  }
  v17 = v39;
  if ( !v39 )
  {
    v14 = -2005139190;
    v15 = 323LL;
    goto LABEL_10;
  }
  v38 = 0LL;
  v18 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v39 + 224LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v38);
  v14 = v18(v17, &v38);
  if ( v14 < 0 )
  {
    v20 = 326LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_19:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
LABEL_11:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    return (unsigned int)v14;
  }
  v21 = v38;
  if ( !v38 )
  {
    v14 = -2005139197;
    v20 = 327LL;
    goto LABEL_18;
  }
  v22 = a3 & 0x800000;
  if ( !v22 )
  {
    if ( !Sarm::CSpatialAudioResourceManager::IsAppPinningEnabled(this) )
      goto LABEL_36;
    v23 = *(void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
    v41 = 0LL;
    v24 = (__int64 (__fastcall *)(struct IAudioStreamInfo *, __int64 *))v23[3];
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v41);
    v25 = v24(a2, &v41);
    v14 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v25);
LABEL_26:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
      goto LABEL_19;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v41 + 368LL))(v41) )
    {
LABEL_35:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
LABEL_36:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
      if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
      return 0LL;
    }
    v40 = 0LL;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v40);
    v26 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct ISaDeviceProxy *))(*(_QWORD *)v38 + 24LL))(v38);
    v14 = Create_SpatialAudioDevicePropertyReader(v26, 0LL, &v40, v27);
    if ( v14 < 0 )
    {
      v28 = 341LL;
LABEL_30:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        (const char *)(unsigned int)v14);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
      goto LABEL_26;
    }
    v42 = 0;
    v14 = (*(__int64 (__fastcall **)(struct Sarm::CEndpointResourcePool *, unsigned int *))(*(_QWORD *)v40 + 112LL))(
            v40,
            &v42);
    if ( v14 < 0 )
    {
      v28 = 344LL;
      goto LABEL_30;
    }
    if ( !v42 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
      goto LABEL_35;
    }
    v5 = (const struct SPATIAL_STREAM_PROPERTIES *)v48;
    *((_QWORD *)&v48[0] + 1) = 0x100000001LL;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v41);
    v21 = v38;
  }
  v29 = 0LL;
  v40 = 0LL;
  v46 = (char *)this + 112;
  Key = util::InterfaceMap<ISaDeviceProxy,Sarm::CEndpointResourcePool>::GetKey(
          v19,
          (void (__fastcall ***)(_QWORD, GUID *, __int64 *))v21);
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach((__int64 *)&v40, Key);
  if ( v40 )
  {
    LODWORD(v41) = 0;
    v42 = 0;
    v44 = v40;
    Node = ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::GetNode(
             (__int64)this + 112,
             (unsigned int *)&v44,
             (int *)&v41,
             &v42,
             &v47);
    if ( Node )
      v29 = (struct Sarm::CEndpointResourcePool *)(Node + 8);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v40);
  v40 = v29;
  if ( !v29 )
  {
    v14 = Sarm::CSpatialAudioResourceManager::SetupEndpointResourcePool(this, v38, &v40);
    if ( v14 < 0 )
    {
      v20 = 363LL;
      goto LABEL_18;
    }
    v29 = v40;
    if ( !v40 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        364LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v32);
  }
  v33 = Sarm::CSpatialAudioResourceManager::AddStream(this, a2, v43, v45, v5, v29);
  if ( v33 >= 0 )
  {
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
    if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
    if ( !v22 )
    {
      v34 = *((_DWORD *)v5 + 3);
      v35 = *((_DWORD *)v5 + 2);
      v36 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
      v37 = Sarm::CSpatialAudioResourceManager::OnRequestDynamicObjects(this, v36, v35, v34);
      v14 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x180,
          (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
          (const char *)(unsigned int)v37);
        return (unsigned int)v14;
      }
    }
    return 0LL;
  }
  if ( !*((_DWORD *)v29 + 3) && *(_QWORD *)v29 )
    ATL::CAtlMap<ISaDeviceProxy *,Sarm::CEndpointResourcePool,ATL::CElementTraits<ISaDeviceProxy *>,ATL::CElementTraits<Sarm::CEndpointResourcePool>>::RemoveAtPos(v46);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x176,
    (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
    (const char *)(unsigned int)v33);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v38);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v39);
  if ( this != (Sarm::CSpatialAudioResourceManager *)-64LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  return (unsigned int)v33;
}
