/*
 * XREFs of ??1ToastHelpers@NotificationManager@CreativeFramework@@QEAA@XZ @ 0x18009DDF0
 * Callers:
 *     ?_Delete@?$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U?$default_delete@VToastHelpers@NotificationManager@CreativeFramework@@@std@@@std@@AEAAXXZ @ 0x18009E3FC (-_Delete@-$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U-$default_delete@VTo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18008FE08 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@.c)
 */

void __fastcall CreativeFramework::NotificationManager::ToastHelpers::~ToastHelpers(
        CreativeFramework::NotificationManager::ToastHelpers *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>((void **)this + 4);
  std::wstring::_Tidy(this, 1, 0LL);
}
