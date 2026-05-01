/*
 * XREFs of ?query_interface@?$root_implements@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIAsyncInfo@678@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1806547A4
 * Callers:
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18064F230 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_ea_18064F230.c)
 *     ?QueryInterface@?$produce_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@4@@experimental@std@@UIAsyncInfo@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x18064F250 (-QueryInterface@-$produce_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_ea_18064F250.c)
 * Callees:
 *     ?AddRef@?$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt@@U13456@@impl@winrt@@QEAAIXZ @ 0x1801BC970 (-AddRef@-$root_implements@URemoteDesktopProviderInfo@implementation@Shell@Internal@Windows@winrt.c)
 */

__int64 __fastcall winrt::impl::root_implements<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,winrt::Windows::Foundation::IAsyncInfo>::query_interface(
        volatile signed __int64 *a1,
        _QWORD *a2,
        __int64 *a3)
{
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx

  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>>
    && a2[1] == 0xCC031638DB5DB281uLL )
  {
    v5 = (unsigned __int64)(a1 + 2);
LABEL_4:
    v6 = v5 & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64);
    goto LABEL_9;
  }
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::IAsyncInfo> && a2[1] == 0x46000000000000C0LL )
  {
    v5 = (unsigned __int64)(a1 + 3);
    goto LABEL_4;
  }
  v6 = 0LL;
LABEL_9:
  *a3 = v6;
  if ( !v6 )
    return winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteSystemStateChangedEventArgs,winrt::Windows::Internal::Shell::RemoteSystemStateChangedEventArgs>::query_interface_common(
             a1,
             a2,
             a3);
  winrt::impl::root_implements<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderInfo,winrt::Windows::Internal::Shell::RemoteDesktopProviderInfo>::AddRef((__int64)a1);
  return 0LL;
}
