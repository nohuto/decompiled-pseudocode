/*
 * XREFs of ?RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@@Z @ 0x180531338
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeInputHandler@@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Z @ 0x180531008 (--$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPE.c)
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?Shutdown@TabletModeInputHandler@@UEAAXXZ @ 0x1805314A0 (-Shutdown@TabletModeInputHandler@@UEAAXXZ.c)
 *     ?TakeForeground@TabletModeInputHandler@@UEAAJXZ @ 0x1805315E0 (-TakeForeground@TabletModeInputHandler@@UEAAJXZ.c)
 */

__int64 __fastcall TabletModeInputHandler::RuntimeClassInitialize(__int64 a1, int a2, __int64 a3)
{
  const char *v5; // r9
  WNDCLASSEXW v7; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *(_DWORD *)(a1 + 40) = a2;
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 32), a3);
  v7.cbSize = 80;
  memset_0(&v7.style, 0, 0x4CuLL);
  v7.cbWndExtra = 8;
  v7.lpfnWndProc = (WNDPROC)CWRLImpWndProc<TabletModeInputHandler>::s_WndProcBase;
  v7.hInstance = &_ImageBase;
  v7.lpszClassName = L"TabletModeInputHandler";
  RegisterClassExW(&v7);
  CreateWindowExW(
    0x8200000u,
    L"TabletModeInputHandler",
    0LL,
    0x80000000,
    0,
    0,
    0,
    0,
    HWND_MESSAGE,
    0LL,
    &_ImageBase,
    (LPVOID)a1);
  if ( !*(_QWORD *)(a1 + 24) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x59,
             (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeinputhandler.cpp",
             v5);
  if ( a2 == 2 )
    return 0LL;
  if ( (int)TabletModeInputHandler::TakeForeground((TabletModeInputHandler *)a1) >= 0 )
  {
    if ( *(_DWORD *)(a1 + 40) )
      SetCapture(*(HWND *)(a1 + 24));
    return 0LL;
  }
  TabletModeInputHandler::Shutdown((TabletModeInputHandler *)a1);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6C,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeinputhandler.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
