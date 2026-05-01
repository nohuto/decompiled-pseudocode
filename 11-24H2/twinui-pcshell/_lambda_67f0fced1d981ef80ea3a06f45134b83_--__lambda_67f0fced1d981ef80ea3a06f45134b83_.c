/*
 * XREFs of _lambda_67f0fced1d981ef80ea3a06f45134b83_::__lambda_67f0fced1d981ef80ea3a06f45134b83_ @ 0x18066C954
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF00 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_18066CF00.c)
 *     std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void_::_Delete_this @ 0x18066F7A0 (std--_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void_--_Delete_this.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1_::_1_::dtor$12 @ 0x1807038DD (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClo_ea_1807038DD.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801CE0D4 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall lambda_67f0fced1d981ef80ea3a06f45134b83_::__lambda_67f0fced1d981ef80ea3a06f45134b83_(__int64 a1)
{
  std::_Ref_count_base *v2; // rcx

  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 40));
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a1 + 32));
  if ( *(_QWORD *)(a1 + 24) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 24));
  if ( *(_QWORD *)(a1 + 16) )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)(a1 + 16));
  v2 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
