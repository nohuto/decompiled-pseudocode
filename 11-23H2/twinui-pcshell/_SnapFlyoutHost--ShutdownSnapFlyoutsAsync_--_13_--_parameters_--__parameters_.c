/*
 * XREFs of _SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::__parameters_ @ 0x180679784
 * Callers:
 *     _SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_InitCoro$2_::_1_::dtor$1 @ 0x1802287DA (_SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_InitCoro$2_--_1_--dtor$1.c)
 *     SnapFlyoutHost::ShutdownSnapFlyoutsAsync$_ResumeCoro$1 @ 0x180228800 (SnapFlyoutHost--ShutdownSnapFlyoutsAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1801FA5AC (-unconditional_release_ref@-$com_ptr@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$vector@UUr.c)
 */

void __fastcall SnapFlyoutHost::ShutdownSnapFlyoutsAsync_::_13_::_parameters_::__parameters_(__int64 a1)
{
  __int64 v1; // rdx
  volatile __int64 **v3; // rbx
  volatile __int64 *v4; // rdi

  v1 = *(_QWORD *)(a1 + 8);
  **(_QWORD **)(v1 + 8) = 0LL;
  v3 = *(volatile __int64 ***)v1;
  if ( *(_QWORD *)v1 )
  {
    do
    {
      v4 = *v3;
      if ( v3[2] )
        winrt::com_ptr<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>>::unconditional_release_ref(v3 + 2);
      std::_Deallocate<16,0>(v3, 0x18uLL);
      v3 = (volatile __int64 **)v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x18uLL);
}
