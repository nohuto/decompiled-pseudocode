/*
 * XREFs of ??1PublishWindowsTipService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800A03A0
 * Callers:
 *     ??_GPublishWindowsTipService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800A03E0 (--_GPublishWindowsTipService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Actions::PublishWindowsTipService::~PublishWindowsTipService(
        CreativeFramework::Actions::PublishWindowsTipService *this)
{
  std::wstring::_Tidy((_QWORD *)this + 5, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 1, 1, 0LL);
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
