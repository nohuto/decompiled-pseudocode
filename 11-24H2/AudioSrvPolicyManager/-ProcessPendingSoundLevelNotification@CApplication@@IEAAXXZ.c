/*
 * XREFs of ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000EC20
 * Callers:
 *     ?ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z @ 0x18000A540 (-ApplyPBMPolicyForAllAppsInSession@CApplicationManager@@QEAAJKH@Z.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18000AAF0 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000B560 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18000C910 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000EBB0 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000D680 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     WPP_SF_d @ 0x18002B464 (WPP_SF_d.c)
 *     WPP_SF_SSd @ 0x18002F2F8 (WPP_SF_SSd.c)
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180034334 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     McTemplateU0zq_EventWriteTransfer @ 0x180035940 (McTemplateU0zq_EventWriteTransfer.c)
 */

void __fastcall CApplication::ProcessPendingSoundLevelNotification(CApplication *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _DWORD *v3; // rdi
  DWORD CurrentThreadId; // eax
  unsigned int v5; // r14d
  void *v6; // rcx
  _QWORD *Next; // rax
  __int64 v8; // rdx
  __int64 v9; // r15
  void *v10; // rcx
  _QWORD *v11; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 280);
  v3 = (_DWORD *)((char *)this + 684);
  while ( 1 )
  {
    EnterCriticalSection(v2);
    if ( *((_DWORD *)this + 80) )
    {
      v3 = (_DWORD *)((char *)this + 684);
      if ( *((_DWORD *)this + 80) != GetCurrentThreadId() )
      {
        if ( !v2 )
          return;
        goto LABEL_28;
      }
    }
    if ( *((_DWORD *)this + 81) == *((_DWORD *)this + 82) && !*v3 )
      break;
    CurrentThreadId = GetCurrentThreadId();
    v5 = *((_DWORD *)this + 81);
    *((_DWORD *)this + 80) = CurrentThreadId;
    *((_DWORD *)this + 82) = v5;
    *v3 = 0;
    if ( v2 )
      LeaveCriticalSection(v2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids, v5);
    }
    v11 = (_QWORD *)*((_QWORD *)this + 9);
    while ( v11 )
    {
      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext((__int64)v6, &v11);
      v9 = *Next;
      if ( (*(_BYTE *)(*Next + 448LL) & 1) != 0 && !*(_DWORD *)(v9 + 416) )
      {
        v10 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SSd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            14LL,
            &WPP_b18b59d12697333a0d06d17b7897f64c_Traceguids,
            L"SoundLevelChanged",
            *((_QWORD *)this + 3),
            *(_DWORD *)(v9 + 160));
        }
        if ( Microsoft_Windows_AudioEnableBits < 0 )
          McTemplateU0zq_EventWriteTransfer(v10, v8, *((_QWORD *)this + 3), v5);
        CProcess::SendPBMNotification(v9, 0LL);
      }
    }
    if ( this != (CApplication *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
  *((_DWORD *)this + 80) = 0;
  if ( !v2 )
    return;
LABEL_28:
  LeaveCriticalSection(v2);
}
