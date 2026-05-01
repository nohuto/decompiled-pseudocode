/*
 * XREFs of ??$?0VSnapFlyoutHost@@P80@EAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@Z@SnapFlyoutInstanceHandler@SnapComponent@Shell@Internal@Windows@winrt@@QEAA@$$QEAU?$weak_ref@VSnapFlyoutHost@@@5@$$QEAP8SnapFlyoutHost@@EAAXAEBUSnapFlyoutInstance@12345@@Z@Z @ 0x1805B0694
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x1805B1950 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler::SnapFlyoutInstanceHandler(
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
  *(_QWORD *)v10 = &winrt::impl::delegate<winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstanceHandler,_lambda_3e333fce58f1b64b3b5408f1e7ea980e_>::`vftable';
  *a1 = v10;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v8);
  return a1;
}
