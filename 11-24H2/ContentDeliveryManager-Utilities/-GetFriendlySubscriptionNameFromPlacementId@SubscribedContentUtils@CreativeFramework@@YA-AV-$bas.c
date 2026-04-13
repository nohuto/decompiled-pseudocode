/*
 * XREFs of ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x180094EFC
 * Callers:
 *     ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180094818 (-CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$co.c)
 *     ?CreateTileIdentifier@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W00@Z @ 0x18009491C (-CreateTileIdentifier@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@U.c)
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1800952C0 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004AD18 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004AD48 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?GetSubscriptionIdByName@TargetedContent@CreativeFramework@@YAPEB_WPEB_W@Z @ 0x180095738 (-GetSubscriptionIdByName@TargetedContent@CreativeFramework@@YAPEB_WPEB_W@Z.c)
 *     ?GetSubscriptionIdFromPlacementName@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV34@@Z @ 0x1800957D4 (-GetSubscriptionIdFromPlacementName@SubscribedContentUtils@CreativeFramework@@YA-AV-$basic_strin.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CreativeFramework::SubscribedContentUtils::GetFriendlySubscriptionNameFromPlacementId(__int64 a1)
{
  const wchar_t *v2; // rdx
  const WCHAR *v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  char v6; // bl
  LPCWSTR lpStringSource[4]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-19h] BYREF
  _QWORD v10[4]; // [rsp+70h] [rbp+7h] BYREF
  _QWORD v11[4]; // [rsp+90h] [rbp+27h] BYREF

  std::wstring::wstring((__int64)v9);
  CreativeFramework::SubscribedContentUtils::GetSubscriptionIdFromPlacementName(lpStringSource, v9);
  std::wstring::_Tidy(v9, 1, 0LL);
  v3 = (const WCHAR *)lpStringSource;
  if ( lpStringSource[3] >= (LPCWSTR)8 )
    v3 = lpStringSource[0];
  if ( CreativeFramework::TargetedContent::GetSubscriptionIdByName(v3, v2) )
  {
    v4 = std::wstring::wstring((__int64)v10);
    v5 = 2;
  }
  else
  {
    v4 = std::wstring::wstring((__int64)v11, (__int64)lpStringSource);
    v5 = 1;
  }
  std::wstring::wstring(a1, v4);
  v6 = v5 | 4;
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    std::wstring::_Tidy(v10, 1, 0LL);
  }
  if ( (v6 & 1) != 0 )
    std::wstring::_Tidy(v11, 1, 0LL);
  std::wstring::_Tidy(lpStringSource, 1, 0LL);
  return a1;
}
