/*
 * XREFs of ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800721D0
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x18002FAE8 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A12F0 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A1630 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180017358 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z @ 0x18002576C (-InsertChildAfter@CContainerVisual@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180025C04 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180027CFC (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x18002EC88 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x18002EFAC (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccent::_EnsureBorderShadowAtlas(CAccent *this)
{
  CMILRefCountBase *v2; // rcx
  CMILRefCountBase *v3; // rax
  int v5; // ebx
  __int64 v6; // rdx
  CMILRefCountBase *v7; // rcx
  CMILRefCountBase *v8; // rcx
  int inserted; // eax
  __int64 v10; // rdx
  struct _MARGINS v11; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  CMILRefCountBase *v13; // [rsp+40h] [rbp+10h] BYREF
  CMILRefCountBase *v14; // [rsp+48h] [rbp+18h] BYREF

  v2 = 0LL;
  v13 = 0LL;
  v3 = 0LL;
  v14 = 0LL;
  if ( !*((_QWORD *)this + 43) )
  {
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
    v5 = CCanvasVisual::Create(&v13);
    if ( v5 >= 0 )
    {
      Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
      v5 = CTopLevelAtlasedRectsVisual::Create(&v14);
      if ( v5 >= 0 )
      {
        inserted = CContainerVisual::AddChild(v13, v14);
        v5 = inserted;
        if ( inserted < 0 )
        {
          v10 = 886LL;
        }
        else
        {
          v11 = 0LL;
          CVisual::SetInsetFromParent((struct _MARGINS *)v14, &v11);
          inserted = CContainerVisual::InsertChildAfter(this, v13, 0LL);
          v5 = inserted;
          if ( inserted >= 0 )
          {
            v2 = v13;
            *((_QWORD *)this + 44) = v13;
            if ( v2 )
            {
              CMILRefCountBase::AddRef(v2);
              v2 = v13;
            }
            v3 = v14;
            *((_QWORD *)this + 43) = v14;
            if ( v3 )
            {
              CMILRefCountBase::AddRef(v3);
              v2 = v13;
              v3 = v14;
            }
            goto LABEL_2;
          }
          v10 = 890LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)inserted,
          v11.cxLeftWidth);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v14);
        Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
        return (unsigned int)v5;
      }
      v6 = 885LL;
    }
    else
    {
      v6 = 884LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v5,
      v11.cxLeftWidth);
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      CBaseObject::Release(v7);
    }
    v8 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      CBaseObject::Release(v8);
    }
    return (unsigned int)v5;
  }
LABEL_2:
  if ( v3 )
  {
    v14 = 0LL;
    CBaseObject::Release(v3);
    v2 = v13;
  }
  if ( v2 )
  {
    v13 = 0LL;
    CBaseObject::Release(v2);
  }
  return 0LL;
}
