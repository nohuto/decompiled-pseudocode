/*
 * XREFs of ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Do_call @ 0x18003D300 (std--_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_--_Do_call.c)
 * Callees:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180002030 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180003250 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180003FF0 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180004110 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180004650 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180005980 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180005BA0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180005CE0 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x1800065B0 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180006B20 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000A2C0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x18000D970 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180013550 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015310 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?ScheduleDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x180018440 (-ScheduleDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A13C (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B218 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B228 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800205CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800211F8 (memset_0.c)
 *     WPP_SF_ @ 0x18002DA28 (WPP_SF_.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180030A30 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x180033A9C (-Add@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSimpleMa.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180034D3C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18003695C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x180037138 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180037818 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     WPP_SF_SS @ 0x1800383C4 (WPP_SF_SS.c)
 *     WPP_SF_dSS @ 0x1800384F8 (WPP_SF_dSS.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x18003BDA0 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18003BFDC (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180043D14 (-StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180043D38 (McTemplateU0zqq_EventWriteTransfer.c)
 *     WPP_SF_dSd @ 0x180043DDC (WPP_SF_dSd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CApplicationManager::OnStreamStopped(
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
  int v12; // eax
  int v13; // r15d
  __int16 *v14; // rdx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int16 *v18; // rbx
  CProcess *v19; // r13
  __int64 v20; // r14
  char *v21; // r14
  __int64 v22; // r8
  _WORD *v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // r9
  int v26; // ebx
  __int64 v27; // rdi
  __int64 v28; // r10
  __int64 v29; // r11
  __int64 v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // r9
  unsigned int v34; // ecx
  __int64 v35; // r10
  __int64 v36; // r11
  struct TSSession *v37; // rbx
  __int64 v38; // rcx
  struct TSSession *v39; // rax
  int v40; // edi
  __int64 v41; // rax
  int v42; // ebx
  int v43; // edx
  int v44; // ecx
  _DWORD *v45; // rax
  CApplication *v46; // rdi
  struct _RTL_CRITICAL_SECTION *v47; // rbx
  int v48; // esi
  _QWORD *v49; // rdx
  __int64 v50; // r8
  int v51; // ebx
  _QWORD *v52; // rdx
  __int64 v53; // r8
  CApplication *v54; // rbx
  struct _RTL_CRITICAL_SECTION *v55; // rdi
  int v56; // esi
  _QWORD *v57; // rdx
  __int64 v58; // r8
  __int64 v59; // rbx
  int v60; // r13d
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rbx
  __int64 v64; // r14
  struct _RTL_CRITICAL_SECTION *v65; // r12
  unsigned __int64 v66; // r8
  __int64 v67; // rcx
  DWORD v68; // ebx
  __int64 v69; // rax
  int v70; // eax
  unsigned int v71; // ebx
  struct TSSession *v72; // rbx
  struct IDuckingController *v73; // rdi
  unsigned int v74; // esi
  unsigned __int16 *v75; // r14
  int updated; // eax
  int v77; // eax
  bool v78; // zf
  CApplicationManager *v79; // r13
  unsigned int v80; // ebx
  struct _RTL_CRITICAL_SECTION *v81; // r12
  unsigned __int16 *v82; // r14
  __int64 v83; // rsi
  unsigned int v84; // edi
  unsigned int v85; // r13d
  BOOL v86; // ebx
  int v87; // eax
  int v88; // eax
  int v89; // eax
  DWORD v90; // eax
  int v91; // eax
  int v92; // eax
  BOOL v93; // ebx
  BOOL v94; // r14d
  __int64 v95; // rax
  __int64 v96; // r10
  _QWORD *v97; // rbx
  __int64 v98; // rcx
  CApplication *v99; // rbx
  struct _RTL_CRITICAL_SECTION *v100; // rdi
  int v101; // ecx
  _QWORD *v102; // rdx
  __int64 v103; // r8
  __int64 v104; // rax
  int v105; // [rsp+20h] [rbp-B9h]
  int v106; // [rsp+20h] [rbp-B9h]
  int v107; // [rsp+20h] [rbp-B9h]
  int v108; // [rsp+20h] [rbp-B9h]
  unsigned int v109; // [rsp+40h] [rbp-99h] BYREF
  int v110; // [rsp+44h] [rbp-95h] BYREF
  char v111; // [rsp+48h] [rbp-91h]
  unsigned int v112; // [rsp+4Ch] [rbp-8Dh]
  PVOID pv; // [rsp+50h] [rbp-89h] BYREF
  CApplication *v114; // [rsp+58h] [rbp-81h] BYREF
  struct IDuckingController *v115; // [rsp+60h] [rbp-79h] BYREF
  struct TSSession *v116; // [rsp+68h] [rbp-71h] BYREF
  DWORD SessionId[2]; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int16 *v118; // [rsp+78h] [rbp-61h]
  CApplicationManager *v119; // [rsp+80h] [rbp-59h]
  struct IDuckingController *v120; // [rsp+88h] [rbp-51h]
  struct _RTL_CRITICAL_SECTION *v121; // [rsp+90h] [rbp-49h]
  PVOID *p_pv; // [rsp+98h] [rbp-41h]
  CApplication **v123; // [rsp+A0h] [rbp-39h]
  unsigned int *v124; // [rsp+A8h] [rbp-31h]
  char v125; // [rsp+B0h] [rbp-29h]
  __int128 v126; // [rsp+B8h] [rbp-21h] BYREF
  __int64 v127; // [rsp+C8h] [rbp-11h]
  __int64 v128; // [rsp+D0h] [rbp-9h]
  _BYTE v129[32]; // [rsp+D8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+5Fh]

  *(_QWORD *)SessionId = a4;
  pv = a2;
  v119 = g_ApplicationManager;
  v114 = a2[28];
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
    v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 56LL))(a4);
    v8 = StreamTypeToString(v7);
    WPP_SF_dSd(*((_QWORD *)WPP_GLOBAL_Control + 2), 11, v9, *((_DWORD *)pv + 40), v8, v6);
  }
  v10 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 48LL))(a4);
  if ( v10 >= 0x18 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
      (const char *)0x80070057LL,
      v105);
    return 2147942487LL;
  }
  v109 = v10;
  v12 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 96LL))(pv);
  v13 = 0;
  v14 = &_ImageBase;
  if ( !v12 )
    goto LABEL_12;
  v15 = v109;
  if ( !dword_180056730[v109] )
    goto LABEL_13;
  if ( (*(unsigned int (__fastcall **)(PVOID, __int16 *))(*(_QWORD *)pv + 136LL))(pv, &_ImageBase)
    || (*(unsigned int (__fastcall **)(PVOID))(*(_QWORD *)pv + 376LL))(pv) )
  {
LABEL_12:
    v15 = v109;
  }
  else
  {
    v15 = 0;
    v109 = 0;
  }
LABEL_13:
  if ( v15 == 3
    && !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *, __int16 *))(*(_QWORD *)a4 + 56LL))(a4, v14) )
  {
    v105 = (int)a4;
    CDuckingManager::OnRenderCommunicationsStreamStateChanged(v16, a3, v17, 0LL);
  }
  p_pv = &pv;
  v123 = &v114;
  v124 = &v109;
  v125 = 1;
  v18 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *, __int16 *))(*(_QWORD *)a3 + 72LL))(
                              a3,
                              v14);
  v118 = v18;
  v111 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
  v112 = v109;
  v19 = (CProcess *)pv;
  LODWORD(v115) = *((_DWORD *)pv + 78);
  v20 = 280LL;
  if ( !v111 )
    v20 = 256LL;
  v21 = (char *)pv + v20;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  v22 = -1LL;
  do
    ++v22;
  while ( v18[v22] );
  std::wstring::_Construct<1,unsigned short const *>(&v126, v18);
  v26 = 0;
  v27 = *((int *)v21 + 4);
  v28 = 0LL;
  v29 = 0LL;
  v30 = v127;
  v31 = v126;
  while ( 1 )
  {
    if ( v28 >= v27 )
      goto LABEL_37;
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            &v126,
                            &v126,
                            v24,
                            v29 + *(_QWORD *)v21) )
      v32 = v31;
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(
                            v33,
                            v32,
                            *(_QWORD *)(v33 + 16),
                            v33) )
      v25 = (_QWORD *)*v25;
    if ( v24 == v30 )
      break;
LABEL_31:
    ++v26;
    v28 = v35 + 1;
    v29 = v36 + 32;
  }
  v25 = (_QWORD *)((char *)v25 - (__int64)v23);
  while ( v24 )
  {
    if ( *(_WORD *)((char *)v25 + (_QWORD)v23) != *v23 )
      goto LABEL_31;
    --v24;
    ++v23;
  }
  if ( v26 == -1 )
  {
LABEL_37:
    v37 = 0LL;
    goto LABEL_38;
  }
  if ( v26 < 0 || v26 >= *((_DWORD *)v21 + 4) )
  {
    ATL::_AtlRaiseException(v34, (unsigned int)v23);
    __debugbreak();
  }
  v37 = *(struct TSSession **)(*((_QWORD *)v21 + 1) + 8LL * v26);
LABEL_38:
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v126, v23, v24, v25) )
    std::wstring::_Deallocate_for_capacity(v38, v31, v128);
  if ( v37 )
    goto LABEL_46;
  v39 = (struct TSSession *)operator new(0x60uLL);
  v37 = v39;
  v116 = v39;
  if ( v39 )
  {
    memset_0(v39, 0, 0x60uLL);
    std::wstring::wstring(v129, v118);
    v40 = ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::Add(
            v21,
            v129,
            &v116);
    std::wstring::~wstring(v129);
    if ( !v40 )
    {
      operator delete(v37, (const struct std::nothrow_t *)4);
      goto LABEL_60;
    }
    operator delete(0LL, (const struct std::nothrow_t *)4);
LABEL_46:
    --*((_DWORD *)v37 + v112);
    if ( v111 )
    {
      --*((_DWORD *)v19 + 77);
    }
    else
    {
      --*((_DWORD *)v19 + 76);
      if ( CProcess::GetActiveRenderStreamCount(v19, 3u) || CProcess::GetActiveRenderStreamCount(v19, 8u) )
      {
        *((_DWORD *)v19 + 78) = 0;
      }
      else if ( CProcess::GetActiveRenderStreamCount(v19, 2u) )
      {
        *((_DWORD *)v19 + 78) = 1;
      }
      else if ( CProcess::GetActiveRenderStreamCount(v19, 0xBu)
             || CProcess::GetActiveRenderStreamCount(v19, 0xAu)
             || CProcess::GetActiveRenderStreamCount(v19, 1u) )
      {
        *((_DWORD *)v19 + 78) = 2;
      }
      else
      {
        *((_DWORD *)v19 + 78) = (CProcess::GetActiveRenderStreamCount(v19, 7u) == 0) + 3;
      }
    }
    if ( !(*((_DWORD *)v19 + 76) + *((_DWORD *)v19 + 77)) )
      CProcess::ScheduleDeferredBamExemptionRelease(v19);
    goto LABEL_60;
  }
  operator delete(0LL, (const struct std::nothrow_t *)4);
LABEL_60:
  v41 = *((int *)v19 + 78);
  v42 = (int)v115;
  if ( (_DWORD)v115 != (_DWORD)v41 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dSS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (unsigned int)off_180054768[(int)v115],
        (_DWORD)WPP_GLOBAL_Control,
        *((_DWORD *)v19 + 40),
        (__int64)off_180054768[(int)v115],
        (__int64)off_180054768[v41]);
    }
    if ( v42 == 1 )
    {
      v43 = *((_DWORD *)pv + 120);
      v44 = v43 ? *((_DWORD *)pv + 121) : *((_DWORD *)pv + 78);
      if ( v44 != 1 && !v43 && !*((_DWORD *)pv + 104) && !CApplication::GetTotalActiveCaptureStreamCount(v114) )
      {
        v45 = pv;
        if ( *((_DWORD *)pv + 119) != 3 )
        {
          *((_DWORD *)pv + 119) = 3;
          v45[120] = 1;
          v45[121] = 1;
        }
        if ( !*((_DWORD *)v114 + 52) && *((_DWORD *)v114 + 54) )
          CApplication::RestrictAudioPlaybackToPrimaryCategories(v114);
        CProcess::StartInactivityTimer((CProcess *)pv);
      }
    }
  }
  v46 = v114;
  v47 = (struct _RTL_CRITICAL_SECTION *)((char *)v114 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v114 + 32));
  v48 = 0;
  v49 = (_QWORD *)*((_QWORD *)v46 + 9);
  while ( v49 )
  {
    v50 = v49[2];
    v49 = (_QWORD *)*v49;
    if ( !*(_DWORD *)(v50 + 416) && *(_DWORD *)(v50 + 432) )
    {
      v48 = 1;
      break;
    }
  }
  if ( v47 )
    LeaveCriticalSection(v47);
  if ( v48 && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(v46) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v46 + 32));
    v51 = 0;
    v52 = (_QWORD *)*((_QWORD *)v46 + 9);
    while ( v52 )
    {
      v53 = v52[2];
      v52 = (_QWORD *)*v52;
      if ( !*(_DWORD *)(v53 + 416) && *(_DWORD *)(v53 + 500) )
      {
        v51 = 1;
        break;
      }
    }
    if ( v46 != (CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v46 + 32));
    if ( v51 )
      goto LABEL_215;
  }
  v54 = v114;
  v55 = (struct _RTL_CRITICAL_SECTION *)((char *)v114 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v114 + 32));
  v56 = 0;
  v57 = (_QWORD *)*((_QWORD *)v54 + 9);
  while ( v57 )
  {
    v58 = v57[2];
    v57 = (_QWORD *)*v57;
    if ( !*(_DWORD *)(v58 + 416) && *(_DWORD *)(v58 + 440) )
    {
      v56 = 1;
      break;
    }
  }
  if ( v55 )
    LeaveCriticalSection(v55);
  if ( v56 )
  {
LABEL_215:
    if ( !*((_DWORD *)v114 + 52) && !*((_DWORD *)pv + 104) )
      CProcess::StartInactivityTimer((CProcess *)pv);
  }
  v59 = *(_QWORD *)SessionId;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)SessionId + 64LL))(*(_QWORD *)SessionId)
    && (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v114) )
  {
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v119, *((_DWORD *)v114 + 53), 0);
  }
  if ( (v109 - 1 <= 1 || v109 - 10 <= 1)
    && !CProcess::GetActiveRenderStreamCount((CProcess *)pv, 0xBu)
    && !CProcess::GetActiveRenderStreamCount((CProcess *)pv, 0xAu)
    && !CProcess::GetActiveRenderStreamCount((CProcess *)pv, 2u)
    && !CProcess::GetActiveRenderStreamCount((CProcess *)pv, 1u) )
  {
    CApplication::SendTrackStateNotification(v114);
  }
  v60 = 0;
  v115 = 0LL;
  (**(void (__fastcall ***)(__int64, GUID *, struct IDuckingController **))v59)(
    v59,
    &GUID_390561ae_7375_4558_aff9_667acfe35ac5,
    &v115);
  v120 = v115;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 64LL))(v59);
  v112 = v109;
  SessionId[0] = *((_DWORD *)pv + 41);
  v61 = HIBYTE(SessionId[0]);
  v62 = BYTE2(SessionId[0]);
  v63 = BYTE1(SessionId[0]);
  v64 = LOBYTE(SessionId[0]);
  v65 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v121 = v65;
  v116 = 0LL;
  EnterCriticalSection(&stru_180067AF8);
  v66 = 2
      * (qword_180067B50 & (0x100000001B3LL
                          * (v61 ^ (0x100000001B3LL
                                  * (v62 ^ (0x100000001B3LL * (v63 ^ (0x100000001B3LL * (v64 ^ 0xCBF29CE484222325uLL)))))))));
  v67 = *(_QWORD *)(qword_180067B38
                  + 16
                  * (qword_180067B50 & (0x100000001B3LL
                                      * (v61 ^ (0x100000001B3LL
                                              * (v62 ^ (0x100000001B3LL
                                                      * (v63 ^ (0x100000001B3LL * (v64 ^ 0xCBF29CE484222325uLL)))))))))
                  + 8);
  v68 = SessionId[0];
  if ( v67 == qword_180067B28 )
  {
LABEL_121:
    v67 = 0LL;
  }
  else
  {
    while ( SessionId[0] != *(_DWORD *)(v67 + 16) )
    {
      if ( v67 == *(_QWORD *)(qword_180067B38 + 8 * v66) )
        goto LABEL_121;
      v67 = *(_QWORD *)(v67 + 8);
    }
  }
  v69 = qword_180067B28;
  if ( v67 )
    v69 = v67;
  if ( v69 == qword_180067B28 )
  {
    LeaveCriticalSection(&stru_180067AF8);
    v70 = TsSessionCreate(v68, &v116);
    v71 = v70;
    if ( v70 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v70,
        v105);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A4,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v71,
        v106);
      if ( !v65 )
        goto LABEL_141;
LABEL_140:
      LeaveCriticalSection(v65);
      goto LABEL_141;
    }
    v72 = v116;
  }
  else
  {
    v72 = *(struct TSSession **)(v69 + 24);
    LeaveCriticalSection(&stru_180067AF8);
  }
  v110 = 0;
  v73 = v120;
  v74 = v112;
  v75 = v118;
  updated = UpdatePolicyGainsFromStreamClassPolicyTable(v72, v118, v112, 1, 1, v120, &v110);
  if ( updated >= 0 )
  {
    v60 = v110;
    v77 = UpdatePolicyGainsFromStreamClassPolicyTable(v72, v75, v74, 0, 1, v73, &v110);
    if ( v77 >= 0 )
    {
      if ( v60 || (v60 = 0, v110) )
        v60 = 1;
      if ( v65 )
        goto LABEL_140;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B0,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v77,
        v108);
      if ( v65 )
        goto LABEL_140;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A9,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)updated,
      v107);
    if ( v65 )
      goto LABEL_140;
  }
LABEL_141:
  if ( v115 )
    (*(void (__fastcall **)(struct IDuckingController *))(*(_QWORD *)v115 + 16LL))(v115);
  v78 = v60 == 0;
  v79 = v119;
  if ( !v78 )
    CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)v119, *((_DWORD *)v114 + 53), 3u);
  v80 = *((_DWORD *)v114 + 53);
  v112 = v80;
  v81 = (struct _RTL_CRITICAL_SECTION *)((char *)v79 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v79 + 32));
  v121 = (struct _RTL_CRITICAL_SECTION *)((char *)v79 + 32);
  v82 = (unsigned __int16 *)*((_QWORD *)v79 + 9);
  while ( v82 )
  {
    v83 = *((_QWORD *)v82 + 2);
    v82 = *(unsigned __int16 **)v82;
    v118 = v82;
    if ( *(_DWORD *)(v83 + 212) == v80 )
    {
      EnterCriticalSection(v81);
      v120 = (struct IDuckingController *)v81;
      LODWORD(v115) = 0;
      v110 = 0;
      SessionId[0] = 0;
      CApplicationManager::GetApplicationPBMStatus(
        v79,
        (struct CApplication *)v83,
        (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v110,
        (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v115,
        (enum _PLM_EXEMPTION *)SessionId);
      v84 = 209;
      v85 = (unsigned int)v115;
      do
      {
        v86 = 0;
        v87 = v84 & 7;
        if ( v87 == 1 )
        {
          v92 = *(_DWORD *)(v83 + 216);
          v93 = v92 != v85;
          v94 = v92 == 0;
          *(_DWORD *)(v83 + 216) = v85;
          if ( v92 != v85
            && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v95 = SoundLevelToString(v85);
            WPP_SF_SS(
              *(_QWORD *)(v96 + 16),
              12,
              (unsigned int)&WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
              *(_QWORD *)(v83 + 24),
              v95);
          }
          if ( v93 )
          {
            if ( v94 != (v85 == 0) )
              CApplicationManager::UpdateVolumeForAllAppsInSession(
                (__int64)g_ApplicationManager,
                *(_DWORD *)(v83 + 212),
                3u);
            EnterCriticalSection((LPCRITICAL_SECTION)(v83 + 32));
            v116 = (struct TSSession *)(v83 + 32);
            v97 = *(_QWORD **)(v83 + 72);
            while ( v97 )
            {
              v98 = v97[2];
              v97 = (_QWORD *)*v97;
              if ( !*(_DWORD *)(v98 + 416) )
                CProcess::RecalculateVolume(v98, 3LL);
            }
            CApplication::NotifyVolumePolicyChange((CApplication *)v83);
            if ( v83 != -32 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v83 + 32));
            EnterCriticalSection((LPCRITICAL_SECTION)(v83 + 224));
            v115 = (struct IDuckingController *)(v83 + 224);
            *(_DWORD *)(v83 + 272) = 1;
            v116 = 0LL;
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids);
            }
            v116 = (struct TSSession *)-4400000LL;
            (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, struct TSSession **, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
              ThreadPool,
              *(_QWORD *)(v83 + 264),
              &v116,
              0LL,
              0);
            if ( v83 != -224 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v83 + 224));
          }
        }
        else
        {
          v88 = v87 - 2;
          if ( v88 )
          {
            v89 = v88 - 1;
            if ( v89 )
            {
              if ( v89 == 1 )
                Sleep(0xAu);
            }
            else
            {
              EnterCriticalSection((LPCRITICAL_SECTION)(v83 + 336));
              v90 = SessionId[0];
              *(_DWORD *)(v83 + 380) = SessionId[0];
              if ( v90 == 1 )
                v86 = *(_DWORD *)(v83 + 272) != 0;
              if ( v83 != -336 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v83 + 336));
              if ( !v86 )
                CApplication::ProcessPendingPLMExemptionChange((CApplication *)v83);
            }
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(v83 + 280));
            v91 = v110;
            *(_DWORD *)(v83 + 324) = v110;
            if ( v91 < *(_DWORD *)(v83 + 328) )
              v86 = *(_DWORD *)(v83 + 272) != 0;
            if ( v83 != -280 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v83 + 280));
            if ( !v86 )
              CApplication::ProcessPendingSoundLevelNotification((CApplication *)v83);
          }
        }
        v84 >>= 3;
      }
      while ( v84 );
      if ( !v110 && !v85 )
      {
        if ( SessionId[0] == 1 )
        {
          *(_DWORD *)(v83 + 620) = 1;
          *(_QWORD *)(v83 + 624) = 1LL;
          *(_QWORD *)(v83 + 632) = 1LL;
          *(_DWORD *)(v83 + 640) = 1;
          *(_DWORD *)(v83 + 644) = 1;
        }
        else if ( *(_DWORD *)(v83 + 620) != 6 )
        {
          *(_DWORD *)(v83 + 620) = 6;
          *(_QWORD *)(v83 + 624) = 1LL;
          *(_QWORD *)(v83 + 632) = 1LL;
        }
      }
      v79 = v119;
      v81 = (struct _RTL_CRITICAL_SECTION *)((char *)v119 + 32);
      if ( v119 != (CApplicationManager *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v119 + 32));
      v80 = v112;
      v82 = v118;
    }
  }
  if ( v81 )
    LeaveCriticalSection(v81);
  v99 = v114;
  v100 = (struct _RTL_CRITICAL_SECTION *)((char *)v114 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v114 + 32));
  v102 = (_QWORD *)*((_QWORD *)v99 + 9);
  while ( v102 )
  {
    v103 = v102[2];
    v102 = (_QWORD *)*v102;
    if ( !*(_DWORD *)(v103 + 416) )
    {
      v104 = *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 - *(_QWORD *)(v103 + 520);
      if ( *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 == *(_QWORD *)(v103 + 520) )
        v104 = *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 - *(_QWORD *)(v103 + 528);
      if ( v104 )
      {
        v13 = 1;
        break;
      }
    }
  }
  if ( v100 )
    LeaveCriticalSection(v100);
  if ( v13 )
    CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v79);
  if ( *((_DWORD *)pv + 106) )
  {
    if ( Microsoft_Windows_AudioEnableBits < 0 )
      McTemplateU0zqq_EventWriteTransfer(
        v101,
        (unsigned int)&EVT_PBM_STREAM_STOPPED,
        *((_QWORD *)v114 + 3),
        *((_DWORD *)pv + 40),
        v109);
  }
  return 0LL;
}
