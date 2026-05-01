/*
 * XREFs of ?CreateCoverWindow@TabletModeCoverWindow@@AEAAJXZ @ 0x180200714
 * Callers:
 *     ?RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z @ 0x180070EAC (-RuntimeClassInitialize@TabletModeCoverWindow@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModeCoverWindow::CreateCoverWindow(HWND *this)
{
  const char *v2; // r9
  HWND v3; // rcx
  WNDCLASSW WndClass; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.cbWndExtra = 8;
  WndClass.lpfnWndProc = (WNDPROC)CWRLImpWndProc<TabletModeCoverWindow>::s_WndProcBase;
  WndClass.hInstance = &_ImageBase;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.lpszClassName = L"TabletModeCoverWindow";
  RegisterClassW(&WndClass);
  CreateWindowExW(0x8200080u, L"TabletModeCoverWindow", 0LL, 0x80000000, 0, 0, 0, 0, 0LL, 0LL, &_ImageBase, this);
  v3 = this[13];
  if ( !v3 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x119,
             (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodecoverwindow.cpp",
             v2);
  SetPropW(v3, L"NonRudeHWND", HANDLE_FLAG_INHERIT);
  (*(void (__fastcall **)(HWND, HWND, __int64))(*(_QWORD *)this[24] + 24LL))(this[24], this[13], 1LL);
  return 0LL;
}
