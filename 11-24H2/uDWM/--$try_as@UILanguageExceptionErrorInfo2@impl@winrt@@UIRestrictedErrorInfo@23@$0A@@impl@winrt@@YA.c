/*
 * XREFs of ??$try_as@UILanguageExceptionErrorInfo2@impl@winrt@@UIRestrictedErrorInfo@23@$0A@@impl@winrt@@YA?AU?$com_ptr@UILanguageExceptionErrorInfo2@impl@winrt@@@1@PEAUIRestrictedErrorInfo@01@@Z @ 0x1800E00E8
 * Callers:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@impl@1@@Z @ 0x1800E0268 (--0hresult_error@winrt@@QEAA@Uhresult@1@Utake_ownership_from_abi_t@1@AEBUslim_source_location@im.c)
 * Callees:
 *     ??0abi_guard@?$root_implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@QEAA@AEAUiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@3@@Z @ 0x18004C1BC (--0abi_guard@-$root_implements@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::try_as<winrt::impl::ILanguageExceptionErrorInfo2,winrt::impl::IRestrictedErrorInfo,0>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  void (__fastcall **v3)(_QWORD, void *, __int64 *); // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = *a2;
    v5 = 0LL;
    (*v3)(a2, &winrt::impl::guid_v<winrt::impl::ILanguageExceptionErrorInfo2>, &v5);
    winrt::impl::root_implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::abi_guard::abi_guard(
      a1,
      v5);
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
