/*
 * XREFs of ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180004650
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180002360 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18001DE04 (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     std::_Func_impl_no_alloc__lambda_083813e9f63eb05ca4d70f9ca4f2f4c2__void_::_Do_call @ 0x18002D440 (std--_Func_impl_no_alloc__lambda_083813e9f63eb05ca4d70f9ca4f2f4c2__void_--_Do_call.c)
 *     ?UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z @ 0x18003C014 (-UnmuteDesktopAppsInSession@CApplicationManager@@QEAAXK@Z.c)
 *     _lambda_0a903797054c4de60318e94de109d2f9_::operator() @ 0x18003FFEC (_lambda_0a903797054c4de60318e94de109d2f9_--operator().c)
 * Callees:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180002030 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x180004070 (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180004110 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x180005980 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x180005BA0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 *     ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180005CE0 (-GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audi.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18000A2C0 (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     WPP_SF_ @ 0x18002DA28 (WPP_SF_.c)
 *     WPP_SF_SS @ 0x1800383C4 (WPP_SF_SS.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18003BFDC (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationManager::ApplyPBMPolicyForAllAppsInSession(CApplicationManager *this, int a2, int a3)
{
  int v4; // ebx
  CApplicationManager *v5; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  _QWORD *v7; // rsi
  __int64 v8; // r14
  unsigned int v10; // edi
  unsigned int v11; // r15d
  int v12; // r12d
  BOOL v13; // ebx
  int v14; // eax
  int v15; // eax
  BOOL v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r10
  unsigned int v24; // [rsp+30h] [rbp-68h] BYREF
  __int64 v25; // [rsp+38h] [rbp-60h] BYREF
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  _QWORD *v27; // [rsp+48h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+50h] [rbp-48h]
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+58h] [rbp-40h]
  int v32; // [rsp+B8h] [rbp+20h] BYREF

  v4 = a2;
  v5 = this;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v28 = v6;
  v7 = (_QWORD *)*((_QWORD *)v5 + 9);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    v27 = v7;
    if ( *(_DWORD *)(v8 + 212) == v4 )
    {
      EnterCriticalSection(v6);
      v29 = v6;
      v24 = 0;
      LODWORD(v25) = 0;
      v32 = 0;
      CApplicationManager::GetApplicationPBMStatus(
        v5,
        (struct CApplication *)v8,
        (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v25,
        (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v24,
        (enum _PLM_EXEMPTION *)&v32);
      v10 = 209;
      v11 = v24;
      v12 = v25;
      do
      {
        v13 = 0;
        v14 = v10 & 7;
        if ( v14 == 1 )
        {
          v15 = *(_DWORD *)(v8 + 216);
          LOBYTE(v13) = v15 != v11;
          v16 = v15 == 0;
          *(_DWORD *)(v8 + 216) = v11;
          if ( v15 != v11
            && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v22 = SoundLevelToString(v11);
            WPP_SF_SS(
              *(_QWORD *)(v23 + 16),
              12,
              (unsigned int)&WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
              *(_QWORD *)(v8 + 24),
              v22);
          }
          if ( v13 )
          {
            if ( v16 != (v11 == 0) )
              CApplicationManager::UpdateVolumeForAllAppsInSession(
                (__int64)g_ApplicationManager,
                *(_DWORD *)(v8 + 212),
                3u);
            EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
            v26 = v8 + 32;
            v20 = *(_QWORD **)(v8 + 72);
            while ( v20 )
            {
              v21 = v20[2];
              v20 = (_QWORD *)*v20;
              if ( !*(_DWORD *)(v21 + 416) )
                CProcess::RecalculateVolume(v21, 3LL);
            }
            CApplication::NotifyVolumePolicyChange((CApplication *)v8);
            if ( v8 != -32 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
            EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 224));
            v25 = v8 + 224;
            *(_DWORD *)(v8 + 272) = 1;
            v26 = 0LL;
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids);
            }
            v26 = -4400000LL;
            (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                                 + 24LL))(
              ThreadPool,
              *(_QWORD *)(v8 + 264),
              &v26,
              0LL,
              0);
            if ( v8 != -224 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 224));
          }
          else if ( a3 )
          {
            CApplication::RecalculateVolume(v8, 3u);
          }
        }
        else
        {
          v17 = v14 - 2;
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
              EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 336));
              v19 = v32;
              *(_DWORD *)(v8 + 380) = v32;
              if ( v19 == 1 )
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
            *(_DWORD *)(v8 + 324) = v12;
            if ( v12 < *(_DWORD *)(v8 + 328) )
              v13 = *(_DWORD *)(v8 + 272) != 0;
            if ( v8 != -280 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 280));
            if ( !v13 )
              CApplication::ProcessPendingSoundLevelNotification((CApplication *)v8);
          }
        }
        v10 >>= 3;
      }
      while ( v10 );
      if ( !v12 && !v11 )
      {
        if ( v32 == 1 )
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
      v7 = v27;
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
