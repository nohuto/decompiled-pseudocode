/*
 * XREFs of ?s_WndProc@CDragVisual@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1805464D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180545E58 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 */

LRESULT __fastcall CDragVisual::s_WndProc(HWND hWnd, UINT a2, void *a3, LONG_PTR *lParam)
{
  CDragVisual *WindowLongPtrW; // rsi
  LONG_PTR v9; // rbx

  WindowLongPtrW = (CDragVisual *)GetWindowLongPtrW(hWnd, 0);
  if ( a2 == 129 )
  {
    v9 = *lParam;
    SetWindowLongPtrW(hWnd, 0, *lParam);
    *(_QWORD *)(v9 + 152) = hWnd;
    goto LABEL_3;
  }
  if ( a2 != 130 )
  {
LABEL_3:
    if ( WindowLongPtrW )
      return CDragVisual::_WndProc(WindowLongPtrW, hWnd, a2, a3, (LPARAM)lParam);
    return DefWindowProcW(hWnd, a2, (WPARAM)a3, (LPARAM)lParam);
  }
  SetWindowLongPtrW(hWnd, 0, 0LL);
  if ( WindowLongPtrW )
  {
    *((_QWORD *)WindowLongPtrW + 19) = 0LL;
    return CDragVisual::_WndProc(WindowLongPtrW, hWnd, a2, a3, (LPARAM)lParam);
  }
  return DefWindowProcW(hWnd, a2, (WPARAM)a3, (LPARAM)lParam);
}
