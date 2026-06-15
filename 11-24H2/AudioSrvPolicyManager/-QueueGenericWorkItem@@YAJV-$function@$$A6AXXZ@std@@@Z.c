/*
 * XREFs of ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002BC4 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBG_KW4__MIDL___MIDL_itf_playbackma.c)
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x1800042D0 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?Callback@AudioSrvPolicyManagerTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x180019B30 (-Callback@AudioSrvPolicyManagerTelemetryProvider@@CAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTO.c)
 *     ?MarkAsTerminated@CProcess@@QEAAXXZ @ 0x18001C4F4 (-MarkAsTerminated@CProcess@@QEAAXXZ.c)
 *     ?QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z @ 0x18001C73C (-QueueHostedAppInteractivityChangedWorkItem@CHostedAppInteractivityManager@@AEAAJPEBG_KKH@Z.c)
 *     ?NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x180029220 (-NotifyDialogSessionStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z @ 0x1800296A0 (-NotifyVoipCallStateChange@CWindowsPolicyManager@@UEAAJPEAUIAudioProcess@@_N@Z.c)
 *     ?RefreshPolicyVolumes@CWindowsPolicyManager@@UEAAJK@Z @ 0x180029D10 (-RefreshPolicyVolumes@CWindowsPolicyManager@@UEAAJK@Z.c)
 *     ?BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180031540 (-BCMStartupGracePeriodExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TI.c)
 *     ?GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180032590 (-GoodFaithPLMExemptionTimerExpiredCallback@CApplication@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_.c)
 *     ?InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800328D0 (-InactivityTimerCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x1800332D0 (-ProcessTerminationWatcherCallback@CProcess@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180037D9C (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x18003A6BC (-OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z.c)
 *     ?QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A79C (-QueueStreamStartedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18003A8EC (-QueueStreamStoppedWorkItem@CPlaybackManager@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     PbmAllowMediaPlaybackForApp @ 0x18003B070 (PbmAllowMediaPlaybackForApp.c)
 *     PbmCastingAppStateChanged @ 0x18003B190 (PbmCastingAppStateChanged.c)
 *     PbmPlayToStreamStateChanged @ 0x18003B450 (PbmPlayToStreamStateChanged.c)
 *     PbmReportApplicationState @ 0x18003B6D0 (PbmReportApplicationState.c)
 *     PbmSetScreenReaderState @ 0x18003B870 (PbmSetScreenReaderState.c)
 *     PbmSetSmtcSubscriptionState @ 0x18003B960 (PbmSetSmtcSubscriptionState.c)
 *     _lambda_28433bbdf35c05dec82bca523d2a5fd2_::operator() @ 0x18003D8DC (_lambda_28433bbdf35c05dec82bca523d2a5fd2_--operator().c)
 *     _lambda_d796dcb77f0f197a5763ab5c6551444f_::operator() @ 0x18003DD6C (_lambda_d796dcb77f0f197a5763ab5c6551444f_--operator().c)
 *     ?QueueSessionMuteUnmute@@YAJKK@Z @ 0x18003E62C (-QueueSessionMuteUnmute@@YAJKK@Z.c)
 *     ?QueueVolumeRefreshForAllTsSessions@@YAXXZ @ 0x18003E69C (-QueueVolumeRefreshForAllTsSessions@@YAXXZ.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x18003F498 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18003F830 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x1800403D8 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ @ 0x180040464 (-TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004E70 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800179F0 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Construct_in_place@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV?$function@$$A6AXXZ@0@0@Z @ 0x18001D5E4 (--$_Construct_in_place@V-$function@$$A6AXXZ@std@@AEAV12@@std@@YAXAEAV-$function@$$A6AXXZ@0@0@Z.c)
 *     ??1?$unique_ptr@VCGenericWorkItem@@U?$default_delete@VCGenericWorkItem@@@std@@@std@@QEAA@XZ @ 0x18001F9F8 (--1-$unique_ptr@VCGenericWorkItem@@U-$default_delete@VCGenericWorkItem@@@std@@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206BC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall QueueGenericWorkItem(__int64 *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 (__fastcall ***v4)(_QWORD, int *); // rcx
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  volatile signed __int32 *v7; // r14
  int *v8; // rdx
  const char *v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rdx
  signed int LastError; // eax
  unsigned int v15; // ebx
  __int64 *v16; // rcx
  int v17[14]; // [rsp+20h] [rbp-68h] BYREF
  int *v18; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  _QWORD *v21; // [rsp+98h] [rbp+10h] BYREF
  int *v22; // [rsp+A0h] [rbp+18h]
  _DWORD *v23; // [rsp+A8h] [rbp+20h]

  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  try
  {
    v3 = v2;
    v21 = v2;
    if ( v2 )
    {
      v22 = v17;
      v18 = 0LL;
      v4 = (__int64 (__fastcall ***)(_QWORD, int *))a1[7];
      if ( v4 )
        v18 = (int *)(**v4)(v4, v17);
      v22 = v17;
      *v3 = &CGenericWorkItem::`vftable';
      v3[1] = 0LL;
      v3[2] = 0LL;
      v5 = operator new(0x50uLL);
      v6 = v5;
      v23 = v5;
      if ( v5 )
      {
        *(_OWORD *)v5 = 0LL;
        v5[2] = 1;
        v5[3] = 1;
        *(_QWORD *)v5 = &std::_Ref_count_obj2<std::function<void (void)>>::`vftable';
        std::_Construct_in_place<std::function<void (void)>,std::function<void (void)> &>(v5 + 4, v17);
      }
      else
      {
        v6 = 0LL;
      }
      v3[1] = v6 + 4;
      v7 = (volatile signed __int32 *)v3[2];
      v3[2] = v6;
      if ( v7 )
      {
        if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
          if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
        }
      }
      if ( v18 )
      {
        v8 = v17;
        LOBYTE(v8) = v18 != v17;
        (*(void (__fastcall **)(int *, int *))(*(_QWORD *)v18 + 32LL))(v18, v8);
        v18 = 0LL;
      }
    }
    else
    {
      v3 = 0LL;
    }
    v21 = v3;
    if ( v3 )
    {
      if ( PostQueuedCompletionStatus(g_WorkerEventPort, 0, (ULONG_PTR)v3, 0LL) )
        goto LABEL_24;
      LastError = GetLastError();
      v15 = LastError;
      if ( LastError > 0 )
        v15 = (unsigned __int16)LastError | 0x80070000;
      if ( (v15 & 0x80000000) == 0 )
      {
LABEL_24:
        v16 = (__int64 *)a1[7];
        if ( v16 )
        {
          LOBYTE(v13) = v16 != a1;
          (*(void (__fastcall **)(__int64 *, __int64))(*v16 + 32))(v16, v13);
          a1[7] = 0LL;
        }
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14A,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
          (const char *)v15,
          v17[0]);
        std::unique_ptr<CGenericWorkItem>::~unique_ptr<CGenericWorkItem>(&v21);
        std::_Func_class<void,>::_Tidy(a1);
        result = v15;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x148,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
        (const char *)0x8007000ELL,
        v17[0]);
      v10 = (__int64 *)a1[7];
      if ( v10 )
      {
        v11 = *v10;
        LOBYTE(v11) = v10 != a1;
        (*(void (__fastcall **)(__int64 *, __int64))(*v10 + 32))(v10, v11);
        a1[7] = 0LL;
      }
      result = 2147942414LL;
    }
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x150,
                     (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
                     v9);
    std::_Func_class<void,>::_Tidy(a1);
    return (unsigned int)v21;
  }
  return result;
}
