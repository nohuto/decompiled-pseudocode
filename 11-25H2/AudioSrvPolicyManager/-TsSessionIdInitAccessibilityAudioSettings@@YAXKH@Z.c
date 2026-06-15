/*
 * XREFs of ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x180042348
 * Callers:
 *     ?InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z @ 0x18002A810 (-InitAccessibilityAudioSettings@CWindowsPolicyManager@@IEAAJK@Z.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18002C970 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000C380 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CWindowsPolicyManager@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180013510 (-Lock@CWindowsPolicyManager@@UEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TsSessionIdInitAccessibilityAudioSettings(__int64 a1, int a2)
{
  DWORD v3; // ebx
  struct TSSession *v4; // rax
  struct TSSession *v5; // [rsp+40h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+48h] [rbp+20h] BYREF

  v3 = a1;
  CWindowsPolicyManager::Lock(a1, &v6);
  v5 = 0LL;
  if ( (int)TsSessionFromSessionId(v3, 1, &v5) >= 0 )
  {
    v4 = v5;
    *((_DWORD *)v5 + 269) = a2;
    *((_DWORD *)v4 + 268) = 1;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v6);
}
