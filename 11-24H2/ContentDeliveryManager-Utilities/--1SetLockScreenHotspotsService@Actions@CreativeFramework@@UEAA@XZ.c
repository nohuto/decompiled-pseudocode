/*
 * XREFs of ??1SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAA@XZ @ 0x1800A1680
 * Callers:
 *     ??_GSetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x1800A16E0 (--_GSetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A404 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180060550 (--1-$unique_storage@U-$resource_policy@PEAXP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 */

void __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::~SetLockScreenHotspotsService(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  std::wstring::_Tidy((_QWORD *)this + 11, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 7, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 3, 1, 0LL);
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)this + 2);
  wil::details::unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>((void **)this + 1);
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
