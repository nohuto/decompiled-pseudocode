/*
 * XREFs of ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0
 * Callers:
 *     ?OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z @ 0x18000B9A8 (-OnAppStateChanged@CApplicationManager@@QEAAXPEBG_KHK@Z.c)
 *     _lambda_2f91230d5263cfdecd1c9667b3e483e9_::operator() @ 0x18000BAE4 (_lambda_2f91230d5263cfdecd1c9667b3e483e9_--operator().c)
 *     ?OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0007@@@Z @ 0x18003A9A0 (-OnCastingAppStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18003AAA8 (-OnDialogSessionStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 *     ?OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z @ 0x18003ADFC (-OnVoipCallStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@_N@Z.c)
 * Callees:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180002030 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180002F90 (-IsUnrestrictedBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?HasBackgroundAudioTask@CApplication@@QEAAHXZ @ 0x1800030D0 (-HasBackgroundAudioTask@CApplication@@QEAAHXZ.c)
 *     ?Category@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x180003180 (-Category@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ @ 0x180003250 (-IsBackgroundMediaRecordingCapable@CApplication@@QEAAHXZ.c)
 *     ?HasPlayToStreams@CApplication@@QEAAHXZ @ 0x180003F74 (-HasPlayToStreams@CApplication@@QEAAHXZ.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180004070 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180004110 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180005980 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180005BA0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180005CE0 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000A2C0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?IsBackgroundAudioCapable@CApplication@@QEAAHXZ @ 0x180013D00 (-IsBackgroundAudioCapable@CApplication@@QEAAHXZ.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001F32C (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x18001F540 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     __std_find_trivial_8 @ 0x18001FC20 (__std_find_trivial_8.c)
 *     WPP_SF_ @ 0x18002DA28 (WPP_SF_.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180033F70 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180034D3C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x180034DC0 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ @ 0x18003695C (-RestrictAudioPlaybackToPrimaryCategories@CApplication@@QEAAJXZ.c)
 *     WPP_SF_SS @ 0x1800383C4 (WPP_SF_SS.c)
 *     ?GrantExemptionForBCMStartupLatency@@YAHXZ @ 0x18003A1AC (-GrantExemptionForBCMStartupLatency@@YAHXZ.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18003BFDC (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180041BE8 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x180043298 (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 *     memmove_0 @ 0x18004B3D8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall CApplicationManager::OnApplicationInteractivityChanged(
        CApplicationManager *this,
        struct CApplication *a2)
{
  struct CApplication *v2; // r15
  struct _RTL_CRITICAL_SECTION *v4; // r12
  const wchar_t *v5; // rax
  __int64 v6; // r13
  int v7; // edi
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  _QWORD *v11; // rsi
  unsigned int v12; // edi
  __int64 v13; // r15
  unsigned int v14; // r12d
  BOOL v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  BOOL v22; // ebx
  BOOL v23; // esi
  __int64 v24; // rax
  __int64 v25; // r10
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned int v29; // edi
  int v30; // r15d
  int v31; // r12d
  BOOL v32; // ebx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  CApplication *v36; // rax
  CApplication *v37; // rax
  struct CApplication *v38; // r9
  int v39; // eax
  BOOL v40; // ebx
  BOOL v41; // esi
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // r10
  struct _RTL_CRITICAL_SECTION *v45; // rsi
  CApplication *v46; // rdx
  _QWORD *v47; // rbx
  __int64 v48; // rcx
  bool v49; // zf
  unsigned int v50; // esi
  int v51; // ebx
  _QWORD *v52; // rdx
  __int64 v53; // r8
  int v54; // r14d
  int v55; // ebx
  _QWORD *v56; // rdx
  __int64 v57; // r8
  int HasPlayToStreams; // eax
  struct _RTL_CRITICAL_SECTION *v59; // rdi
  _QWORD *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rbx
  struct TSSession *v63; // rbx
  __int64 trivial_8; // rax
  __int64 v65; // r8
  int v66; // [rsp+20h] [rbp-58h]
  __int64 v67; // [rsp+30h] [rbp-48h] BYREF
  int v68; // [rsp+38h] [rbp-40h] BYREF
  __int64 v69; // [rsp+40h] [rbp-38h] BYREF
  _QWORD *v70; // [rsp+48h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v71; // [rsp+50h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v72; // [rsp+58h] [rbp-20h]
  struct _RTL_CRITICAL_SECTION *v73; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]
  __int64 v77; // [rsp+D0h] [rbp+58h] BYREF
  char *v78; // [rsp+D8h] [rbp+60h] BYREF

  v2 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v71 = v4;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = L"INTERACTIVE";
    if ( !*((_DWORD *)v2 + 52) )
      v5 = L"NOT_INTERACTIVE";
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      45,
      (unsigned int)&WPP_7ac9f868b6f432f4e1ddc0ca024d1633_Traceguids,
      *((_QWORD *)v2 + 3),
      (__int64)v5);
  }
  if ( !*((_DWORD *)v2 + 52) )
  {
    *((_DWORD *)v2 + 172) = 1;
    *((_DWORD *)v2 + 173) = 1;
    v6 = 0LL;
    if ( (unsigned int)CApplication::HasBackgroundAudioTask(v2) )
    {
      *((_DWORD *)v2 + 173) = 0;
    }
    else if ( CApplication::IsUnrestrictedBackgroundAudioCapable(v2)
           || (unsigned int)CApplication::IsBackgroundMediaRecordingCapable(v2) )
    {
      if ( CApplication::IsUnrestrictedBackgroundAudioCapable(v2) )
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
    else if ( dword_180056080[(int)CApplication::Category((__int64)v2)] )
    {
      if ( !dword_180056080[(int)CApplication::RawCategory(v2)] && *((_DWORD *)v2 + 54) )
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
    EnterCriticalSection(v4);
    v73 = v4;
    LODWORD(v77) = 0;
    LODWORD(v78) = 0;
    v68 = 0;
    CApplicationManager::GetApplicationPBMStatus(
      this,
      v2,
      (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v78,
      (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v77,
      (enum _PLM_EXEMPTION *)&v68);
    LOBYTE(v28) = -47;
    LODWORD(v67) = 209;
    v29 = v77;
    v30 = (int)v78;
    v31 = v68;
    do
    {
      v32 = 0;
      v33 = v28 & 7;
      if ( v33 == 1 )
      {
        v38 = a2;
        v39 = *((_DWORD *)a2 + 54);
        v40 = v39 != v29;
        v41 = v39 == 0;
        *((_DWORD *)a2 + 54) = v29;
        if ( v39 != v29
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v42 = SoundLevelToString(v29);
          WPP_SF_SS(
            *(_QWORD *)(v44 + 16),
            12,
            (unsigned int)&WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
            *(_QWORD *)(v43 + 24),
            v42);
          v38 = a2;
        }
        if ( v40 )
        {
          if ( v41 != (v29 == 0) )
          {
            CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *((unsigned int *)v38 + 53), 3LL);
            v38 = a2;
          }
          v45 = (struct _RTL_CRITICAL_SECTION *)((char *)v38 + 32);
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)v38 + 32));
          v77 = (__int64)v45;
          v46 = a2;
          v47 = (_QWORD *)*((_QWORD *)a2 + 9);
          if ( v47 )
          {
            do
            {
              v48 = v47[2];
              v47 = (_QWORD *)*v47;
              if ( !*(_DWORD *)(v48 + 416) )
                CProcess::RecalculateVolume(v48, 3LL);
            }
            while ( v47 );
            v46 = a2;
          }
          CApplication::NotifyVolumePolicyChange(v46);
          if ( v45 )
            LeaveCriticalSection(v45);
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
          v78 = (char *)a2 + 224;
          *((_DWORD *)a2 + 68) = 1;
          v77 = 0LL;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids);
          }
          v77 = -4400000LL;
          v66 = 0;
          (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)ThreadPool + 24LL))(
            ThreadPool,
            *((_QWORD *)a2 + 33),
            &v77,
            0LL);
          if ( a2 != (struct CApplication *)-224LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
        }
        else
        {
          CApplication::RecalculateVolume(v38, 3LL);
        }
      }
      else
      {
        v34 = v33 - 2;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            if ( v35 == 1 )
              Sleep(0xAu);
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
            v36 = a2;
            *((_DWORD *)a2 + 95) = v31;
            if ( v31 == 1 )
              v32 = *((_DWORD *)a2 + 68) != 0;
            if ( a2 != (struct CApplication *)-336LL )
            {
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
              v36 = a2;
            }
            if ( !v32 )
              CApplication::ProcessPendingPLMExemptionChange(v36);
          }
        }
        else
        {
          EnterCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          v37 = a2;
          *((_DWORD *)a2 + 81) = v30;
          if ( v30 < *((_DWORD *)a2 + 82) )
            v32 = *((_DWORD *)a2 + 68) != 0;
          if ( a2 != (struct CApplication *)-280LL )
          {
            LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 7);
            v37 = a2;
          }
          if ( !v32 )
            CApplication::ProcessPendingSoundLevelNotification(v37);
        }
      }
      v28 = (unsigned int)v67 >> 3;
      LODWORD(v67) = v28;
    }
    while ( v28 );
    v49 = v30 == 0;
    v2 = a2;
    if ( v49 && !v29 )
    {
      if ( v31 == 1 )
      {
        *((_DWORD *)a2 + 155) = 1;
        *((_DWORD *)a2 + 160) = 1;
        *((_DWORD *)a2 + 161) = 1;
      }
      else
      {
        if ( *((_DWORD *)a2 + 155) == 6 )
          goto LABEL_146;
        *((_DWORD *)a2 + 155) = 6;
      }
      *((_QWORD *)a2 + 79) = 1LL;
      *((_QWORD *)a2 + 78) = 1LL;
    }
LABEL_146:
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    if ( this == (CApplicationManager *)-32LL )
      goto LABEL_148;
LABEL_147:
    LeaveCriticalSection(v4);
    goto LABEL_148;
  }
  v6 = 0LL;
  *((_QWORD *)v2 + 86) = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 32));
  v7 = 0;
  v8 = (_QWORD *)*((_QWORD *)v2 + 9);
  while ( v8 )
  {
    v9 = v8[2];
    v8 = (_QWORD *)*v8;
    if ( !*(_DWORD *)(v9 + 416) && *(_DWORD *)(v9 + 432) )
    {
      v7 = 1;
      break;
    }
  }
  if ( v2 != (struct CApplication *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 32));
  if ( v7 )
    CApplication::CleanupBCMStartupLatencyGracePeriod(v2);
  *(_QWORD *)((char *)v2 + 620) = 0LL;
  *(_QWORD *)((char *)v2 + 628) = 0LL;
  *(_QWORD *)((char *)v2 + 636) = 0LL;
  *((_DWORD *)v2 + 161) = 1;
  v10 = *((_DWORD *)v2 + 53);
  v68 = v10;
  EnterCriticalSection(v4);
  v72 = v4;
  v11 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v11 )
  {
    v12 = 209;
    while ( 1 )
    {
      v13 = v11[2];
      v11 = (_QWORD *)*v11;
      v70 = v11;
      if ( *(_DWORD *)(v13 + 212) == v10 )
        break;
LABEL_70:
      if ( !v11 )
      {
        v2 = a2;
        goto LABEL_72;
      }
    }
    EnterCriticalSection(v4);
    v73 = v4;
    LODWORD(v67) = 0;
    LODWORD(v77) = 0;
    LODWORD(v78) = 0;
    CApplicationManager::GetApplicationPBMStatus(
      this,
      (struct CApplication *)v13,
      (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v77,
      (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v67,
      (enum _PLM_EXEMPTION *)&v78);
    v14 = v67;
    do
    {
      v15 = 0;
      v16 = v12 & 7;
      if ( v16 == 1 )
      {
        v21 = *(_DWORD *)(v13 + 216);
        v22 = v21 != v14;
        v23 = v21 == 0;
        *(_DWORD *)(v13 + 216) = v14;
        if ( v21 != v14
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v24 = SoundLevelToString(v14);
          WPP_SF_SS(
            *(_QWORD *)(v25 + 16),
            12,
            (unsigned int)&WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
            *(_QWORD *)(v13 + 24),
            v24);
        }
        if ( v22 )
        {
          if ( v23 != (v14 == 0) )
            CApplicationManager::UpdateVolumeForAllAppsInSession(
              g_ApplicationManager,
              *(unsigned int *)(v13 + 212),
              3LL);
          EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 32));
          v69 = v13 + 32;
          v26 = *(_QWORD **)(v13 + 72);
          while ( v26 )
          {
            v27 = v26[2];
            v26 = (_QWORD *)*v26;
            if ( !*(_DWORD *)(v27 + 416) )
              CProcess::RecalculateVolume(v27, 3LL);
          }
          CApplication::NotifyVolumePolicyChange((CApplication *)v13);
          if ( v13 != -32 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 32));
          EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 224));
          v67 = v13 + 224;
          *(_DWORD *)(v13 + 272) = 1;
          v69 = 0LL;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids);
          }
          v69 = -4400000LL;
          v66 = 0;
          (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)ThreadPool + 24LL))(
            ThreadPool,
            *(_QWORD *)(v13 + 264),
            &v69,
            0LL);
          if ( v13 != -224 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 224));
        }
        else
        {
          CApplication::RecalculateVolume(v13, 3LL);
        }
      }
      else
      {
        v17 = v16 - 2;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            if ( v18 == 1 )
              Sleep(0xAu);
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 336));
            v19 = (int)v78;
            *(_DWORD *)(v13 + 380) = (_DWORD)v78;
            if ( v19 == 1 )
              v15 = *(_DWORD *)(v13 + 272) != 0;
            if ( v13 != -336 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 336));
            if ( !v15 )
              CApplication::ProcessPendingPLMExemptionChange((CApplication *)v13);
          }
        }
        else
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 280));
          v20 = v77;
          *(_DWORD *)(v13 + 324) = v77;
          if ( v20 < *(_DWORD *)(v13 + 328) )
            v15 = *(_DWORD *)(v13 + 272) != 0;
          if ( v13 != -280 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 280));
          if ( !v15 )
            CApplication::ProcessPendingSoundLevelNotification((CApplication *)v13);
        }
      }
      v12 >>= 3;
    }
    while ( v12 );
    if ( !(_DWORD)v77 && !v14 )
    {
      if ( (_DWORD)v78 == 1 )
      {
        *(_DWORD *)(v13 + 620) = 1;
        *(_DWORD *)(v13 + 640) = 1;
        *(_DWORD *)(v13 + 644) = 1;
LABEL_66:
        *(_QWORD *)(v13 + 632) = 1LL;
        *(_QWORD *)(v13 + 624) = 1LL;
        goto LABEL_67;
      }
      if ( *(_DWORD *)(v13 + 620) != 6 )
      {
        *(_DWORD *)(v13 + 620) = 6;
        goto LABEL_66;
      }
    }
LABEL_67:
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
    if ( this != (CApplicationManager *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v12 = 209;
    v10 = v68;
    v11 = v70;
    goto LABEL_70;
  }
LABEL_72:
  if ( v4 )
    goto LABEL_147;
LABEL_148:
  EnterCriticalSection(v4);
  v50 = *((_DWORD *)v2 + 53);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 32));
  v51 = 0;
  v52 = (_QWORD *)*((_QWORD *)v2 + 9);
  while ( v52 )
  {
    v53 = v52[2];
    v52 = (_QWORD *)*v52;
    if ( !*(_DWORD *)(v53 + 416) && *(_DWORD *)(v53 + 496) )
    {
      v54 = 1;
      v51 = 1;
      goto LABEL_154;
    }
  }
  v54 = 1;
LABEL_154:
  if ( v2 != (struct CApplication *)-32LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 32));
  if ( !v51 || !*((_DWORD *)v2 + 52) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 32));
    v55 = 0;
    v56 = (_QWORD *)*((_QWORD *)v2 + 9);
    while ( v56 )
    {
      v57 = v56[2];
      v56 = (_QWORD *)*v56;
      if ( !*(_DWORD *)(v57 + 416) && *(_DWORD *)(v57 + 500) )
      {
        v55 = 1;
        break;
      }
    }
    if ( v2 != (struct CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 32));
    if ( !v55 || !(unsigned int)CApplication::IsBackgroundAudioCapable(v2) )
      v54 = 0;
  }
  HasPlayToStreams = CApplication::HasPlayToStreams(v2);
  if ( v54 && !HasPlayToStreams )
  {
    TsSessionIdAddActiveMediaApp(v50, v2);
    goto LABEL_185;
  }
  v59 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v77 = (__int64)v59;
  EnterCriticalSection(&stru_180067AF8);
  v60 = (_QWORD *)(qword_180067B38
                 + 16
                 * (qword_180067B50 & (0x100000001B3LL
                                     * (HIBYTE(v50) ^ (0x100000001B3LL
                                                     * (BYTE2(v50) ^ (0x100000001B3LL
                                                                    * (BYTE1(v50) ^ (0x100000001B3LL
                                                                                   * ((unsigned __int8)v50 ^ 0xCBF29CE484222325uLL))))))))));
  v61 = v60[1];
  if ( v61 != qword_180067B28 )
  {
    while ( v50 != *(_DWORD *)(v61 + 16) )
    {
      if ( v61 == *v60 )
        goto LABEL_176;
      v61 = *(_QWORD *)(v61 + 8);
    }
    v6 = v61;
  }
LABEL_176:
  v62 = qword_180067B28;
  if ( v6 )
    v62 = v6;
  if ( v62 == qword_180067B28 )
  {
    LeaveCriticalSection(&stru_180067AF8);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52E,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070490LL,
      v66);
    if ( !v59 )
      goto LABEL_185;
LABEL_184:
    LeaveCriticalSection(v59);
    goto LABEL_185;
  }
  v63 = *(struct TSSession **)(v62 + 24);
  LeaveCriticalSection(&stru_180067AF8);
  trivial_8 = _std_find_trivial_8(*((_QWORD *)v63 + 6), *((_QWORD *)v63 + 7), v2);
  v65 = *((_QWORD *)v63 + 7);
  if ( trivial_8 != v65 )
  {
    memmove_0((void *)trivial_8, (const void *)(trivial_8 + 8), v65 - (trivial_8 + 8));
    *((_QWORD *)v63 + 7) -= 8LL;
    TsSessionSendAppManagerNotification(v63);
  }
  if ( v59 )
    goto LABEL_184;
LABEL_185:
  if ( v4 )
  {
    LeaveCriticalSection(v4);
    LeaveCriticalSection(v4);
  }
}
