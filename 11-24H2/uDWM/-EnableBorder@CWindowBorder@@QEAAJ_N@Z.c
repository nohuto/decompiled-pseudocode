/*
 * XREFs of ?EnableBorder@CWindowBorder@@QEAAJ_N@Z @ 0x1800359D4
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18002AB40 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ @ 0x18006B8EC (-EnsureBackgroundEffects@CAcrylicSheet@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18006BEE8 (-InitializeVisualTreeClone@CWindowBorder@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800EB38C (-AddIconPlate@UserResizeVisual@implementation@Transitions@Udwm@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ @ 0x18002EF74 (-SetBorderModeForContentClip@CWindowBorder@@AEAAXXZ.c)
 *     ??4?$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180036CD0 (--4-$shared_ptr@VCCachedBorderBrush@CWindowBorder@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CreateBorderStructure@CWindowBorder@@AEAAJXZ @ 0x180037764 (-CreateBorderStructure@CWindowBorder@@AEAAJXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1800389BC (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x180039A4C (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z @ 0x180073644 (-SetIgnoreClipForHitTest@CVisual@@QEAAJ_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowBorder::EnableBorder(CWindowBorder *this, char a2)
{
  struct CVisual **v2; // rsi
  int BorderStructure; // eax
  unsigned int v6; // ebx
  std::_Ref_count_base *v7; // rbx
  __int64 v8; // rcx
  std::_Ref_count_base *v9[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (struct CVisual **)((char *)this + 200);
  if ( !a2 )
  {
    if ( *v2 )
    {
      CContainerVisual::RemoveChild(this, *v2);
      if ( *((_QWORD *)this + 27) )
      {
        v8 = *((_QWORD *)this + 26);
        if ( v8 )
        {
          CVisualProxy::SetClip(*(CVisualProxy **)(v8 + 16), 0LL);
          CVisual::SetIgnoreClipForHitTest(*((CVisual **)this + 26), 0);
        }
      }
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v2);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 28);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 29);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease((CBaseObject **)this + 27);
      *(_OWORD *)v9 = 0LL;
      std::shared_ptr<CWindowBorder::CCachedBorderBrush>::operator=((char *)this + 240, v9);
      if ( v9[1] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9[1] + 2, 0xFFFFFFFF) == 1 )
        {
          v7 = v9[1];
          (**(void (__fastcall ***)(std::_Ref_count_base *))v9[1])(v9[1]);
          std::_Ref_count_base::_Decwref(v7);
        }
      }
      CWindowBorder::SetBorderModeForContentClip(this);
    }
    return 0LL;
  }
  if ( *v2 )
    return 0LL;
  BorderStructure = CWindowBorder::CreateBorderStructure(this);
  v6 = BorderStructure;
  if ( BorderStructure >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF2,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowborder.cpp",
    (const char *)(unsigned int)BorderStructure,
    (int)v9[0]);
  return v6;
}
