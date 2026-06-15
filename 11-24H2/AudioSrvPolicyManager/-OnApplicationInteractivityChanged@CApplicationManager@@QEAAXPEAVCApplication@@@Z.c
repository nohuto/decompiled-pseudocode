/*
 * XREFs of ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0
 * Callers:
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x180003624 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 *     _lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator() @ 0x18000413C (_lambda_2f91230d5263cfdecd1c9667b3e483e9_--operator().c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x180038410 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x180038518 (-OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 *     ?OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18003886C (-OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800080C0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?HasPlayToStreams@CApplication@@QEAAHXZ @ 0x180009870 (-HasPlayToStreams@CApplication@@QEAAHXZ.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C510 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C730 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x18000C7D0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18000CE00 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000CF20 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x18000D120 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18000D520 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x18000D5F0 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000EC20 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x180012580 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180014690 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001F20C (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18001F420 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     __std_find_trivial_8 @ 0x18001FCD0 (__std_find_trivial_8.c)
 *     WPP_SF_ @ 0x18002B438 (WPP_SF_.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180031590 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18003235C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x1800323E0 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x180033F7C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     WPP_SF_SS @ 0x1800359E4 (WPP_SF_SS.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x180037A04 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?GrantExemptionForBCMStartupLatency@@YAHXZ @ 0x180037C1C (-GrantExemptionForBCMStartupLatency@@YAHXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x1800397B4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x180039CC0 (WPP_SF_SSSSSSS.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x18003F3C8 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180040A78 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     memmove_0 @ 0x180048BB8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall CApplicationManager::OnApplicationInteractivityChanged(
        CApplicationManager *this,
        struct CApplication *a2)
{
  struct CApplication *v2; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  const wchar_t *v5; // rax
  __int64 v6; // r14
  struct _RTL_CRITICAL_SECTION *v7; // r15
  int v8; // ebx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  int v11; // r13d
  int v12; // ebx
  _QWORD *v13; // rsi
  __int64 v14; // rbp
  unsigned int SoundLevel; // eax
  unsigned int v16; // r12d
  unsigned int v17; // r15d
  int PLMExemptionStatus; // eax
  const wchar_t *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // r11
  const wchar_t *v24; // r8
  const wchar_t *v25; // rdx
  unsigned int v26; // edi
  BOOL v27; // ebx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  BOOL v32; // ebx
  __int64 v33; // rax
  __int64 v34; // r10
  _QWORD *v35; // rbx
  __int64 v36; // rcx
  unsigned int v37; // esi
  int v38; // ebx
  _QWORD *v39; // rcx
  __int64 v40; // rdx
  int v41; // ebx
  _QWORD *v42; // rdx
  __int64 v43; // r8
  int HasPlayToStreams; // eax
  struct _RTL_CRITICAL_SECTION *v45; // rdi
  _QWORD *v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rbx
  struct TSSession *v49; // rbx
  __int64 trivial_8; // rax
  __int64 v51; // r8
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+50h] [rbp-88h]
  __int64 v53; // [rsp+58h] [rbp-80h] BYREF
  _QWORD *v54; // [rsp+60h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v55; // [rsp+68h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v56; // [rsp+70h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v57; // [rsp+78h] [rbp-60h]
  struct _RTL_CRITICAL_SECTION *v58; // [rsp+80h] [rbp-58h]
  __int64 v59; // [rsp+88h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]
  int v63; // [rsp+F0h] [rbp+18h]
  int v64; // [rsp+F8h] [rbp+20h]

  v2 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v56 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = L"INTERACTIVE";
    if ( !*((_DWORD *)v2 + 52) )
      v5 = (const wchar_t *)L"NOT_INTERACTIVE";
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      45,
      (unsigned int)&WPP_8d4f0c2ae8213c98c7518ad68b13e68c_Traceguids,
      *((_QWORD *)v2 + 3),
      (__int64)v5);
  }
  if ( *((_DWORD *)v2 + 52) )
  {
    v6 = 0LL;
    *((_QWORD *)v2 + 86) = 0LL;
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 32);
    v55 = (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 32));
    v8 = 0;
    v9 = (_QWORD *)*((_QWORD *)v2 + 9);
    while ( v9 )
    {
      v10 = v9[2];
      v9 = (_QWORD *)*v9;
      if ( !*(_DWORD *)(v10 + 416) && *(_DWORD *)(v10 + 432) )
      {
        v11 = 1;
        v8 = 1;
        goto LABEL_14;
      }
    }
    v11 = 1;
LABEL_14:
    if ( v2 != (struct CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 32));
    if ( v8 )
      CApplication::CleanupBCMStartupLatencyGracePeriod(v2);
    *(_QWORD *)((char *)v2 + 620) = 0LL;
    *(_QWORD *)((char *)v2 + 628) = 0LL;
    *(_QWORD *)((char *)v2 + 636) = 0LL;
    *((_DWORD *)v2 + 161) = 1;
    v12 = *((_DWORD *)v2 + 53);
    v64 = v12;
    EnterCriticalSection(v4);
    v57 = v4;
    v13 = (_QWORD *)*((_QWORD *)this + 9);
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = v13[2];
        v13 = (_QWORD *)*v13;
        v54 = v13;
        if ( *(_DWORD *)(v14 + 212) == v12 )
          break;
LABEL_84:
        if ( !v13 )
        {
          v2 = a2;
          v7 = v55;
          goto LABEL_86;
        }
      }
      EnterCriticalSection(v4);
      v58 = v4;
      EnterCriticalSection(v4);
      SoundLevel = CApplicationManager::GetSoundLevel(this, v14, 0LL);
      v16 = SoundLevel;
      if ( *(_DWORD *)(v14 + 624) )
        v17 = *(_DWORD *)(v14 + 628);
      else
        v17 = SoundLevel;
      PLMExemptionStatus = CApplicationManager::GetPLMExemptionStatus(this, v14, SoundLevel);
      v63 = PLMExemptionStatus;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v19 = L"(override)";
        if ( !*(_DWORD *)(v14 + 640) )
          v19 = L" ";
        SoundLevelToString(v17);
        v20 = SoundLevelToString(v16);
        v24 = L"(override)";
        if ( !*(_DWORD *)(v14 + 624) )
          v24 = L" ";
        v25 = L"(override)";
        if ( !*(_DWORD *)(v14 + 632) )
          v25 = L" ";
        WPP_SF_SSSSSSS(
          *(_QWORD *)(v22 + 16),
          (_DWORD)v25,
          (_DWORD)v24,
          *(_QWORD *)(v14 + 24),
          v20,
          (__int64)v25,
          v21,
          (__int64)v24,
          v23,
          (__int64)v19);
      }
      if ( v4 )
        LeaveCriticalSection(v4);
      v26 = 209;
      do
      {
        v27 = 0;
        v28 = v26 & 7;
        if ( v28 == 1 )
        {
          v31 = *(_DWORD *)(v14 + 216);
          v32 = v31 == 0;
          *(_DWORD *)(v14 + 216) = v17;
          if ( v31 == v17 )
          {
            CApplication::RecalculateVolume(v14, 3LL);
          }
          else
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v33 = SoundLevelToString(v17);
              WPP_SF_SS(
                *(_QWORD *)(v34 + 16),
                12,
                (unsigned int)&WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
                *(_QWORD *)(v14 + 24),
                v33);
            }
            if ( v32 != (v17 == 0) )
              CApplicationManager::UpdateVolumeForAllAppsInSession(
                g_ApplicationManager,
                *(unsigned int *)(v14 + 212),
                3LL);
            EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 32));
            v53 = v14 + 32;
            v35 = *(_QWORD **)(v14 + 72);
            while ( v35 )
            {
              v36 = v35[2];
              v35 = (_QWORD *)*v35;
              if ( !*(_DWORD *)(v36 + 416) )
                CProcess::RecalculateVolume(v36, 3LL);
            }
            CApplication::NotifyVolumePolicyChange((CApplication *)v14);
            if ( v14 != -32 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v14 + 32));
            EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 224));
            v59 = v14 + 224;
            *(_DWORD *)(v14 + 272) = 1;
            v53 = 0LL;
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids);
            }
            v53 = -4400000LL;
            (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                                 + 24LL))(
              ThreadPool,
              *(_QWORD *)(v14 + 264),
              &v53,
              0LL,
              0);
            if ( v14 != -224 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v14 + 224));
          }
        }
        else
        {
          v29 = v28 - 2;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              if ( v30 == 1 )
                Sleep(0xAu);
            }
            else
            {
              EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 336));
              *(_DWORD *)(v14 + 380) = v63;
              if ( v63 == 1 )
                v27 = *(_DWORD *)(v14 + 272) != 0;
              if ( v14 != -336 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v14 + 336));
              if ( !v27 )
                CApplication::ProcessPendingPLMExemptionChange((CApplication *)v14);
            }
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 280));
            *(_DWORD *)(v14 + 324) = v16;
            if ( (signed int)v16 < *(_DWORD *)(v14 + 328) )
              v27 = *(_DWORD *)(v14 + 272) != 0;
            if ( v14 != -280 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v14 + 280));
            if ( !v27 )
              CApplication::ProcessPendingSoundLevelNotification((CApplication *)v14);
          }
        }
        v26 >>= 3;
      }
      while ( v26 );
      if ( !v16 && !v17 )
      {
        if ( v63 == 1 )
        {
          *(_DWORD *)(v14 + 620) = 1;
          *(_DWORD *)(v14 + 640) = 1;
          *(_DWORD *)(v14 + 644) = 1;
LABEL_80:
          *(_QWORD *)(v14 + 632) = 1LL;
          *(_QWORD *)(v14 + 624) = 1LL;
          goto LABEL_81;
        }
        if ( *(_DWORD *)(v14 + 620) != 6 )
        {
          *(_DWORD *)(v14 + 620) = 6;
          goto LABEL_80;
        }
      }
LABEL_81:
      v4 = lpCriticalSection;
      if ( lpCriticalSection )
        LeaveCriticalSection(lpCriticalSection);
      v12 = v64;
      v13 = v54;
      goto LABEL_84;
    }
LABEL_86:
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  else
  {
    v11 = 1;
    *((_DWORD *)v2 + 172) = 1;
    *((_DWORD *)v2 + 173) = 1;
    v6 = 0LL;
    if ( (unsigned int)CApplication::HasBackgroundAudioTask(v2) )
    {
      *((_DWORD *)v2 + 173) = 0;
    }
    else if ( (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(v2)
           || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v2) )
    {
      if ( (unsigned int)CApplication::IsUnrestrictedBackgroundAudioCapable(v2) )
      {
        if ( !CApplication::GetTotalActiveRenderStreamCount(v2) )
          CApplication::BeginBCMStartupLatencyGracePeriod(v2);
        *((_DWORD *)v2 + 173) = 0;
      }
      if ( (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v2) )
      {
        if ( !CApplication::GetTotalActiveCaptureStreamCount(v2) )
          CApplication::BeginBCMStartupLatencyGracePeriod(v2);
        *((_DWORD *)v2 + 172) = 0;
      }
    }
    else if ( dword_1800534C0[(int)CApplication::Category(v2)] )
    {
      if ( !dword_1800534C0[(int)CApplication::RawCategory(v2)] && *((_DWORD *)v2 + 54) )
        CApplication::RestrictAudioPlaybackToPrimaryCategories(v2);
      *((_DWORD *)v2 + 173) = 0;
    }
    else if ( (unsigned int)CApplication::IsBackgroundAudioCapable(v2) )
    {
      if ( !(unsigned int)CApplication::HasBackgroundAudioTask(v2)
        && !CApplication::GetTotalActiveCaptureStreamCount(v2)
        && (unsigned int)GrantExemptionForBCMStartupLatency() )
      {
        CApplication::BeginBCMStartupLatencyGracePeriod(v2);
        *((_DWORD *)v2 + 173) = 0;
      }
    }
    else if ( *((_DWORD *)v2 + 155) != 1 )
    {
      *((_DWORD *)v2 + 155) = 1;
      *((_QWORD *)v2 + 78) = 1LL;
      *((_QWORD *)v2 + 79) = 1LL;
      *((_DWORD *)v2 + 160) = 1;
      *((_DWORD *)v2 + 161) = 1;
    }
    CApplicationManager::ApplyPBMPolicy(this, v2, 0xD1u, 1);
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)v2 + 32);
  }
  EnterCriticalSection(v4);
  v37 = *((_DWORD *)v2 + 53);
  EnterCriticalSection(v7);
  v38 = 0;
  v39 = (_QWORD *)*((_QWORD *)v2 + 9);
  while ( v39 )
  {
    v40 = v39[2];
    v39 = (_QWORD *)*v39;
    if ( !*(_DWORD *)(v40 + 416) && *(_DWORD *)(v40 + 496) )
    {
      v38 = 1;
      break;
    }
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  if ( !v38 || !*((_DWORD *)v2 + 52) )
  {
    EnterCriticalSection(v7);
    v41 = 0;
    v42 = (_QWORD *)*((_QWORD *)v2 + 9);
    while ( v42 )
    {
      v43 = v42[2];
      v42 = (_QWORD *)*v42;
      if ( !*(_DWORD *)(v43 + 416) && *(_DWORD *)(v43 + 500) )
      {
        v41 = 1;
        break;
      }
    }
    if ( v7 )
      LeaveCriticalSection(v7);
    if ( !v41 || !(unsigned int)CApplication::IsBackgroundAudioCapable(v2) )
      v11 = 0;
  }
  HasPlayToStreams = CApplication::HasPlayToStreams(v2);
  if ( v11 && !HasPlayToStreams )
  {
    TsSessionIdAddActiveMediaApp(v37, v2);
    goto LABEL_150;
  }
  v45 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  EnterCriticalSection(&stru_180064A78);
  v46 = (_QWORD *)(qword_180064AB8
                 + 16
                 * (qword_180064AD0 & (0x100000001B3LL
                                     * (HIBYTE(v37) ^ (0x100000001B3LL
                                                     * (BYTE2(v37) ^ (0x100000001B3LL
                                                                    * (BYTE1(v37) ^ (0x100000001B3LL
                                                                                   * ((unsigned __int8)v37 ^ 0xCBF29CE484222325uLL))))))))));
  v47 = v46[1];
  if ( v47 != qword_180064AA8 )
  {
    while ( v37 != *(_DWORD *)(v47 + 16) )
    {
      if ( v47 == *v46 )
        goto LABEL_140;
      v47 = *(_QWORD *)(v47 + 8);
    }
    v6 = v47;
  }
LABEL_140:
  v48 = qword_180064AA8;
  if ( v6 )
    v48 = v6;
  if ( v48 == qword_180064AA8 )
  {
    LeaveCriticalSection(&stru_180064A78);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52E,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL);
    if ( !v45 )
      goto LABEL_149;
  }
  else
  {
    v49 = *(struct TSSession **)(v48 + 24);
    LeaveCriticalSection(&stru_180064A78);
    trivial_8 = _std_find_trivial_8(*((_QWORD *)v49 + 6), *((_QWORD *)v49 + 7), v2);
    v51 = *((_QWORD *)v49 + 7);
    if ( trivial_8 != v51 )
    {
      memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v51 - (trivial_8 + 8));
      *((_QWORD *)v49 + 7) -= 8LL;
      TsSessionSendAppManagerNotification(v49);
    }
    if ( !v45 )
      goto LABEL_149;
  }
  LeaveCriticalSection(v45);
LABEL_149:
  v4 = lpCriticalSection;
LABEL_150:
  if ( v4 )
  {
    LeaveCriticalSection(v4);
    LeaveCriticalSection(v4);
  }
}
