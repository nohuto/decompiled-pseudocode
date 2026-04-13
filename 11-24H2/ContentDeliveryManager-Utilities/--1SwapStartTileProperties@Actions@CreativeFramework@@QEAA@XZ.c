/*
 * XREFs of ??1SwapStartTileProperties@Actions@CreativeFramework@@QEAA@XZ @ 0x180093F68
 * Callers:
 *     ?MakeSwapStartTileService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800960D0 (-MakeSwapStartTileService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@C.c)
 *     _CreativeFramework::Actions::MakeSwapStartTileService_::_1_::dtor$0 @ 0x1800BBABA (_CreativeFramework--Actions--MakeSwapStartTileService_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Actions::SwapStartTileProperties::~SwapStartTileProperties(
        CreativeFramework::Actions::SwapStartTileProperties *this)
{
  std::wstring::_Tidy((_QWORD *)this + 20, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 16, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 12, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 8, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 4, 1, 0LL);
  std::wstring::_Tidy(this, 1, 0LL);
}
