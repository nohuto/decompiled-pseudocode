/*
 * XREFs of AudioServerIsFormatSupported @ 0x180083480
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x180082E80 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x18000DA40 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18002BBD8 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002DFA0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18002E8AC (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x18002F4E8 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003B110 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180040830 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180042840 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180046CC0 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180046DBC (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180050180 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065C1C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180066578 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ??I?$com_ptr_t@UISaDeviceResourceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUISaDeviceResourceManager@@XZ @ 0x180068360 (--I-$com_ptr_t@UISaDeviceResourceManager@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUISaDevice.c)
 *     ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x18006A4E0 (-AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180072AA4 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     swprintf_s @ 0x1800A4FDC (swprintf_s.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer_Old@$00@@QEAA@XZ @ 0x1800AD7E4 (--1-$CWatchdogTimer_Old@$00@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18010C330 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x180135ABC (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerIsFormatSupported(
        __int64 a1,
        unsigned __int16 *a2,
        unsigned int a3,
        __int128 *a4,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  unsigned int v7; // esi
  void *v8; // rbx
  void *v9; // rdi
  __int64 v10; // rcx
  void *v11; // r14
  struct _FILETIME v12; // rbx
  void *v13; // r14
  struct _FILETIME v14; // rdi
  unsigned __int16 *v15; // r14
  __int64 v16; // rdx
  int MixFormat; // esi
  __int64 v18; // rdx
  IID v19; // xmm0
  HRESULT v20; // eax
  LSTATUS v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  int v25; // eax
  struct IMMDevice *v26; // r14
  void *v27; // rax
  void *v28; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v29; // esi
  __int64 v30; // rax
  int v31; // eax
  void *v32; // rcx
  void *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // r13d
  int v37; // eax
  struct tWAVEFORMATEX *v38; // r8
  void *v39; // rcx
  void *v40; // r8
  LPOLESTR v41; // rcx
  void *v42; // rcx
  unsigned int v43; // r12d
  __int64 v44; // rsi
  int v45; // ecx
  __int64 v46; // rax
  LPOLESTR v47; // rcx
  void *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // r8
  LPOLESTR v51; // rcx
  LPOLESTR v52; // rcx
  int v53; // eax
  int v54; // eax
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rax
  LPOLESTR v58; // rcx
  void *v59; // rcx
  LPOLESTR v60; // rcx
  void *v61; // rcx
  void *v62; // rax
  LPOLESTR v63; // rcx
  void *v64; // rcx
  LPOLESTR v65; // rcx
  unsigned int v66; // esi
  int PropertyStoreProperty; // eax
  int v68; // esi
  unsigned int v69; // r12d
  int v70; // eax
  int v71; // r13d
  __int64 v72; // rax
  int v73; // eax
  unsigned int v74; // r13d
  void *v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // r8
  void *v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // r8
  int AcceptableSPDIFTypeForDevice; // eax
  void *v82; // rcx
  struct IMMDevice v83; // rax
  int v84; // eax
  void *v85; // rcx
  void *v86; // rax
  void *v87; // rcx
  void *v88; // rcx
  __int64 v89; // rax
  CEndpointCharacteristics *v90; // rsi
  __int64 *v91; // rax
  void *v92; // rcx
  void *v93; // rcx
  void *v94; // rcx
  int v95; // eax
  void *v96; // rcx
  __int64 v97; // rcx
  __int64 v98; // r8
  void *v99; // rcx
  void *v100; // rcx
  CEndpointCharacteristics **phkResult; // [rsp+20h] [rbp-E0h]
  struct tWAVEFORMATEX *phkResulta; // [rsp+20h] [rbp-E0h]
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  LPOLESTR lpsz; // [rsp+88h] [rbp-78h] BYREF
  CEndpointCharacteristics *v105[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-60h]
  HKEY hKey[2]; // [rsp+B0h] [rbp-50h] BYREF
  char v108; // [rsp+C0h] [rbp-40h]
  unsigned int v109; // [rsp+D0h] [rbp-30h]
  IID rclsid; // [rsp+E0h] [rbp-20h] BYREF
  char v111; // [rsp+F0h] [rbp-10h]
  __int64 v112; // [rsp+100h] [rbp+0h] BYREF
  struct _GUID v113; // [rsp+110h] [rbp+10h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int16 *v115; // [rsp+138h] [rbp+38h]
  __int128 v116; // [rsp+140h] [rbp+40h]
  __int128 v117; // [rsp+150h] [rbp+50h] BYREF
  struct _GUID v118; // [rsp+160h] [rbp+60h] BYREF
  wchar_t Buffer[264]; // [rsp+170h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+3D8h] [rbp+2D8h]

  v7 = a3;
  v109 = a3;
  v115 = a2;
  v112 = a1;
  *(_QWORD *)&v118.Data1 = Src;
  *(_QWORD *)&v113.Data1 = a6;
  v116 = *a4;
  v117 = v116;
  EtwEventActivityIdControl(4LL, &v117);
  v8 = 0LL;
  v9 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v11 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v11 )
      goto LABEL_7;
    v12 = g_AudioHealthMonitor;
    AudioSrvTelemetryProvider::Instance();
    v8 = (void *)CWatchdogTimer<1>::CWatchdogTimer<1>(v11, v12);
  }
  else
  {
    v13 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v13 )
      goto LABEL_7;
    v14 = g_AudioHealthMonitor;
    AudioSrvTelemetryProvider::Instance();
    v9 = (void *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v13, v14);
  }
  v7 = v109;
LABEL_7:
  v15 = v115;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      v10,
      (int)&AudioSrv_IsFormatSupported_Task_Start,
      v115,
      *((_DWORD *)a4 + 12),
      *((_DWORD *)a4 + 14),
      *((_DWORD *)a4 + 17),
      *((_DWORD *)a4 + 13));
  if ( !v7 && !a6 )
  {
    v16 = 3767LL;
    MixFormat = -2147024809;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
LABEL_34:
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v22,
        (__int64)&AudioSrv_IsFormatSupported_Task_Stop,
        v23,
        1LL,
        (__int64)&v118);
    if ( v9 )
    {
      CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v9);
      operator delete(v9, (const struct std::nothrow_t *)0x38);
    }
    if ( v8 )
    {
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v8);
      operator delete(v8, (const struct std::nothrow_t *)0x38);
    }
    EtwEventActivityIdControl(4LL, &v117);
    return (unsigned int)MixFormat;
  }
  if ( *((_DWORD *)a4 + 12) >= 0x18u )
  {
    v18 = 1337LL;
LABEL_32:
    MixFormat = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    v16 = 3769LL;
    goto LABEL_33;
  }
  v19 = (IID)a4[1];
  rclsid = v19;
  if ( *(_QWORD *)&v19.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    || _mm_srli_si128((__m128i)v19, 8).m128i_u64[0] != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    lpsz = 0LL;
    v20 = StringFromCLSID(&rclsid, &lpsz);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v20);
LABEL_23:
      if ( lpsz )
        CoTaskMemFree(lpsz);
      v18 = 1339LL;
      goto LABEL_32;
    }
    if ( swprintf_s(
           Buffer,
           0x104uLL,
           L"%s\\%s",
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\",
           lpsz) == -1 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007007ALL);
      goto LABEL_23;
    }
    hKey[0] = 0LL;
    v21 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, Buffer, 0, 0x20019u, hKey);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x530,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v21);
      if ( hKey[0] )
        RegCloseKey(hKey[0]);
      goto LABEL_23;
    }
    if ( hKey[0] )
      RegCloseKey(hKey[0]);
    if ( lpsz )
      CoTaskMemFree(lpsz);
  }
  if ( *((_DWORD *)a4 + 13) > 4u )
  {
    v18 = 1341LL;
    goto LABEL_32;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( Src->wFormatTag == 0xFFFE && Src->cbSize < 0x16u )
  {
    v16 = 3776LL;
    MixFormat = -2147024809;
    goto LABEL_33;
  }
  *(_OWORD *)v105 = 0LL;
  v106 = 0LL;
  phkResult = v105;
  v25 = (*(__int64 (__fastcall **)(PVOID, unsigned __int16 *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                             + 40LL))(
          g_pEndpointCharacteristicsCache,
          v15,
          0LL,
          0LL);
  MixFormat = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEC5,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v25);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v105);
    goto LABEL_34;
  }
  v26 = (struct IMMDevice *)*((_QWORD *)v105[0] + 5);
  if ( v26 )
    ((void (__fastcall *)(_QWORD))v26->lpVtbl->AddRef)(*((_QWORD *)v105[0] + 5));
  if ( Src->nChannels > 2u && ((Src->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xECC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890008LL);
    if ( v26 )
      ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
LABEL_120:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v105);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v49,
        (__int64)&AudioSrv_IsFormatSupported_Task_Stop,
        v50,
        1LL,
        (__int64)&v118);
    if ( v9 )
    {
      CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v9);
      operator delete(v9, (const struct std::nothrow_t *)0x38);
    }
    if ( v8 )
    {
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v8);
      operator delete(v8, (const struct std::nothrow_t *)0x38);
    }
    EtwEventActivityIdControl(4LL, &v117);
    return 2290679816LL;
  }
  pv = 0LL;
  hKey[0] = (HKEY)&pv;
  hKey[1] = 0LL;
  v108 = 1;
  MixFormat = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)&hKey[1]);
  if ( v108 )
  {
    v27 = *(void **)hKey[0];
    *(_QWORD *)hKey[0] = hKey[1];
    if ( v27 )
      CoTaskMemFree(v27);
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xED0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat);
    v28 = pv;
    pv = 0LL;
    if ( v28 )
      CoTaskMemFree(v28);
    if ( v26 )
      ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
LABEL_268:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v105);
    goto LABEL_34;
  }
  v29 = *((_DWORD *)a4 + 13);
  if ( v29 == eOffloadConnector )
  {
    v30 = *(_QWORD *)g_PolicyManager;
    *(_QWORD *)&rclsid.Data1 = 0LL;
    v31 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, IID *))(v30 + 32))(
            g_PolicyManager,
            v112,
            &rclsid);
    MixFormat = v31;
    if ( v31 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v31);
      if ( *(_QWORD *)&rclsid.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 16LL))(*(_QWORD *)&rclsid.Data1);
      v32 = pv;
      pv = 0LL;
      if ( v32 )
        CoTaskMemFree(v32);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      goto LABEL_268;
    }
    if ( !AllowUseofOffloadResources(v105[0], *(struct IAudioProcess **)&rclsid.Data1, *((_DWORD *)a4 + 12)) )
    {
      if ( *(_QWORD *)&rclsid.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 16LL))(*(_QWORD *)&rclsid.Data1);
      v33 = pv;
      pv = 0LL;
      if ( v33 )
        CoTaskMemFree(v33);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v105);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v34,
          (__int64)&AudioSrv_IsFormatSupported_Task_Stop,
          v35,
          1LL,
          (__int64)&v118);
      if ( v9 )
      {
        CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v9);
        operator delete(v9, (const struct std::nothrow_t *)0x38);
      }
      if ( v8 )
      {
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v8);
        operator delete(v8, (const struct std::nothrow_t *)0x38);
      }
      EtwEventActivityIdControl(4LL, &v117);
      return 1LL;
    }
    v36 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 120LL))(*(_QWORD *)&rclsid.Data1);
    *(_OWORD *)hKey = 0LL;
    v118 = 0LL;
    v113 = 0LL;
    v37 = DeriveAudioProcessingModeConfiguration(
            *((_DWORD *)a4 + 12),
            *((_DWORD *)a4 + 14),
            *((_DWORD *)a4 + 32),
            v105,
            0,
            v109,
            eOffloadConnector,
            0LL,
            0,
            0,
            (__int64)Src,
            &v113,
            &v118,
            (struct _GUID *)hKey,
            0LL,
            0LL);
    MixFormat = v37;
    if ( v37 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEF1,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v37);
      if ( *(_QWORD *)&rclsid.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 16LL))(*(_QWORD *)&rclsid.Data1);
      v39 = pv;
      pv = 0LL;
      if ( v39 )
        CoTaskMemFree(v39);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      goto LABEL_268;
    }
    lpsz = 0LL;
    hKey[0] = (HKEY)&lpsz;
    hKey[1] = 0LL;
    v108 = 1;
    MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                  v105,
                  (struct tWAVEFORMATEX *)pv,
                  v38,
                  &v118,
                  phkResulta,
                  *((_DWORD *)a4 + 12),
                  (struct tWAVEFORMATEX **)&hKey[1]);
    if ( v108 )
    {
      v40 = *(void **)hKey[0];
      *(_QWORD *)hKey[0] = hKey[1];
      if ( v40 )
        CoTaskMemFree(v40);
    }
    if ( MixFormat < 0 )
    {
      v41 = lpsz;
      lpsz = 0LL;
      if ( v41 )
        CoTaskMemFree(v41);
      if ( *(_QWORD *)&rclsid.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 16LL))(*(_QWORD *)&rclsid.Data1);
      v42 = pv;
      pv = 0LL;
      if ( v42 )
        CoTaskMemFree(v42);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      goto LABEL_268;
    }
    v43 = *((_DWORD *)a4 + 13);
    v44 = *((unsigned int *)a4 + 12);
    if ( (*(unsigned int (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v105[0] + 56LL))(v105[0]) )
      v45 = dword_180195250[v44];
    else
      v45 = dword_1801951F0[v44];
    v46 = *(_QWORD *)g_AudioResourceManager;
    v118 = v113;
    LODWORD(phkResult) = 2 * (v45 + (v36 != 0 ? 0x10 : 0)) + 1;
    if ( !(*(unsigned int (__fastcall **)(struct IAudioResourceManager *, CEndpointCharacteristics **, struct _GUID *, _QWORD))(v46 + 56))(
            g_AudioResourceManager,
            v105,
            &v118,
            v43) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF00,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890008LL);
      v47 = lpsz;
      lpsz = 0LL;
      if ( v47 )
        CoTaskMemFree(v47);
      if ( *(_QWORD *)&rclsid.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 16LL))(*(_QWORD *)&rclsid.Data1);
      v48 = pv;
      pv = 0LL;
      if ( v48 )
        CoTaskMemFree(v48);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      goto LABEL_120;
    }
    v51 = lpsz;
    lpsz = 0LL;
    if ( v51 )
      CoTaskMemFree(v51);
    v52 = *(LPOLESTR *)&rclsid.Data1;
LABEL_293:
    if ( v52 )
      (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v52 + 16LL))(v52);
    goto LABEL_295;
  }
  if ( !v109 )
  {
    v113 = 0LL;
    v118 = 0LL;
    *(_OWORD *)hKey = 0LL;
    v53 = (*(__int64 (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v105[0] + 56LL))(v105[0]);
    v54 = DeriveAudioProcessingModeConfiguration(
            *((_DWORD *)a4 + 12),
            *((_DWORD *)a4 + 14),
            *((_DWORD *)a4 + 32),
            v105,
            v53 == 1,
            0,
            v29,
            0LL,
            0,
            0,
            0LL,
            (struct _GUID *)hKey,
            &v118,
            &v113,
            0LL,
            0LL);
    MixFormat = v54;
    if ( v54 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF1B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v54);
      v55 = pv;
      pv = 0LL;
      if ( v55 )
        CoTaskMemFree(v55);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      goto LABEL_268;
    }
    if ( *((_DWORD *)a4 + 17) )
    {
      lpsz = 0LL;
      *(_QWORD *)&rclsid.Data1 = &lpsz;
      *(_QWORD *)rclsid.Data4 = 0LL;
      v111 = 1;
      MixFormat = DeriveConnectorFormatFromStreamFormat(
                    v105,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 13),
                    (IAudioMediaType *)pv,
                    &v113,
                    &v118,
                    (struct _GUID *)hKey,
                    1,
                    (struct tWAVEFORMATEX **)rclsid.Data4);
      if ( v111 )
      {
        v62 = **(void ***)&rclsid.Data1;
        **(_QWORD **)&rclsid.Data1 = *(_QWORD *)rclsid.Data4;
        if ( v62 )
          CoTaskMemFree(v62);
      }
      if ( MixFormat < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF3C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat);
        v63 = lpsz;
        lpsz = 0LL;
        if ( v63 )
          CoTaskMemFree(v63);
        v64 = pv;
        pv = 0LL;
        if ( v64 )
          CoTaskMemFree(v64);
        if ( v26 )
          ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
        goto LABEL_268;
      }
      v65 = lpsz;
      lpsz = 0LL;
      if ( v65 )
        CoTaskMemFree(v65);
      goto LABEL_295;
    }
    if ( !*((_DWORD *)a4 + 33) )
    {
      lpsz = 0LL;
      hKey[0] = (HKEY)&lpsz;
      hKey[1] = 0LL;
      v108 = 1;
      MixFormat = EffectPack::GetMixFormat(
                    v105[1],
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 13),
                    &v113,
                    (struct tWAVEFORMATEX **)&hKey[1]);
      if ( v108 )
      {
        v57 = *(void **)hKey[0];
        *(_QWORD *)hKey[0] = hKey[1];
        if ( v57 )
          CoTaskMemFree(v57);
      }
      if ( MixFormat >= 0 )
      {
        MixFormat = IsStreamFormatSupportedForMixFormat(
                      (struct EndpointCharacteristicsDescriptor *)v105,
                      &v118,
                      *((_DWORD *)a4 + 13),
                      (const struct tWAVEFORMATEX *)lpsz,
                      (struct tWAVEFORMATEX *)pv,
                      a6);
        v60 = lpsz;
        lpsz = 0LL;
        if ( v60 )
          CoTaskMemFree(v60);
        v61 = pv;
        pv = 0LL;
        if ( v61 )
          CoTaskMemFree(v61);
        if ( v26 )
          ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF2C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat);
        v58 = lpsz;
        lpsz = 0LL;
        if ( v58 )
          CoTaskMemFree(v58);
        v59 = pv;
        pv = 0LL;
        if ( v59 )
          CoTaskMemFree(v59);
        if ( v26 )
          ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      }
      goto LABEL_268;
    }
    if ( *(_WORD *)pv == 0xFFFE )
    {
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3)
        && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)pv + 4)
        || *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3)
        && *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)pv + 4) )
      {
        goto LABEL_295;
      }
    }
    else if ( ((*(_WORD *)pv - 1) & 0xFFFD) == 0 )
    {
LABEL_295:
      v118 = *(struct _GUID *)*((_QWORD *)v105[1] + 196);
      v95 = PublishApoTelemetry((CEndpointStoreCache *)v115, &v118);
      if ( v95 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xF7F,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v95,
          (int)phkResult);
      v96 = pv;
      pv = 0LL;
      if ( v96 )
        CoTaskMemFree(v96);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v105);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v97,
          (__int64)&AudioSrv_IsFormatSupported_Task_Stop,
          v98,
          1LL,
          (__int64)&v118);
      if ( v9 )
      {
        CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v9);
        operator delete(v9, (const struct std::nothrow_t *)0x38);
      }
      if ( v8 )
      {
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v8);
        operator delete(v8, (const struct std::nothrow_t *)0x38);
      }
      EtwEventActivityIdControl(4LL, &v117);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF26,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890008LL);
    v56 = pv;
    pv = 0LL;
    if ( v56 )
      CoTaskMemFree(v56);
    if ( v26 )
      ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
    goto LABEL_120;
  }
  v66 = 0;
  memset(&pvar, 0, sizeof(pvar));
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(v26, 0, &PKEY_Endpoint_AllowExclusive, &pvar);
  if ( PropertyStoreProperty >= 0 )
  {
    if ( pvar.vt )
      LOBYTE(v66) = pvar.iVal == 0;
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25LL,
      &WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids,
      (unsigned int)PropertyStoreProperty);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids, v66);
  }
  v68 = v66 ^ 1;
  v69 = 0;
  memset(&pvar, 0, sizeof(pvar));
  v70 = CPolicyConfig::GetPropertyStoreProperty(v26, 0, &PKEY_Endpoint_AllowOffloading, &pvar);
  if ( v70 >= 0 )
  {
    if ( pvar.vt )
      LOBYTE(v69) = pvar.iVal == 0;
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      27LL,
      &WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids,
      (unsigned int)v70);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids, v69);
  }
  if ( !v69 || (v71 = v68) != 0 )
  {
    v71 = v68;
    if ( g_PolicyManager )
    {
      v72 = *(_QWORD *)g_PolicyManager;
      lpsz = 0LL;
      v73 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, LPOLESTR *))(v72 + 32))(
              g_PolicyManager,
              v112,
              &lpsz);
      v74 = v73;
      if ( v73 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF49,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v73);
        if ( lpsz )
          (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz + 16LL))(lpsz);
        v75 = pv;
        pv = 0LL;
        if ( v75 )
          CoTaskMemFree(v75);
        if ( v26 )
          ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v105);
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            v76,
            (__int64)&AudioSrv_IsFormatSupported_Task_Stop,
            v77,
            1LL,
            (__int64)&v118);
        if ( v9 )
        {
          CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v9);
          operator delete(v9, (const struct std::nothrow_t *)0x38);
        }
        if ( v8 )
        {
          CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v8);
          operator delete(v8, (const struct std::nothrow_t *)0x38);
        }
        EtwEventActivityIdControl(4LL, &v117);
        return v74;
      }
      v71 = v68;
      if ( v68 )
        v71 = (*(__int64 (__fastcall **)(LPOLESTR, _QWORD, __int64))(*(_QWORD *)lpsz + 144LL))(
                lpsz,
                *((unsigned int *)a4 + 12),
                1LL);
      if ( !v69 && (*(unsigned int (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz + 88LL))(lpsz) )
        LOBYTE(v69) = AllowUseofOffloadResources(v105[0], (struct IAudioProcess *)lpsz, *((_DWORD *)a4 + 12)) == 0;
      if ( lpsz )
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz + 16LL))(lpsz);
    }
  }
  v78 = pv;
  if ( v71 )
  {
    if ( IsSPDIFFormat((const struct tWAVEFORMATEX *)pv) && CEndpointCharacteristics::IsSPDIFEndpoint(v105[0]) )
    {
      AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v26, (const struct tWAVEFORMATEX *)pv, 0LL, v69);
      MixFormat = AcceptableSPDIFTypeForDevice;
      if ( AcceptableSPDIFTypeForDevice < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF5E,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)AcceptableSPDIFTypeForDevice);
        v82 = pv;
        pv = 0LL;
        if ( v82 )
          CoTaskMemFree(v82);
        if ( v26 )
          ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
        goto LABEL_268;
      }
      goto LABEL_295;
    }
    v83.lpVtbl = v26->lpVtbl;
    lpsz = 0LL;
    v84 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, LPOLESTR *))v83.lpVtbl->Activate)(
            v26,
            &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
            23LL,
            0LL,
            &lpsz);
    MixFormat = v84;
    if ( v84 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF64,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v84);
      if ( lpsz )
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz + 16LL))(lpsz);
      v85 = pv;
      pv = 0LL;
      if ( v85 )
        CoTaskMemFree(v85);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      goto LABEL_268;
    }
    *(_QWORD *)&rclsid.Data1 = 0LL;
    *(_QWORD *)&pvar.vt = &rclsid;
    pvar.hVal.QuadPart = 0LL;
    *((_BYTE *)&pvar.decVal + 16) = 1;
    MixFormat = CreateKSFormatFromWFXFormat(
                  (const struct tWAVEFORMATEX *)pv,
                  (struct KSDATAFORMAT_WAVEFORMATEX **)&pvar.hVal.QuadPart);
    if ( *((_BYTE *)&pvar.decVal + 16) )
    {
      v86 = **(void ***)&pvar.vt;
      **(_QWORD **)&pvar.vt = pvar.hVal.QuadPart;
      if ( v86 )
        CoTaskMemFree(v86);
    }
    if ( MixFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF67,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat);
      v87 = *(void **)&rclsid.Data1;
      *(_QWORD *)&rclsid.Data1 = 0LL;
      if ( v87 )
        CoTaskMemFree(v87);
      if ( lpsz )
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz + 16LL))(lpsz);
      v88 = pv;
      pv = 0LL;
      if ( v88 )
        CoTaskMemFree(v88);
      if ( v26 )
        ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
      goto LABEL_268;
    }
    v89 = *(_QWORD *)lpsz;
    hKey[0] = 0LL;
    LODWORD(phkResult) = v69;
    if ( (*(int (__fastcall **)(LPOLESTR, _QWORD, _QWORD, _QWORD))(v89 + 88))(
           lpsz,
           *(_QWORD *)&rclsid.Data1,
           **(unsigned int **)&rclsid.Data1,
           0LL) < 0 )
    {
      v112 = 0LL;
      v90 = v105[0];
      v91 = wil::com_ptr_t<ISaDeviceResourceManager,wil::err_returncode_policy>::operator&(&v112);
      if ( (int)CEndpointCharacteristics::TryGetCustomResourceManagerService(
                  v90,
                  &GUID_475d74a7_6824_4b91_89be_33d893b255ed,
                  (void **)v91) < 0
        || !v112 )
      {
        if ( v112 )
          (*(void (**)(void))(*(_QWORD *)v112 + 16LL))();
        if ( hKey[0] )
          (*(void (__fastcall **)(HKEY))(*(_QWORD *)hKey[0] + 16LL))(hKey[0]);
        v99 = *(void **)&rclsid.Data1;
        *(_QWORD *)&rclsid.Data1 = 0LL;
        if ( v99 )
          CoTaskMemFree(v99);
        if ( lpsz )
          (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz + 16LL))(lpsz);
        v100 = pv;
        pv = 0LL;
        if ( v100 )
          CoTaskMemFree(v100);
        if ( v26 )
          ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
        goto LABEL_120;
      }
      LODWORD(phkResult) = v113.Data1;
      if ( (*(int (__fastcall **)(__int64, CEndpointCharacteristics **, _QWORD, _QWORD))(*(_QWORD *)v112 + 112LL))(
             v112,
             v105,
             v109,
             *(_QWORD *)&v118.Data1) < 0 )
      {
        if ( v112 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v112 + 16LL))(v112);
        if ( hKey[0] )
          (*(void (__fastcall **)(HKEY))(*(_QWORD *)hKey[0] + 16LL))(hKey[0]);
        v92 = *(void **)&rclsid.Data1;
        *(_QWORD *)&rclsid.Data1 = 0LL;
        if ( v92 )
          CoTaskMemFree(v92);
        if ( lpsz )
          (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz + 16LL))(lpsz);
        v93 = pv;
        pv = 0LL;
        if ( v93 )
          CoTaskMemFree(v93);
        if ( v26 )
          ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
        goto LABEL_120;
      }
      if ( v112 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v112 + 16LL))(v112);
    }
    if ( hKey[0] )
      (*(void (__fastcall **)(HKEY))(*(_QWORD *)hKey[0] + 16LL))(hKey[0]);
    v94 = *(void **)&rclsid.Data1;
    *(_QWORD *)&rclsid.Data1 = 0LL;
    if ( v94 )
      CoTaskMemFree(v94);
    v52 = lpsz;
    goto LABEL_293;
  }
  pv = 0LL;
  if ( v78 )
    CoTaskMemFree(v78);
  if ( v26 )
    ((void (__fastcall *)(struct IMMDevice *))v26->lpVtbl->Release)(v26);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v105);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(v79, (__int64)&AudioSrv_IsFormatSupported_Task_Stop, v80, 1LL, (__int64)&v118);
  if ( v9 )
  {
    CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v9);
    operator delete(v9, (const struct std::nothrow_t *)0x38);
  }
  if ( v8 )
  {
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v8);
    operator delete(v8, (const struct std::nothrow_t *)0x38);
  }
  EtwEventActivityIdControl(4LL, &v117);
  return 2290679822LL;
}
