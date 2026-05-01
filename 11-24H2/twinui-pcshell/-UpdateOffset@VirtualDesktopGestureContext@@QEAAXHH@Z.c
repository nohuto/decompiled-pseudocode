/*
 * XREFs of ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x18026BCE0
 * Callers:
 *     ?ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x180239090 (-ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?ContinueTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18055E6C0 (-ContinueTouchSwipe@VirtualDesktopGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureWindow@@QEAAXM@Z @ 0x1802B6278 (-UpdateOffset@VirtualDesktopGestureWindow@@QEAAXM@Z.c)
 *     ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x1802C1500 (-AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x18055E710 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 *     ?RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z @ 0x1805620A0 (-RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z.c)
 */

void __fastcall VirtualDesktopGestureContext::UpdateOffset(VirtualDesktopGestureContext *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  int v6; // ebx
  int v7; // eax
  double v8; // xmm1_8
  int v9; // ecx
  bool v10; // zf
  bool v11; // sf
  int AdjacentDesktop; // eax
  int v13; // eax
  float v14; // xmm6_4
  float v15; // xmm0_4
  VirtualDesktopGestureWindow **v16; // rbx
  VirtualDesktopGestureWindow **v17; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = -a2;
  v4 = 0;
  if ( !*((_BYTE *)this + 66) )
    v3 = a2;
  v6 = -a3;
  if ( !*((_BYTE *)this + 66) )
    v6 = a3;
  VirtualDesktopGestureContext::AddVelocityToHistory(this, v6);
  v7 = -v6;
  if ( v6 > 0 )
    v7 = v6;
  v8 = (double)v7 * 1000.0 / (double)*((int *)this + 12);
  if ( v8 > 1.5 )
    v3 = (int)((double)v3 * 1.5 / v8);
  v9 = v3 + *((_DWORD *)this + 14);
  v10 = *((_DWORD *)this + 44) == 5;
  *((_DWORD *)this + 14) = v9;
  if ( !v10 )
    goto LABEL_30;
  v11 = v9 < 0;
  if ( v9 > 0 )
  {
    if ( !*((_BYTE *)this + 65) )
    {
      if ( !*((_BYTE *)this + 60) )
      {
        AdjacentDesktop = VirtualDesktopGestureContext::CreateAdjacentDesktop(this, (bool *)this + 62, 3u, -1);
        if ( AdjacentDesktop >= 0 )
          *((_BYTE *)this + 60) = 1;
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x58C,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)AdjacentDesktop);
      }
      if ( *((_BYTE *)this + 62) && (double)*((int *)this + 14) >= (double)*((int *)this + 12) * 0.1 )
      {
        VirtualDesktopGestureContext::RemoveAdjacentThumbnails(this, 4u);
        *((_BYTE *)this + 63) = 0;
LABEL_29:
        *((_BYTE *)this + 65) = 1;
        goto LABEL_30;
      }
      goto LABEL_30;
    }
    v11 = v9 < 0;
  }
  if ( v11 && !*((_BYTE *)this + 65) )
  {
    if ( !*((_BYTE *)this + 61) )
    {
      v13 = VirtualDesktopGestureContext::CreateAdjacentDesktop(this, (bool *)this + 63, 4u, 1);
      if ( v13 >= 0 )
        *((_BYTE *)this + 61) = 1;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x59D,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v13);
    }
    if ( *((_BYTE *)this + 63) && (double)-*((_DWORD *)this + 14) >= (double)*((int *)this + 12) * 0.1 )
    {
      VirtualDesktopGestureContext::RemoveAdjacentThumbnails(this, 3u);
      *((_BYTE *)this + 62) = 0;
      goto LABEL_29;
    }
  }
LABEL_30:
  LOBYTE(v4) = *((_BYTE *)this + 62) != 0;
  v14 = (float)*((int *)this + 14) / (float)*((int *)this + 12);
  if ( v14 <= (float)v4 )
  {
    v15 = (float)-(*((_BYTE *)this + 63) != 0);
    if ( v15 > v14 )
      v14 = v14 + (float)((float)(v15 - v14) * 0.80000001);
  }
  else
  {
    v14 = v14 - (float)((float)(v14 - (float)v4) * 0.80000001);
  }
  v16 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v17 = &v16[*((_QWORD *)this + 10)];
  while ( v16 != v17 )
    VirtualDesktopGestureWindow::UpdateOffset(*v16++, v14);
}
