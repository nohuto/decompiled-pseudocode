/*
 * XREFs of ?s_WndProcBase@?$CWRLImpWndProc@VCLauncherTipContextMenu@@@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1806038C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ @ 0x1801E2FE4 (-InternalAddRef@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEAAKXZ @ 0x1802CA810 (-InternalRelease@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
LRESULT __fastcall CWRLImpWndProc<CLauncherTipContextMenu>::s_WndProcBase(
        HWND hWnd,
        UINT Msg,
        WPARAM wParam,
        LONG_PTR *lParam)
{
  LONG_PTR v8; // rdi
  volatile int *WindowLongPtrW; // rax
  volatile int *v11; // rdx
  volatile int *v12; // rdi
  __int64 v13; // rsi
  volatile int *v14[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( Msg == 129 )
  {
    v8 = *lParam;
    if ( *lParam )
    {
      *(_QWORD *)(v8 + 128) = hWnd;
      SetWindowLongPtrW(hWnd, 0, v8);
      return (**(__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))(v8 + 120))(
               v8 + 120,
               hWnd,
               Msg,
               wParam,
               lParam);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WindowLongPtrW = (volatile int *)GetWindowLongPtrW(hWnd, 0);
    v12 = WindowLongPtrW;
    if ( !WindowLongPtrW )
      return DefWindowProcW(hWnd, Msg, wParam, (LPARAM)lParam);
    v14[0] = WindowLongPtrW;
    Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalAddRef((__int64 *)v14, v11);
    v13 = (**((__int64 (__fastcall ***)(__int64, HWND, _QWORD, WPARAM, LONG_PTR *))v12 + 15))(
            (__int64)(v12 + 30),
            hWnd,
            Msg,
            wParam,
            lParam);
    if ( Msg == 130 )
    {
      SetWindowLongPtrW(hWnd, 0, 0LL);
      *((_QWORD *)v12 + 16) = 0LL;
    }
    Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalRelease(v14);
    return v13;
  }
}
