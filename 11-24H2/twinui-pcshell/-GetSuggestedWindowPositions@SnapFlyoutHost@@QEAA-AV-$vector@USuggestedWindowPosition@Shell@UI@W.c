/*
 * XREFs of ?GetSuggestedWindowPositions@SnapFlyoutHost@@QEAA?AV?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@XZ @ 0x1805B3088
 * Callers:
 *     ?OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUWindowArrangementEventArgs@3456@@Z @ 0x18059F860 (-OnWindowArrangementEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagemen.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180240740 (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     CoTaskMemFree_0 @ 0x1802D2C01 (CoTaskMemFree_0.c)
 *     ??$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@AEAAPEAUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@QEAU23456@AEBU23456@@Z @ 0x1805B0B6C (--$_Emplace_reallocate@AEBUSuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@-$vector@USuggest.c)
 *     ?SuggestedWindowPositions@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1805B4498 (-SuggestedWindowPositions@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2@UWindowDragHit.c)
 *     ?LastHitTestResult@WindowDragInputProvider@@QEBA?AUWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@XZ @ 0x1805BEBA0 (-LastHitTestResult@WindowDragInputProvider@@QEBA-AUWindowDragHitTestResult@Shell@UI@WindowsUdk@w.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall SnapFlyoutHost::GetSuggestedWindowPositions(__int64 a1, _QWORD *a2)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *v3; // rsi
  char *v4; // rbp
  __int64 *v5; // rbx
  __int64 *v6; // rdx
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *i; // rbx
  LPVOID pv; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp+10h]

  v12 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  WindowDragInputProvider::LastHitTestResult(*(_QWORD *)(a1 + 112), &v11);
  if ( v11
    && (unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction(&v11) == 1 )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult2<winrt::WindowsUdk::UI::Shell::WindowDragHitTestResult>::SuggestedWindowPositions(
      &v11,
      &pv);
    v3 = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)pv;
    v4 = (char *)pv + 8 * v10;
    v5 = (__int64 *)pv;
    if ( pv != v4 )
    {
      do
      {
        v6 = (__int64 *)a2[1];
        if ( v6 == (__int64 *)a2[2] )
        {
          std::vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::_Emplace_reallocate<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition const &>(
            (__int64)a2,
            v6,
            v5);
        }
        else
        {
          *v6 = *v5;
          Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(v6);
          a2[1] += 8LL;
        }
        ++v5;
      }
      while ( v5 != (__int64 *)v4 );
    }
    if ( v3 )
    {
      for ( i = v3;
            i != (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v4;
            i = (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)((char *)i + 8) )
      {
        winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension(i);
      }
      CoTaskMemFree_0(v3);
    }
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v11);
  return a2;
}
