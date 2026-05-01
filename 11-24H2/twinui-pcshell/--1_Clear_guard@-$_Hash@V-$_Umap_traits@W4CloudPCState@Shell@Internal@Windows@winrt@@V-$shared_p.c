/*
 * XREFs of ??1_Clear_guard@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@$0A@@std@@@std@@QEAA@XZ @ 0x180671918
 * Callers:
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@$0A@@std@@@std@@IEAAX_K@Z @ 0x180672A24 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V-$shared_p.c)
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@V?$shared_ptr@UConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@7@$0A@@std@@@std@@QEAAXXZ @ 0x1802C9998 (-clear@-$_Hash@V-$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@V-$shared_ptr@UConne.c)
 */

unsigned __int64 __fastcall std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>>,0>>::_Clear_guard::~_Clear_guard(
        _QWORD **a1)
{
  _QWORD *v1; // rcx
  unsigned __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::ConnectionStateBase>>>,0>>::clear(v1);
  return result;
}
