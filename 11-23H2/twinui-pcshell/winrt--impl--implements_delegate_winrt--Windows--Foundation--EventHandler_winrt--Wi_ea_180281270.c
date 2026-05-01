/*
 * XREFs of winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::Release @ 0x180281270
 * Callers:
 *     <none>
 * Callees:
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800D8E58 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::_implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___ @ 0x180280E74 (winrt--impl--implements_delegate_winrt--Windows--Foundation--EventHandler_winrt--Wi_ea_180280E74.c)
 */

__int64 __fastcall winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::Release(
        volatile signed __int32 *a1)
{
  unsigned int v2; // edi

  v2 = winrt::impl::atomic_ref_count::operator--(a1 + 10);
  if ( !v2 && a1 )
  {
    winrt::impl::implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___::_implements_delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_ad045d4b5c3bf658d2720d8e49b9b5c2___((__int64)a1);
    operator delete((void *)a1);
  }
  return v2;
}
