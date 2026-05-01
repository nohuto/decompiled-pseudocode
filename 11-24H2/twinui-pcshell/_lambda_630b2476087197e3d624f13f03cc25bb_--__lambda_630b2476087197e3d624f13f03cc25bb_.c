/*
 * XREFs of _lambda_630b2476087197e3d624f13f03cc25bb_::__lambda_630b2476087197e3d624f13f03cc25bb_ @ 0x1803B525C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___::_CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___ @ 0x1803B540C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_630b2476087197e3d624f13f03cc25bb___--_CTask.c)
 *     ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x1803C0D14 (-TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@.c)
 *     _UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProvider_::_1_::dtor$6 @ 0x1806E6B95 (_UndockedSearchAppExperienceManager--TryInstallDefaultWebSearchProvider_--_1_--dtor$6.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1803B55D0 (--1-$com_ptr_t@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returnc.c)
 */

void __fastcall lambda_630b2476087197e3d624f13f03cc25bb_::__lambda_630b2476087197e3d624f13f03cc25bb_(void **a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>(a1 + 8);
  std::wstring::_Tidy_deallocate(a1 + 4);
  std::wstring::_Tidy_deallocate(a1);
}
