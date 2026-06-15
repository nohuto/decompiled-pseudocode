/*
 * XREFs of ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_::_Do_call @ 0x18001CD70 (std--_Func_impl_no_alloc__lambda_78bc9aa717e0c7ae8337a2b0ddd14613__void_--_Do_call.c)
 * Callees:
 *     ?DeleteInactivityTimer@CProcess@@QEAAXXZ @ 0x180002250 (-DeleteInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180002F90 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x1800030D0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180003250 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180004110 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180004650 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800065B0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180006B20 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x18000D970 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180013550 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015310 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A13C (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B228 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x18001CD88 (-EnsureBamExemption@CProcess@@IEAAXXZ.c)
 *     ?RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ @ 0x18001F420 (-RemoveAudioPlaybackRestriction@CApplication@@QEAAJXZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18001F540 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800211F8 (memset_0.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180030A30 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x180033A9C (-Add@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSimpleMa.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180033D04 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x1800344D8 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180037818 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     WPP_SF_dSS @ 0x1800384F8 (WPP_SF_dSS.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18003BDA0 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180043D14 (-StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180043D38 (McTemplateU0zqq_EventWriteTransfer.c)
 *     WPP_SF_dSd @ 0x180043DDC (WPP_SF_dSd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CApplicationManager::OnStreamStarted(
        CApplicationManager *this,
        CApplication **a2,
        struct IAudioSessionInfo *a3,
        struct IAudioStreamInfo *a4)
{
  char v6; // bl
  unsigned int v7; // eax
  __int64 v8; // rax
  int v9; // r8d
  unsigned int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // rcx
  __int64 v15; // r8
  unsigned __int16 *v16; // r12
  int v17; // esi
  int v18; // r9d
  __int64 v19; // rdx
  int v20; // edi
  int v21; // r9d
  int v22; // ebx
  int v23; // r9d
  int v24; // r11d
  __int64 v25; // r9
  __int64 v26; // rsi
  char *v27; // rsi
  __int64 v28; // r8
  _WORD *v29; // rdx
  __int64 v30; // r8
  _QWORD *v31; // r9
  int v32; // ebx
  __int64 v33; // r11
  __int64 v34; // r10
  __int64 v35; // rdi
  __int64 v36; // r13
  __int64 v37; // rdx
  __int64 v38; // r9
  unsigned int v39; // ecx
  __int64 v40; // r10
  void *v41; // rbx
  __int64 v42; // rcx
  void *v43; // rax
  CProcess *v44; // rbx
  int v45; // edi
  __int64 v46; // rax
  CProcess *v47; // rax
  unsigned int v48; // ecx
  DWORD v49; // r13d
  __int64 v50; // rsi
  struct _RTL_CRITICAL_SECTION *v51; // r12
  __int64 v52; // rcx
  __int64 v53; // rax
  int v54; // eax
  unsigned int v55; // ebx
  unsigned __int64 v56; // r9
  __int64 v57; // rdx
  int v58; // ebx
  bool v59; // zf
  CApplicationManager *v60; // rbx
  int v61; // ecx
  struct TSSession *v62; // rdi
  struct IDuckingController *v63; // rsi
  unsigned int v64; // r14d
  unsigned __int16 *v65; // r13
  int updated; // eax
  int v67; // eax
  int v68; // [rsp+20h] [rbp-E0h]
  int v69; // [rsp+20h] [rbp-E0h]
  int v70; // [rsp+20h] [rbp-E0h]
  unsigned int v71; // [rsp+40h] [rbp-C0h] BYREF
  char v72; // [rsp+44h] [rbp-BCh]
  CApplication *v73; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v74; // [rsp+50h] [rbp-B0h]
  CProcess *v75; // [rsp+58h] [rbp-A8h] BYREF
  struct TSSession *v76; // [rsp+60h] [rbp-A0h] BYREF
  CProcess *v77; // [rsp+68h] [rbp-98h]
  struct IDuckingController *v78; // [rsp+70h] [rbp-90h] BYREF
  int v79; // [rsp+78h] [rbp-88h]
  CApplicationManager *v80; // [rsp+80h] [rbp-80h]
  struct IDuckingController *v81; // [rsp+88h] [rbp-78h]
  unsigned __int16 *v82; // [rsp+90h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v83; // [rsp+98h] [rbp-68h]
  CProcess **v84; // [rsp+A0h] [rbp-60h]
  CApplication **v85; // [rsp+A8h] [rbp-58h]
  unsigned int *v86; // [rsp+B0h] [rbp-50h]
  char v87; // [rsp+B8h] [rbp-48h]
  __int128 v88; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v89; // [rsp+D0h] [rbp-30h]
  __int64 v90; // [rsp+D8h] [rbp-28h]
  _BYTE v91[32]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v75 = (CProcess *)a2;
  v80 = g_ApplicationManager;
  v73 = a2[28];
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
    v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4);
    v8 = StreamTypeToString(v7);
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 10, v9, *((_DWORD *)v75 + 40), v8, v6);
  }
  v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
  if ( v10 >= 0x18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x30,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
      (const char *)0x80070057LL,
      v68);
    return 2147942487LL;
  }
  v71 = v10;
  if ( (*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v75 + 96LL))(v75)
    && dword_180056730[v71]
    && !(*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v75 + 136LL))(v75)
    && !(*(unsigned int (__fastcall **)(CProcess *))(*(_QWORD *)v75 + 376LL))(v75) )
  {
    v71 = 0;
  }
  if ( v71 == 3 && !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4) )
  {
    v68 = (int)a4;
    CDuckingManager::OnRenderCommunicationsStreamStateChanged(v12, a3, v13, 1LL);
  }
  v84 = &v75;
  v85 = &v73;
  v86 = &v71;
  v87 = 1;
  v16 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *))(*(_QWORD *)a3 + 72LL))(a3);
  v82 = v16;
  v17 = 0;
  v18 = 0;
  v19 = *((unsigned int *)v75 + 68);
  if ( (int)v19 > 0 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 < 0 || v18 >= (int)v19 )
      {
        ATL::_AtlRaiseException((unsigned int)v14, v19);
        __debugbreak();
      }
      v14 = *(_DWORD **)(v15 + *((_QWORD *)v75 + 33));
      v17 += v14[11];
      ++v18;
      v15 += 8LL;
    }
    while ( v18 < (int)v19 );
  }
  v20 = 0;
  v21 = 0;
  if ( (int)v19 > 0 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 < 0 || v21 >= (int)v19 )
      {
        ATL::_AtlRaiseException((unsigned int)v14, v19);
        __debugbreak();
      }
      v14 = *(_DWORD **)(v15 + *((_QWORD *)v75 + 33));
      v20 += v14[10];
      ++v21;
      v15 += 8LL;
    }
    while ( v21 < (int)v19 );
  }
  v22 = 0;
  v23 = 0;
  if ( (int)v19 > 0 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 < 0 || v23 >= (int)v19 )
      {
        ATL::_AtlRaiseException((unsigned int)v14, v19);
        __debugbreak();
      }
      v14 = *(_DWORD **)(v15 + *((_QWORD *)v75 + 33));
      v22 += v14[2];
      ++v23;
      v15 += 8LL;
    }
    while ( v23 < (int)v19 );
  }
  v24 = 0;
  v25 = 0LL;
  if ( (int)v19 > 0 )
  {
    v15 = 0LL;
    do
    {
      if ( v15 < 0 || (int)v25 >= (int)v19 )
      {
        ATL::_AtlRaiseException((unsigned int)v14, v19);
        __debugbreak();
      }
      v14 = *(_DWORD **)(v15 + *((_QWORD *)v75 + 33));
      v24 += v14[1];
      v25 = (unsigned int)(v25 + 1);
      v15 += 8LL;
    }
    while ( (int)v25 < (int)v19 );
  }
  v79 = v17 + v20 + v24 + v22;
  v72 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64, __int64, __int64))(*(_QWORD *)a4 + 64LL))(
          a4,
          v19,
          v15,
          v25);
  v74 = v71;
  v77 = v75;
  LODWORD(v76) = *((_DWORD *)v75 + 78);
  v26 = 280LL;
  if ( !v72 )
    v26 = 256LL;
  v27 = (char *)v75 + v26;
  v88 = 0LL;
  v89 = 0LL;
  v90 = 0LL;
  v28 = -1LL;
  do
    ++v28;
  while ( v16[v28] );
  std::wstring::_Construct<1,unsigned short const *>(&v88, v16);
  v32 = 0;
  v33 = *((int *)v27 + 4);
  v34 = 0LL;
  v35 = 0LL;
  v36 = v89;
  while ( 1 )
  {
    if ( v34 >= v33 )
      goto LABEL_60;
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            &v88,
                            &v88,
                            v30,
                            v35 + *(_QWORD *)v27) )
      v37 = v88;
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            v38,
                            v37,
                            *(_QWORD *)(v38 + 16),
                            v38) )
      v31 = (_QWORD *)*v31;
    if ( v30 == v36 )
      break;
LABEL_54:
    ++v32;
    v34 = v40 + 1;
    v35 += 32LL;
  }
  v31 = (_QWORD *)((char *)v31 - (__int64)v29);
  while ( v30 )
  {
    if ( *(_WORD *)((char *)v31 + (_QWORD)v29) != *v29 )
      goto LABEL_54;
    --v30;
    ++v29;
  }
  if ( v32 == -1 )
  {
LABEL_60:
    v41 = 0LL;
    goto LABEL_61;
  }
  if ( v32 < 0 || v32 >= *((_DWORD *)v27 + 4) )
  {
    ATL::_AtlRaiseException(v39, (unsigned int)v29);
    __debugbreak();
  }
  v41 = *(void **)(*((_QWORD *)v27 + 1) + 8LL * v32);
LABEL_61:
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v88, v29, v30, v31) )
    std::wstring::_Deallocate_for_capacity(v42, v88, v90);
  if ( !v41 )
  {
    v43 = operator new(0x60uLL);
    v41 = v43;
    v78 = (struct IDuckingController *)v43;
    if ( !v43 )
    {
      operator delete(0LL, (const struct std::nothrow_t *)4);
      v44 = v77;
      goto LABEL_83;
    }
    memset_0(v43, 0, 0x60uLL);
    std::wstring::wstring(v91, v16);
    v45 = ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::Add(
            v27,
            v91,
            &v78);
    std::wstring::~wstring(v91);
    if ( !v45 )
    {
      operator delete(v41, (const struct std::nothrow_t *)4);
      v44 = v77;
      goto LABEL_83;
    }
    operator delete(0LL, (const struct std::nothrow_t *)4);
  }
  ++*((_DWORD *)v41 + v74);
  v44 = v77;
  if ( v72 )
  {
    ++*((_DWORD *)v77 + 77);
  }
  else
  {
    ++*((_DWORD *)v77 + 76);
    if ( CProcess::GetActiveRenderStreamCount(v44, 3u) || CProcess::GetActiveRenderStreamCount(v44, 8u) )
    {
      *((_DWORD *)v44 + 78) = 0;
    }
    else if ( CProcess::GetActiveRenderStreamCount(v44, 2u) )
    {
      *((_DWORD *)v44 + 78) = 1;
    }
    else if ( CProcess::GetActiveRenderStreamCount(v44, 0xBu)
           || CProcess::GetActiveRenderStreamCount(v44, 0xAu)
           || CProcess::GetActiveRenderStreamCount(v44, 1u) )
    {
      *((_DWORD *)v44 + 78) = 2;
    }
    else
    {
      *((_DWORD *)v44 + 78) = (CProcess::GetActiveRenderStreamCount(v44, 7u) == 0) + 3;
    }
  }
  if ( *((_DWORD *)v44 + 76) + *((_DWORD *)v44 + 77) == 1 )
    CProcess::EnsureBamExemption(v44);
LABEL_83:
  v46 = *((int *)v44 + 78);
  if ( (_DWORD)v76 != (_DWORD)v46
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (unsigned int)off_180054768[(int)v76],
      (_DWORD)WPP_GLOBAL_Control,
      *((_DWORD *)v44 + 40),
      (__int64)off_180054768[(int)v76],
      (__int64)off_180054768[v46]);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
    || v71 == 2
    || (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(v73) )
  {
    v47 = v75;
    if ( *((_DWORD *)v75 + 119) == 3 )
    {
      *(_QWORD *)((char *)v75 + 476) = 0LL;
      *((_DWORD *)v47 + 121) = 4;
    }
    CApplication::RemoveAudioPlaybackRestriction(v73);
    CProcess::DeleteInactivityTimer((struct _RTL_CRITICAL_SECTION *)v75);
    CApplication::CleanupBCMStartupLatencyGracePeriod(v73);
  }
  v48 = v71;
  if ( v71 == 2 )
  {
    CApplication::ApplySmtcRelatedPolicy(v73);
    v48 = v71;
  }
  if ( *((_DWORD *)v75 + 106)
    && (v48 == 2 || (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(v73))
    && *((_DWORD *)v73 + 108) )
  {
    CApplication::CommitGoodFaithPLMExemption(v73);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4)
    && (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v73) )
  {
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v80, *((_DWORD *)v73 + 53), 0);
  }
  v74 = 0;
  v78 = 0LL;
  (**(void (__fastcall ***)(struct IAudioStreamInfo *, GUID *, struct IDuckingController **))a4)(
    a4,
    &GUID_390561ae_7375_4558_aff9_667acfe35ac5,
    &v78);
  v81 = v78;
  (*(void (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
  LODWORD(v77) = v71;
  v49 = *((_DWORD *)v75 + 41);
  v50 = HIBYTE(v49);
  v51 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v83 = v51;
  v76 = 0LL;
  EnterCriticalSection(&stru_180067AF8);
  v52 = *(_QWORD *)(qword_180067B38
                  + 16
                  * (qword_180067B50 & (0x100000001B3LL
                                      * (v50 ^ (0x100000001B3LL
                                              * (BYTE2(v49) ^ (0x100000001B3LL
                                                             * (BYTE1(v49) ^ (0x100000001B3LL
                                                                            * ((unsigned __int8)v49 ^ 0xCBF29CE484222325uLL)))))))))
                  + 8);
  if ( v52 == qword_180067B28 )
  {
LABEL_108:
    v52 = 0LL;
  }
  else
  {
    while ( v49 != *(_DWORD *)(v52 + 16) )
    {
      if ( v52 == *(_QWORD *)(qword_180067B38
                            + 16
                            * (qword_180067B50 & (0x100000001B3LL
                                                * (v50 ^ (0x100000001B3LL
                                                        * (BYTE2(v49) ^ (0x100000001B3LL
                                                                       * (BYTE1(v49) ^ (0x100000001B3LL
                                                                                      * ((unsigned __int8)v49 ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_108;
      v52 = *(_QWORD *)(v52 + 8);
    }
  }
  v53 = qword_180067B28;
  if ( v52 )
    v53 = v52;
  if ( v53 == qword_180067B28 )
  {
    LeaveCriticalSection(&stru_180067AF8);
    v54 = TsSessionCreate(v49, &v76);
    v55 = v54;
    if ( v54 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v54,
        v68);
      v56 = v55;
      v57 = 1700LL;
      goto LABEL_114;
    }
    v62 = v76;
  }
  else
  {
    v62 = *(struct TSSession **)(v53 + 24);
    LeaveCriticalSection(&stru_180067AF8);
  }
  LODWORD(v76) = 0;
  v63 = v81;
  v64 = (unsigned int)v77;
  v65 = v82;
  updated = UpdatePolicyGainsFromStreamClassPolicyTable(v62, v82, (unsigned int)v77, 1, 0, v81, (int *)&v76);
  if ( updated >= 0 )
  {
    v58 = (int)v76;
    v67 = UpdatePolicyGainsFromStreamClassPolicyTable(v62, v65, v64, 0, 0, v63, (int *)&v76);
    if ( v67 >= 0 )
    {
      if ( v58 || (v58 = 0, (_DWORD)v76) )
        v58 = 1;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B0,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v67,
        v70);
    }
    if ( v51 )
      LeaveCriticalSection(v51);
    goto LABEL_117;
  }
  v56 = (unsigned int)updated;
  v57 = 1705LL;
LABEL_114:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v57,
    (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)v56,
    v69);
  if ( v51 )
    LeaveCriticalSection(v51);
  v58 = v74;
LABEL_117:
  if ( v78 )
    (*(void (__fastcall **)(struct IDuckingController *))(*(_QWORD *)v78 + 16LL))(v78);
  v59 = v58 == 0;
  v60 = v80;
  if ( !v59 )
    CApplicationManager::UpdateVolumeForAllAppsInSession(v80, *((unsigned int *)v73 + 53), 3LL);
  CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v60, *((_DWORD *)v73 + 53), 0);
  if ( (v71 - 1 <= 1 || v71 - 10 <= 1) && !v79 )
    CApplication::SendTrackStateNotification(v73);
  if ( (unsigned int)CApplication::HasBackgroundAudioTask(v73) )
    CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v60);
  if ( *((_DWORD *)v75 + 106) )
  {
    if ( Microsoft_Windows_AudioEnableBits < 0 )
      McTemplateU0zqq_EventWriteTransfer(
        v61,
        (unsigned int)&EVT_PBM_STREAM_STARTED,
        *((_QWORD *)v73 + 3),
        *((_DWORD *)v75 + 40),
        v71);
  }
  return 0LL;
}
