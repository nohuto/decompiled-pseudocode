/*
 * XREFs of _lambda_75f2985bf69ff4a05611e28552fa3ff7_::__lambda_75f2985bf69ff4a05611e28552fa3ff7_ @ 0x180658EB0
 * Callers:
 *     _TouchEdgeGripperWindow::StartDismissAnimation_::_1_::dtor$36 @ 0x18065C679 (_TouchEdgeGripperWindow--StartDismissAnimation_--_1_--dtor$36.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

__int64 __fastcall lambda_75f2985bf69ff4a05611e28552fa3ff7_::__lambda_75f2985bf69ff4a05611e28552fa3ff7_(
        volatile __int64 **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(a1);
  return result;
}
