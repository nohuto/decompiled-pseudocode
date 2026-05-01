/*
 * XREFs of ??$?0URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@P8012345@EAAXAEBUIInspectable@Foundation@45@AEBI@Z@?$EventHandler@I@Foundation@Windows@winrt@@QEAA@$$QEAU?$weak_ref@URemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@@3@$$QEAP8RemoteSessionWindowManager@implementation@Shell@Internal@23@EAAXAEBUIInspectable@123@AEBI@Z@Z @ 0x1806559E8
 * Callers:
 *     ??0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV?$shared_ptr@UProviderActivator@implementation@Shell@Internal@Windows@winrt@@@std@@AEBV?$shared_ptr@UConnectionHandler@implementation@Shell@Internal@Windows@winrt@@@7@@Z @ 0x1802AC14C (--0RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAA@AEBV-$shared_ptr.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::EventHandler<unsigned int>::EventHandler<unsigned int>(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int128 v9; // [rsp+28h] [rbp-20h]
  char *v10; // [rsp+50h] [rbp+8h]

  v4 = *a3;
  v5 = *a2;
  *a2 = 0LL;
  v8 = v5;
  v9 = v4;
  v10 = (char *)operator new(0x28uLL);
  *((_DWORD *)v10 + 2) = 1;
  v6 = v8;
  v8 = 0LL;
  *((_QWORD *)v10 + 2) = v6;
  *(_OWORD *)(v10 + 24) = v9;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v10 = &winrt::impl::delegate<winrt::Windows::Foundation::EventHandler<unsigned int>,_lambda_9c0fcb81df45f06ec1f31351c33e1df8_>::`vftable';
  *a1 = v10;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return a1;
}
