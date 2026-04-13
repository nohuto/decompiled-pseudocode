/*
 * XREFs of ?RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800B3088
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180085D24 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AB80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?erase@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z @ 0x18005D390 (-erase@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x180097048 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::CommonHelper::StringUtils::RemoveSubstring(_QWORD *a1)
{
  wchar_t *v2; // rdx
  unsigned __int64 v3; // rax
  _QWORD v5[2]; // [rsp+30h] [rbp-38h] BYREF
  size_t v6; // [rsp+40h] [rbp-28h]
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]

  std::wstring::wstring((__int64)a1);
  std::wstring::wstring((__int64)v5);
  v2 = (wchar_t *)v5;
  if ( v7 >= 8 )
    v2 = (wchar_t *)v5[0];
  v3 = std::wstring::find(a1, v2, 0LL, v6);
  if ( v3 != -1LL )
    std::wstring::erase(a1, v3, v6);
  std::wstring::_Tidy(v5, 1, 0LL);
  return a1;
}
