/*
 * XREFs of winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncInfo_::subtract_final_reference @ 0x180052354
 * Callers:
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncInfo_::_root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncInfo_ @ 0x180052308 (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Foundation--IAs.c)
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncInfo_::subtract_reference @ 0x18005232C (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_18005232C.c)
 * Callees:
 *     ?Release@?$weak_ref@$00$00@impl@winrt@@UEAAIXZ @ 0x180102C90 (-Release@-$weak_ref@$00$00@impl@winrt@@UEAAIXZ.c)
 */

__int64 __fastcall winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___lambda_97aaaf7ef36fcdfc72e8e00c3e4f3247__const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncInfo_::subtract_final_reference(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt
  unsigned __int32 v5; // ebx

  v1 = *(_QWORD *)(a1 + 8);
  while ( v1 >= 0 )
  {
    v2 = v1 - 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v1 - 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  v5 = _InterlockedDecrement((volatile signed __int32 *)(2 * v1 + 24));
  if ( !v5 )
    winrt::impl::weak_ref<1,1>::Release((void *)(2 * v1));
  return v5;
}
