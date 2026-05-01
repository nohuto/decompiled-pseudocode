/*
 * XREFs of ?at@?$unordered_map@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@@8@@std@@QEBAAEBV?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@2@AEBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@Z @ 0x18069C2EC
 * Callers:
 *     ?ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAAXW4EdgeLocation@34567@AEBUGestureAnimationData@Input@UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x18069B53C (-ReportEdgeGesture@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Win.c)
 * Callees:
 *     ??$?RH@?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@QEBA_KAEBH@Z @ 0x1800AB80C (--$-RH@-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std@@QEBA_KAEBH@Z.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x180297958 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@UHostProcessData@implementation@Shell@Int.c)
 */

__int64 __fastcall std::unordered_map<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>::at(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  _DWORD *v3; // rdx
  _QWORD *v4; // r10
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  v2 = std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>::operator()<int>(a1, a2);
  std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>>,0>>::_Find_last<unsigned int>(
    v4,
    &v6,
    v3,
    v2);
  if ( !v7 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
    JUMPOUT(0x18069C333LL);
  }
  return v7 + 24;
}
