/*
 * XREFs of ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x1800080C0
 * Callers:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000EBB0 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180008220 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplication::ProcessPendingPLMExemptionChange(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v3; // r14d
  _QWORD *v4; // rdi
  __int64 v5; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 336);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_DWORD *)this + 94) && *((_DWORD *)this + 94) != GetCurrentThreadId() )
    {
      if ( !v2 )
        return;
      goto LABEL_18;
    }
    if ( !*((_DWORD *)this + 95) )
      break;
    *((_DWORD *)this + 94) = GetCurrentThreadId();
    v3 = *((_DWORD *)this + 95);
    *((_DWORD *)this + 95) = 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids, v3);
    }
    v4 = (_QWORD *)*((_QWORD *)this + 9);
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      CProcess::NotifyPLM(v5, v3);
    }
    if ( this != (CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
  *((_DWORD *)this + 94) = 0;
  if ( !v2 )
    return;
LABEL_18:
  LeaveCriticalSection(v2);
}
