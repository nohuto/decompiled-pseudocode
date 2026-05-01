/*
 * XREFs of ??1FOLDERINFO@@QEAA@XZ @ 0x180583990
 * Callers:
 *     _StartupAppMonitor::StartupAppMonitor_::_1_::dtor$11 @ 0x1806D87EE (_StartupAppMonitor--StartupAppMonitor_--_1_--dtor$11.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180583930 (--1-$unique_storage@U-$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@.c)
 */

void __fastcall FOLDERINFO::~FOLDERINFO(FOLDERINFO *this, struct wil::details::folder_change_reader_state *a2)
{
  std::_Ref_count_base *v3; // rcx

  wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>(
    (wil::details **)this + 10,
    a2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 9);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::wstring::_Tidy_deallocate((void **)this + 4);
}
