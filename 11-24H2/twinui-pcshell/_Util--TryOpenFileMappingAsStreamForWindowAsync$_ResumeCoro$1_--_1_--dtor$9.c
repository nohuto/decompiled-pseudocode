/*
 * XREFs of _Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1_::_1_::dtor$9 @ 0x180702554
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA@XZ @ 0x18032D074 (--1-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Window.c)
 */

__int64 __fastcall Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 288) = *(_QWORD *)(a2 + 368) + 264LL;
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>::~await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,1>(*(_QWORD *)(a2 + 288));
}
