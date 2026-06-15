/*
 * XREFs of ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DB3BC
 * Callers:
 *     wil::details::lambda_call__lambda_d949e4219266415162887edcf312072e___::_lambda_call__lambda_d949e4219266415162887edcf312072e___ @ 0x1800D35E8 (wil--details--lambda_call__lambda_d949e4219266415162887edcf312072e___--_lambda_call__lambda_d949.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC130 (-RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@43@Z @ 0x180002F68 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A54 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180022D84 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002307C (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180023F34 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x1800276F4 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180037B80 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x180063690 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180066408 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18006E0F4 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x1800767F0 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ?GetTimeSec@CQPCStopWatch@@QEAANXZ @ 0x1800870F0 (-GetTimeSec@CQPCStopWatch@@QEAANXZ.c)
 *     ?Start@CQPCStopWatch@@QEAAHXZ @ 0x1800A5914 (-Start@CQPCStopWatch@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_front@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$forward_list@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?A_TAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800D3304 (--$emplace_front@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$forward_list@V-$ComPtr@UISt.c)
 *     ??$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA?A_TAEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x1800D3374 (--$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV-$unique_ptr@USaDeviceParams@@U-$default_delete@.c)
 *     ?CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D3D40 (-CreatePrimaryProfileRenderSaDeviceWithDefaultParameters@CBtAudioResourceManagerBase@@IEAAJPEAUE.c)
 *     ?GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEBU_GUID@@5PEAPEAUISaDeviceProxy@@@Z @ 0x1800D91E4 (-GetSaDeviceWrapper@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEA.c)
 *     ?NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z @ 0x1800D94FC (-NotifyStreamChange@CBtAudioResourceManagerBase@@IEAAX_N@Z.c)
 *     ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x1800DDB54 (-clear@-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups(
        CBtAudioResourceManagerBase *this)
{
  char v2; // r12
  CEndpointStoreCache *v3; // rcx
  int EndpointStore; // eax
  unsigned int v5; // ebx
  struct CEndpointStore *v6; // r14
  _QWORD *v7; // rsi
  _QWORD *i; // rdi
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // r15
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 *v14; // rbx
  __int64 v15; // r12
  unsigned __int128 v16; // kr00_16
  int v17; // eax
  __int64 *v18; // rdi
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // r12
  int v21; // eax
  int v22; // r12d
  int v23; // eax
  __int64 *v24; // rax
  int EndpointCharacteristicsDescriptor; // eax
  int v26; // r14d
  __int64 *v27; // rdi
  __int64 *v28; // rbx
  __int64 *v29; // rdi
  __int64 *v30; // rbx
  __int64 *v31; // rdi
  __int64 *v32; // rbx
  __int64 *v33; // rdi
  __int64 *v34; // rbx
  int SaDeviceWrapper; // eax
  __int64 (__fastcall *v36)(struct IDeviceGraphManager *, __int64, __int64, _BOOL8, _QWORD); // rbx
  _BOOL8 v37; // r9
  int v38; // eax
  __int64 *v39; // rdi
  __int64 *v40; // rbx
  __int64 *v41; // rdi
  __int64 *v42; // rbx
  _QWORD *j; // rbx
  int PrimaryProfileRenderSaDeviceWithDefaultParameters; // eax
  int v45; // esi
  char v46; // al
  int v47; // eax
  __int64 *v48; // rdi
  __int64 *v49; // rbx
  __int64 *v50; // rdi
  __int64 *v51; // rbx
  struct AudioSrvTelemetryProvider *v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 *v56; // rdi
  __int64 *v57; // rbx
  __int64 *v58; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v59)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v60; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v61; // [rsp+70h] [rbp-90h] BYREF
  struct _RTL_CRITICAL_SECTION *v62; // [rsp+78h] [rbp-88h] BYREF
  double *p_TimeSec; // [rsp+80h] [rbp-80h] BYREF
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  __int64 v65; // [rsp+90h] [rbp-70h] BYREF
  int v66[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v67; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-50h]
  unsigned __int128 v69; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-38h]
  __int64 v71; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v72; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v73; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v74; // [rsp+E8h] [rbp-18h] BYREF
  double TimeSec; // [rsp+F0h] [rbp-10h] BYREF
  struct CEndpointStore *v76; // [rsp+F8h] [rbp-8h] BYREF
  EffectPack *v77[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v78; // [rsp+110h] [rbp+10h]
  __int128 v79; // [rsp+118h] [rbp+18h] BYREF
  __int64 v80; // [rsp+128h] [rbp+28h]
  LARGE_INTEGER v81; // [rsp+130h] [rbp+30h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+138h] [rbp+38h] BYREF
  LARGE_INTEGER Frequency; // [rsp+140h] [rbp+40h] BYREF
  _OWORD v84[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v85; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( !*((_QWORD *)this + 7) )
    return 0LL;
  v2 = 0;
  PerformanceCount.QuadPart = 0LL;
  v81.QuadPart = 0LL;
  QueryPerformanceFrequency(&Frequency);
  CQPCStopWatch::Start(&v81);
  v76 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v3, *((const unsigned __int16 **)this + 7), &v76);
  v5 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x215,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)EndpointStore);
    goto LABEL_103;
  }
  v6 = v76;
  (*(void (__fastcall **)(_QWORD, struct _RTL_CRITICAL_SECTION **))(**((_QWORD **)v76 + 13) + 128LL))(
    *((_QWORD *)v76 + 13),
    &v62);
  v7 = (_QWORD *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  v60 = v7;
  for ( i = v7; i; i = (_QWORD *)*i )
  {
    v71 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(i + 1, &v71) >= 0 && v71 )
    {
      v72 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v71,
                  &v72) >= 0 )
      {
        v74 = 0LL;
        v9 = v72;
        v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v72 + 224LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
        v11 = v10(v9, &v74);
        v5 = v11;
        if ( v11 < 0 )
        {
          v12 = 553LL;
          goto LABEL_17;
        }
        if ( v74 )
        {
          v11 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                  g_DeviceGraphManager,
                  v72);
          v5 = v11;
          if ( v11 < 0 )
          {
            v12 = 557LL;
LABEL_17:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v12,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)v11);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
            std::forward_list<DisplacedStreamGroup>::clear(&v60);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v62);
            goto LABEL_103;
          }
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v74);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v72);
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v71);
  }
  v58 = 0LL;
  v61 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int128 *))(**((_QWORD **)v6 + 13) + 112LL))(
          *((_QWORD *)v6 + 13),
          &v69);
  if ( v13 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      568LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v13);
    v14 = (__int64 *)v69;
LABEL_40:
    if ( v14 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v14, *((__int64 **)&v69 + 1));
      std::_Deallocate<16,0>((char *)v69, (const struct std::nothrow_t *)((v70 - v69) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    CBtAudioResourceManagerBase::NotifyStreamChange((RTL_SRWLOCK *)this, 0);
    *(_OWORD *)v77 = 0LL;
    v78 = 0LL;
    EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                          *((const unsigned __int16 **)this + 7),
                                          0,
                                          (struct EndpointCharacteristicsDescriptor *)v77);
    v26 = EndpointCharacteristicsDescriptor;
    if ( EndpointCharacteristicsDescriptor < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x26C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
      EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v77);
      std::forward_list<DisplacedStreamGroup>::clear(&v61);
      v27 = v58;
      v58 = 0LL;
      if ( v27 )
      {
        do
        {
          v28 = (__int64 *)*v27;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v27 + 1);
          std::_Deallocate<16,0>((char *)v27, (const struct std::nothrow_t *)0x10);
          v27 = v28;
        }
        while ( v28 );
      }
      goto LABEL_66;
    }
    memset(v84, 0, sizeof(v84));
    v85 = 0LL;
    while ( v7 )
    {
      p_TimeSec = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v7 + 1, (__int64 *)&p_TimeSec) >= 0 && p_TimeSec )
      {
        v65 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&p_TimeSec,
                    &v65) >= 0 )
        {
          v73 = 0LL;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
          SaDeviceWrapper = CBtAudioResourceManagerBase::GetSaDeviceWrapper(
                              (__int64)this,
                              v77,
                              v7[2],
                              0,
                              0,
                              (__int64)v84,
                              (__int64)(v7 + 3),
                              0LL,
                              0LL,
                              (__int64)&v73);
          v26 = SaDeviceWrapper;
          if ( SaDeviceWrapper < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x27C,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)SaDeviceWrapper);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&p_TimeSec);
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v77);
            std::forward_list<DisplacedStreamGroup>::clear(&v61);
            v41 = v58;
            v58 = 0LL;
            if ( v41 )
            {
              do
              {
                v42 = (__int64 *)*v41;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v41 + 1);
                std::_Deallocate<16,0>((char *)v41, (const struct std::nothrow_t *)0x10);
                v41 = v42;
              }
              while ( v42 );
            }
            goto LABEL_66;
          }
          v2 = 1;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v73 + 80LL))(v73, v7[2]);
          v36 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, _BOOL8, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
          v37 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v65 + 240LL))(v65) == 0;
          v38 = v36(g_DeviceGraphManager, v65, v73, v37, 0LL);
          v26 = v38;
          if ( v38 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x284,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)v38);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&p_TimeSec);
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v77);
            std::forward_list<DisplacedStreamGroup>::clear(&v61);
            v39 = v58;
            v58 = 0LL;
            if ( v39 )
            {
              do
              {
                v40 = (__int64 *)*v39;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v39 + 1);
                std::_Deallocate<16,0>((char *)v39, (const struct std::nothrow_t *)0x10);
                v39 = v40;
              }
              while ( v40 );
            }
            goto LABEL_66;
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v73);
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v65);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&p_TimeSec);
      v7 = (_QWORD *)*v7;
    }
    std::forward_list<DisplacedStreamGroup>::clear(&v60);
    for ( j = v61; j; j = (_QWORD *)*j )
    {
      v59 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(j + 1, (__int64 *)&v59) >= 0 && v59 )
      {
        v64 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v59, &v64) >= 0 )
        {
          if ( ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v64 + 192LL))(v64) == 2
             || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v64 + 192LL))(v64) == 3)
            && (unsigned int)EffectPack::HardwareLoopbackEnabled(v77[1]) )
          {
            LODWORD(i) = 2;
          }
          *(_QWORD *)v66 = 0LL;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v66);
          PrimaryProfileRenderSaDeviceWithDefaultParameters = CBtAudioResourceManagerBase::CreatePrimaryProfileRenderSaDeviceWithDefaultParameters(
                                                                this,
                                                                (struct EndpointCharacteristicsDescriptor *)v77,
                                                                (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)i,
                                                                (__int64)(j + 3),
                                                                (__int64)v66);
          v45 = PrimaryProfileRenderSaDeviceWithDefaultParameters;
          if ( PrimaryProfileRenderSaDeviceWithDefaultParameters < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x299,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)PrimaryProfileRenderSaDeviceWithDefaultParameters);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v66);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v64);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v59);
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v77);
            std::forward_list<DisplacedStreamGroup>::clear(&v61);
            v50 = v58;
            v58 = 0LL;
            if ( v50 )
            {
              do
              {
                v51 = (__int64 *)*v50;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v50 + 1);
                std::_Deallocate<16,0>((char *)v50, (const struct std::nothrow_t *)0x10);
                v50 = v51;
              }
              while ( v51 );
            }
            goto LABEL_102;
          }
          v2 = 1;
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v66 + 80LL))(*(_QWORD *)v66, j[2]);
          i = *(_QWORD **)(*(_QWORD *)g_DeviceGraphManager + 32LL);
          v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 240LL))(v64);
          v47 = ((__int64 (__fastcall *)(struct IDeviceGraphManager *, __int64, _QWORD, bool, _QWORD))i)(
                  g_DeviceGraphManager,
                  v64,
                  *(_QWORD *)v66,
                  v46 == 0,
                  0LL);
          v45 = v47;
          LODWORD(i) = 0;
          if ( v47 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2A1,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
              (const char *)(unsigned int)v47);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v66);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v64);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v59);
            EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v77);
            std::forward_list<DisplacedStreamGroup>::clear(&v61);
            v48 = v58;
            v58 = 0LL;
            if ( v48 )
            {
              do
              {
                v49 = (__int64 *)*v48;
                Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v48 + 1);
                std::_Deallocate<16,0>((char *)v48, (const struct std::nothrow_t *)0x10);
                v48 = v49;
              }
              while ( v49 );
            }
LABEL_102:
            std::forward_list<DisplacedStreamGroup>::clear(&v60);
            wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v62);
            v5 = v45;
            goto LABEL_103;
          }
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v66);
        }
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v64);
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v59);
    }
    if ( v2 )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v53 = AudioSrvTelemetryProvider::Instance();
      if ( **((_DWORD **)v53 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v53 + 1), 0x400000004000LL) )
      {
        TimeSec = CQPCStopWatch::GetTimeSec((CQPCStopWatch *)&v81);
        v59 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 8);
        p_TimeSec = (double *)*((_QWORD *)this + 7);
        v71 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
          v54,
          (int)&unk_1801A0EB9,
          v54,
          v55,
          (__int64)&v71,
          (const WCHAR **)&p_TimeSec,
          (const WCHAR **)&v59,
          (__int64)&TimeSec);
      }
    }
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v77);
    std::forward_list<DisplacedStreamGroup>::clear(&v61);
    v56 = v58;
    v58 = 0LL;
    if ( v56 )
    {
      do
      {
        v57 = (__int64 *)*v56;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v56 + 1);
        std::_Deallocate<16,0>((char *)v56, (const struct std::nothrow_t *)0x10);
        v56 = v57;
      }
      while ( v57 );
    }
    std::forward_list<DisplacedStreamGroup>::clear(&v60);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v62);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v76);
    return 0LL;
  }
  v15 = *((_QWORD *)&v69 + 1);
  v16 = v69;
  v65 = v16 >> 64;
  v14 = (__int64 *)v16;
  if ( (_QWORD)v69 == *((_QWORD *)&v69 + 1) )
  {
LABEL_39:
    v2 = 0;
    goto LABEL_40;
  }
  while ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v14 + 96LL))(*v14) == 1 )
  {
LABEL_37:
    if ( ++v14 == (__int64 *)v15 )
    {
      v14 = (__int64 *)v69;
      goto LABEL_39;
    }
  }
  v67 = 0LL;
  v68 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)v6 + 13) + 120LL))(
          *((_QWORD *)v6 + 13),
          *v14,
          &v67);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      579LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v17);
LABEL_33:
    v18 = (__int64 *)v67;
    goto LABEL_34;
  }
  *(_QWORD *)v66 = *((_QWORD *)&v67 + 1);
  v18 = (__int64 *)v67;
  if ( (_QWORD)v67 == *((_QWORD *)&v67 + 1) )
  {
LABEL_34:
    if ( v18 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v18, *((__int64 **)&v67 + 1));
      std::_Deallocate<16,0>((char *)v67, (const struct std::nothrow_t *)((v68 - v67) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    LODWORD(i) = 0;
    goto LABEL_37;
  }
  while ( 1 )
  {
    v19 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))operator new(
                                                                 0x70uLL,
                                                                 (const struct std::nothrow_t *)&std::nothrow);
    v20 = v19;
    if ( v19 )
      memset_0(v19, 0, 0x70uLL);
    else
      v20 = 0LL;
    v59 = v20;
    if ( !v20 )
      break;
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*v14 + 72LL))(
      *v14,
      v20);
    v79 = 0LL;
    v80 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v14 + 240LL))(*v14, &v79);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x255,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v21);
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v79);
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v59);
      if ( (_QWORD)v67 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v67,
          *((__int64 **)&v67 + 1));
        std::_Deallocate<16,0>((char *)v67, (const struct std::nothrow_t *)((v68 - v67) & 0xFFFFFFFFFFFFFFF8uLL));
        v67 = 0LL;
        v68 = 0LL;
      }
      if ( (_QWORD)v69 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v69,
          *((__int64 **)&v69 + 1));
        std::_Deallocate<16,0>((char *)v69, (const struct std::nothrow_t *)((v70 - v69) & 0xFFFFFFFFFFFFFFF8uLL));
        v69 = 0LL;
        v70 = 0LL;
      }
      std::forward_list<DisplacedStreamGroup>::clear(&v61);
      v31 = v58;
      v58 = 0LL;
      if ( v31 )
      {
        do
        {
          v32 = (__int64 *)*v31;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v31 + 1);
          std::_Deallocate<16,0>((char *)v31, (const struct std::nothrow_t *)0x10);
          v31 = v32;
        }
        while ( v32 );
      }
      goto LABEL_59;
    }
    v23 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64))(*(_QWORD *)g_DeviceGraphManager
                                                                                    + 40LL))(
            g_DeviceGraphManager,
            *v18,
            *v14);
    v22 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x257,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
        (const char *)(unsigned int)v23);
      std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v79);
      std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v59);
      if ( (_QWORD)v67 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v67,
          *((__int64 **)&v67 + 1));
        std::_Deallocate<16,0>((char *)v67, (const struct std::nothrow_t *)((v68 - v67) & 0xFFFFFFFFFFFFFFF8uLL));
        v67 = 0LL;
        v68 = 0LL;
      }
      if ( (_QWORD)v69 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v69,
          *((__int64 **)&v69 + 1));
        std::_Deallocate<16,0>((char *)v69, (const struct std::nothrow_t *)((v70 - v69) & 0xFFFFFFFFFFFFFFF8uLL));
        v69 = 0LL;
        v70 = 0LL;
      }
      std::forward_list<DisplacedStreamGroup>::clear(&v61);
      v29 = v58;
      v58 = 0LL;
      if ( v29 )
      {
        do
        {
          v30 = (__int64 *)*v29;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v29 + 1);
          std::_Deallocate<16,0>((char *)v29, (const struct std::nothrow_t *)0x10);
          v29 = v30;
        }
        while ( v30 );
      }
LABEL_59:
      std::forward_list<DisplacedStreamGroup>::clear(&v60);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v62);
      v5 = v22;
      goto LABEL_103;
    }
    TimeSec = 0.0;
    p_TimeSec = &TimeSec;
    v24 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&p_TimeSec);
    Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v18, v24);
    std::forward_list<DisplacedStreamGroup>::emplace_front<Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> &>(
      &v61,
      (__int64 *)&TimeSec,
      (__int64 *)&v59,
      (__int64 *)&v79);
    std::forward_list<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_front<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
      &v58,
      v18);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&TimeSec);
    std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v79);
    std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v59);
    if ( ++v18 == *(__int64 **)v66 )
    {
      v15 = v65;
      goto LABEL_33;
    }
  }
  v26 = -2147024882;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24C,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)0x8007000ELL);
  std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)&v59);
  if ( (_QWORD)v67 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v67,
      *((__int64 **)&v67 + 1));
    std::_Deallocate<16,0>((char *)v67, (const struct std::nothrow_t *)((v68 - v67) & 0xFFFFFFFFFFFFFFF8uLL));
    v67 = 0LL;
    v68 = 0LL;
  }
  if ( (_QWORD)v69 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v69,
      *((__int64 **)&v69 + 1));
    std::_Deallocate<16,0>((char *)v69, (const struct std::nothrow_t *)((v70 - v69) & 0xFFFFFFFFFFFFFFF8uLL));
    v69 = 0LL;
    v70 = 0LL;
  }
  std::forward_list<DisplacedStreamGroup>::clear(&v61);
  v33 = v58;
  v58 = 0LL;
  if ( v33 )
  {
    do
    {
      v34 = (__int64 *)*v33;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v33 + 1);
      std::_Deallocate<16,0>((char *)v33, (const struct std::nothrow_t *)0x10);
      v33 = v34;
    }
    while ( v34 );
  }
LABEL_66:
  std::forward_list<DisplacedStreamGroup>::clear(&v60);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v62);
  v5 = v26;
LABEL_103:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v76);
  return v5;
}
