/*
 * XREFs of ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x180081624
 * Callers:
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180080F0C (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180085CBC (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG@Z @ 0x18004AD80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG@Z.c)
 *     ?length@?$char_traits@_W@std@@SA_KPEB_W@Z @ 0x18005DE84 (-length@-$char_traits@_W@std@@SA_KPEB_W@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800973E8 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180098978 (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W@Z @ 0x1800A74BC (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::NormalizedString(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  int v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+28h] [rbp-10h]

  v7 = a1;
  std::wstring::wstring(a1);
  v6 = 2;
  while ( 1 )
  {
    v3 = std::char_traits<wchar_t>::length(L"-");
    v4 = std::wstring::find(a1, L"-", 0LL, v3, v6, v7);
    if ( v4 == -1 )
      break;
    v2 = std::wstring::replace(a1, v4, 1LL, L"%");
    std::wstring::operator=(a1, v2);
  }
  return a1;
}
