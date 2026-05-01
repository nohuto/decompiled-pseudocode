/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x180583930
 * Callers:
 *     ?StartMonitor@StartupAppMonitor@@QEAAXXZ @ 0x1800F0B10 (-StartMonitor@StartupAppMonitor@@QEAAXXZ.c)
 *     ??1FOLDERINFO@@QEAA@XZ @ 0x180583990 (--1FOLDERINFO@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAA@XZ @ 0x180611598 (--1-$unique_any_t@V-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_chan.c)
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180611664 (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180614F68 (-RegisterCompatFileWatcher@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     _wil::make_folder_change_reader_::_1_::dtor$2 @ 0x1806F5653 (_wil--make_folder_change_reader_--_1_--dtor$2.c)
 * Callees:
 *     ?delete_folder_change_reader_state@details@wil@@YAXPEAUfolder_change_reader_state@12@@Z @ 0x180584C9C (-delete_folder_change_reader_state@details@wil@@YAXPEAUfolder_change_reader_state@12@@Z.c)
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::folder_change_reader_state *,void (*)(wil::details::folder_change_reader_state *),&void wil::details::delete_folder_change_reader_state(wil::details::folder_change_reader_state *),wistd::integral_constant<unsigned __int64,2>,wil::details::folder_change_reader_state *,wil::details::folder_change_reader_state *,0,std::nullptr_t>>(
        wil::details **a1,
        struct wil::details::folder_change_reader_state *a2)
{
  wil::details *v2; // rcx

  v2 = *a1;
  if ( v2 )
    wil::details::delete_folder_change_reader_state(v2, a2);
}
