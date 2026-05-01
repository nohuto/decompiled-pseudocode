/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler__lambda_eed24a43ab320b602e73bc35d7541654___::Invoke @ 0x1801D1350
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801BCA28 (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 *     ?get@?$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ @ 0x1801C524C (-get@-$weak_ref@VSnapFlyoutHost@@@winrt@@QEBA@XZ.c)
 *     ?ResetNotificationBoundary@WindowDragInputProvider@@QEAAXXZ @ 0x1801D139C (-ResetNotificationBoundary@WindowDragInputProvider@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Internal::Shell::SnapComponent::ResetNotificationBoundaryHandler__lambda_eed24a43ab320b602e73bc35d7541654___::Invoke(
        __int64 a1)
{
  __int64 result; // rax
  WindowDragInputProvider *v2; // [rsp+30h] [rbp+8h] BYREF

  winrt::weak_ref<SnapFlyoutHost>::get((__int64 *)(a1 + 16), (struct IUnknown *)&v2);
  try
  {
    if ( v2 )
      WindowDragInputProvider::ResetNotificationBoundary(v2);
    if ( v2 )
      winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref((_QWORD **)&v2);
    result = 0LL;
  }
  catch ( ... )
  {
    return *(unsigned int *)winrt::to_hresult(&v2);
  }
  return result;
}
