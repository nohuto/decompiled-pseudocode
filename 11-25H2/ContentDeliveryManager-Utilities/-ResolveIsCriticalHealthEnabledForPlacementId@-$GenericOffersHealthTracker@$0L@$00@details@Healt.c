/*
 * XREFs of ?ResolveIsCriticalHealthEnabledForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA_NPEBG@Z @ 0x180056924
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x1800527C0 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?GetSubscriptionConfigurationEntry@TargetedContent@CreativeFramework@@YA?AUTargetedContentSubscriptionConfiguration@12@PEBG@Z @ 0x180052A54 (-GetSubscriptionConfigurationEntry@TargetedContent@CreativeFramework@@YA-AUTargetedContentSubscr.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CreativeFramework::Health::details::GenericOffersHealthTracker<11,1>::ResolveIsCriticalHealthEnabledForPlacementId(
        LPCWCH lpString2)
{
  _QWORD *v1; // rdx
  bool v2; // bl
  __int64 v3; // rdx
  _BYTE v5[40]; // [rsp+60h] [rbp-58h] BYREF
  _QWORD v6[4]; // [rsp+88h] [rbp-30h] BYREF

  CompareStringOrdinal(L"SubscribedContent-", 18, lpString2, 18, 1);
  std::wstring::wstring((__int64)v6);
  v1 = v6;
  if ( v6[3] >= 8uLL )
    v1 = (_QWORD *)v6[0];
  v2 = (*(_DWORD *)(CreativeFramework::TargetedContent::GetSubscriptionConfigurationEntry((__int64)v5, (__int64)v1) + 16) & 0x40) != 0;
  LOBYTE(v3) = 1;
  std::wstring::_Tidy(v6, v3, 0LL);
  return v2;
}
