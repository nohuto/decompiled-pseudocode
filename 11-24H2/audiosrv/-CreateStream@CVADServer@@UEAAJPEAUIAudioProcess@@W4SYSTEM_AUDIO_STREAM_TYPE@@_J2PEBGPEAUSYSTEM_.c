/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180080980
 * Callers:
 *     AudioServerCreateStream @ 0x180081870 (AudioServerCreateStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x18001958C (--1SystemAudioStream@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180026188 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180026484 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180046CC0 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180046DBC (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180050F78 (-move_to@SystemAudioStream@@QEAAJPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ?StreamRequiresPreStartRegistration@@YA_NPEAUIAudioStreamInfo@@@Z @ 0x180057D5C (-StreamRequiresPreStartRegistration@@YA_NPEAUIAudioStreamInfo@@@Z.c)
 *     ?GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z @ 0x180058818 (-GetAudioResourcePriority@@YAKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@KHH@Z.c)
 *     ??4?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x18005937C (--4-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     ??$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@PEAG@Details@WRL@Microsoft@@YAJPEAPEAVCAudioStream@@AEAPEAUIAudioProcess@@$$QEA_NAEAK$$QEAPEAUVadServerSettings@@AEAW4SYSTEM_AUDIO_STREAM_TYPE@@AEAV?$CComHeapPtr@UtWAVEFORMATEX@@@ATL@@$$QEAPEAG@Z @ 0x18010B35C (--$MakeAndInitialize@VCAudioStream@@V1@AEAPEAUIAudioProcess@@_NAEAKPEAUVadServerSettings@@AEAW4S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _QWORD),
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        void *a7)
{
  void *v10; // rsi
  int *v11; // rbx
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v16; // rax
  char *v17; // rcx
  int EndpointCharacteristicsDescriptor; // esi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  int v23; // r8d
  __int64 v24; // r14
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  struct SYSTEM_AUDIO_STREAM *v29; // rsi
  int v30; // eax
  struct CAudioStream *v31; // rax
  unsigned __int8 started; // al
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r8
  bool v36; // [rsp+100h] [rbp-80h] BYREF
  struct CAudioStream *v37; // [rsp+108h] [rbp-78h] BYREF
  __int128 v38; // [rsp+110h] [rbp-70h] BYREF
  __int64 v39; // [rsp+120h] [rbp-60h]
  __int64 v40; // [rsp+128h] [rbp-58h] BYREF
  __int64 (__fastcall *v41)(struct IAudioResourceManager *, _QWORD, unsigned __int64, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, __int128 *, _DWORD, _DWORD, struct CAudioStream *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _DWORD, __int64, _DWORD, __int64, _DWORD, _QWORD, _DWORD, _QWORD, __int128 *); // [rsp+130h] [rbp-50h] BYREF
  int v42[2]; // [rsp+138h] [rbp-48h] BYREF
  __int64 v43; // [rsp+140h] [rbp-40h]
  __int64 v44; // [rsp+148h] [rbp-38h]
  _DWORD *v45; // [rsp+150h] [rbp-30h]
  __int64 v46; // [rsp+158h] [rbp-28h]
  __int64 (__fastcall *v47)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _QWORD); // [rsp+160h] [rbp-20h]
  __int128 v48; // [rsp+170h] [rbp-10h] BYREF
  int v49; // [rsp+180h] [rbp+0h]
  __int64 v50; // [rsp+188h] [rbp+8h]
  __int64 v51; // [rsp+190h] [rbp+10h]
  __int64 v52; // [rsp+198h] [rbp+18h]
  __int64 v53; // [rsp+1A0h] [rbp+20h]
  __int64 v54; // [rsp+2D0h] [rbp+150h]
  __int64 v55; // [rsp+400h] [rbp+280h]
  int v56; // [rsp+530h] [rbp+3B0h]
  __int64 v57; // [rsp+538h] [rbp+3B8h]
  __int64 v58; // [rsp+668h] [rbp+4E8h]
  int v59; // [rsp+670h] [rbp+4F0h]
  int v60; // [rsp+674h] [rbp+4F4h]
  struct SYSTEM_AUDIO_STREAM *v61[2]; // [rsp+680h] [rbp+500h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6E8h] [rbp+568h]
  unsigned int v63; // [rsp+700h] [rbp+580h] BYREF

  v63 = a3;
  v44 = a4;
  v47 = a2;
  v46 = a1;
  v41 = (__int64 (__fastcall *)(struct IAudioResourceManager *, _QWORD, unsigned __int64, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, __int128 *, _DWORD, _DWORD, struct CAudioStream *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _DWORD, __int64, _DWORD, __int64, _DWORD, _QWORD, _DWORD, _QWORD, __int128 *))a2;
  v43 = a6;
  v10 = a7;
  v61[0] = (struct SYSTEM_AUDIO_STREAM *)a7;
  v11 = (int *)(a1 + 304);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      *(unsigned int *)(a1 + 324),
      (int)&VadServer_CreateStream_Task_Start,
      *(const wchar_t **)(a1 + 192),
      *v11,
      *(_DWORD *)(a1 + 312),
      *(_DWORD *)(a1 + 324),
      *(_DWORD *)(a1 + 308));
  v38 = 0LL;
  v39 = 0LL;
  memset_0(v10, 0, 0x4E8uLL);
  if ( !*(_DWORD *)(a1 + 160) )
  {
    v12 = -2004287487;
    v13 = 1513LL;
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 176) )
  {
    v12 = -2004287486;
    v13 = 1514LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v12);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v38);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (__int64)v61,
        (__int64)&VadServer_CreateStream_Task_Stop,
        v14,
        1LL,
        (__int64)v61);
    return v12;
  }
  v16 = (unsigned int)*v11;
  if ( a3 <= 3
    && (!a3 && dword_180199790[3 * v16]
     || a3 == 1 && dword_180199790[3 * (unsigned int)v16 + 1]
     || (v17 = (char *)&dword_180199790[3 * (unsigned int)v16], a3 == 2) && *((_DWORD *)v17 + 2)
     || a3 == 3 && *((_DWORD *)v17 + 2)) )
  {
    v37 = 0LL;
    v40 = *(_QWORD *)(a1 + 192);
    *(_QWORD *)v42 = a1 + 256;
    v45 = (_DWORD *)(a1 + 244);
    v36 = *(_DWORD *)(a1 + 240) == 1;
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v37);
    EndpointCharacteristicsDescriptor = Microsoft::WRL::Details::MakeAndInitialize<CAudioStream,CAudioStream,IAudioProcess * &,bool,unsigned long &,VadServerSettings *,enum SYSTEM_AUDIO_STREAM_TYPE &,ATL::CComHeapPtr<tWAVEFORMATEX> &,unsigned short *>(
                                          (unsigned int)&v37,
                                          (unsigned int)&v41,
                                          (unsigned int)&v36,
                                          (int)a1 + 244,
                                          (__int64)v42,
                                          (__int64)&v63,
                                          a1 + 152,
                                          (__int64)&v40);
    if ( EndpointCharacteristicsDescriptor < 0 )
    {
      v19 = 1521LL;
LABEL_21:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v38);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(v20, (__int64)&VadServer_CreateStream_Task_Stop, v21, 1LL, (__int64)v61);
      return (unsigned int)EndpointCharacteristicsDescriptor;
    }
    EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                          *(const unsigned __int16 **)(a1 + 192),
                                          0,
                                          (struct EndpointCharacteristicsDescriptor *)&v38);
    if ( EndpointCharacteristicsDescriptor < 0 )
    {
      v19 = 1524LL;
      goto LABEL_21;
    }
    v22 = (*(__int64 (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _DWORD, _QWORD, _QWORD)))(*(_QWORD *)a2 + 120LL))(a2);
    LODWORD(v40) = GetAudioResourcePriority(
                     (enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001)(a3 - 1 <= 2),
                     *(_DWORD *)(a1 + 304),
                     0,
                     v22);
    v48 = 0LL;
    v49 = 0;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0;
    v57 = 0LL;
    v58 = 0LL;
    v59 &= v23;
    v60 = 0;
    v41 = *(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, unsigned __int64, _QWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD, __int128 *, _DWORD, _DWORD, struct CAudioStream *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _DWORD, __int64, _DWORD, __int64, _DWORD, _QWORD, _DWORD, _QWORD, __int128 *))(*(_QWORD *)g_AudioResourceManager + 24LL);
    v24 = v44;
    v25 = v46;
    v12 = v41(
            g_AudioResourceManager,
            v47,
            ((unsigned __int64)v37 + 8) & -(__int64)(v37 != 0LL),
            *(unsigned int *)(v46 + 304),
            *(_DWORD *)(v46 + 312),
            *(_DWORD *)(v46 + 384),
            *(_DWORD *)(v46 + 320),
            *(_DWORD *)(v46 + 324),
            *(_DWORD *)(v46 + 388),
            *(_DWORD *)(v46 + 400),
            *(_QWORD *)(v46 + 408),
            &v38,
            *v45,
            *(_DWORD *)(a1 + 240),
            v37,
            *(_QWORD *)(a1 + 152),
            v44,
            a5,
            a1 + 272,
            a1 + 288,
            *(_QWORD *)v42,
            *(_DWORD *)(a1 + 40),
            v43,
            v40,
            a1 + 328,
            *(_DWORD *)(a1 + 416),
            *(_QWORD *)(a1 + 424),
            *(_DWORD *)(a1 + 436),
            *(_QWORD *)(a1 + 496),
            &v48);
    if ( (v12 & 0x80000000) != 0 )
    {
      if ( v51 )
        CAudioStream::CloseAudioHandle(v37);
      goto LABEL_29;
    }
    v28 = (*(__int64 (__fastcall **)(_QWORD, struct CAudioStream *))(**(_QWORD **)(v25 + 144) + 216LL))(
            *(_QWORD *)(v25 + 144),
            v37);
    v12 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x62F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v28);
      if ( v51 )
        CAudioStream::CloseAudioHandle(v37);
      goto LABEL_29;
    }
    v29 = v61[0];
    v30 = SystemAudioStream::move_to((SystemAudioStream *)&v48, v61[0]);
    v12 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x634,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v30);
      CAudioSession::RemoveStream(*(CAudioSession **)(v25 + 144), v37, 1);
LABEL_29:
      SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v48);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v38);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(v26, (__int64)&VadServer_CreateStream_Task_Stop, v27, 1LL, (__int64)v61);
      return v12;
    }
    v31 = v37;
    *((_QWORD *)v29 + 5) = *((_QWORD *)v37 + 52);
    *(_QWORD *)(v25 + 544) = *((_QWORD *)v31 + 52);
    started = StreamRequiresPreStartRegistration((struct IAudioStreamInfo *)(((unsigned __int64)v31 + 8) & -(__int64)(v31 != 0LL)));
    *(_BYTE *)(v25 + 512) = started;
    *((_DWORD *)v29 + 235) = started;
    *(_QWORD *)(v25 + 528) = v24;
    *(_QWORD *)(v25 + 536) = a5;
    EnterCriticalSection((LPCRITICAL_SECTION)(v25 + 200));
    v61[0] = (struct SYSTEM_AUDIO_STREAM *)(v25 + 200);
    wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>::operator=((__int64 *)(v25 + 176), (__int64 *)&v37);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)v61);
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v48);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v37);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v38);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(v33, (__int64)&VadServer_CreateStream_Task_Stop, v34, 1LL, (__int64)v61);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5ED,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v38);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        (__int64)v61,
        (__int64)&VadServer_CreateStream_Task_Stop,
        v35,
        1LL,
        (__int64)v61);
    return 2147942487LL;
  }
}
