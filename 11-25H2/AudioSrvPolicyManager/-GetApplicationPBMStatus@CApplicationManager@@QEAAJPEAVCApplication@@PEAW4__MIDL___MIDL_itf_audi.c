/*
 * XREFs of ?GetApplicationPBMStatus@CApplicationManager@@QEAAJPEAVCApplication@@PEAW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@1PEAW4_PLM_EXEMPTION@@@Z @ 0x180005CE0
 * Callers:
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x1800032E0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x180004230 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x180004650 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180004B00 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x1800369C4 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?GetPLMExemptionStatus@CApplicationManager@@QEAA?AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180002D90 (-GetPLMExemptionStatus@CApplicationManager@@QEAA-AW4_PLM_EXEMPTION@@PEAVCApplication@@W4__MIDL__.c)
 *     ?GetSoundLevel@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@_N@Z @ 0x180039E74 (-GetSoundLevel@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCAppl.c)
 *     ?GetSoundLevel_old@CApplicationManager@@QEAA?AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVCApplication@@@Z @ 0x18003A0AC (-GetSoundLevel_old@CApplicationManager@@QEAA-AW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@PEAVC.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18003BFDC (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSendSoundLevelNotif@@@details@wil@@QEAA_NXZ @ 0x18003C428 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_ForceSendSoundLevelNoti.c)
 *     WPP_SF_SSSSSSS @ 0x18003C4DC (WPP_SF_SSSSSSS.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::GetApplicationPBMStatus(
        CApplicationManager *this,
        struct CApplication *a2,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a3,
        enum __MIDL___MIDL_itf_audiosrv_0000_0000_0004 *a4,
        enum _PLM_EXEMPTION *a5)
{
  struct _RTL_CRITICAL_SECTION *v9; // r15
  int SoundLevel; // eax
  int v11; // ebx
  _QWORD *v12; // r8
  const wchar_t *v13; // r9
  const wchar_t *v14; // rbp
  const wchar_t *v15; // r11
  const wchar_t *v16; // rdx
  const wchar_t *v17; // r10
  int v18; // ebx
  const wchar_t *v19; // rax

  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_ForceSendSoundLevelNotif>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_ForceSendSoundLevelNotif>::GetImpl'::`2'::impl) )
    SoundLevel = CApplicationManager::GetSoundLevel(this, a2, 0LL);
  else
    SoundLevel = CApplicationManager::GetSoundLevel_old(this, a2);
  v11 = SoundLevel;
  if ( a3 )
    *(_DWORD *)a3 = SoundLevel;
  if ( a4 )
  {
    if ( *((_DWORD *)a2 + 156) )
      *(_DWORD *)a4 = *((_DWORD *)a2 + 157);
    else
      *(_DWORD *)a4 = SoundLevel;
  }
  if ( a5 )
    *(_DWORD *)a5 = CApplicationManager::GetPLMExemptionStatus((__int64)this, (__int64)a2, SoundLevel);
  v12 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    v13 = L"(override)";
    v14 = L"(override)";
    if ( !*((_DWORD *)a2 + 160) )
      v14 = L" ";
    v15 = L"Not computed";
    if ( a5 )
    {
      if ( *(_DWORD *)a5 )
      {
        if ( *(_DWORD *)a5 == 1 )
        {
          v16 = L"No";
        }
        else if ( *(_DWORD *)a5 == 2 )
        {
          v16 = L"Yes";
        }
        else
        {
          v16 = L"Unknown";
        }
      }
      else
      {
        v16 = L"Invalid";
      }
    }
    else
    {
      v16 = L"Not computed";
    }
    v17 = L"(override)";
    if ( !*((_DWORD *)a2 + 156) )
      v17 = L" ";
    if ( a4 )
      v15 = (const wchar_t *)SoundLevelToString(*(unsigned int *)a4);
    if ( !*((_DWORD *)a2 + 158) )
      v13 = L" ";
    if ( v11 )
    {
      v18 = v11 - 1;
      if ( v18 )
      {
        if ( v18 == 1 )
          v19 = L"SNDLVL_Full";
        else
          v19 = L"Unknown level";
      }
      else
      {
        v19 = L"SNDLVL_Low";
      }
    }
    else
    {
      v19 = L"SNDLVL_Muted";
    }
    WPP_SF_SSSSSSS(
      v12[2],
      (_DWORD)v16,
      (_DWORD)v12,
      *((_QWORD *)a2 + 3),
      (__int64)v19,
      (__int64)v13,
      (__int64)v15,
      (__int64)v17,
      (__int64)v16,
      (__int64)v14);
  }
  if ( v9 )
    LeaveCriticalSection(v9);
  return 0LL;
}
