/*
 * XREFs of ?TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA?AW4AppTypesBlockedTillConsoleUnlocked@@K@Z @ 0x18003F9A0
 * Callers:
 *     ?GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ @ 0x18001AEA0 (-GetSessionDisplayPolicyVolume@CProcess@@UEAAMXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333AEBU?$_tlgWrapperByVal@$00@@33@Z @ 0x180001A54 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@@-$_tlgWriteTemp.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1800033B0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000D6B0 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013EA0 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?UpdateGlobalUserPresenceState@@YAXXZ @ 0x18001FB78 (-UpdateGlobalUserPresenceState@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdGetAppsBlockedTillConsoleUnlocked(__int64 a1)
{
  DWORD v1; // ebx
  int v2; // eax
  __int64 v3; // rcx
  struct TSSession *v4; // rdi
  unsigned int v5; // ebx
  int v6; // eax
  const struct _tlgProvider_t *v7; // r8
  struct _RTL_CRITICAL_SECTION *v9[3]; // [rsp+88h] [rbp+3Fh] BYREF
  struct TSSession *v10; // [rsp+B8h] [rbp+6Fh] BYREF
  unsigned int v11; // [rsp+C0h] [rbp+77h]
  int v12; // [rsp+C8h] [rbp+7Fh]

  v1 = a1;
  CWindowsPolicyManager::Lock(a1, v9);
  v10 = 0LL;
  v2 = TsSessionFromSessionId(v1, 0, &v10);
  v4 = v10;
  if ( v2 < 0 )
    goto LABEL_2;
  UpdateGlobalUserPresenceState(v3);
  if ( g_GlobalUserPresent )
  {
    if ( g_bLowPowerEpoch || g_bApmSuspended || g_PoBlockAudioPlayback )
    {
      v5 = g_AppTypesBlockedTillConsoleUnlocked;
    }
    else
    {
      v6 = *((_DWORD *)v4 + 254);
      if ( v6 != 1 )
      {
        if ( !v6 )
          g_AppTypesBlockedTillConsoleUnlocked = 0;
        goto LABEL_2;
      }
      v5 = g_AppTypesBlockedTillConsoleUnlocked;
      if ( !g_AppTypesBlockedTillConsoleUnlocked )
LABEL_2:
        v5 = 0;
    }
  }
  else
  {
    v5 = 3;
  }
  v7 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v7 > 4u )
  {
    v11 = v5;
    v12 = g_AppTypesBlockedTillConsoleUnlocked;
    LOBYTE(v10) = g_PoBlockAudioPlayback;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v7,
      (__int64)&unk_180057EB9);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(v9);
  return v5;
}
