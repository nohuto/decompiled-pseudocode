/*
 * XREFs of ?s_SpecialMsgWndProc@CIAMSpecialWindowBase@@CA_JPEAUHWND__@@I_K_J@Z @ 0x18014E1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

LRESULT __fastcall CIAMSpecialWindowBase::s_SpecialMsgWndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  LONG_PTR WindowLongPtrW; // rbx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rcx
  HWND v12; // rcx
  char v14; // [rsp+58h] [rbp+10h] BYREF

  WindowLongPtrW = GetWindowLongPtrW(hWnd, 0);
  if ( Msg == 129 )
  {
    SetWindowLongPtrW(hWnd, 0, *(_QWORD *)lParam);
  }
  else if ( Msg == 2 )
  {
    SetWindowLongPtrW(hWnd, 0, 0LL);
    goto LABEL_20;
  }
  if ( !WindowLongPtrW )
  {
LABEL_20:
    v12 = hWnd;
    return DefWindowProcW(v12, Msg, wParam, lParam);
  }
  v9 = *(_QWORD *)WindowLongPtrW;
  v14 = 0;
  v10 = (*(__int64 (__fastcall **)(LONG_PTR, _QWORD, WPARAM, LPARAM, char *))(v9 + 48))(
          WindowLongPtrW,
          Msg,
          wParam,
          lParam,
          &v14);
  if ( v14 )
    return v10;
  if ( Msg != 6 )
  {
    if ( Msg != 16 )
    {
      if ( Msg != 70 )
      {
LABEL_8:
        v11 = *(_QWORD *)(WindowLongPtrW + 32);
        if ( !v11 )
        {
LABEL_11:
          v12 = *(HWND *)(WindowLongPtrW + 16);
          return DefWindowProcW(v12, Msg, wParam, lParam);
        }
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, WPARAM, LPARAM, char *))(*(_QWORD *)v11 + 24LL))(
                v11,
                Msg,
                wParam,
                lParam,
                &v14);
        goto LABEL_10;
      }
      *(_DWORD *)(lParam + 24) = 0;
      *(_DWORD *)(lParam + 28) = 0;
    }
    return 0LL;
  }
  if ( !*(_QWORD *)(WindowLongPtrW + 40) )
    goto LABEL_8;
  if ( wParam != 1 )
    goto LABEL_11;
  if ( *(_DWORD *)(WindowLongPtrW + 24) != 12 || *(HWND *)(WindowLongPtrW + 16) == GetForegroundWindow() )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(WindowLongPtrW + 40) + 40LL))(
      *(_QWORD *)(WindowLongPtrW + 40),
      19LL,
      *(_QWORD *)(WindowLongPtrW + 16));
LABEL_10:
  if ( !v14 )
    goto LABEL_11;
  return v10;
}
