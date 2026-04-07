/*
 * XREFs of ?GetRuntimeClassName@?$implements@Uiterator@?$iterable_base@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUserResizeVisual@Transitions@Udwm@3@Ucollection_version@23@@winrt@@U?$IIterator@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@winrt@@EEBA?AUhstring@2@XZ @ 0x1800E9500
 * Callers:
 *     <none>
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800962EC (--0hstring@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 */

winrt::hstring *__fastcall winrt::implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Udwm::Transitions::UserResizeVisual,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Udwm::Transitions::UserResizeVisual>>::GetRuntimeClassName(
        __int64 a1,
        winrt::hstring *a2)
{
  _QWORD v4[4]; // [rsp+28h] [rbp-20h] BYREF

  v4[1] = 77LL;
  v4[0] = L"Windows.Foundation.Collections.IIterator`1<Udwm.Transitions.UserResizeVisual>";
  winrt::hstring::hstring(a2, (__int64)v4);
  return a2;
}
