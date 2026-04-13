/*
 * XREFs of ??1PinToStartProperties@Actions@CreativeFramework@@QEAA@XZ @ 0x180093B20
 * Callers:
 *     ?MakeAddTileToCollectionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800958D0 (-MakeAddTileToCollectionService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Act.c)
 *     _CreativeFramework::Actions::MakeAddTileToCollectionService_::_1_::dtor$12 @ 0x1800BB788 (_CreativeFramework--Actions--MakeAddTileToCollectionService_--_1_--dtor$12.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Actions::PinToStartProperties::~PinToStartProperties(
        CreativeFramework::Actions::PinToStartProperties *this)
{
  std::wstring::_Tidy((_QWORD *)this + 16, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 12, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 8, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 4, 1, 0LL);
  std::wstring::_Tidy(this, 1, 0LL);
}
