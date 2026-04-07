/*
 * XREFs of ?Current@iterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@QEBA?AUUserResizeVisual@Transitions@Udwm@3@XZ @ 0x1800E8CE8
 * Callers:
 *     ?get_Current@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800EACB0 (-get_Current@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UUserResizeVisual@Transitions@Ud.c)
 * Callees:
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1800DEF50 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E882C (--0hresult_out_of_bounds@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x1800EABAC (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 *     _CxxThrowException_0 @ 0x1800F6360 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator::Current(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rcx
  const struct winrt::impl::slim_source_location *v7; // rax
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-40h] BYREF
  _BYTE v9[40]; // [rsp+40h] [rbp-28h] BYREF

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 3),
    (const struct winrt::impl::collection_version *)(a1[4] + 40LL));
  v4 = (__int64 *)a1[5];
  if ( v4 == (__int64 *)a1[6] )
  {
    v7 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current((__int64)v9);
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject, v7);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  v5 = *v4;
  *a2 = v5;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return a2;
}
