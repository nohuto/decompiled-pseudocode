/*
 * XREFs of ?SetContent@CWindowBorder@@QEAAJPEAVCVisual@@@Z @ 0x18002EDE4
 * Callers:
 *     ?Initialize@CTopLevelWindow@@EEAAJXZ @ 0x18002E160 (-Initialize@CTopLevelWindow@@EEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006B8EC (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800EB38C (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18002EF74 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x180039A4C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180073644 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CWindowBorder::SetContent(struct CVisual **this, CVisualProxy **a2)
{
  int v4; // esi
  struct CBaseGeometryProxy *v5; // rdx
  struct CVisual *v6; // rdx
  CBaseObject *v7; // rcx
  __int64 v9; // rdx
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 == (CVisualProxy **)this[26] )
    return 0LL;
  if ( a2 )
  {
    v4 = CContainerVisual::AddChild((CContainerVisual *)this, (struct CVisual *)a2);
    if ( v4 < 0 )
    {
      v9 = 743LL;
      goto LABEL_14;
    }
    v5 = this[27];
    if ( v5 )
    {
      v4 = CVisualProxy::SetClip(a2[2], v5);
      if ( v4 < 0 )
      {
        v9 = 747LL;
        goto LABEL_14;
      }
      v4 = CVisual::SetIgnoreClipForHitTest((CVisual *)a2, 1);
      if ( v4 < 0 )
      {
        v9 = 748LL;
        goto LABEL_14;
      }
    }
  }
  v6 = this[26];
  if ( !v6 )
  {
LABEL_6:
    if ( this[26] != (struct CVisual *)a2 )
    {
      if ( a2 )
        CMILRefCountBase::AddRef((CMILRefCountBase *)a2);
      v7 = this[26];
      this[26] = (struct CVisual *)a2;
      if ( v7 )
        CBaseObject::Release(v7);
    }
    CWindowBorder::SetBorderModeForContentClip((CWindowBorder *)this);
    return 0LL;
  }
  CContainerVisual::RemoveChild((CContainerVisual *)this, v6);
  v4 = CVisualProxy::SetClip(*((CVisualProxy **)this[26] + 2), 0LL);
  if ( v4 >= 0 )
  {
    v4 = CVisual::SetIgnoreClipForHitTest(this[26], 0);
    if ( v4 >= 0 )
      goto LABEL_6;
    v9 = 757LL;
  }
  else
  {
    v9 = 756LL;
  }
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)v4,
    v10);
  return (unsigned int)v4;
}
