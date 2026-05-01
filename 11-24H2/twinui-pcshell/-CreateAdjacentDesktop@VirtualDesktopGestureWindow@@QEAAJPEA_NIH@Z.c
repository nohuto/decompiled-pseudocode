/*
 * XREFs of ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@QEAAJPEA_NIH@Z @ 0x18055F5EC
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x18055E710 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z @ 0x18055E7A4 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@IEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x1805603B0 (-GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ.c)
 */

__int64 __fastcall VirtualDesktopGestureWindow::CreateAdjacentDesktop(
        VirtualDesktopGestureWindow *this,
        bool *a2,
        unsigned int a3,
        int a4)
{
  int v8; // ebx
  float v9; // xmm1_4
  LONG v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  int v13; // ecx
  struct tagRECT v15; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)this + 57) == 2 )
  {
    v8 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    v15.top = 0;
    v9 = (float)((float)(int)VirtualDesktopGestureWindow::GetScaleFactor(this) * 28.0) + (float)v8;
    v10 = a4 * (int)v9 + *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    v15.left = a4 * (int)v9;
    v15.right = v10;
    v15.bottom = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    v11 = VirtualDesktopGestureWindow::CreateAdjacentDesktop(this, a2, a3, &v15);
    if ( v11 < 0 )
    {
      v12 = 559LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v11);
    }
  }
  else
  {
    v13 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    v15.top = 0;
    v15.left = a4 * v13;
    v15.right = v13 + a4 * v13;
    v15.bottom = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    v11 = VirtualDesktopGestureWindow::CreateAdjacentDesktop(this, a2, a3, &v15);
    if ( v11 < 0 )
    {
      v12 = 563LL;
      goto LABEL_6;
    }
  }
  return (unsigned int)v11;
}
