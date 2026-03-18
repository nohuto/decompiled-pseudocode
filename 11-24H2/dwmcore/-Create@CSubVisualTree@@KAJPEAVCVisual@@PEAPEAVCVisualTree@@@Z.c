/*
 * XREFs of ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x180168D04
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180167898 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x180168E10 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180038420 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x180039AC0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??2CVisualTree@@KAPEAX_K@Z @ 0x180167DB4 (--2CVisualTree@@KAPEAX_K@Z.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180167DE4 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSubVisualTree::Create(struct CVisual *a1, struct CVisualTree **a2)
{
  struct CVisualTree *VisualTreeNoRef; // rax
  struct CVisualTree *v5; // rbx
  CVisualTree *v7; // rax
  struct CVisualTree *v8; // rsi
  int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  VisualTreeNoRef = CVisual::GetVisualTreeNoRef(a1);
  v5 = VisualTreeNoRef;
  if ( VisualTreeNoRef )
  {
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 8LL))(VisualTreeNoRef);
LABEL_3:
    *a2 = v5;
    return 0LL;
  }
  *a2 = 0LL;
  v7 = (CVisualTree *)CVisualTree::operator new();
  v5 = v7;
  if ( v7 )
  {
    CVisualTree::CVisualTree(v7, g_pComposition, a1);
    ++CSubVisualTree::s_cSubTrees;
    *(_QWORD *)v5 = &CSubVisualTree::`vftable';
    *((_DWORD *)v5 + 629) = 0;
    *((_DWORD *)v5 + 628) = 0;
    *((_DWORD *)v5 + 627) = 0;
    *((_DWORD *)v5 + 626) = 0;
    *((_BYTE *)v5 + 2628) = 0;
    CMILRefCountImpl::AddReference((struct CVisualTree *)((char *)v5 + 8));
    v8 = v5;
  }
  else
  {
    v8 = 0LL;
    v5 = 0LL;
  }
  v9 = CVisual::CalcRootBounds(*((struct D2D_SIZE_F **)v8 + 9), (float *)v8 + 20);
  v10 = v9;
  if ( v9 >= 0 )
    goto LABEL_3;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\subvisualtree.cpp",
    (const char *)(unsigned int)v9);
  CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v8, v11, v12);
  return v10;
}
