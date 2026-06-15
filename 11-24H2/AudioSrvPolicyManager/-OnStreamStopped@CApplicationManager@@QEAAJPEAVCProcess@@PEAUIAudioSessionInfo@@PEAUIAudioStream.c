/*
 * XREFs of ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_::_Do_call @ 0x18003AAE0 (std--_Func_impl_no_alloc__lambda_318849112bdacfedbf03f674f146fe6c__void_--_Do_call.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004E70 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800080C0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@PEAH@Z @ 0x180008900 (-UpdatePolicyGainsFromStreamClassPolicyTable@@YAJPEAVTSSession@@PEBGKHHPEAUIDuckingController@@P.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180009830 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18000A450 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C510 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x18000C7D0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18000CE00 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000CF20 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D260 (-IsRestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000D5F0 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000EC20 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180013EE0 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180015760 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?ScheduleDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x180018570 (-ScheduleDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A26C (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?_Large_mode_engaged@?$_String_val@U?$_Simple_types@G@std@@@std@@QEBA_NXZ @ 0x18001B348 (-_Large_mode_engaged@-$_String_val@U-$_Simple_types@G@std@@@std@@QEBA_NXZ.c)
 *     ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x18001B358 (-_Deallocate_for_capacity@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@CAXAEAV-$.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800212A8 (memset_0.c)
 *     WPP_SF_ @ 0x18002B438 (WPP_SF_.c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18002E050 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ?Add@?$CSimpleMap@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAIV?$CSimpleMapEqualHelper@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAI@ATL@@@ATL@@QEAAHAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBQEAI@Z @ 0x1800310BC (-Add@-$CSimpleMap@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAIV-$CSimpleMa.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18003235C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x180033F7C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x180034758 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180034E38 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     WPP_SF_SS @ 0x1800359E4 (WPP_SF_SS.c)
 *     WPP_SF_dSS @ 0x180035B18 (WPP_SF_dSS.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x180037A04 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ @ 0x180039578 (-SendBackgroundStreamStateChangedNotifiction@CApplicationManager@@QEAAXXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x1800397B4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x180039CC0 (WPP_SF_SSSSSSS.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 *     ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x1800414F4 (-StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180041518 (McTemplateU0zqq_EventWriteTransfer.c)
 *     WPP_SF_dSd @ 0x1800415BC (WPP_SF_dSd.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
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
  unsigned __int64 v22; // r8
  int v23; // ebx
  __int64 v24; // rdi
  __int64 v25; // r10
  __int64 v26; // r12
  __int64 v27; // rsi
  __int64 v28; // r9
  char *v29; // rdx
  unsigned int v30; // ecx
  __int64 v31; // r8
  char *v32; // r9
  __int64 v33; // r10
  signed __int64 v34; // r9
  struct TSSession *v35; // rbx
  __int64 v36; // rcx
  struct TSSession *v37; // rax
  int v38; // edi
  __int64 v39; // rax
  int v40; // edx
  int v41; // ecx
  _DWORD *v42; // rax
  CApplication *v43; // rdi
  struct _RTL_CRITICAL_SECTION *v44; // rbx
  int v45; // esi
  _QWORD *v46; // rdx
  __int64 v47; // r8
  int v48; // ebx
  _QWORD *v49; // rdx
  __int64 v50; // r8
  CApplication *v51; // rbx
  struct _RTL_CRITICAL_SECTION *v52; // rdi
  int v53; // esi
  _QWORD *v54; // rdx
  __int64 v55; // r8
  struct IDuckingController *v56; // rbx
  DWORD v57; // r13d
  __int64 v58; // rsi
  struct _RTL_CRITICAL_SECTION *v59; // r12
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // eax
  unsigned int v63; // ebx
  struct TSSession *v64; // rbx
  struct IDuckingController *v65; // rdi
  unsigned int v66; // esi
  unsigned __int16 *v67; // r14
  int updated; // eax
  int v69; // eax
  CApplicationManager *v70; // rsi
  unsigned int v71; // ebx
  struct _RTL_CRITICAL_SECTION *v72; // rdi
  unsigned __int16 *v73; // r14
  __int64 v74; // rsi
  CApplicationManager *v75; // r14
  unsigned int SoundLevel; // eax
  unsigned int v77; // r13d
  unsigned int v78; // r12d
  DWORD PLMExemptionStatus; // eax
  const wchar_t *v80; // rbx
  __int64 v81; // rax
  __int64 v82; // r9
  __int64 v83; // r10
  __int64 v84; // r11
  const wchar_t *v85; // r8
  const wchar_t *v86; // rdx
  unsigned int v87; // edi
  BOOL v88; // ebx
  int v89; // eax
  int v90; // eax
  int v91; // eax
  DWORD v92; // eax
  int v93; // eax
  BOOL v94; // ebx
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
  DWORD SessionId; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v106; // [rsp+54h] [rbp-ACh] BYREF
  char v107; // [rsp+58h] [rbp-A8h]
  unsigned int v108; // [rsp+5Ch] [rbp-A4h]
  PVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  CApplication *v110; // [rsp+68h] [rbp-98h] BYREF
  struct IDuckingController *v111; // [rsp+70h] [rbp-90h] BYREF
  struct TSSession *v112; // [rsp+78h] [rbp-88h] BYREF
  CApplicationManager *v113; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v114; // [rsp+88h] [rbp-78h]
  struct IDuckingController *v115; // [rsp+90h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v116; // [rsp+98h] [rbp-68h]
  PVOID *p_pv; // [rsp+A0h] [rbp-60h]
  CApplication **v118; // [rsp+A8h] [rbp-58h]
  unsigned int *v119; // [rsp+B0h] [rbp-50h]
  char v120; // [rsp+B8h] [rbp-48h]
  __int128 v121; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v122; // [rsp+D0h] [rbp-30h]
  __int64 v123; // [rsp+D8h] [rbp-28h]
  _BYTE v124[32]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v111 = a4;
  pv = a2;
  v113 = g_ApplicationManager;
  v110 = a2[28];
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
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v106 = v10;
  v12 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)pv + 96LL))(pv);
  v13 = 0;
  v14 = &_ImageBase;
  if ( !v12 )
    goto LABEL_12;
  v15 = v106;
  if ( !dword_180053790[v106] )
    goto LABEL_13;
  if ( (*(unsigned int (__fastcall **)(PVOID, __int16 *))(*(_QWORD *)pv + 136LL))(pv, &_ImageBase)
    || (*(unsigned int (__fastcall **)(PVOID))(*(_QWORD *)pv + 376LL))(pv) )
  {
LABEL_12:
    v15 = v106;
  }
  else
  {
    v15 = 0;
    v106 = 0;
  }
LABEL_13:
  if ( v15 == 3
    && !(*(unsigned int (__fastcall **)(struct IAudioStreamInfo *, __int16 *))(*(_QWORD *)a4 + 56LL))(a4, v14) )
  {
    CDuckingManager::OnRenderCommunicationsStreamStateChanged(v16, a3, v17, 0LL, a4);
  }
  p_pv = &pv;
  v118 = &v110;
  v119 = &v106;
  v120 = 1;
  v18 = (unsigned __int16 *)(*(__int64 (__fastcall **)(struct IAudioSessionInfo *, __int16 *))(*(_QWORD *)a3 + 72LL))(
                              a3,
                              v14);
  v114 = v18;
  v107 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a4 + 64LL))(a4);
  v108 = v106;
  v19 = (CProcess *)pv;
  SessionId = *((_DWORD *)pv + 78);
  v20 = 280LL;
  if ( !v107 )
    v20 = 256LL;
  v21 = (char *)pv + v20;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v22 = -1LL;
  do
    ++v22;
  while ( v18[v22] );
  std::wstring::_Construct<1,unsigned short const *>(&v121, v18, v22);
  v23 = 0;
  v24 = *((int *)v21 + 4);
  v25 = 0LL;
  v26 = v122;
  v27 = v121;
  while ( 1 )
  {
    if ( v25 >= v24 )
      goto LABEL_35;
    std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v121);
    if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(v28) )
      v32 = *(char **)v32;
    if ( v31 == v26 )
      break;
LABEL_29:
    ++v23;
    v25 = v33 + 1;
  }
  v34 = v32 - v29;
  while ( v31 )
  {
    if ( *(_WORD *)&v29[v34] != *(_WORD *)v29 )
      goto LABEL_29;
    --v31;
    v29 += 2;
  }
  if ( v23 == -1 )
  {
LABEL_35:
    v35 = 0LL;
    goto LABEL_36;
  }
  if ( v23 < 0 || v23 >= *((_DWORD *)v21 + 4) )
  {
    ATL::_AtlRaiseException(v30, (unsigned int)v29);
    __debugbreak();
  }
  v35 = *(struct TSSession **)(*((_QWORD *)v21 + 1) + 8LL * v23);
LABEL_36:
  if ( (unsigned __int8)std::_String_val<std::_Simple_types<unsigned short>>::_Large_mode_engaged(&v121) )
    std::wstring::_Deallocate_for_capacity(v36, v27, v123);
  if ( v35 )
    goto LABEL_44;
  v37 = (struct TSSession *)operator new(0x60uLL);
  v35 = v37;
  v112 = v37;
  if ( v37 )
  {
    memset_0(v37, 0, 0x60uLL);
    std::wstring::wstring((__int64)v124, (__int64)v114);
    v38 = ATL::CSimpleMap<std::wstring,unsigned int *,ATL::CSimpleMapEqualHelper<std::wstring,unsigned int *>>::Add(
            v21,
            v124,
            &v112);
    std::wstring::~wstring(v124);
    if ( !v38 )
    {
      operator delete(v35, (const struct std::nothrow_t *)4);
      goto LABEL_58;
    }
    operator delete(0LL, (const struct std::nothrow_t *)4);
LABEL_44:
    --*((_DWORD *)v35 + v108);
    if ( v107 )
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
    if ( !(*((_DWORD *)v19 + 77) + *((_DWORD *)v19 + 76)) )
      CProcess::ScheduleDeferredBamExemptionRelease(v19);
    goto LABEL_58;
  }
  operator delete(0LL, (const struct std::nothrow_t *)4);
LABEL_58:
  v39 = *((int *)v19 + 78);
  if ( SessionId != (_DWORD)v39 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_dSS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        (unsigned int)off_180051778[SessionId],
        (_DWORD)WPP_GLOBAL_Control,
        *((_DWORD *)v19 + 40),
        (__int64)off_180051778[SessionId],
        (__int64)off_180051778[v39]);
    }
    if ( SessionId == 1 )
    {
      v40 = *((_DWORD *)pv + 120);
      v41 = v40 ? *((_DWORD *)pv + 121) : *((_DWORD *)pv + 78);
      if ( v41 != 1 && !v40 && !*((_DWORD *)pv + 104) && !CApplication::GetTotalActiveCaptureStreamCount(v110) )
      {
        v42 = pv;
        if ( *((_DWORD *)pv + 119) != 3 )
        {
          *((_DWORD *)pv + 119) = 3;
          v42[120] = 1;
          v42[121] = 1;
        }
        if ( !*((_DWORD *)v110 + 52) && *((_DWORD *)v110 + 54) )
          CApplication::RestrictAudioPlaybackToPrimaryCategories(v110);
        CProcess::StartInactivityTimer((CProcess *)pv);
      }
    }
  }
  v43 = v110;
  v44 = (struct _RTL_CRITICAL_SECTION *)((char *)v110 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v110 + 32));
  v45 = 0;
  v46 = (_QWORD *)*((_QWORD *)v43 + 9);
  while ( v46 )
  {
    v47 = v46[2];
    v46 = (_QWORD *)*v46;
    if ( !*(_DWORD *)(v47 + 416) && *(_DWORD *)(v47 + 432) )
    {
      v45 = 1;
      break;
    }
  }
  if ( v44 )
    LeaveCriticalSection(v44);
  if ( v45 && !(unsigned int)CApplication::IsRestrictedBackgroundAudioCapable(v43) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v43 + 32));
    v48 = 0;
    v49 = (_QWORD *)*((_QWORD *)v43 + 9);
    while ( v49 )
    {
      v50 = v49[2];
      v49 = (_QWORD *)*v49;
      if ( !*(_DWORD *)(v50 + 416) && *(_DWORD *)(v50 + 500) )
      {
        v48 = 1;
        break;
      }
    }
    if ( v43 != (CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v43 + 32));
    if ( v48 )
      goto LABEL_228;
  }
  v51 = v110;
  v52 = (struct _RTL_CRITICAL_SECTION *)((char *)v110 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v110 + 32));
  v53 = 0;
  v54 = (_QWORD *)*((_QWORD *)v51 + 9);
  while ( v54 )
  {
    v55 = v54[2];
    v54 = (_QWORD *)*v54;
    if ( !*(_DWORD *)(v55 + 416) && *(_DWORD *)(v55 + 440) )
    {
      v53 = 1;
      break;
    }
  }
  if ( v52 )
    LeaveCriticalSection(v52);
  if ( v53 )
  {
LABEL_228:
    if ( !*((_DWORD *)v110 + 52) && !*((_DWORD *)pv + 104) )
      CProcess::StartInactivityTimer((CProcess *)pv);
  }
  v56 = v111;
  if ( (*(unsigned __int8 (__fastcall **)(struct IDuckingController *))(*(_QWORD *)v111 + 64LL))(v111)
    && (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v110) )
  {
    CApplicationManager::ApplyPBMPolicyForAllAppsInSession(v113, *((_DWORD *)v110 + 53), 0);
  }
  if ( (v106 - 1 <= 1 || v106 - 10 <= 1)
    && !CProcess::GetActiveRenderStreamCount((CProcess *)pv, 0xBu)
    && !CProcess::GetActiveRenderStreamCount((CProcess *)pv, 0xAu)
    && !CProcess::GetActiveRenderStreamCount((CProcess *)pv, 2u)
    && !CProcess::GetActiveRenderStreamCount((CProcess *)pv, 1u) )
  {
    CApplication::SendTrackStateNotification(v110);
  }
  v57 = 0;
  v111 = 0LL;
  (**(void (__fastcall ***)(struct IDuckingController *, GUID *, struct IDuckingController **))v56)(
    v56,
    &GUID_390561ae_7375_4558_aff9_667acfe35ac5,
    &v111);
  v115 = v111;
  (*(void (__fastcall **)(struct IDuckingController *))(*(_QWORD *)v56 + 64LL))(v56);
  v108 = v106;
  SessionId = *((_DWORD *)pv + 41);
  v58 = HIBYTE(SessionId);
  v59 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v116 = v59;
  v112 = 0LL;
  EnterCriticalSection(&stru_180064A78);
  v60 = *(_QWORD *)(qword_180064AB8
                  + 16
                  * (qword_180064AD0 & (0x100000001B3LL
                                      * (v58 ^ (0x100000001B3LL
                                              * (BYTE2(SessionId) ^ (0x100000001B3LL
                                                                   * (BYTE1(SessionId) ^ (0x100000001B3LL
                                                                                        * ((unsigned __int8)SessionId ^ 0xCBF29CE484222325uLL)))))))))
                  + 8);
  if ( v60 == qword_180064AA8 )
  {
LABEL_119:
    v60 = 0LL;
  }
  else
  {
    while ( SessionId != *(_DWORD *)(v60 + 16) )
    {
      if ( v60 == *(_QWORD *)(qword_180064AB8
                            + 16
                            * (qword_180064AD0 & (0x100000001B3LL
                                                * (v58 ^ (0x100000001B3LL
                                                        * (BYTE2(SessionId) ^ (0x100000001B3LL
                                                                             * (BYTE1(SessionId) ^ (0x100000001B3LL
                                                                                                  * ((unsigned __int8)SessionId ^ 0xCBF29CE484222325uLL)))))))))) )
        goto LABEL_119;
      v60 = *(_QWORD *)(v60 + 8);
    }
  }
  v61 = qword_180064AA8;
  if ( v60 )
    v61 = v60;
  if ( v61 == qword_180064AA8 )
  {
    LeaveCriticalSection(&stru_180064A78);
    v62 = TsSessionCreate(SessionId, &v112);
    v63 = v62;
    if ( v62 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v62);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A4,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)v63);
      if ( !v59 )
        goto LABEL_139;
LABEL_138:
      LeaveCriticalSection(v59);
      goto LABEL_139;
    }
    v64 = v112;
  }
  else
  {
    v64 = *(struct TSSession **)(v61 + 24);
    LeaveCriticalSection(&stru_180064A78);
  }
  SessionId = 0;
  v65 = v115;
  v66 = v108;
  v67 = v114;
  updated = UpdatePolicyGainsFromStreamClassPolicyTable(v64, v114, v108, 1, 1, v115, (int *)&SessionId);
  if ( updated >= 0 )
  {
    v57 = SessionId;
    v69 = UpdatePolicyGainsFromStreamClassPolicyTable(v64, v67, v66, 0, 1, v65, (int *)&SessionId);
    if ( v69 >= 0 )
    {
      if ( v57 || (v57 = 0, SessionId) )
        v57 = 1;
      if ( v59 )
        goto LABEL_138;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B0,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v69);
      if ( v59 )
        goto LABEL_138;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A9,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)(unsigned int)updated);
    if ( v59 )
      goto LABEL_138;
  }
LABEL_139:
  if ( v111 )
    (*(void (__fastcall **)(struct IDuckingController *))(*(_QWORD *)v111 + 16LL))(v111);
  v70 = v113;
  if ( v57 )
    CApplicationManager::UpdateVolumeForAllAppsInSession(v113, *((unsigned int *)v110 + 53), 3LL);
  v71 = *((_DWORD *)v110 + 53);
  v108 = v71;
  v72 = (struct _RTL_CRITICAL_SECTION *)((char *)v70 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v70 + 32));
  v116 = (struct _RTL_CRITICAL_SECTION *)((char *)v70 + 32);
  v73 = (unsigned __int16 *)*((_QWORD *)v70 + 9);
  if ( v73 )
  {
    do
    {
      v74 = *((_QWORD *)v73 + 2);
      v73 = *(unsigned __int16 **)v73;
      v114 = v73;
      if ( *(_DWORD *)(v74 + 212) == v71 )
      {
        EnterCriticalSection(v72);
        v115 = (struct IDuckingController *)v72;
        EnterCriticalSection(v72);
        v112 = (struct TSSession *)v72;
        v75 = v113;
        SoundLevel = CApplicationManager::GetSoundLevel(v113, v74, 0LL);
        v77 = SoundLevel;
        if ( *(_DWORD *)(v74 + 624) )
          v78 = *(_DWORD *)(v74 + 628);
        else
          v78 = SoundLevel;
        PLMExemptionStatus = CApplicationManager::GetPLMExemptionStatus(v75, v74, SoundLevel);
        SessionId = PLMExemptionStatus;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v80 = L"(override)";
          if ( !*(_DWORD *)(v74 + 640) )
            v80 = L" ";
          SoundLevelToString(v78);
          v81 = SoundLevelToString(v77);
          v85 = L"(override)";
          if ( !*(_DWORD *)(v74 + 624) )
            v85 = L" ";
          v86 = L"(override)";
          if ( !*(_DWORD *)(v74 + 632) )
            v86 = L" ";
          WPP_SF_SSSSSSS(
            *(_QWORD *)(v83 + 16),
            (_DWORD)v86,
            (_DWORD)v85,
            *(_QWORD *)(v74 + 24),
            v81,
            (__int64)v86,
            v82,
            (__int64)v85,
            v84,
            (__int64)v80);
        }
        if ( v72 )
          LeaveCriticalSection(v72);
        v87 = 209;
        do
        {
          v88 = 0;
          v89 = v87 & 7;
          if ( v89 == 1 )
          {
            v93 = *(_DWORD *)(v74 + 216);
            v94 = v93 == 0;
            *(_DWORD *)(v74 + 216) = v78;
            if ( v93 != v78 )
            {
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                v95 = SoundLevelToString(v78);
                WPP_SF_SS(
                  *(_QWORD *)(v96 + 16),
                  12,
                  (unsigned int)&WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
                  *(_QWORD *)(v74 + 24),
                  v95);
              }
              if ( v94 != (v78 == 0) )
                CApplicationManager::UpdateVolumeForAllAppsInSession(
                  g_ApplicationManager,
                  *(unsigned int *)(v74 + 212),
                  3LL);
              EnterCriticalSection((LPCRITICAL_SECTION)(v74 + 32));
              v112 = (struct TSSession *)(v74 + 32);
              v97 = *(_QWORD **)(v74 + 72);
              while ( v97 )
              {
                v98 = v97[2];
                v97 = (_QWORD *)*v97;
                if ( !*(_DWORD *)(v98 + 416) )
                  CProcess::RecalculateVolume(v98, 3LL);
              }
              CApplication::NotifyVolumePolicyChange((CApplication *)v74);
              if ( v74 != -32 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v74 + 32));
              EnterCriticalSection((LPCRITICAL_SECTION)(v74 + 224));
              v112 = (struct TSSession *)(v74 + 224);
              *(_DWORD *)(v74 + 272) = 1;
              v111 = 0LL;
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids);
              }
              v111 = (struct IDuckingController *)-4400000LL;
              (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, struct IDuckingController **, _QWORD, _DWORD))(*(_QWORD *)ThreadPool + 24LL))(
                ThreadPool,
                *(_QWORD *)(v74 + 264),
                &v111,
                0LL,
                0);
              if ( v74 != -224 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v74 + 224));
            }
          }
          else
          {
            v90 = v89 - 2;
            if ( v90 )
            {
              v91 = v90 - 1;
              if ( v91 )
              {
                if ( v91 == 1 )
                  Sleep(0xAu);
              }
              else
              {
                EnterCriticalSection((LPCRITICAL_SECTION)(v74 + 336));
                v92 = SessionId;
                *(_DWORD *)(v74 + 380) = SessionId;
                if ( v92 == 1 )
                  v88 = *(_DWORD *)(v74 + 272) != 0;
                if ( v74 != -336 )
                  LeaveCriticalSection((LPCRITICAL_SECTION)(v74 + 336));
                if ( !v88 )
                  CApplication::ProcessPendingPLMExemptionChange((CApplication *)v74);
              }
            }
            else
            {
              EnterCriticalSection((LPCRITICAL_SECTION)(v74 + 280));
              *(_DWORD *)(v74 + 324) = v77;
              if ( (signed int)v77 < *(_DWORD *)(v74 + 328) )
                v88 = *(_DWORD *)(v74 + 272) != 0;
              if ( v74 != -280 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v74 + 280));
              if ( !v88 )
                CApplication::ProcessPendingSoundLevelNotification((CApplication *)v74);
            }
          }
          v87 >>= 3;
        }
        while ( v87 );
        if ( !v77 && !v78 )
        {
          if ( SessionId == 1 )
          {
            *(_DWORD *)(v74 + 620) = 1;
            *(_QWORD *)(v74 + 624) = 1LL;
            *(_QWORD *)(v74 + 632) = 1LL;
            *(_DWORD *)(v74 + 640) = 1;
            *(_DWORD *)(v74 + 644) = 1;
          }
          else if ( *(_DWORD *)(v74 + 620) != 6 )
          {
            *(_DWORD *)(v74 + 620) = 6;
            *(_QWORD *)(v74 + 624) = 1LL;
            *(_QWORD *)(v74 + 632) = 1LL;
          }
        }
        v72 = (struct _RTL_CRITICAL_SECTION *)((char *)v113 + 32);
        if ( v113 != (CApplicationManager *)-32LL )
          LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v113 + 32));
        v71 = v108;
        v73 = v114;
      }
    }
    while ( v73 );
    v70 = v113;
  }
  if ( v72 )
    LeaveCriticalSection(v72);
  v99 = v110;
  v100 = (struct _RTL_CRITICAL_SECTION *)((char *)v110 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v110 + 32));
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
    CApplicationManager::SendBackgroundStreamStateChangedNotifiction(v70);
  if ( *((_DWORD *)pv + 106) )
  {
    if ( Microsoft_Windows_AudioEnableBits < 0 )
      McTemplateU0zqq_EventWriteTransfer(
        v101,
        (unsigned int)&EVT_PBM_STREAM_STOPPED,
        *((_QWORD *)v110 + 3),
        *((_DWORD *)pv + 40),
        v106);
  }
  return 0LL;
}
