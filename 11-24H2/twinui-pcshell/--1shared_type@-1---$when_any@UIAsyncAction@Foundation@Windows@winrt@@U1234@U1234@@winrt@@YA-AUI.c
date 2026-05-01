/*
 * XREFs of ??1shared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@winrt@@YA?AUIAsyncAction@Foundation@Windows@1@AEBU2341@00@Z@QEAA@XZ @ 0x1801EB678
 * Callers:
 *     ??1?$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@?1???$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@4@YA?AUIAsyncAction@234@AEBU6234@00@Z@@impl@winrt@@QEAA@XZ @ 0x180102D2C (--1-$implements_delegate@UAsyncActionCompletedHandler@Foundation@Windows@winrt@@Ushared_type@-1-.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x18026D450 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storag.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180345FF0 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windows--Foundatio.c)
 *     winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180346290 (winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windo_ea_180346290.c)
 *     _winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction__::_1_::dtor$2 @ 0x1806E1F80 (_winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncAction_winrt--Windows--Foundati.c)
 *     _winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::dtor$2 @ 0x1806F448F (_winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Stora.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     WINRT_IMPL_CloseHandle @ 0x1802D2A98 (WINRT_IMPL_CloseHandle.c)
 */

void __fastcall `winrt::when_any<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction>'::`2'::shared_type::~shared_type(
        HANDLE *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 2));
  if ( *a1 )
  {
    WINRT_IMPL_CloseHandle(*a1);
    *a1 = 0LL;
  }
}
