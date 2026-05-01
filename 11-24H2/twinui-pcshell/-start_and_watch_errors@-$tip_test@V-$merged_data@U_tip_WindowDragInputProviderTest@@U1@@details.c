/*
 * XREFs of ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@2@XZ @ 0x18028AEC8
 * Callers:
 *     ?OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z @ 0x180273D10 (-OnWindowArrangementMessage@WindowDragInputProvider@@AEAA_JI_K_J@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18003F64C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18028A69C (-reset@-$com_ptr_t@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_retu.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028B034 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028B3EC (-ensure_data@-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip.c)
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x1802CDF64 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 */

__int64 __fastcall tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::start_and_watch_errors(
        volatile signed __int32 **a1,
        __int64 a2)
{
  volatile signed __int32 *v4; // rcx
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( v4 && (unsigned __int8)tip2::details::shared_data<1,0,0>::has_ever_started(v4 + 2) )
    wil::com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>::reset(a1);
  v5 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::ensure_data(a1);
  tip2::details::shared_data<0,0,0>::start(*v5 + 8LL, v8);
  *(_QWORD *)a2 = &tip2::test_watcher<tip2::details::merged_data<XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest,XamlExplorerHostTipTests::_tip_CreateXamlApplicationTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)(a2 + 8),
    (struct wil::details::IFailureCallback *)a2,
    0LL,
    1);
  v6 = *a1;
  *(_QWORD *)(a2 + 56) = *a1;
  if ( v6 )
    _InterlockedIncrement(v6 + 70);
  return a2;
}
