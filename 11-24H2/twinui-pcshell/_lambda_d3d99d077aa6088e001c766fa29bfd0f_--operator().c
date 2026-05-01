/*
 * XREFs of _lambda_d3d99d077aa6088e001c766fa29bfd0f_::operator() @ 0x1805B166C
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_________lambda_d3d99d077aa6088e001c766fa29bfd0f___ @ 0x1805B1040 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--shared_ptr_SnapFly.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180274A94 (-TryCleanupHiddenSnapBar@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@1@XZ @ 0x18028B58C (--C-$tip_test@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_da.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180291E00 (--1-$test_data_control@V-$merged_data@U_tip_SnapFlyoutShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180295BA8 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@?$list@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@1@@Z @ 0x1805B0AC0 (--$_Emplace@AEBV-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@-$list@V-$shared_ptr@U.c)
 *     ?RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@AEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x1805B3B38 (-RemoveInstanceFromMonitorMap@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@In.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_d3d99d077aa6088e001c766fa29bfd0f_::operator()(__int64 *a1, __int64 *a2)
{
  char v4; // di
  void *v6; // [rsp+38h] [rbp+10h] BYREF

  v4 = winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryCleanupHiddenSnapBar(*(winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance **)(*a2 + 8));
  if ( v4 )
  {
    std::list<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>::_Emplace<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord> const &>(
      *a1,
      *(_QWORD *)*a1,
      a2);
    if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)*a2) )
    {
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::operator->(
                    *a2,
                    (__int64 *)&v6)
               + 274) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapFlyoutShowTest,_tip_SnapFlyoutShowTest>>(&v6);
      tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete((__int64 *)*a2);
    }
    v6 = (void *)(*(_QWORD *)(*a2 + 8) + 16LL);
    SnapFlyoutHost::RemoveInstanceFromMonitorMap(a1[1], &v6);
    v6 = 0LL;
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  }
  return v4;
}
