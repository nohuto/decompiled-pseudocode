/*
 * XREFs of ?ReceivedHitTestResult@OnArrangementReset@WindowDragInputProviderTelemetry@@QEAAXAEBUWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18021415C
 * Callers:
 *     ?OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z @ 0x18027385C (-OnArrangementReset@WindowDragInputProvider@@AEAAXAEBUtagSHELL_WND_MGMT_SIMPLE_PAYLOAD@@@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C2740 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x1801EFFE8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@-$_tlgWri.c)
 *     ?WindowAction@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180240740 (-WindowAction@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@S.c)
 *     ?WindowPosition@?$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180241FCC (-WindowPosition@-$consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult@UIWindowDragHitTestResult.c)
 *     ?IsActive@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180273F08 (-IsActive@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow@UIXamlExplor.c)
 */

void __fastcall WindowDragInputProviderTelemetry::OnArrangementReset::ReceivedHitTestResult(
        WindowDragInputProviderTelemetry::OnArrangementReset *this,
        const struct winrt::WindowsUdk::UI::Shell::WindowDragHitTestResult *a2)
{
  const struct _tlgProvider_t *v4; // rbx
  _OWORD *v5; // rax
  const GUID *v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+80h] [rbp-80h] BYREF
  int v9; // [rsp+84h] [rbp-7Ch] BYREF
  int v10; // [rsp+88h] [rbp-78h] BYREF
  int v11; // [rsp+8Ch] [rbp-74h] BYREF
  int v12; // [rsp+90h] [rbp-70h] BYREF
  int v13; // [rsp+94h] [rbp-6Ch] BYREF
  int v14; // [rsp+98h] [rbp-68h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v16[16]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v18[16]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v19[16]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v20; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v21; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v22; // [rsp+108h] [rbp+8h] BYREF
  __int128 v23; // [rsp+118h] [rbp+18h] BYREF
  int IsActive; // [rsp+150h] [rbp+50h] BYREF
  int v25; // [rsp+160h] [rbp+60h] BYREF
  int v26; // [rsp+168h] [rbp+68h] BYREF

  v4 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    IsActive = (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindow<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindow>::IsActive(a2);
    v25 = winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowAction(a2);
    v26 = *(_DWORD *)(winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                        a2,
                        v16)
                    + 12);
    v8 = *(_DWORD *)(winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                       a2,
                       v17)
                   + 8);
    v9 = *(_DWORD *)(winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                       a2,
                       v18)
                   + 4);
    v10 = *(_DWORD *)winrt::impl::consume_WindowsUdk_UI_Shell_IWindowDragHitTestResult<winrt::WindowsUdk::UI::Shell::IWindowDragHitTestResult>::WindowPosition(
                       a2,
                       v19);
    v11 = *((_DWORD *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                        (__int64 *)a2,
                        &v20)
          + 3);
    v12 = *((_DWORD *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                        (__int64 *)a2,
                        &v21)
          + 2);
    v13 = *((_DWORD *)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
                        (__int64 *)a2,
                        &v22)
          + 1);
    v5 = winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
           (__int64 *)a2,
           &v23);
    v6 = (const GUID *)(*((_QWORD *)this + 34) + 8LL);
    v14 = *(_DWORD *)v5;
    v15 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)v4,
      byte_1808166D7,
      v6,
      v7,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&IsActive);
  }
}
