/*
 * XREFs of ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008660
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x1800025B8 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x18000277C (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 *     ?AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z @ 0x180002F00 (-AddHostedAppInteractivityNotification@CPickerHostContext@@QEAAJPEBG_KKW4HOSTED_APP_CHANGED@@@Z.c)
 *     ?GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180003160 (-GetHostedAppInteractivity@CPickerHostContext@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z.c)
 *     ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x1800032A4 (-GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedA.c)
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x180003C10 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z @ 0x180008220 (-NotifyPLM@CProcess@@QEAAXW4_PLM_EXEMPTION@@@Z.c)
 *     ?EventWorkerThread@@YAKPEAX@Z @ 0x18000E0E0 (-EventWorkerThread@@YAKPEAX@Z.c)
 *     ?RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x180012AA0 (-RegisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180019D2C (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001A3B0 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0005@@H@Z @ 0x18001A82C (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0.c)
 *     ?RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ @ 0x18001D5F0 (-RevokeInteractivityFromApps@CPickerHostContext@@QEAAXXZ.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001D798 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z @ 0x18002CEC0 (-AddDuckingNotification@CDuckingManager@@UEAAJPEBGK_K@Z.c)
 *     ?DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z @ 0x18002D1A0 (-DeleteDuckingNotification@CDuckingManager@@UEAAJK_K@Z.c)
 *     ?Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z @ 0x18002D770 (-Invoke@CGenerateDuckingNotification@@UEAAJVCDuckingNotification@@@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x18002DAE4 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18002DC84 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180031590 (-BeginBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180031B88 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z @ 0x1800325E0 (-GrantGoodFaithPLMExemption@CApplication@@QEAAJH@Z.c)
 *     ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180032CC8 (-LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ?PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV?$function@$$A6AXXZ@std@@@Z @ 0x180033140 (-PostDelayedInteractivityNotification@CApplication@@IEAAJ$$QEAV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z @ 0x1800345F0 (-StartGoodFaithPLMExemptionTimer@CApplication@@IEAAJH@Z.c)
 *     ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x180034758 (-StartInactivityTimer@CProcess@@QEAAXXZ.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180037D9C (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z @ 0x180038A58 (-ReadBackgroundAudioTaskCapability@CApplicationManager@@QEAAJPEAXPEAH1@Z.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x180038E10 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180038F40 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x180039018 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z @ 0x1800390F0 (-RemoveApplication@CApplicationManager@@QEAAJAEAPEAVCApplication@@@Z.c)
 *     ?RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x1800393B8 (-RevertEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18003A2CC (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 *     atexit @ 0x18002065C (atexit.c)
 *     ??1Completer@?$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180028744 (--1Completer@-$static_lazy@VAudioSrvPolicyManagerTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 */

void __fastcall AudPolicyLogError(const char *a1, int a2, int a3)
{
  __int64 v6; // r10
  __int64 v7; // rax
  int v8; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  int v10; // [rsp+34h] [rbp-45h] BYREF
  _DWORD v11[2]; // [rsp+38h] [rbp-41h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-19h] BYREF
  void *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  const char *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  _DWORD *v21; // [rsp+90h] [rbp+17h]
  __int64 v22; // [rsp+98h] [rbp+1Fh]
  int *v23; // [rsp+A0h] [rbp+27h]
  __int64 v24; // [rsp+A8h] [rbp+2Fh]

  if ( a3 < 0 )
  {
    Context = 0LL;
    fPending = 0;
    if ( InitOnceBeginInitialize(
           &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context)
      && fPending )
    {
      *(_QWORD *)&EventDescriptor.Id = &`AudioSrvPolicyManagerTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_180064990;
      qword_180064990 = (__int64)&AudioSrvPolicyManagerTelemetryProvider::`vftable';
      qword_180064998 = 0LL;
      byte_1800649A0 = 0;
      dword_1800649A4 = 0;
      qword_1800649A8 = (__int64)&`AudioSrvPolicyManagerTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_f2e7b9994f24091cfba2638cd640fd9f_::_lambda_invoker_cdecl_);
      LODWORD(EventDescriptor.Keyword) = 0;
      wil::details::static_lazy<AudioSrvPolicyManagerTelemetryProvider>::Completer::~Completer(&EventDescriptor);
    }
    v6 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v6 > 3u
      && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0
      && (*(_QWORD *)(v6 + 24) & 0x400LL) == *(_QWORD *)(v6 + 24) )
    {
      v10 = a3;
      v23 = &v10;
      v21 = v11;
      v11[0] = a2;
      v24 = 4LL;
      v22 = 4LL;
      if ( a1 )
      {
        v7 = -1LL;
        do
          ++v7;
        while ( a1[v7] );
        v8 = v7 + 1;
      }
      else
      {
        a1 = (const char *)&word_1800538E8;
        v8 = 1;
      }
      v19 = v8;
      *(_DWORD *)&EventDescriptor.Level = 3;
      UserData.Ptr = *(_QWORD *)(v6 + 8);
      v18 = a1;
      v20 = 0;
      *(_DWORD *)&EventDescriptor.Id = 184549376;
      EventDescriptor.Keyword = 1024LL;
      UserData.Size = *(unsigned __int16 *)UserData.Ptr;
      v15 = &unk_18005784D;
      UserData.Reserved = 2;
      v16 = 35;
      v17 = 1;
      v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EventWriteTransfer(*(_QWORD *)(v6 + 32), &EventDescriptor, 0LL, 0LL, 5u, &UserData);
    }
  }
}
