/*
 * XREFs of ??1RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18064A164
 * Callers:
 *     ??1?$unique_ptr@VRemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@U?$default_delete@VRemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x18064A078 (--1-$unique_ptr@VRemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@U-$.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x18064973C (--1-$_Hash@V-$_Umap_traits@IV-$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1806497E4 (--1-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$a.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::~RemoteSessionPersistenceHelper(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper *this)
{
  std::wstring::_Tidy_deallocate((void **)this + 29);
  std::wstring::_Tidy_deallocate((void **)this + 25);
  std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>>,0>>::~_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>>,0>>((__int64 *)this + 17);
  std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>((__int64 *)this + 9);
  std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>((__int64 *)this + 1);
}
