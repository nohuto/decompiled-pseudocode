/*
 * XREFs of PbmUnregisterPlaybackManagerNotifications @ 0x18003BC20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001E180 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800338E0 (-RegisteredForSoundLevelNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 *     ?RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x1800339A0 (-RegisteredForTrackStateNotifications@CProcess@@QEAAXHW4__MIDL___MIDL_itf_audiosrv_0000_0000_000.c)
 */

__int64 __fastcall PbmUnregisterPlaybackManagerNotifications(void *a1, int a2, int a3)
{
  int Process; // edi
  CApplicationManager *v6; // rsi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+20h] [rbp-18h] BYREF
  struct CProcess *v11; // [rsp+58h] [rbp+20h] BYREF

  Process = 0;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v11);
    if ( Process >= 0 )
    {
      if ( !a2 )
      {
        v6 = g_ApplicationManager;
        v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
        v10 = v8;
        CProcess::RegisteredForSoundLevelNotifications(0LL, 0, a3);
        goto LABEL_7;
      }
      if ( a2 == 1 )
      {
        v6 = g_ApplicationManager;
        v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
        EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
        v10 = v7;
        CProcess::RegisteredForTrackStateNotifications(0LL, 0, a3);
LABEL_7:
        CApplicationManager::Unregister(v6, 0LL);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v10);
        return 0;
      }
    }
  }
  return (unsigned int)Process;
}
