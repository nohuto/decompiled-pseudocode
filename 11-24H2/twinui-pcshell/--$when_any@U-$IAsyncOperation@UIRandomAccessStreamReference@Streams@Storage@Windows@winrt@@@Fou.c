/*
 * XREFs of ??$when_any@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@U1234@@winrt@@YA?AU?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@0@AEBU1230@0@Z @ 0x1801F43AC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowIconAsync$_ResumeCoro$1 @ 0x18026E2D0 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowIconAsync$_ResumeCoro$.c)
 * Callees:
 *     winrt::when_any$_InitCoro$2_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x18026D31C (winrt--when_any$_InitCoro$2_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storage-.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall winrt::when_any<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>(
        __int64 a1,
        int a2,
        __int64 a3)
{
  unsigned int v6; // eax
  int v8; // [rsp+1B0h] [rbp+8h] BYREF

  v6 = (unsigned int)operator new(0x170uLL);
  v8 = 0;
  winrt::when_any__InitCoro_2_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___(
    (unsigned int)&v8,
    v6 + 112,
    a1,
    a2,
    a3);
  return a1;
}
