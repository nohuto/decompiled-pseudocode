/*
 * XREFs of ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800A126C
 * Callers:
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18002D2A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A0AF0 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180019608 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180035BF4 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180039180 (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18003A5D0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAccent::_EnsureBorderShadowAtlas(CAccent *this)
{
  int inserted; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  struct CCanvasVisual *v5; // rax
  CVisual *v6; // rax
  int v8; // [rsp+20h] [rbp-20h]
  int v9; // [rsp+20h] [rbp-20h]
  struct _MARGINS v10; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  CVisual *v12; // [rsp+50h] [rbp+10h] BYREF
  struct CCanvasVisual *v13; // [rsp+58h] [rbp+18h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  if ( *((_QWORD *)this + 49) )
    goto LABEL_15;
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  inserted = CCanvasVisual::Create(&v13);
  v3 = inserted;
  if ( inserted >= 0 )
  {
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v12);
    inserted = CTopLevelAtlasedRectsVisual::Create(&v12);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v4 = 896LL;
      goto LABEL_6;
    }
    inserted = VisualCollection::InsertRelative(
                 (struct CCanvasVisual *)((char *)v13 + 32),
                 (unsigned __int64)v12,
                 0LL,
                 0,
                 v8);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v4 = 897LL;
      goto LABEL_6;
    }
    v10 = 0LL;
    CVisual::SetInsetFromParent(v12, &v10);
    inserted = VisualCollection::InsertRelative((CAccent *)((char *)this + 32), (unsigned __int64)v13, 0LL, 1u, v9);
    v3 = inserted;
    if ( inserted < 0 )
    {
      v4 = 901LL;
      goto LABEL_6;
    }
    v5 = v13;
    *((_QWORD *)this + 50) = v13;
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    v6 = v12;
    *((_QWORD *)this + 49) = v12;
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)v6 + 2);
LABEL_15:
    v3 = 0;
    goto LABEL_16;
  }
  v4 = 895LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)inserted);
LABEL_16:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v12);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v13);
  return v3;
}
