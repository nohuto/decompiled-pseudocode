/*
 * XREFs of ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540
 * Callers:
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18001DD98 (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_083813e9f63eb05ca4d70f9ca4f2f4c2__void_::_Do_call @ 0x18002AFF0 (std--_Func_impl_no_alloc__lambda_083813e9f63eb05ca4d70f9ca4f2f4c2__void_--_Do_call.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x1800397EC (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     _lambda_0a903797054c4de60318e94de109d2f9_::operator() @ 0x18003D7CC (_lambda_0a903797054c4de60318e94de109d2f9_--operator().c)
 * Callees:
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800080C0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C510 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C730 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x18000C7D0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18000CE00 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18000CF20 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000EC20 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     WPP_SF_ @ 0x18002B438 (WPP_SF_.c)
 *     WPP_SF_SS @ 0x1800359E4 (WPP_SF_SS.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x180037A04 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x1800397B4 (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     WPP_SF_SSSSSSS @ 0x180039CC0 (WPP_SF_SSSSSSS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::ApplyPBMPolicyForAllAppsInSession(CApplicationManager *this, int a2, int a3)
{
  int v4; // ebx
  CApplicationManager *v5; // r13
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  _QWORD *v7; // rsi
  __int64 v8; // rbp
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  unsigned int v12; // edi
  BOOL v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int PLMExemptionStatus; // r13d
  unsigned int SoundLevel; // eax
  unsigned int v20; // r15d
  unsigned int v21; // r14d
  const wchar_t *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // r11
  const wchar_t *v27; // r8
  const wchar_t *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r10
  __int64 v33; // [rsp+C8h] [rbp+20h] BYREF

  v4 = a2;
  v5 = this;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v7 = (_QWORD *)*((_QWORD *)v5 + 9);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( *(_DWORD *)(v8 + 212) == v4 )
    {
      EnterCriticalSection(v6);
      EnterCriticalSection(v6);
      SoundLevel = CApplicationManager::GetSoundLevel(v5, v8, 0LL);
      v20 = SoundLevel;
      if ( *(_DWORD *)(v8 + 624) )
        v21 = *(_DWORD *)(v8 + 628);
      else
        v21 = SoundLevel;
      PLMExemptionStatus = CApplicationManager::GetPLMExemptionStatus(v5, v8, SoundLevel);
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v22 = L"(override)";
        if ( !*(_DWORD *)(v8 + 640) )
          v22 = L" ";
        SoundLevelToString(v21);
        v23 = SoundLevelToString(v20);
        v27 = L"(override)";
        if ( !*(_DWORD *)(v8 + 624) )
          v27 = L" ";
        v28 = L"(override)";
        if ( !*(_DWORD *)(v8 + 632) )
          v28 = L" ";
        WPP_SF_SSSSSSS(
          *(_QWORD *)(v25 + 16),
          (_DWORD)v28,
          (_DWORD)v27,
          *(_QWORD *)(v8 + 24),
          v23,
          (__int64)v28,
          v24,
          (__int64)v27,
          v26,
          (__int64)v22);
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      v12 = 209;
      do
      {
        v13 = 0;
        v14 = v12 & 7;
        if ( v14 == 1 )
        {
          v15 = *(_DWORD *)(v8 + 216);
          LOBYTE(v13) = v15 == 0;
          *(_DWORD *)(v8 + 216) = v21;
          if ( v15 == v21 )
          {
            if ( a3 )
              CApplication::RecalculateVolume(v8, 3LL);
          }
          else
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v29 = SoundLevelToString(v21);
              WPP_SF_SS(
                *(_QWORD *)(v30 + 16),
                12,
                (unsigned int)&WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
                *(_QWORD *)(v8 + 24),
                v29);
            }
            if ( v13 != (v21 == 0) )
              CApplicationManager::UpdateVolumeForAllAppsInSession(
                g_ApplicationManager,
                *(unsigned int *)(v8 + 212),
                3LL);
            EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
            v33 = v8 + 32;
            v10 = *(_QWORD **)(v8 + 72);
            while ( v10 )
            {
              v11 = v10[2];
              v10 = (_QWORD *)*v10;
              if ( !*(_DWORD *)(v11 + 416) )
                CProcess::RecalculateVolume(v11, 3LL);
            }
            CApplication::NotifyVolumePolicyChange((CApplication *)v8);
            if ( v8 != -32 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
            EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 224));
            *(_DWORD *)(v8 + 272) = 1;
            v33 = 0LL;
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids);
            }
            v33 = -4400000LL;
            (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                                 + 24LL))(
              ThreadPool,
              *(_QWORD *)(v8 + 264),
              &v33,
              0LL,
              0);
            if ( v8 != -224 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 224));
          }
        }
        else
        {
          v16 = v14 - 2;
          if ( v16 )
          {
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 == 1 )
                Sleep(0xAu);
            }
            else
            {
              EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 336));
              *(_DWORD *)(v8 + 380) = PLMExemptionStatus;
              if ( PLMExemptionStatus == 1 )
                v13 = *(_DWORD *)(v8 + 272) != 0;
              if ( v8 != -336 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 336));
              if ( !v13 )
                CApplication::ProcessPendingPLMExemptionChange((CApplication *)v8);
            }
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 280));
            *(_DWORD *)(v8 + 324) = v20;
            if ( (signed int)v20 < *(_DWORD *)(v8 + 328) )
              v13 = *(_DWORD *)(v8 + 272) != 0;
            if ( v8 != -280 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 280));
            if ( !v13 )
              CApplication::ProcessPendingSoundLevelNotification((CApplication *)v8);
          }
        }
        v12 >>= 3;
      }
      while ( v12 );
      if ( !v20 && !v21 )
      {
        if ( PLMExemptionStatus == 1 )
        {
          *(_DWORD *)(v8 + 620) = 1;
          *(_QWORD *)(v8 + 624) = 1LL;
          *(_QWORD *)(v8 + 632) = 1LL;
          *(_DWORD *)(v8 + 640) = 1;
          *(_DWORD *)(v8 + 644) = 1;
        }
        else if ( *(_DWORD *)(v8 + 620) != 6 )
        {
          *(_DWORD *)(v8 + 620) = 6;
          *(_QWORD *)(v8 + 624) = 1LL;
          *(_QWORD *)(v8 + 632) = 1LL;
        }
      }
      v5 = this;
      v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
      if ( this != (CApplicationManager *)-32LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
      v4 = a2;
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
