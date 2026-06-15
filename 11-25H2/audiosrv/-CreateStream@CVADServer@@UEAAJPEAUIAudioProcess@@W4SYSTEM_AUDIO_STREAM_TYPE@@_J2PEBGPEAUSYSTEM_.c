/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008C450
 * Callers:
 *     AudioServerCreateStream @ 0x18008D370 (AudioServerCreateStream.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x18001D668 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x18001D98C (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x18002682C (--1SystemAudioStream@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180051810 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18005190C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18005F508 (-move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ?StreamRequiresPreStartRegistration@@YA_NPEAUIAudioStreamInfo@@@Z @ 0x180065294 (-StreamRequiresPreStartRegistration@@YA_NPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z @ 0x180065678 (-GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z.c)
 *     ??4?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180065D9C (--4-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180066408 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?ValidateAudioServerCategoryForStreamType@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@K@Z @ 0x1800A6CB8 (-ValidateAudioServerCategoryForStreamType@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@K@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash@@@details@wil@@QEAA_NXZ @ 0x1800C1564 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash@@.c)
 *     ??$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@PEAG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioStream@@AEAPEAUIAudioProcess@@$$QEA_NAEAK$$QEAPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@$$QEAPEAG@Z @ 0x18010520C (--$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v10; // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  int EndpointCharacteristicsDescriptor; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // r11
  int v22; // r8d
  __int64 v23; // r14
  __int64 v24; // rbx
  int v25; // edi
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  struct SYSTEM_AUDIO_STREAM *v29; // rdi
  int v30; // eax
  struct CAudioStream *v31; // rax
  unsigned __int8 started; // al
  struct _RTL_CRITICAL_SECTION *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // r11
  int v42; // r8d
  __int64 v43; // r14
  __int64 v44; // rbx
  int v45; // eax
  struct SYSTEM_AUDIO_STREAM *v46; // rdi
  int v47; // eax
  struct CAudioStream *v48; // rax
  unsigned __int8 v49; // al
  __int64 v50; // rcx
  __int64 v51; // r8
  bool v52; // [rsp+100h] [rbp-80h] BYREF
  struct CAudioStream *v53; // [rsp+108h] [rbp-78h] BYREF
  int v54[2]; // [rsp+110h] [rbp-70h] BYREF
  __int128 v55; // [rsp+118h] [rbp-68h] BYREF
  __int64 v56; // [rsp+128h] [rbp-58h]
  __int64 v57; // [rsp+130h] [rbp-50h] BYREF
  int v58[2]; // [rsp+138h] [rbp-48h] BYREF
  struct _RTL_CRITICAL_SECTION *v59; // [rsp+140h] [rbp-40h] BYREF
  __int64 v60; // [rsp+148h] [rbp-38h]
  __int64 v61; // [rsp+150h] [rbp-30h]
  __int64 v62; // [rsp+158h] [rbp-28h]
  __int64 v63; // [rsp+160h] [rbp-20h]
  struct SYSTEM_AUDIO_STREAM *v64; // [rsp+168h] [rbp-18h]
  __int128 v65; // [rsp+170h] [rbp-10h] BYREF
  int v66; // [rsp+180h] [rbp+0h]
  __int64 v67; // [rsp+188h] [rbp+8h]
  __int64 v68; // [rsp+190h] [rbp+10h]
  __int64 v69; // [rsp+198h] [rbp+18h]
  __int64 v70; // [rsp+1A0h] [rbp+20h]
  __int64 v71; // [rsp+2D0h] [rbp+150h]
  __int64 v72; // [rsp+400h] [rbp+280h]
  int v73; // [rsp+530h] [rbp+3B0h]
  __int64 v74; // [rsp+538h] [rbp+3B8h]
  __int64 v75; // [rsp+668h] [rbp+4E8h]
  int v76; // [rsp+670h] [rbp+4F0h]
  int v77; // [rsp+674h] [rbp+4F4h]
  __int64 *v78[2]; // [rsp+680h] [rbp+500h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6E8h] [rbp+568h]
  unsigned int v80; // [rsp+700h] [rbp+580h] BYREF

  v80 = a3;
  v61 = a4;
  v63 = a2;
  v62 = a1;
  v57 = a2;
  v60 = a6;
  v10 = a7;
  v64 = (struct SYSTEM_AUDIO_STREAM *)a7;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_StreamDisconnectCrash>::GetImpl'::`2'::impl) )
  {
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McTemplateU0zqttq_EtwEventWriteTransfer(
        *(unsigned int *)(a1 + 324),
        (int)&VadServer_CreateStream_Task_Start,
        *(const wchar_t **)(a1 + 192),
        *(_DWORD *)(a1 + 304),
        *(_DWORD *)(a1 + 312),
        *(_DWORD *)(a1 + 324),
        *(_DWORD *)(a1 + 308));
    v55 = 0LL;
    v56 = 0LL;
    memset_0(v10, 0, 0x4E8uLL);
    if ( !*(_DWORD *)(a1 + 160) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890001LL);
LABEL_41:
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v55);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(v34, (__int64)&VadServer_CreateStream_Task_Stop, v35, 1, (__int64)v78);
      return 2290679809LL;
    }
    v78[0] = (__int64 *)(a1 + 176);
    if ( *(_QWORD *)(a1 + 176) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890002LL);
LABEL_46:
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v55);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(v36, (__int64)&VadServer_CreateStream_Task_Stop, v37, 1, (__int64)v78);
      return 2290679810LL;
    }
    v11 = ValidateAudioServerCategoryForStreamType(a3, *(unsigned int *)(a1 + 304));
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E8,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v11);
LABEL_10:
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v55);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(v13, (__int64)&VadServer_CreateStream_Task_Stop, v14, 1, (__int64)v78);
      return v12;
    }
    v53 = 0LL;
    *(_QWORD *)v58 = *(_QWORD *)(a1 + 192);
    *(_QWORD *)v54 = a1 + 256;
    v59 = (struct _RTL_CRITICAL_SECTION *)(a1 + 244);
    v52 = *(_DWORD *)(a1 + 240) == 1;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v53);
    EndpointCharacteristicsDescriptor = Microsoft::WRL::Details::MakeAndInitialize<CAudioStream,CAudioStream,IAudioProcess * &,bool,unsigned long &,VadServerSettings *,enum SYSTEM_AUDIO_STREAM_TYPE &,ATL::CComHeapPtr<tWAVEFORMATEX> &,unsigned short *>(
                                          (unsigned int)&v53,
                                          (unsigned int)&v57,
                                          (unsigned int)&v52,
                                          (int)a1 + 244,
                                          (__int64)v54,
                                          (__int64)&v80,
                                          a1 + 152,
                                          (__int64)v58);
    if ( EndpointCharacteristicsDescriptor < 0 )
    {
      v17 = 1516LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
      goto LABEL_16;
    }
    EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                          *(const unsigned __int16 **)(a1 + 192),
                                          0,
                                          (struct EndpointCharacteristicsDescriptor *)&v55);
    if ( EndpointCharacteristicsDescriptor < 0 )
    {
      v17 = 1519LL;
      goto LABEL_15;
    }
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 120LL))(a2);
    LODWORD(v57) = GetAudioResourcePriority(
                     (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)(a3 - 1 <= 2),
                     *(_DWORD *)(a1 + 304),
                     0,
                     v20);
    v65 = 0LL;
    v66 = v21;
    v67 = v21;
    v68 = v21;
    v69 = v21;
    v70 = v21;
    v71 = v21;
    v72 = v21;
    v73 = v21;
    v74 = v21;
    v75 = v21;
    v76 &= v22;
    v77 = v21;
    *(_QWORD *)v58 = *(_QWORD *)(*(_QWORD *)g_AudioResourceManager + 24LL);
    v23 = v61;
    v24 = v62;
    v25 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64, unsigned __int64, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, __int128 *, _DWORD, _DWORD, struct CAudioStream *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _DWORD, __int64, _DWORD, __int64, _DWORD, _QWORD, _DWORD, _QWORD, __int128 *))v58)(
            g_AudioResourceManager,
            v63,
            ((unsigned __int64)v53 + 8) & -(__int64)(v53 != 0LL),
            *(unsigned int *)(v62 + 304),
            *(_DWORD *)(v62 + 312),
            *(_DWORD *)(v62 + 384),
            *(_DWORD *)(v62 + 320),
            *(_DWORD *)(v62 + 324),
            *(_DWORD *)(v62 + 388),
            *(_DWORD *)(v62 + 400),
            *(_QWORD *)(v62 + 408),
            &v55,
            v59->DebugInfo,
            *(_DWORD *)(a1 + 240),
            v53,
            *(_QWORD *)(a1 + 152),
            v61,
            a5,
            a1 + 272,
            a1 + 288,
            *(_QWORD *)v54,
            *(_DWORD *)(a1 + 40),
            v60,
            v57,
            a1 + 328,
            *(_DWORD *)(a1 + 416),
            *(_QWORD *)(a1 + 424),
            *(_DWORD *)(a1 + 436),
            *(_QWORD *)(a1 + 496),
            &v65);
    if ( v25 < 0 )
    {
      if ( v68 )
        CAudioStream::CloseAudioHandle(v53);
LABEL_24:
      SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v65);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
LABEL_25:
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v55);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(v26, (__int64)&VadServer_CreateStream_Task_Stop, v27, 1, (__int64)v78);
      return (unsigned int)v25;
    }
    v28 = (*(__int64 (__fastcall **)(_QWORD, struct CAudioStream *))(**(_QWORD **)(v24 + 144) + 216LL))(
            *(_QWORD *)(v24 + 144),
            v53);
    v25 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v28);
      if ( v68 )
        CAudioStream::CloseAudioHandle(v53);
      goto LABEL_24;
    }
    v29 = v64;
    v30 = SystemAudioStream::move_to((SystemAudioStream *)&v65, v64);
    EndpointCharacteristicsDescriptor = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v30);
      CAudioSession::RemoveStream(*(CAudioSession **)(v24 + 144), v53, 1);
      SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v65);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
      goto LABEL_34;
    }
    v31 = v53;
    *((_QWORD *)v29 + 5) = *((_QWORD *)v53 + 52);
    *(_QWORD *)(v24 + 544) = *((_QWORD *)v31 + 52);
    started = StreamRequiresPreStartRegistration((struct IAudioStreamInfo *)(((unsigned __int64)v31 + 8) & -(__int64)(v31 != 0LL)));
    *(_BYTE *)(v24 + 512) = started;
    *((_DWORD *)v29 + 235) = started;
    *(_QWORD *)(v24 + 528) = v23;
    *(_QWORD *)(v24 + 536) = a5;
    v33 = (struct _RTL_CRITICAL_SECTION *)(v24 + 200);
    EnterCriticalSection(v33);
    v59 = v33;
    wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::operator=(v78[0], (__int64 *)&v53);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v59);
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v65);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
    goto LABEL_67;
  }
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      *(unsigned int *)(a1 + 324),
      (int)&VadServer_CreateStream_Task_Start,
      *(const wchar_t **)(a1 + 192),
      *(_DWORD *)(a1 + 304),
      *(_DWORD *)(a1 + 312),
      *(_DWORD *)(a1 + 324),
      *(_DWORD *)(a1 + 308));
  v55 = 0LL;
  v56 = 0LL;
  memset_0(v10, 0, 0x4E8uLL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
  *(_QWORD *)v54 = a1 + 200;
  if ( !*(_DWORD *)(a1 + 160) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x653,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v54);
    goto LABEL_41;
  }
  if ( *(_QWORD *)(a1 + 176) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x654,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890002LL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v54);
    goto LABEL_46;
  }
  v38 = ValidateAudioServerCategoryForStreamType(a3, *(unsigned int *)(a1 + 304));
  v12 = v38;
  if ( v38 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x657,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v38);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v54);
    goto LABEL_10;
  }
  v53 = 0LL;
  v78[0] = *(__int64 **)(a1 + 192);
  *(_QWORD *)v58 = a1 + 256;
  v59 = (struct _RTL_CRITICAL_SECTION *)(a1 + 244);
  v52 = *(_DWORD *)(a1 + 240) == 1;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v53);
  EndpointCharacteristicsDescriptor = Microsoft::WRL::Details::MakeAndInitialize<CAudioStream,CAudioStream,IAudioProcess * &,bool,unsigned long &,VadServerSettings *,enum SYSTEM_AUDIO_STREAM_TYPE &,ATL::CComHeapPtr<tWAVEFORMATEX> &,unsigned short *>(
                                        (unsigned int)&v53,
                                        (unsigned int)&v57,
                                        (unsigned int)&v52,
                                        (int)a1 + 244,
                                        (__int64)v58,
                                        (__int64)&v80,
                                        a1 + 152,
                                        (__int64)v78);
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v39 = 1627LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v39,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v54);
LABEL_16:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v55);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) == 0 )
      return (unsigned int)EndpointCharacteristicsDescriptor;
LABEL_17:
    McGenEventWrite_EtwEventWriteTransfer(v18, (__int64)&VadServer_CreateStream_Task_Stop, v19, 1, (__int64)v78);
    return (unsigned int)EndpointCharacteristicsDescriptor;
  }
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        *(const unsigned __int16 **)(a1 + 192),
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)&v55);
  if ( EndpointCharacteristicsDescriptor < 0 )
  {
    v39 = 1630LL;
    goto LABEL_53;
  }
  v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 120LL))(a2);
  LODWORD(v57) = GetAudioResourcePriority(
                   (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)(a3 - 1 <= 2),
                   *(_DWORD *)(a1 + 304),
                   0,
                   v40);
  v65 = 0LL;
  v66 = v41;
  v67 = v41;
  v68 = v41;
  v69 = v41;
  v70 = v41;
  v71 = v41;
  v72 = v41;
  v73 = v41;
  v74 = v41;
  v75 = v41;
  v76 &= v42;
  v77 = v41;
  v78[0] = *(__int64 **)(*(_QWORD *)g_AudioResourceManager + 24LL);
  v43 = v61;
  v44 = v62;
  v25 = ((__int64 (__fastcall *)(struct IAudioResourceManager *, __int64, unsigned __int64, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, __int128 *, _DWORD, _DWORD, struct CAudioStream *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _DWORD, __int64, _DWORD, __int64, _DWORD, _QWORD, _DWORD, _QWORD, __int128 *))v78[0])(
          g_AudioResourceManager,
          v63,
          ((unsigned __int64)v53 + 8) & -(__int64)(v53 != 0LL),
          *(unsigned int *)(v62 + 304),
          *(_DWORD *)(v62 + 312),
          *(_DWORD *)(v62 + 384),
          *(_DWORD *)(v62 + 320),
          *(_DWORD *)(v62 + 324),
          *(_DWORD *)(v62 + 388),
          *(_DWORD *)(v62 + 400),
          *(_QWORD *)(v62 + 408),
          &v55,
          v59->DebugInfo,
          *(_DWORD *)(a1 + 240),
          v53,
          *(_QWORD *)(a1 + 152),
          v61,
          a5,
          a1 + 272,
          a1 + 288,
          *(_QWORD *)v58,
          *(_DWORD *)(a1 + 40),
          v60,
          v57,
          a1 + 328,
          *(_DWORD *)(a1 + 416),
          *(_QWORD *)(a1 + 424),
          *(_DWORD *)(a1 + 436),
          *(_QWORD *)(a1 + 496),
          &v65);
  if ( v25 < 0 )
  {
    if ( v68 )
      CAudioStream::CloseAudioHandle(v53);
LABEL_59:
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v65);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v54);
    goto LABEL_25;
  }
  v45 = (*(__int64 (__fastcall **)(_QWORD, struct CAudioStream *))(**(_QWORD **)(v44 + 144) + 216LL))(
          *(_QWORD *)(v44 + 144),
          v53);
  v25 = v45;
  if ( v45 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x699,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v45);
    if ( v68 )
      CAudioStream::CloseAudioHandle(v53);
    goto LABEL_59;
  }
  v46 = v64;
  v47 = SystemAudioStream::move_to((SystemAudioStream *)&v65, v64);
  EndpointCharacteristicsDescriptor = v47;
  if ( v47 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x69E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v47);
    CAudioSession::RemoveStream(*(CAudioSession **)(v44 + 144), v53, 1);
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v65);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v54);
LABEL_34:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v55);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) == 0 )
      return (unsigned int)EndpointCharacteristicsDescriptor;
    goto LABEL_17;
  }
  v48 = v53;
  *((_QWORD *)v46 + 5) = *((_QWORD *)v53 + 52);
  *(_QWORD *)(v44 + 544) = *((_QWORD *)v48 + 52);
  v49 = StreamRequiresPreStartRegistration((struct IAudioStreamInfo *)(((unsigned __int64)v48 + 8) & -(__int64)(v48 != 0LL)));
  *(_BYTE *)(v44 + 512) = v49;
  *((_DWORD *)v46 + 235) = v49;
  *(_QWORD *)(v44 + 528) = v43;
  *(_QWORD *)(v44 + 536) = a5;
  wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::operator=((__int64 *)(v44 + 176), (__int64 *)&v53);
  SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v65);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v53);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v54);
LABEL_67:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v55);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(v50, (__int64)&VadServer_CreateStream_Task_Stop, v51, 1, (__int64)v78);
  return 0LL;
}
