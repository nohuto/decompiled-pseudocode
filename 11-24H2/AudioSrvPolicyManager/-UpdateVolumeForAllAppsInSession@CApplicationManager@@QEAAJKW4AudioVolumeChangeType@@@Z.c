/*
 * XREFs of ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18000CE00
 * Callers:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18000E4F0 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180011B50 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     std::_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_::_Do_call @ 0x180017960 (std--_Func_impl_no_alloc__lambda_80aa732c9f0abca8142808a505c7029f__void_--_Do_call.c)
 *     ?UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z @ 0x18001DD98 (-UpdateModernStandbyAudioState@CApplicationManager@@QEAAJK@Z.c)
 *     ?RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@@Z @ 0x180033520 (-RefreshPBMState@CProcess@@QEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@.c)
 *     ?OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z @ 0x180038710 (-OnScreenReaderStateChanged@CApplicationManager@@QEAAJPEAVCProcess@@HH@Z.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x18003C4CC (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003C6AC (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z @ 0x18000C510 (-RecalculateVolume@CProcess@@QEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?NotifyVolumePolicyChange@CApplication@@IEAAXXZ @ 0x18000C7D0 (-NotifyVolumePolicyChange@CApplication@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::UpdateVolumeForAllAppsInSession(__int64 a1, int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r15
  _QWORD *v7; // rdi
  __int64 v8; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // rcx

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v7 = *(_QWORD **)(a1 + 72);
  while ( v7 )
  {
    v8 = v7[2];
    v7 = (_QWORD *)*v7;
    if ( *(_DWORD *)(v8 + 212) == a2 )
    {
      EnterCriticalSection(v6);
      EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
      v10 = *(_QWORD **)(v8 + 72);
      while ( v10 )
      {
        v11 = v10[2];
        v10 = (_QWORD *)*v10;
        if ( !*(_DWORD *)(v11 + 416) )
          CProcess::RecalculateVolume(v11, a3);
      }
      CApplication::NotifyVolumePolicyChange((CApplication *)v8);
      if ( v8 != -32 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v8 + 32));
      if ( v6 )
        LeaveCriticalSection(v6);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
