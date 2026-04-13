/*
 * XREFs of ??1LaunchAppByIdService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800913B0
 * Callers:
 *     ??_EPublishSystemStateService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x180091420 (--_EPublishSystemStateService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Actions::LaunchAppByIdService::~LaunchAppByIdService(
        CreativeFramework::Actions::LaunchAppByIdService *this)
{
  std::wstring::_Tidy((_QWORD *)this + 1, 1, 0LL);
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
