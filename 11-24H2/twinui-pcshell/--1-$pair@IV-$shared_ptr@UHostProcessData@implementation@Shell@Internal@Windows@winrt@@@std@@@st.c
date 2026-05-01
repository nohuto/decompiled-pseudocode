/*
 * XREFs of ??1?$pair@IV?$shared_ptr@UHostProcessData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1802CE260
 * Callers:
 *     _PenWorkspace::Discover::RecentAppsCache::RecentAppsCache_::_1_::dtor$2 @ 0x1806CD7E7 (_PenWorkspace--Discover--RecentAppsCache--RecentAppsCache_--_1_--dtor$2.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$2_::_1_::dtor$1 @ 0x1806FD436 (_winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCo_ea_1806FD436.c)
 *     __lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____________::_1_::dtor$9 @ 0x180702F05 (__lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hs_ea_180702F05.c)
 *     __lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____________::_1_::dtor$9 @ 0x180702F29 (__lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hs_ea_180702F29.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveProcessData_::_1_::dtor$5 @ 0x180703144 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--S_ea_180703144.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::pair<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>::~pair<unsigned int,std::shared_ptr<winrt::Windows::Internal::Shell::implementation::HostProcessData>>(
        _QWORD *a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = (std::_Ref_count_base *)a1[2];
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
