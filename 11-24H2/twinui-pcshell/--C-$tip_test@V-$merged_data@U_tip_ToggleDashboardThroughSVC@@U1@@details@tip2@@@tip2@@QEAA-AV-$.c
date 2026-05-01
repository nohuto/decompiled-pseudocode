/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@1@XZ @ 0x1805CB7B4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180281A80 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 * Callees:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028ABF0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@.c)
 *     ?begin_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x18028B600 (-begin_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>>::operator->(
        void **a1,
        void **a2)
{
  void **v3; // rax
  volatile signed __int32 *v4; // rcx

  v3 = tip2::tip_test<tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>>::ensure_data(a1);
  v4 = (volatile signed __int32 *)*v3;
  *a2 = *v3;
  if ( v4 )
    _InterlockedIncrement(v4 + 88);
  tip2::details::shared_data<1,0,0>::begin_update((__int64)*a2 + 8);
  return a2;
}
