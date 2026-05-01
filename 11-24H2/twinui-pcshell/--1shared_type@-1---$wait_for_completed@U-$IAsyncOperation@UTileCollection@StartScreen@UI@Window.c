/*
 * XREFs of ??1shared_type@?1???$wait_for_completed@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@2@I@Z@QEAA@XZ @ 0x1802B2E40
 * Callers:
 *     _winrt::impl::wait_for_completed_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Storage::Streams::IBuffer_unsigned_int____::_1_::dtor$1 @ 0x1806D0194 (_winrt--impl--wait_for_completed_winrt--Windows--Foundation--IAsyncOperationWithProgress_winrt--.c)
 * Callees:
 *     WINRT_IMPL_CloseHandle @ 0x1802D2A98 (WINRT_IMPL_CloseHandle.c)
 */

BOOL __fastcall `winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>>'::`2'::shared_type::~shared_type(
        void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = WINRT_IMPL_CloseHandle(v2);
    *a1 = 0LL;
  }
  return result;
}
