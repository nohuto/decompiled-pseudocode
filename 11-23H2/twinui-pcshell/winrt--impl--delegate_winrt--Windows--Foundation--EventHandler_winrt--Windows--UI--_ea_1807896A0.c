/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_6f20433e237056822ca4350483f9bb11___::Invoke @ 0x1807896A0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6f20433e237056822ca4350483f9bb11_::operator() @ 0x180789344 (_lambda_6f20433e237056822ca4350483f9bb11_--operator().c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::UI::Xaml::Media::RenderedEventArgs___lambda_6f20433e237056822ca4350483f9bb11___::Invoke(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 8;
  try
  {
    lambda_6f20433e237056822ca4350483f9bb11_::operator()(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v3);
  }
  return result;
}
