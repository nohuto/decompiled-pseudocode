/*
 * XREFs of ?watch_errors@?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@2@XZ @ 0x180289670
 * Callers:
 *     _lambda_e144cef1f387178a308841941c02025f_::operator()_enum_winrt::Windows::Foundation::AsyncStatus_const_&_ @ 0x1805930D8 (_lambda_e144cef1f387178a308841941c02025f_--operator()_enum_winrt--Windows--Foundation--AsyncStat.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180289A38 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TouchEdgeGestureTest@@U1@@details@tip2@@@tip2@@AEBA.c)
 */

__int64 __fastcall tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::watch_errors(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rax

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_TouchEdgeGestureTest,_tip_TouchEdgeGestureTest>>::ensure_data(a1);
  *(_QWORD *)a2 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    1);
  v4 = *v3;
  *(_QWORD *)(a2 + 56) = *v3;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 320));
  return a2;
}
