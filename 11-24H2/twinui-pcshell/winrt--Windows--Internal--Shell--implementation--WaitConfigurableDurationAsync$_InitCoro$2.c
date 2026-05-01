/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_InitCoro$2 @ 0x180283478
 * Callers:
 *     ?WaitConfigurableDurationAsync@implementation@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@45@PEBGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z @ 0x180217CA8 (-WaitConfigurableDurationAsync@implementation@Shell@Internal@Windows@winrt@@YA-AUIAsyncAction@Fo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1 @ 0x1802835B0 (winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 v7; // rdi

  *(_QWORD *)(a2 + 161) = a4;
  *(_QWORD *)(a2 + 169) = *a5;
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  v7 = a2 - 112;
  memset_0((void *)(a2 - 112), 0, 0x68uLL);
  *(_QWORD *)(v7 + 16) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction>::`vftable';
  *(_QWORD *)(v7 + 24) = &winrt::impl::produce<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncInfo>::`vftable';
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)(v7 + 8) = 1LL;
  *(_QWORD *)(v7 + 32) = 0LL;
  *(_QWORD *)(v7 + 40) = 0LL;
  *(_BYTE *)(v7 + 48) = 0;
  *(_QWORD *)v7 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *(_QWORD *)(v7 + 56) = 0LL;
  *(_QWORD *)(v7 + 64) = 0LL;
  __ExceptionPtrCreate((void *)(v7 + 56));
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  *(_DWORD *)(v7 + 96) = 0;
  *(_BYTE *)(v7 + 100) = 0;
  *(_QWORD *)v7 = &winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,unsigned short const *,std::chrono::duration<__int64,std::ratio<1,1000>>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::`vftable';
  *a3 = v7 + 16;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a3);
  a5 = 0LL;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&a5);
  *(_BYTE *)(a2 + 160) = 0;
  return winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync__ResumeCoro_1(a2);
}
