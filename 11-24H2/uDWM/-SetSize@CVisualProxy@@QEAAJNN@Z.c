/*
 * XREFs of ?SetSize@CVisualProxy@@QEAAJNN@Z @ 0x1800296B0
 * Callers:
 *     ?SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z @ 0x180027F28 (-SetBorderRect@CWindowBorder@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180029380 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ @ 0x180029978 (-UpdateWindowTarget@CTopLevelWindow@@QEAAJXZ.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180037764 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?SetSize@CSpriteVisual@@UEAAXPEBUtagSIZE@@@Z @ 0x1800D1090 (-SetSize@CSpriteVisual@@UEAAXPEBUtagSIZE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisualProxy::SetSize(CVisualProxy *this, double a2, double a3)
{
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  unsigned int v7; // ebx
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 288LL))(*((_QWORD *)this + 3));
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
      (const char *)(unsigned int)v4,
      v9);
    return v5;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 296LL))(*((_QWORD *)this + 3));
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\visualproxy.cpp",
        (const char *)(unsigned int)v6,
        v9);
      return v7;
    }
    else
    {
      return 0LL;
    }
  }
}
