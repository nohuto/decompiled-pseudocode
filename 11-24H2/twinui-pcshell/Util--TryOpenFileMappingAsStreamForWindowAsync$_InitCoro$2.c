/*
 * XREFs of Util::TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2 @ 0x180651730
 * Callers:
 *     ?TryOpenFileMappingAsStreamForWindowAsync@Util@@YA?AU?$IAsyncOperation@UIRandomAccessStream@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@_JUhstring@5@@Z @ 0x180651EBC (-TryOpenFileMappingAsStreamForWindowAsync@Util@@YA-AU-$IAsyncOperation@UIRandomAccessStream@Stre.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1 @ 0x180651870 (Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Util::TryOpenFileMappingAsStreamForWindowAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 *a5)
{
  __int64 v7; // r9
  __int64 v8; // rdi

  *(_QWORD *)(a2 + 465) = a4;
  v7 = *a5;
  *a5 = 0LL;
  *(_QWORD *)(a2 + 473) = v7;
  *(_QWORD *)a2 = Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v8 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x70uLL);
  *(_QWORD *)(v8 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>>::`vftable';
  *(_QWORD *)(v8 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v8 + 8) = 1LL;
  *(_QWORD *)(v8 + 32) = 0LL;
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_BYTE *)(v8 + 48) = 0;
  *(_QWORD *)v8 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,void>::`vftable';
  *(_QWORD *)(v8 + 56) = 0LL;
  *(_QWORD *)(v8 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v8 + 56));
  *(_QWORD *)(v8 + 72) = 0LL;
  *(_QWORD *)(v8 + 80) = 0LL;
  *(_QWORD *)(v8 + 88) = 0LL;
  *(_DWORD *)(v8 + 96) = 0;
  *(_BYTE *)(v8 + 100) = 0;
  *(_QWORD *)v8 = &std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStream>,__int64,winrt::hstring>::promise_type::`vftable';
  *(_QWORD *)(v8 + 104) = 0LL;
  *a3 = v8 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a5 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a5);
  *(_BYTE *)(a2 + 464) = 0;
  return Util::TryOpenFileMappingAsStreamForWindowAsync__ResumeCoro_1(a2);
}
