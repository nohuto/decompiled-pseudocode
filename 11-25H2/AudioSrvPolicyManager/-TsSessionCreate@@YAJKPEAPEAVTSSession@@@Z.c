/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA?AW4AccessibilityStateChange@@XZ @ 0x180007C00 (-HasAccessibilityAudioStateChanged@CWindowsPolicyManager@@UEAA-AW4AccessibilityStateChange@@XZ.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000C380 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdIsMuted@@YA_NK@Z @ 0x18000CA20 (-TsSessionIdIsMuted@@YA_NK@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18000CB6C (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18000CDC0 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18000E870 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z @ 0x18000ECF0 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YA_NK@Z.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z @ 0x18000EF30 (-TsSessionIdIsAScreenReaderProcess@@YA_NKKPEAM@Z.c)
 *     ?TsSessionIdGetUserDuckingPreference@@YAKK@Z @ 0x180011090 (-TsSessionIdGetUserDuckingPreference@@YAKK@Z.c)
 *     ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x1800125F0 (-GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z @ 0x180014080 (-UpdateDuckingGainForId@CStreamClassPolicyManager@@UEAAJKPEBGMPEA_N@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z @ 0x180015360 (-GetEndpointVolumeOverridePolicyVolume@CProcess@@UEAAMPEBG@Z.c)
 *     ?GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@AEAUStreamCategoryPolicyVolumes@@@Z @ 0x180015870 (-GetPolicyVolumeForStreamClass@CWindowsPolicyManager@@UEAAJPEAUIAudioStreamPolicyVolumeClient@@A.c)
 *     ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x1800167A0 (-IsScreenReaderProcess@CProcess@@UEAA_NXZ.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x180041294 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019F0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002060C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$?4U?$default_delete@VCDriverListener@@@std@@$0A@@?$unique_ptr@VCDriverListener@@U?$default_delete@VCDriverListener@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18003F1F4 (--$-4U-$default_delete@VCDriverListener@@@std@@$0A@@-$unique_ptr@VCDriverListener@@U-$default_de.c)
 *     ??$emplace@AEAKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@1@@Z @ 0x18003F420 (--$emplace@AEAKV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@-$_Hash@V-$_.c)
 *     ??$emplace_after@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@?$forward_list@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@V?$allocator@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@2@@std@@QEAA?AV?$_Flist_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@std@@@std@@@1@V?$_Flist_const_iterator@V?$_Flist_val@U?$_Flist_simple_types@V?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@@std@@@std@@@1@$$QEAV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@1@@Z @ 0x18003F5A8 (--$emplace_after@V-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndI.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2@Z @ 0x18003F6D4 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDes.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBGAEAM$$QEAH2$$QEAW4EndpointApplicability@@@Z @ 0x18003F758 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGAEAMHHW4EndpointApplicability@@$0A@@std@@YA-A.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY01$$CBG$$QEAM$$QEAH2@Z @ 0x18003F7E4 (--$make_unique@UDuckingDescriptorAndId@@AEAY01$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY02$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY02$$CBG$$QEAM$$QEAH2@Z @ 0x18003F868 (--$make_unique@UDuckingDescriptorAndId@@AEAY02$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA?AV?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@0@AEAY04$$CBG$$QEAM$$QEAH2@Z @ 0x18003F8EC (--$make_unique@UDuckingDescriptorAndId@@AEAY04$$CBGMHH$0A@@std@@YA-AV-$unique_ptr@UDuckingDescri.c)
 *     ??1?$unique_ptr@UDuckingDescriptorAndId@@U?$default_delete@UDuckingDescriptorAndId@@@std@@@std@@QEAA@XZ @ 0x18003FCE8 (--1-$unique_ptr@UDuckingDescriptorAndId@@U-$default_delete@UDuckingDescriptorAndId@@@std@@@std@@.c)
 *     ??1?$unique_ptr@VCDriverListener@@U?$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ @ 0x18003FD60 (--1-$unique_ptr@VCDriverListener@@U-$default_delete@VCDriverListener@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@QEAA@XZ @ 0x18003FD80 (--1-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@QEAA@XZ.c)
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x18004069C (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18004143C (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x180042D10 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ??0CDriverListener@@QEAA@XZ @ 0x180043E80 (--0CDriverListener@@QEAA@XZ.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180049EEC (-GetTsAudioProtocol@@YAIK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TsSessionCreate(DWORD SessionId, struct TSSession **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rax
  struct TSSession *v9; // rbx
  _QWORD *v10; // rdi
  int refreshed; // eax
  __int64 v12; // rdx
  unsigned int v13; // edi
  _QWORD *v14; // rbx
  __int64 *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  __int64 *v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  __int64 *v21; // rax
  _QWORD *v22; // rdi
  __int64 *v23; // rax
  _QWORD *v24; // rdi
  __int64 *v25; // rax
  _QWORD *v26; // rdi
  __int64 *v27; // rax
  _QWORD *v28; // rdi
  __int64 *v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rdx
  __int64 *v32; // rax
  __int64 v33; // rcx
  struct TSSession *v34; // rcx
  const struct _tlgProvider_t *v35; // rax
  DuckingDescriptorAndId *v36; // [rsp+30h] [rbp-58h] BYREF
  struct TSSession *v37; // [rsp+38h] [rbp-50h] BYREF
  DuckingDescriptorAndId *v38; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v39[8]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  DWORD v41; // [rsp+90h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v42; // [rsp+98h] [rbp+10h] BYREF
  int v43; // [rsp+A0h] [rbp+18h] BYREF
  int v44; // [rsp+A8h] [rbp+20h] BYREF

  v41 = SessionId;
  *a2 = 0LL;
  v37 = 0LL;
  try
  {
    v4 = TSSession::Create(SessionId, (__int64 *)&v37);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3BD,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v4);
      std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v37);
      return v5;
    }
    if ( SessionId )
    {
      v9 = v37;
    }
    else
    {
      v8 = (struct _RTL_CRITICAL_SECTION *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
      v42 = v8;
      if ( v8 )
        v8 = (struct _RTL_CRITICAL_SECTION *)CDriverListener::CDriverListener((CDriverListener *)v8);
      v42 = v8;
      v9 = v37;
      v10 = (_QWORD *)((char *)v37 + 1080);
      std::unique_ptr<CDriverListener>::operator=<std::default_delete<CDriverListener>,0>(
        (__int64 *)v37 + 135,
        (__int64 *)&v42);
      std::unique_ptr<CDriverListener>::~unique_ptr<CDriverListener>(&v42);
      if ( !*v10 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C3,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)0x8007000ELL);
        std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v37);
        return 2147942414LL;
      }
    }
    *((_DWORD *)v9 + 1) = GetTsAudioProtocol(SessionId);
    *((_DWORD *)v9 + 2) = ++dword_180067C08;
    refreshed = TsSessionRefreshSessionInformation(v9);
    v13 = refreshed;
    if ( refreshed >= 0 )
    {
      v14 = (_QWORD *)((char *)v9 + 1064);
      LODWORD(v42) = 1;
      v43 = 400000;
      v44 = -1042284544;
      v15 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[5],float,int,int,0>(
              (__int64 *)&v36,
              v12,
              (__int64)&v44,
              &v43,
              &v42);
      v16 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v14,
                         &v38,
                         v14,
                         v15);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v36);
      LODWORD(v42) = 0;
      v43 = 400000;
      v44 = -1047527424;
      v18 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[3],float,int,int,0>(
              (__int64 *)&v36,
              v17,
              (__int64)&v44,
              &v43,
              &v42);
      v19 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v14,
                         &v38,
                         v16,
                         v18);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v36);
      LODWORD(v42) = -8388608;
      v43 = 0;
      v44 = 400000;
      v21 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float &,int,int,0>(
              (__int64 *)&v36,
              v20,
              (__int64)&v42,
              &v44,
              &v43);
      v22 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v14,
                         &v38,
                         v19,
                         v21);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v36);
      v43 = 0;
      v44 = 400000;
      LODWORD(v36) = -1042284544;
      v23 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)&v38,
              (__int64)L"3",
              (__int64)&v36,
              &v44,
              &v43);
      v24 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v14,
                         v39,
                         v22,
                         v23);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v38);
      v43 = 0;
      v44 = 400000;
      LODWORD(v36) = -1061158912;
      v25 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)&v38,
              (__int64)L"1",
              (__int64)&v36,
              &v44,
              &v43);
      v26 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v14,
                         v39,
                         v24,
                         v25);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v38);
      v43 = 0;
      v44 = 400000;
      LODWORD(v36) = -1047527424;
      v27 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)&v38,
              (__int64)L"2",
              (__int64)&v36,
              &v44,
              &v43);
      v28 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v14,
                         v39,
                         v26,
                         v27);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v38);
      v43 = 1;
      v44 = 400000;
      LODWORD(v36) = -1042284544;
      v29 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float,int,int,0>(
              (__int64 *)&v38,
              (__int64)L"5",
              (__int64)&v36,
              &v44,
              &v43);
      v30 = (_QWORD *)*std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
                         (__int64)v14,
                         v39,
                         v28,
                         v29);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v38);
      v43 = 1;
      v44 = 0;
      LODWORD(v36) = 400000;
      v32 = std::make_unique<DuckingDescriptorAndId,unsigned short const (&)[2],float &,int,int,enum EndpointApplicability,0>(
              (__int64 *)&v38,
              v31,
              (__int64)&v42,
              (int *)&v36,
              &v44,
              (unsigned int *)&v43);
      std::forward_list<std::unique_ptr<DuckingDescriptorAndId>>::emplace_after<std::unique_ptr<DuckingDescriptorAndId>>(
        (__int64)v14,
        &v42,
        v30,
        v32);
      std::unique_ptr<DuckingDescriptorAndId>::~unique_ptr<DuckingDescriptorAndId>(&v38);
      EnterCriticalSection(&stru_180067AF8);
      v42 = &stru_180067AF8;
      std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<TSSession>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<TSSession>>>,0>>::emplace<unsigned long &,std::unique_ptr<TSSession>>(
        v33,
        (__int64)v39,
        &v41,
        (__int64 *)&v37);
      v34 = *(struct TSSession **)(v39[0] + 24LL);
      *a2 = v34;
      TsSessionConsiderForPrimaryConsoleAudioSession(v34);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v42);
      v35 = AudioSrvPolicyManagerTelemetryProvider::Provider();
      if ( *(_DWORD *)v35 > 4u )
      {
        LODWORD(v42) = v41;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
          (__int64)v35,
          (__int64)&unk_18005B0D2);
      }
      std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v37);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CA,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)refreshed);
      std::unique_ptr<TSSession>::~unique_ptr<TSSession>(&v37);
      result = v13;
    }
  }
  catch ( ... )
  {
    LODWORD(v42) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x3FB,
                     (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                     v6);
    return (unsigned int)v42;
  }
  return result;
}
