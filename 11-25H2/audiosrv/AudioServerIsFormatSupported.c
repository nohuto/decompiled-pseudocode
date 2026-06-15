/*
 * XREFs of AudioServerIsFormatSupported @ 0x180038EE0
 * Callers:
 *     AudioServerGetSharedModeEnginePeriod @ 0x180038600 (AudioServerGetSharedModeEnginePeriod.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?PublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180012EB4 (-PublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180032D50 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x18003366C (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800342A8 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180043970 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x180051810 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18005190C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x18005E790 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x18006E9C0 (-AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007576C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180076600 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180085828 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x18008B5FC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWA.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     swprintf_s @ 0x1800A8CEC (swprintf_s.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x180106130 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18012D56C (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerIsFormatSupported(
        __int64 a1,
        __int64 a2,
        int a3,
        __int128 *a4,
        struct tWAVEFORMATEX *Src,
        struct tWAVEFORMATEX **a6)
{
  struct _FILETIME v9; // rbx
  int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  IID v15; // xmm0
  HRESULT v16; // eax
  LSTATUS v17; // eax
  int v18; // ecx
  int v19; // r8d
  int v21; // eax
  struct IMMDevice *v22; // rbx
  int MixFormat; // edi
  void *v24; // rax
  void *v25; // rcx
  int v26; // ecx
  int v27; // r8d
  int v28; // edi
  __int64 v29; // rax
  int v30; // eax
  void *v31; // rcx
  void *v32; // rcx
  int v33; // ecx
  int v34; // r8d
  int v35; // r15d
  int v36; // eax
  struct _GUID *v37; // r8
  void *v38; // rcx
  void *v39; // r8
  void *v40; // rcx
  void *v41; // rcx
  unsigned int v42; // r14d
  __int64 v43; // rdi
  int v44; // ecx
  __int64 v45; // rax
  void *v46; // rcx
  void *v47; // rcx
  int v48; // ecx
  int v49; // r8d
  void *v50; // rcx
  LPOLESTR v51; // rcx
  int v52; // eax
  int v53; // eax
  void *v54; // rcx
  void *v55; // rcx
  void *v56; // rax
  LPOLESTR v57; // rcx
  void *v58; // rcx
  LPOLESTR v59; // rcx
  void *v60; // rcx
  void *v61; // rax
  LPOLESTR v62; // rcx
  void *v63; // rcx
  LPOLESTR v64; // rcx
  unsigned int v65; // edi
  int PropertyStoreProperty; // eax
  int v67; // edi
  unsigned int v68; // r14d
  int v69; // eax
  int v70; // r15d
  __int64 v71; // rax
  int v72; // eax
  unsigned int v73; // r15d
  void *v74; // rcx
  int v75; // ecx
  int v76; // r8d
  void *v77; // rcx
  int v78; // ecx
  int v79; // r8d
  int AcceptableSPDIFTypeForDevice; // eax
  void *v81; // rcx
  struct IMMDevice v82; // rax
  int v83; // eax
  void *v84; // rcx
  void *v85; // rax
  void *v86; // rcx
  void *v87; // rcx
  __int64 v88; // rax
  void *v89; // rcx
  void *v90; // rcx
  void *v91; // rcx
  int v92; // eax
  void *v93; // rcx
  int v94; // ecx
  int v95; // r8d
  void *v96; // rcx
  void *v97; // rcx
  struct CEndpointCharacteristics **phkResult; // [rsp+20h] [rbp-E0h]
  struct _GUID *phkResulta; // [rsp+20h] [rbp-E0h]
  LPVOID pv; // [rsp+80h] [rbp-80h] BYREF
  LPOLESTR lpsz[2]; // [rsp+88h] [rbp-78h] BYREF
  char v102; // [rsp+98h] [rbp-68h]
  struct CEndpointCharacteristics *v103[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-50h]
  IID rclsid; // [rsp+C0h] [rbp-40h] BYREF
  char v106; // [rsp+D0h] [rbp-30h]
  HKEY hKey[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v108; // [rsp+F0h] [rbp-10h]
  LPVOID v109; // [rsp+100h] [rbp+0h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+108h] [rbp+8h] BYREF
  struct _GUID v111; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v112[56]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v113; // [rsp+168h] [rbp+68h]
  __int128 v114; // [rsp+178h] [rbp+78h] BYREF
  struct _GUID v115; // [rsp+190h] [rbp+90h] BYREF
  wchar_t Buffer[264]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+408h] [rbp+308h]

  LODWORD(v109) = a3;
  *(_QWORD *)&v115.Data1 = a2;
  *(_QWORD *)&v111.Data1 = a1;
  v113 = *a4;
  v114 = v113;
  EtwEventActivityIdControl(4LL, &v114);
  v9 = g_AudioHealthMonitor;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(v112, v9);
  v11 = *(_QWORD *)&v115.Data1;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      v10,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Start,
      v115.Data1,
      *((_DWORD *)a4 + 12),
      *((_DWORD *)a4 + 14),
      *((_DWORD *)a4 + 17),
      *((_DWORD *)a4 + 13));
  if ( !a3 && !a6 )
  {
    v12 = 3903LL;
    v13 = -2147024809;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
LABEL_28:
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v18,
        (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
        v19,
        1,
        (__int64)&v115);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v112);
    EtwEventActivityIdControl(4LL, &v114);
    return v13;
  }
  if ( *((_DWORD *)a4 + 12) >= 0x18u )
  {
    v14 = 1330LL;
LABEL_26:
    v13 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
    v12 = 3905LL;
    goto LABEL_27;
  }
  v15 = (IID)a4[1];
  rclsid = v15;
  if ( *(_QWORD *)&v15.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    || _mm_srli_si128((__m128i)v15, 8).m128i_u64[0] != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    lpsz[0] = 0LL;
    v16 = StringFromCLSID(&rclsid, lpsz);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x523,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v16);
LABEL_17:
      if ( lpsz[0] )
        CoTaskMemFree(lpsz[0]);
      v14 = 1332LL;
      goto LABEL_26;
    }
    if ( swprintf_s(
           Buffer,
           0x104uLL,
           L"%s\\%s",
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\",
           lpsz[0]) == -1 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x526,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007007ALL);
      goto LABEL_17;
    }
    hKey[0] = 0LL;
    v17 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, Buffer, 0, 0x20019u, hKey);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x529,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v17);
      if ( hKey[0] )
        RegCloseKey(hKey[0]);
      goto LABEL_17;
    }
    if ( hKey[0] )
      RegCloseKey(hKey[0]);
    if ( lpsz[0] )
      CoTaskMemFree(lpsz[0]);
  }
  if ( *((_DWORD *)a4 + 13) > 4u )
  {
    v14 = 1334LL;
    goto LABEL_26;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( Src->wFormatTag == 0xFFFE && Src->cbSize < 0x16u )
  {
    v12 = 3912LL;
    v13 = -2147024809;
    goto LABEL_27;
  }
  *(_OWORD *)v103 = 0LL;
  v104 = 0LL;
  phkResult = v103;
  v21 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 40LL))(
          g_pEndpointCharacteristicsCache,
          v11,
          0LL,
          0LL);
  v13 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF4D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v21);
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v103);
    goto LABEL_28;
  }
  v22 = (struct IMMDevice *)*((_QWORD *)v103[0] + 5);
  if ( v22 )
    ((void (__fastcall *)(_QWORD))v22->lpVtbl->AddRef)(*((_QWORD *)v103[0] + 5));
  if ( Src->nChannels > 2u && ((Src->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF54,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890008LL);
    if ( v22 )
      ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
LABEL_108:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v103);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v48,
        (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
        v49,
        1,
        (__int64)&v115);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v112);
    EtwEventActivityIdControl(4LL, &v114);
    return 2290679816LL;
  }
  pv = 0LL;
  hKey[0] = (HKEY)&pv;
  hKey[1] = 0LL;
  v108 = 1;
  MixFormat = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)&hKey[1]);
  if ( v108 )
  {
    v24 = *(void **)hKey[0];
    *(_QWORD *)hKey[0] = hKey[1];
    if ( v24 )
      CoTaskMemFree(v24);
  }
  if ( MixFormat < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF58,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)MixFormat);
    v25 = pv;
    pv = 0LL;
    if ( v25 )
      CoTaskMemFree(v25);
    if ( v22 )
      ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
LABEL_53:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v103);
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v26,
        (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
        v27,
        1,
        (__int64)&v115);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v112);
    EtwEventActivityIdControl(4LL, &v114);
    return (unsigned int)MixFormat;
  }
  v28 = *((_DWORD *)a4 + 13);
  if ( v28 == 1 )
  {
    v29 = *(_QWORD *)g_PolicyManager;
    *(_QWORD *)&rclsid.Data1 = 0LL;
    v30 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, IID *))(v29 + 32))(
            g_PolicyManager,
            a1,
            &rclsid);
    MixFormat = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF5D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v30);
      if ( *(_QWORD *)&rclsid.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 16LL))(*(_QWORD *)&rclsid.Data1);
      v31 = pv;
      pv = 0LL;
      if ( v31 )
        CoTaskMemFree(v31);
      if ( v22 )
        ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      goto LABEL_53;
    }
    if ( !AllowUseofOffloadResources(v103[0], *(struct IAudioProcess **)&rclsid.Data1, *((_DWORD *)a4 + 12)) )
    {
      if ( *(_QWORD *)&rclsid.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 16LL))(*(_QWORD *)&rclsid.Data1);
      v32 = pv;
      pv = 0LL;
      if ( v32 )
        CoTaskMemFree(v32);
      if ( v22 )
        ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v103);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v33,
          (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
          v34,
          1,
          (__int64)&v115);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v112);
      EtwEventActivityIdControl(4LL, &v114);
      return 1LL;
    }
    v35 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 120LL))(*(_QWORD *)&rclsid.Data1);
    *(_OWORD *)lpsz = 0LL;
    *(_OWORD *)hKey = 0LL;
    v111 = 0LL;
    v36 = DeriveAudioProcessingModeConfiguration(
            *((unsigned int *)a4 + 12),
            *((unsigned int *)a4 + 14),
            *((unsigned int *)a4 + 32),
            v103,
            0,
            a3,
            1,
            0LL,
            0,
            0,
            Src,
            &v111,
            hKey,
            lpsz,
            0LL,
            0LL);
    MixFormat = v36;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF79,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v36);
      if ( *(_QWORD *)&rclsid.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 16LL))(*(_QWORD *)&rclsid.Data1);
      v38 = pv;
      pv = 0LL;
      if ( v38 )
        CoTaskMemFree(v38);
      if ( v22 )
        ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      goto LABEL_53;
    }
    v109 = 0LL;
    lpsz[0] = (LPOLESTR)&v109;
    lpsz[1] = 0LL;
    v102 = 1;
    MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(
                  (struct EndpointCharacteristicsDescriptor *)v103,
                  (struct tWAVEFORMATEX *)pv,
                  v37,
                  (struct _GUID *)hKey,
                  phkResulta,
                  *((_DWORD *)a4 + 12),
                  (struct tWAVEFORMATEX **)&lpsz[1]);
    if ( v102 )
    {
      v39 = *(void **)lpsz[0];
      *(_QWORD *)lpsz[0] = lpsz[1];
      if ( v39 )
        CoTaskMemFree(v39);
    }
    if ( MixFormat < 0 )
    {
      v40 = v109;
      v109 = 0LL;
      if ( v40 )
        CoTaskMemFree(v40);
      if ( *(_QWORD *)&rclsid.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 16LL))(*(_QWORD *)&rclsid.Data1);
      v41 = pv;
      pv = 0LL;
      if ( v41 )
        CoTaskMemFree(v41);
      if ( v22 )
        ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      goto LABEL_53;
    }
    v42 = *((_DWORD *)a4 + 13);
    v43 = *((unsigned int *)a4 + 12);
    if ( (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v103[0] + 56LL))(v103[0]) )
      v44 = dword_18018BFE0[v43];
    else
      v44 = dword_18018BF80[v43];
    v45 = *(_QWORD *)g_AudioResourceManager;
    *(struct _GUID *)hKey = v111;
    LODWORD(phkResult) = 2 * (v44 + (v35 != 0 ? 0x10 : 0)) + 1;
    if ( !(*(unsigned int (__fastcall **)(struct IAudioResourceManager *, struct CEndpointCharacteristics **, HKEY *, _QWORD))(v45 + 56))(
            g_AudioResourceManager,
            v103,
            hKey,
            v42) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF88,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890008LL);
      v46 = v109;
      v109 = 0LL;
      if ( v46 )
        CoTaskMemFree(v46);
      if ( *(_QWORD *)&rclsid.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&rclsid.Data1 + 16LL))(*(_QWORD *)&rclsid.Data1);
      v47 = pv;
      pv = 0LL;
      if ( v47 )
        CoTaskMemFree(v47);
      if ( v22 )
        ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      goto LABEL_108;
    }
    v50 = v109;
    v109 = 0LL;
    if ( v50 )
      CoTaskMemFree(v50);
    v51 = *(LPOLESTR *)&rclsid.Data1;
LABEL_269:
    if ( v51 )
      (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)v51 + 16LL))(v51);
    goto LABEL_271;
  }
  if ( !a3 )
  {
    v111 = 0LL;
    *(_OWORD *)hKey = 0LL;
    rclsid = 0LL;
    v52 = (*(__int64 (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v103[0] + 56LL))(v103[0]);
    v53 = DeriveAudioProcessingModeConfiguration(
            *((unsigned int *)a4 + 12),
            *((unsigned int *)a4 + 14),
            *((unsigned int *)a4 + 32),
            v103,
            v52 == 1,
            0,
            v28,
            0LL,
            0,
            0,
            0LL,
            &rclsid,
            hKey,
            &v111,
            0LL,
            0LL);
    MixFormat = v53;
    if ( v53 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFA3,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v53);
      v54 = pv;
      pv = 0LL;
      if ( v54 )
        CoTaskMemFree(v54);
      if ( v22 )
        ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      goto LABEL_53;
    }
    if ( *((_DWORD *)a4 + 17) )
    {
      lpsz[0] = 0LL;
      *(_QWORD *)&pvar.vt = lpsz;
      pvar.hVal.QuadPart = 0LL;
      *((_BYTE *)&pvar.decVal + 16) = 1;
      MixFormat = DeriveConnectorFormatFromStreamFormat(
                    v103,
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 13),
                    (IAudioMediaType *)pv,
                    &v111,
                    (struct _GUID *)hKey,
                    &rclsid,
                    1,
                    (struct tWAVEFORMATEX **)&pvar.hVal.QuadPart);
      if ( *((_BYTE *)&pvar.decVal + 16) )
      {
        v61 = **(void ***)&pvar.vt;
        **(_QWORD **)&pvar.vt = pvar.hVal.QuadPart;
        if ( v61 )
          CoTaskMemFree(v61);
      }
      if ( MixFormat < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFC4,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat);
        v62 = lpsz[0];
        lpsz[0] = 0LL;
        if ( v62 )
          CoTaskMemFree(v62);
        v63 = pv;
        pv = 0LL;
        if ( v63 )
          CoTaskMemFree(v63);
        if ( v22 )
          ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
        goto LABEL_53;
      }
      v64 = lpsz[0];
      lpsz[0] = 0LL;
      if ( v64 )
        CoTaskMemFree(v64);
      goto LABEL_271;
    }
    if ( !*((_DWORD *)a4 + 33) )
    {
      lpsz[0] = 0LL;
      *(_QWORD *)&rclsid.Data1 = lpsz;
      *(_QWORD *)rclsid.Data4 = 0LL;
      v106 = 1;
      v115 = v111;
      MixFormat = EffectPack::GetMixFormat(
                    v103[1],
                    (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*((_DWORD *)a4 + 13),
                    &v115,
                    (struct tWAVEFORMATEX **)rclsid.Data4);
      if ( v106 )
      {
        v56 = **(void ***)&rclsid.Data1;
        **(_QWORD **)&rclsid.Data1 = *(_QWORD *)rclsid.Data4;
        if ( v56 )
          CoTaskMemFree(v56);
      }
      if ( MixFormat >= 0 )
      {
        v115 = *(struct _GUID *)hKey;
        MixFormat = IsStreamFormatSupportedForMixFormat(
                      (struct EndpointCharacteristicsDescriptor *)v103,
                      &v115,
                      *((_DWORD *)a4 + 13),
                      (const struct tWAVEFORMATEX *)lpsz[0],
                      (struct tWAVEFORMATEX *)pv,
                      a6);
        v59 = lpsz[0];
        lpsz[0] = 0LL;
        if ( v59 )
          CoTaskMemFree(v59);
        v60 = pv;
        pv = 0LL;
        if ( v60 )
          CoTaskMemFree(v60);
        if ( v22 )
          ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFB4,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)MixFormat);
        v57 = lpsz[0];
        lpsz[0] = 0LL;
        if ( v57 )
          CoTaskMemFree(v57);
        v58 = pv;
        pv = 0LL;
        if ( v58 )
          CoTaskMemFree(v58);
        if ( v22 )
          ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      }
      goto LABEL_53;
    }
    if ( *(_WORD *)pv == 0xFFFE )
    {
      if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3)
        && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)pv + 4)
        || *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3)
        && *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)pv + 4) )
      {
        goto LABEL_271;
      }
    }
    else if ( ((*(_WORD *)pv - 1) & 0xFFFD) == 0 )
    {
LABEL_271:
      *(_OWORD *)hKey = *(_OWORD *)*((_QWORD *)v103[1] + 196);
      v92 = PublishApoTelemetry(*(CEndpointStoreCache **)&v115.Data1, (struct _GUID *)hKey);
      if ( v92 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1007,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v92,
          (int)phkResult);
      v93 = pv;
      pv = 0LL;
      if ( v93 )
        CoTaskMemFree(v93);
      if ( v22 )
        ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v103);
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McGenEventWrite_EtwEventWriteTransfer(
          v94,
          (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
          v95,
          1,
          (__int64)&v115);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v112);
      EtwEventActivityIdControl(4LL, &v114);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFAE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890008LL);
    v55 = pv;
    pv = 0LL;
    if ( v55 )
      CoTaskMemFree(v55);
    if ( v22 )
      ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
    goto LABEL_108;
  }
  v65 = 0;
  memset(&pvar, 0, sizeof(pvar));
  PropertyStoreProperty = CPolicyConfig::GetPropertyStoreProperty(v22, 0, &PKEY_Endpoint_AllowExclusive, &pvar);
  if ( PropertyStoreProperty >= 0 )
  {
    if ( pvar.vt )
      LOBYTE(v65) = pvar.iVal == 0;
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      25LL,
      &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids,
      (unsigned int)PropertyStoreProperty);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids, v65);
  }
  v67 = v65 ^ 1;
  v68 = 0;
  memset(&pvar, 0, sizeof(pvar));
  v69 = CPolicyConfig::GetPropertyStoreProperty(v22, 0, &PKEY_Endpoint_AllowOffloading, &pvar);
  if ( v69 >= 0 )
  {
    if ( pvar.vt )
      LOBYTE(v68) = pvar.iVal == 0;
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      27LL,
      &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids,
      (unsigned int)v69);
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids, v68);
  }
  if ( !v68 || (v70 = v67) != 0 )
  {
    v70 = v67;
    if ( g_PolicyManager )
    {
      v71 = *(_QWORD *)g_PolicyManager;
      lpsz[0] = 0LL;
      v72 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, LPOLESTR *))(v71 + 32))(
              g_PolicyManager,
              *(_QWORD *)&v111.Data1,
              lpsz);
      v73 = v72;
      if ( v72 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFD1,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v72);
        if ( lpsz[0] )
          (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz[0] + 16LL))(lpsz[0]);
        v74 = pv;
        pv = 0LL;
        if ( v74 )
          CoTaskMemFree(v74);
        if ( v22 )
          ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
        EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v103);
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            v75,
            (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
            v76,
            1,
            (__int64)&v115);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v112);
        EtwEventActivityIdControl(4LL, &v114);
        return v73;
      }
      v70 = v67;
      if ( v67 )
        v70 = (*(__int64 (__fastcall **)(LPOLESTR, _QWORD, __int64))(*(_QWORD *)lpsz[0] + 144LL))(
                lpsz[0],
                *((unsigned int *)a4 + 12),
                1LL);
      if ( !v68 && (*(unsigned int (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz[0] + 88LL))(lpsz[0]) )
        LOBYTE(v68) = !AllowUseofOffloadResources(v103[0], (struct IAudioProcess *)lpsz[0], *((_DWORD *)a4 + 12));
      if ( lpsz[0] )
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz[0] + 16LL))(lpsz[0]);
    }
  }
  v77 = pv;
  if ( v70 )
  {
    if ( (unsigned int)IsSPDIFFormat((const struct tWAVEFORMATEX *)pv)
      && CEndpointCharacteristics::IsSPDIFEndpoint(v103[0]) )
    {
      AcceptableSPDIFTypeForDevice = GetAcceptableSPDIFTypeForDevice(v22, (const struct tWAVEFORMATEX *)pv, 0LL, v68);
      MixFormat = AcceptableSPDIFTypeForDevice;
      if ( AcceptableSPDIFTypeForDevice < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xFE6,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)AcceptableSPDIFTypeForDevice);
        v81 = pv;
        pv = 0LL;
        if ( v81 )
          CoTaskMemFree(v81);
        if ( v22 )
          ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
        goto LABEL_53;
      }
      goto LABEL_271;
    }
    v82.lpVtbl = v22->lpVtbl;
    lpsz[0] = 0LL;
    v83 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, LPOLESTR *))v82.lpVtbl->Activate)(
            v22,
            &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
            23LL,
            0LL,
            lpsz);
    MixFormat = v83;
    if ( v83 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFEC,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v83);
      if ( lpsz[0] )
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz[0] + 16LL))(lpsz[0]);
      v84 = pv;
      pv = 0LL;
      if ( v84 )
        CoTaskMemFree(v84);
      if ( v22 )
        ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      goto LABEL_53;
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
      v85 = **(void ***)&pvar.vt;
      **(_QWORD **)&pvar.vt = pvar.hVal.QuadPart;
      if ( v85 )
        CoTaskMemFree(v85);
    }
    if ( MixFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xFEF,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)MixFormat);
      v86 = *(void **)&rclsid.Data1;
      *(_QWORD *)&rclsid.Data1 = 0LL;
      if ( v86 )
        CoTaskMemFree(v86);
      if ( lpsz[0] )
        (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz[0] + 16LL))(lpsz[0]);
      v87 = pv;
      pv = 0LL;
      if ( v87 )
        CoTaskMemFree(v87);
      if ( v22 )
        ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
      goto LABEL_53;
    }
    v88 = *(_QWORD *)lpsz[0];
    hKey[0] = 0LL;
    LODWORD(phkResult) = v68;
    if ( (*(int (__fastcall **)(LPOLESTR, _QWORD, _QWORD, _QWORD))(v88 + 88))(
           lpsz[0],
           *(_QWORD *)&rclsid.Data1,
           **(unsigned int **)&rclsid.Data1,
           0LL) < 0 )
    {
      *(_QWORD *)&v111.Data1 = 0LL;
      if ( (int)CEndpointCharacteristics::TryGetCustomResourceManagerService(
                  v103[0],
                  &GUID_4d3814ae_3db5_4fb3_819c_1493075ce6e3,
                  (void **)&v111) < 0
        || !*(_QWORD *)&v111.Data1 )
      {
        if ( *(_QWORD *)&v111.Data1 )
          (*(void (**)(void))(**(_QWORD **)&v111.Data1 + 16LL))();
        if ( hKey[0] )
          (*(void (__fastcall **)(HKEY))(*(_QWORD *)hKey[0] + 16LL))(hKey[0]);
        v96 = *(void **)&rclsid.Data1;
        *(_QWORD *)&rclsid.Data1 = 0LL;
        if ( v96 )
          CoTaskMemFree(v96);
        if ( lpsz[0] )
          (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz[0] + 16LL))(lpsz[0]);
        v97 = pv;
        pv = 0LL;
        if ( v97 )
          CoTaskMemFree(v97);
        if ( v22 )
          ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
        goto LABEL_108;
      }
      LODWORD(phkResult) = (_DWORD)a6;
      if ( (*(int (__fastcall **)(_QWORD, struct CEndpointCharacteristics **, _QWORD, struct tWAVEFORMATEX *))(**(_QWORD **)&v111.Data1 + 104LL))(
             *(_QWORD *)&v111.Data1,
             v103,
             (unsigned int)v109,
             Src) < 0 )
      {
        if ( *(_QWORD *)&v111.Data1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v111.Data1 + 16LL))(*(_QWORD *)&v111.Data1);
        if ( hKey[0] )
          (*(void (__fastcall **)(HKEY))(*(_QWORD *)hKey[0] + 16LL))(hKey[0]);
        v89 = *(void **)&rclsid.Data1;
        *(_QWORD *)&rclsid.Data1 = 0LL;
        if ( v89 )
          CoTaskMemFree(v89);
        if ( lpsz[0] )
          (*(void (__fastcall **)(LPOLESTR))(*(_QWORD *)lpsz[0] + 16LL))(lpsz[0]);
        v90 = pv;
        pv = 0LL;
        if ( v90 )
          CoTaskMemFree(v90);
        if ( v22 )
          ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
        goto LABEL_108;
      }
      if ( *(_QWORD *)&v111.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v111.Data1 + 16LL))(*(_QWORD *)&v111.Data1);
    }
    if ( hKey[0] )
      (*(void (__fastcall **)(HKEY))(*(_QWORD *)hKey[0] + 16LL))(hKey[0]);
    v91 = *(void **)&rclsid.Data1;
    *(_QWORD *)&rclsid.Data1 = 0LL;
    if ( v91 )
      CoTaskMemFree(v91);
    v51 = lpsz[0];
    goto LABEL_269;
  }
  pv = 0LL;
  if ( v77 )
    CoTaskMemFree(v77);
  if ( v22 )
    ((void (__fastcall *)(struct IMMDevice *))v22->lpVtbl->Release)(v22);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v103);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      v78,
      (unsigned int)&AudioSrv_IsFormatSupported_Task_Stop,
      v79,
      1,
      (__int64)&v115);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v112);
  EtwEventActivityIdControl(4LL, &v114);
  return 2290679822LL;
}
