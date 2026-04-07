/*
 * XREFs of ?get_Size@?$produce@U?$vector_impl@UUserResizeVisual@Transitions@Udwm@winrt@@V?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAI@Z @ 0x180103CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Udwm::Transitions::UserResizeVisual,std::vector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // r9

  v2 = (a1 - 16) & -(__int64)(a1 != 0);
  *a2 = (__int64)(*(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x38) - *(_QWORD *)((v2 & -(__int64)(v2 != -40)) + 0x30)) >> 3;
  return 0LL;
}
