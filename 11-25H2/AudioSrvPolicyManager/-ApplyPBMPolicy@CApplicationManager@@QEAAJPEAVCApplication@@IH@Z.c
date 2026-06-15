/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180004230
 * Callers:
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180033D04 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x1800344D8 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x180034E60 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x180034FC0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18003A8EC (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18003BF48 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x180043C54 (-OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z.c)
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

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(
        CApplicationManager *this,
        struct CApplication *a2,
        unsigned int a3,
        int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  unsigned int v9; // r15d
  int v10; // r12d
  BOOL v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  BOOL v17; // esi
  __int64 v18; // rax
  __int64 v19; // r10
  _QWORD *v20; // rbx
  __int64 v21; // rcx
  char *v23; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+38h] [rbp-50h]
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+90h] [rbp+8h] BYREF
  int v27; // [rsp+A0h] [rbp+18h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v24 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v25 = v8;
  LODWORD(v26) = 0;
  LODWORD(v23) = 0;
  v27 = 0;
  CApplicationManager::GetApplicationPBMStatus(
    this,
    a2,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v23,
    (enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *)&v26,
    (enum _PLM_EXEMPTION *)&v27);
  v9 = v26;
  v10 = (int)v23;
  if ( a3 )
  {
    do
    {
      v11 = 0;
      v12 = a3 & 7;
      if ( v12 == 1 )
      {
        v16 = *((_DWORD *)a2 + 54);
        LOBYTE(v11) = v16 != v9;
        v17 = v16 == 0;
        *((_DWORD *)a2 + 54) = v9;
        if ( v16 != v9
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v18 = SoundLevelToString(v9);
          WPP_SF_SS(
            *(_QWORD *)(v19 + 16),
            12,
            (unsigned int)&WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
            *((_QWORD *)a2 + 3),
            v18);
        }
        if ( v11 )
        {
          if ( v17 != (v9 == 0) )
            CApplicationManager::UpdateVolumeForAllAppsInSession(
              (__int64)g_ApplicationManager,
              *((_DWORD *)a2 + 53),
              3u);
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
          v26 = (__int64)a2 + 32;
          v20 = (_QWORD *)*((_QWORD *)a2 + 9);
          while ( v20 )
          {
            v21 = v20[2];
            v20 = (_QWORD *)*v20;
            if ( !*(_DWORD *)(v21 + 416) )
              CProcess::RecalculateVolume(v21, 3LL);
          }
          CApplication::NotifyVolumePolicyChange(a2);
          if ( a2 != (struct CApplication *)-32LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
          v23 = (char *)a2 + 224;
          *((_DWORD *)a2 + 68) = 1;
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
            *((_QWORD *)a2 + 33),
            &v26,
            0LL,
            0);
          if ( a2 != (struct CApplication *)-224LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
        }
        else if ( a4 )
        {
          CApplication::RecalculateVolume((__int64)a2, 3u);
        }
      }
      else
      {
        v13 = v12 - 2;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            if ( v14 == 1 )
              Sleep(0xAu);
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
            v15 = v27;
            *((_DWORD *)a2 + 95) = v27;
            if ( v15 == 1 )
              v11 = *((_DWORD *)a2 + 68) != 0;
            if ( a2 != (struct CApplication *)-336LL )
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
            if ( !v11 )
              CApplication::ProcessPendingPLMExemptionChange(a2);
          }
        }
        else
        {
          EnterCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          *((_DWORD *)a2 + 81) = v10;
          if ( v10 < *((_DWORD *)a2 + 82) )
            v11 = *((_DWORD *)a2 + 68) != 0;
          if ( a2 != (struct CApplication *)-280LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          if ( !v11 )
            CApplication::ProcessPendingSoundLevelNotification(a2);
        }
      }
      a3 >>= 3;
    }
    while ( a3 );
    v8 = v24;
  }
  if ( !v10 && !v9 )
  {
    if ( v27 == 1 )
    {
      *((_DWORD *)a2 + 155) = 1;
      *((_DWORD *)a2 + 160) = 1;
      *((_DWORD *)a2 + 161) = 1;
    }
    else
    {
      if ( *((_DWORD *)a2 + 155) == 6 )
        goto LABEL_51;
      *((_DWORD *)a2 + 155) = 6;
    }
    *((_QWORD *)a2 + 79) = 1LL;
    *((_QWORD *)a2 + 78) = 1LL;
  }
LABEL_51:
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
