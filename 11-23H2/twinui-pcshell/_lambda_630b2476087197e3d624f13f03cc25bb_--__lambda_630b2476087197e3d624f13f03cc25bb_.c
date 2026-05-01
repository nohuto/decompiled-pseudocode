/*
 * XREFs of _lambda_630b2476087197e3d624f13f03cc25bb_::__lambda_630b2476087197e3d624f13f03cc25bb_ @ 0x1804661E4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::_scalar_deleting_destructor_ @ 0x180466B70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___--_scala.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x18046AD4C (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 *     _UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProvider_::_1_::dtor$6 @ 0x18046B1F2 (_UndockedSearchAppExperienceManager--TryInstallDefaultWebSearchProvider_--_1_--dtor$6.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ @ 0x180469FAC (-Release@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall lambda_630b2476087197e3d624f13f03cc25bb_::__lambda_630b2476087197e3d624f13f03cc25bb_(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 64);
  if ( v2 )
    tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release(v2);
  std::wstring::_Tidy_deallocate(a1 + 32);
  return std::wstring::_Tidy_deallocate(a1);
}
