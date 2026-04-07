/*
 * XREFs of ?RemoveInteropVisualFromTree@CGlobalLightSet@@AEAAXXZ @ 0x1800C3E9C
 * Callers:
 *     ??1CGlobalLightSet@@EEAA@XZ @ 0x1800C3D28 (--1CGlobalLightSet@@EEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001DE40 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18002447C (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A44DC (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGlobalLightSet::RemoveInteropVisualFromTree(CGlobalLightSet *this)
{
  CContainerVisual *v2; // r14
  __int64 v3; // rsi
  unsigned int v4; // edi
  CBaseObject *v5; // rbx
  int v6; // eax
  int inserted; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(CContainerVisual **)(*((_QWORD *)this + 12) + 24LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 13);
    v4 = *(_DWORD *)(v3 + 176);
    while ( (--v4 & 0x80000000) == 0 )
    {
      v5 = *(CBaseObject **)(*(_QWORD *)(v3 + 152) + 8LL * v4);
      v11 = v5;
      if ( v5 )
        CMILRefCountBase::AddRef(v5);
      v6 = VisualCollection::Remove((VisualCollection *)(v3 + 144), (struct CVisualProxy **)v5);
      if ( v6 < 0 )
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          123LL,
          (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
          (const char *)(unsigned int)v6,
          v9);
      inserted = CContainerVisual::InsertChildAfter(v2, v5, *((struct CVisual **)this + 12));
      if ( inserted < 0 )
        wil::details::in1diag3::_FailFast_Hr(
          retaddr,
          124LL,
          (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
          (const char *)(unsigned int)inserted,
          v9);
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v11);
    }
    v8 = CContainerVisual::RemoveChild(v2, *((struct CVisual **)this + 12));
    if ( v8 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        134LL,
        (__int64)"clientcore\\windows\\dwm\\udwm\\globallightset.cpp",
        (const char *)(unsigned int)v8,
        v9);
  }
}
