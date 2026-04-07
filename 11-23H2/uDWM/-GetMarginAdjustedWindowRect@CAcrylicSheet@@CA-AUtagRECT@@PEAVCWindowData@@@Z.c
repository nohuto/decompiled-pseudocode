/*
 * XREFs of ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x1800A2F50
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BAF0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z @ 0x1800A280C (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKM@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z @ 0x1800A28D4 (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z.c)
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x1800A2990 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?GetBorderRect@CTopLevelWindow@@QEBA?AUtagRECT@@_N@Z @ 0x1800353C0 (-GetBorderRect@CTopLevelWindow@@QEBA-AUtagRECT@@_N@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall CAcrylicSheet::GetMarginAdjustedWindowRect(
        struct tagRECT *__return_ptr retstr,
        struct CWindowData *a2)
{
  CTopLevelWindow *v3; // rcx
  struct tagRECT *BorderRect; // rax
  struct tagRECT v5; // xmm0
  struct tagRECT *result; // rax
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  v3 = (CTopLevelWindow *)*((_QWORD *)a2 + 55);
  if ( v3 )
  {
    BorderRect = CTopLevelWindow::GetBorderRect(v3, &v7, 1);
  }
  else
  {
    BorderRect = &v7;
    v7 = (struct tagRECT)*((_OWORD *)a2 + 3);
  }
  v5 = *BorderRect;
  result = retstr;
  *retstr = v5;
  return result;
}
