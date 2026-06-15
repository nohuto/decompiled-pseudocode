/*
 * XREFs of ?OnPoStandbyAudioRequestReceived@CWindowsPolicyManager@@UEAAJ_N@Z @ 0x18002B250
 * Callers:
 *     <none>
 * Callees:
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180013440 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013510 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ @ 0x180042C84 (-TsSessionOnPoStandbyAudioRequestChanged@@YAXXZ.c)
 */

__int64 __fastcall CWindowsPolicyManager::OnPoStandbyAudioRequestReceived(
        CWindowsPolicyManager *this,
        unsigned __int8 a2)
{
  char v2; // bl
  const struct _tlgProvider_t *v3; // rax
  bool v5; // [rsp+30h] [rbp-9h] BYREF
  int v6; // [rsp+34h] [rbp-5h] BYREF
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+38h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp+7h] BYREF
  bool *v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  int *v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v2 = a2 ^ 1;
  if ( (a2 ^ 1) != g_PoBlockAudioPlayback )
  {
    CWindowsPolicyManager::Lock((__int64)this, &v7);
    g_PoBlockAudioPlayback = v2;
    if ( v2 == 1 )
      g_AppTypesBlockedTillConsoleUnlocked |= 3u;
    v3 = AudioSrvPolicyManagerTelemetryProvider::Provider();
    if ( *(_DWORD *)v3 > 4u )
    {
      v14 = 0;
      v11 = 0;
      v6 = g_AppTypesBlockedTillConsoleUnlocked;
      v5 = g_PoBlockAudioPlayback;
      v12 = &v6;
      v9 = &v5;
      v13 = 4;
      v10 = 1;
      tlgWriteTransfer_EventWriteTransfer((__int64)v3, byte_18005A7AC, 0LL, 0LL, 4u, &v8);
    }
    TsSessionOnPoStandbyAudioRequestChanged();
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v7);
  }
  return 0LL;
}
