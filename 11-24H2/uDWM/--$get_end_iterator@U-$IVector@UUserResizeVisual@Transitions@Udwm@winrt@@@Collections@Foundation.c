/*
 * XREFs of ??$get_end_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@impl@winrt@@YA?AU?$fast_iterator@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@@01@AEBU?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@1@@Z @ 0x1800E4A54
 * Callers:
 *     ?end@?$consume_Windows_Foundation_Collections_IIterable@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800E61A0 (-end@-$consume_Windows_Foundation_Collections_IIterable@U-$IVector@UUserResizeVisual@Transitions.c)
 * Callees:
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UUserResizeVisual@Transitions@Udwm@winrt@@@Collections@Foundation@Windows@winrt@@UUserResizeVisual@Transitions@Udwm@5@@impl@winrt@@QEBA@XZ @ 0x1800E5718 (-Size@-$consume_Windows_Foundation_Collections_IVector@U-$IVector@UUserResizeVisual@Transitions@.c)
 */

__int64 __fastcall winrt::impl::get_end_iterator<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,0>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Udwm::Transitions::UserResizeVisual>,winrt::Udwm::Transitions::UserResizeVisual>::Size(a2);
  result = a1;
  *(_QWORD *)a1 = a2;
  return result;
}
