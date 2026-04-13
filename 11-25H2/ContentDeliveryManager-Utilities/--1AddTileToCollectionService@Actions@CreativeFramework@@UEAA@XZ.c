/*
 * XREFs of ??1AddTileToCollectionService@Actions@CreativeFramework@@UEAA@XZ @ 0x180093AA8
 * Callers:
 *     ??_EAddTileToCollectionService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x180094160 (--_EAddTileToCollectionService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005B808 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 */

void __fastcall CreativeFramework::Actions::AddTileToCollectionService::~AddTileToCollectionService(
        CreativeFramework::Actions::AddTileToCollectionService *this)
{
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)this + 22);
  std::wstring::_Tidy((_QWORD *)this + 18, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 14, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 10, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 6, 1, 0LL);
  std::wstring::_Tidy((_QWORD *)this + 2, 1, 0LL);
  *(_QWORD *)this = &CreativeFramework::Actions::IActionService::`vftable';
}
