/*
 * XREFs of ?Initialize@CAcrylicSheet@@EEAAJXZ @ 0x18007C4E0
 * Callers:
 *     ?Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z @ 0x18007C3E0 (-Create@CAcrylicSheet@@SAJPEAVCWindowData@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?Initialize@CContainerVisual@@MEAAJXZ @ 0x18002E5D0 (-Initialize@CContainerVisual@@MEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006B8EC (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAcrylicSheet::Initialize(CAcrylicSheet *this)
{
  int v2; // edi
  __int64 v3; // rdx
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = CContainerVisual::Initialize((struct CContainerVisualProxy **)this);
  if ( v2 < 0 )
  {
    v3 = 55LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\acrylicsheet.cpp",
      (const char *)(unsigned int)v2,
      v5);
    return (unsigned int)v2;
  }
  v2 = CAcrylicSheet::EnsureBackgroundEffects((CBaseObject **)this);
  if ( v2 < 0 )
  {
    v3 = 56LL;
    goto LABEL_3;
  }
  v7 = (struct tagPOINT)*((_QWORD *)this + 30);
  CVisual::SetOffset((struct tagPOINT *)this, &v7);
  return 0LL;
}
