/*
 * XREFs of ?IsActive@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180273F08
 * Callers:
 *     ?ReceivedHitTestResult@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18021415C (-ReceivedHitTestResult@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUWindowDragH.c)
 *     ?OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x1802739C8 (-OnGetArrangementRects@WindowDragInputProvider@@AEAAXAEAU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?VirtualDesktopSwitcherHasFocus@VirtualDesktopSwitcherHost@@UEAA_NXZ @ 0x1806ADA90 (-VirtualDesktopSwitcherHasFocus@VirtualDesktopSwitcherHost@@UEAA_NXZ.c)
 *     ?IsActive@TaskViewFrame@@UEAA_NXZ @ 0x1806BB740 (-IsActive@TaskViewFrame@@UEAA_NXZ.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsActive(
        __int64 *a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  char v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *a1;
  v4 = 0;
  v6 = 0;
  v5 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 112LL))(v1, &v6);
  winrt::check_hresult(&v7, v2, &v4);
  return v6;
}
