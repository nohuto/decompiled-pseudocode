/*
 * XREFs of winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_5609f70bbd1d7f57313a33137ea4cdfa___ @ 0x180554390
 * Callers:
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1805555C8 (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801453A8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs_::TypedEventHandler_winrt::Windows::Foundation::IInspectable_winrt::Windows::UI::Composition::CompositionBatchCompletedEventArgs___lambda_5609f70bbd1d7f57313a33137ea4cdfa___(
        _QWORD *a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v4; // rcx
  _QWORD *v6; // [rsp+38h] [rbp+10h]

  v6 = operator new(0x20uLL);
  v6[1] = 0LL;
  v6[2] = 0LL;
  v6[1] = *a2;
  v6[2] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 6) = 1;
  *v6 = off_1807C70D0;
  *a1 = v6;
  v4 = (std::_Ref_count_base *)a2[1];
  if ( v4 )
    std::_Ref_count_base::_Decwref(v4);
  return a1;
}
