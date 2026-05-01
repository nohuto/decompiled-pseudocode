/*
 * XREFs of ?wndProc@CAppThumbnailWindow@@IEAA_JPEAUHWND__@@I_K_J@Z @ 0x1804AC5A4
 * Callers:
 *     ?s_WndProc@CAppThumbnailWindow@@SA_JPEAUHWND__@@I_K_J@Z @ 0x1804AC460 (-s_WndProc@CAppThumbnailWindow@@SA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

LRESULT __fastcall CAppThumbnailWindow::wndProc(CAppThumbnailWindow *this, HWND a2, __int64 a3, WPARAM a4, LPARAM a5)
{
  UINT v6; // ebx
  __int64 v8; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v6 = a3;
  if ( (_DWORD)a3 == 1 )
  {
    v8 = *((_QWORD *)this + 20);
    v10[1] = &v11;
    v11 = 1;
    v10[0] = 13LL;
    v10[2] = 4LL;
    SetWindowCompositionAttribute(v8, v10, a3, a4);
  }
  return DefWindowProcW(a2, v6, a4, a5);
}
