/*
 * XREFs of ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180031324 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ @ 0x180031AF8 (-CommitGoodFaithPLMExemption@CApplication@@QEAAJXZ.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x180032480 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800325E0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z @ 0x18003835C (-OnBCMStartupGracePeriodExpired@CApplicationManager@@QEAAJPEAVCApplication@@@Z.c)
 *     ?SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x180039720 (-SilenceAndRevokePLMExemption@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z @ 0x180041434 (-OnProcessCategoryDowngraded@CApplicationManager@@QEAAXPEAVCProcess@@@Z.c)
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

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::ApplyPBMPolicy(
        CApplicationManager *this,
        struct CApplication *a2,
        unsigned int a3,
        int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  unsigned int SoundLevel; // eax
  unsigned int v10; // r15d
  unsigned int v11; // r14d
  int PLMExemptionStatus; // r13d
  const wchar_t *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  __int64 v18; // r11
  const wchar_t *v19; // rdx
  BOOL v20; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // r10
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  struct _RTL_CRITICAL_SECTION *v30; // [rsp+50h] [rbp-48h]
  __int64 v31; // [rsp+A0h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v30 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  EnterCriticalSection(v8);
  v31 = (__int64)v8;
  SoundLevel = CApplicationManager::GetSoundLevel(this, a2, 0LL);
  v10 = SoundLevel;
  if ( *((_DWORD *)a2 + 156) )
    v11 = *((_DWORD *)a2 + 157);
  else
    v11 = SoundLevel;
  PLMExemptionStatus = CApplicationManager::GetPLMExemptionStatus(this, a2, SoundLevel);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v13 = L"(override)";
    SoundLevelToString(v11);
    v14 = SoundLevelToString(v10);
    v19 = L"(override)";
    if ( !*((_DWORD *)a2 + 156) )
      v19 = L" ";
    if ( !*((_DWORD *)a2 + 158) )
      v13 = L" ";
    WPP_SF_SSSSSSS(
      *(_QWORD *)(v17 + 16),
      (_DWORD)v19,
      v15,
      *((_QWORD *)a2 + 3),
      v14,
      (__int64)v13,
      v15,
      (__int64)v19,
      v16,
      v18);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( a3 )
  {
    do
    {
      v20 = 0;
      v21 = a3 & 7;
      if ( v21 == 1 )
      {
        v24 = *((_DWORD *)a2 + 54);
        LOBYTE(v20) = v24 == 0;
        *((_DWORD *)a2 + 54) = v11;
        if ( v24 == v11 )
        {
          if ( a4 )
            CApplication::RecalculateVolume((__int64)a2, 3);
        }
        else
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v25 = SoundLevelToString(v11);
            WPP_SF_SS(
              *(_QWORD *)(v26 + 16),
              12,
              (unsigned int)&WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
              *((_QWORD *)a2 + 3),
              v25);
          }
          if ( v20 != (v11 == 0) )
            CApplicationManager::UpdateVolumeForAllAppsInSession(g_ApplicationManager, *((unsigned int *)a2 + 53), 3LL);
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
          v31 = (__int64)a2 + 32;
          v27 = (_QWORD *)*((_QWORD *)a2 + 9);
          while ( v27 )
          {
            v28 = v27[2];
            v27 = (_QWORD *)*v27;
            if ( !*(_DWORD *)(v28 + 416) )
              CProcess::RecalculateVolume(v28, 3);
          }
          CApplication::NotifyVolumePolicyChange(a2);
          if ( a2 != (struct CApplication *)-32LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 32));
          EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
          *((_DWORD *)a2 + 68) = 1;
          v31 = 0LL;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids);
          }
          v31 = -4400000LL;
          (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, __int64 *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                               + 24LL))(
            ThreadPool,
            *((_QWORD *)a2 + 33),
            &v31,
            0LL,
            0);
          if ( a2 != (struct CApplication *)-224LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 224));
        }
      }
      else
      {
        v22 = v21 - 2;
        if ( v22 )
        {
          v23 = v22 - 1;
          if ( v23 )
          {
            if ( v23 == 1 )
              Sleep(0xAu);
          }
          else
          {
            EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
            *((_DWORD *)a2 + 95) = PLMExemptionStatus;
            if ( PLMExemptionStatus == 1 )
              v20 = *((_DWORD *)a2 + 68) != 0;
            if ( a2 != (struct CApplication *)-336LL )
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 336));
            if ( !v20 )
              CApplication::ProcessPendingPLMExemptionChange(a2);
          }
        }
        else
        {
          EnterCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          *((_DWORD *)a2 + 81) = v10;
          if ( (signed int)v10 < *((_DWORD *)a2 + 82) )
            v20 = *((_DWORD *)a2 + 68) != 0;
          if ( a2 != (struct CApplication *)-280LL )
            LeaveCriticalSection((LPCRITICAL_SECTION)a2 + 7);
          if ( !v20 )
            CApplication::ProcessPendingSoundLevelNotification(a2);
        }
      }
      a3 >>= 3;
    }
    while ( a3 );
    v8 = v30;
  }
  if ( !v10 && !v11 )
  {
    if ( PLMExemptionStatus == 1 )
    {
      *((_DWORD *)a2 + 155) = 1;
      *((_DWORD *)a2 + 160) = 1;
      *((_DWORD *)a2 + 161) = 1;
    }
    else
    {
      if ( *((_DWORD *)a2 + 155) == 6 )
        goto LABEL_62;
      *((_DWORD *)a2 + 155) = 6;
    }
    *((_QWORD *)a2 + 79) = 1LL;
    *((_QWORD *)a2 + 78) = 1LL;
  }
LABEL_62:
  if ( v8 )
    LeaveCriticalSection(v8);
  return 0LL;
}
