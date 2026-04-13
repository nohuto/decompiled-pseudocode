/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180088634
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x180086154 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?DeleteContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAAXPEAUHSTRING__@@@Z @ 0x1800B6520 (-DeleteContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAAXPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004AD48 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??Rless@Details@CommonHelper@CreativeFramework@@QEBA_NV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x18008452C (--Rless@Details@CommonHelper@CreativeFramework@@QEBA_NV-$basic_string@_WU-$char_traits@_W@std@@V.c)
 *     ?lower_bound@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180088798 (-lower_bound@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::find(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  _BYTE *v6; // rbx
  _QWORD *v7; // rdi
  WCHAR *v8; // rax
  __int64 v9; // rcx
  _BYTE v11[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v12[32]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE *v13; // [rsp+80h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::lower_bound(
    a1,
    &v13,
    a3);
  v6 = v13;
  if ( v13 == (_BYTE *)*a1
    || (v13 = v11,
        v7 = (_QWORD *)std::wstring::wstring((__int64)v11, (__int64)(v6 + 32)),
        v8 = (WCHAR *)std::wstring::wstring((__int64)v12, a3),
        CreativeFramework::CommonHelper::Details::less::operator()(v9, v8, v7)) )
  {
    v6 = (_BYTE *)*a1;
  }
  *a2 = v6;
  return a2;
}
