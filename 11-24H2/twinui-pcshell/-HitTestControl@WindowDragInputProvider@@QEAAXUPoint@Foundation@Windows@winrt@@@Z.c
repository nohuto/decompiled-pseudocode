/*
 * XREFs of ?HitTestControl@WindowDragInputProvider@@QEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x1802736A4
 * Callers:
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180272C50 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 *     ?OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@_N@Z @ 0x1805B3700 (-OnFlyoutInstanceShown@SnapFlyoutHost@@AEAAXAEBUSnapFlyoutInstance@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?GetHitTestResultForPoint@WindowDragInputProvider@@AEAA?AUIInspectable@Foundation@Windows@winrt@@AEBUPoint@345@@Z @ 0x1802014E0 (-GetHitTestResultForPoint@WindowDragInputProvider@@AEAA-AUIInspectable@Foundation@Windows@winrt@.c)
 *     ??$SnapBar_HitTestSystemArrangementArea@AEAMAEAM_N@WindowDragInputProviderTelemetry@@SAXAEAM0$$QEA_N@Z @ 0x1802C67FC (--$SnapBar_HitTestSystemArrangementArea@AEAMAEAM_N@WindowDragInputProviderTelemetry@@SAXAEAM0$$Q.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowDragInputProvider::HitTestControl(__int64 *a1, __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, _QWORD, _QWORD); // rbx
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-30h] BYREF
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // [rsp+28h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-20h] BYREF
  __int128 v9; // [rsp+38h] [rbp-18h]
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF

  v6 = a2;
  WindowDragInputProvider::GetHitTestResultForPoint(
    (WindowDragInputProvider *)a1,
    (const struct winrt::Windows::Foundation::Point *)&v7);
  v3 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v7;
  if ( v7 )
  {
    v11 = 0LL;
    v8 = 0;
    v9 = 0LL;
    v4 = (**v7)(v7, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>, &v11);
    winrt::check_hresult(&v10, v4, &v8);
    v10 = v11;
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(a1 + 7, &v10);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v10);
    LOBYTE(v10) = 1;
  }
  else
  {
    LOBYTE(v10) = 0;
  }
  result = WindowDragInputProviderTelemetry::SnapBar_HitTestSystemArrangementArea<float &,float &,bool>(
             &v6,
             (char *)&v6 + 4,
             &v10);
  if ( v3 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v7);
  return result;
}
