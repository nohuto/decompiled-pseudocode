/*
 * XREFs of ?Create@CSubVisualTree@@KAJPEAVCVisual@@PEAPEAVCVisualTree@@@Z @ 0x18010AADC
 * Callers:
 *     ?DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z @ 0x18010ABE0 (-DrawVisual@CDrawingContext@@UEAAJPEAVCVisual@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18011F238 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180056FC0 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ @ 0x1801095D0 (-GetVisualTreeNoRef@CVisual@@QEBAPEAVCVisualTree@@XZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??2CVisualTree@@KAPEAX_K@Z @ 0x180205AB0 (--2CVisualTree@@KAPEAX_K@Z.c)
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180205AE0 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSubVisualTree::Create(struct CVisual *a1, struct CVisualTree **a2)
{
  struct CVisualTree *VisualTreeNoRef; // rax
  unsigned __int64 v5; // rcx
  struct CVisualTree *v6; // rbx
  CVisualTree *v8; // rax
  __int64 v9; // r8
  struct CVisualTree *v10; // rsi
  int v11; // eax
  unsigned int v12; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  VisualTreeNoRef = CVisual::GetVisualTreeNoRef(a1);
  v6 = VisualTreeNoRef;
  if ( VisualTreeNoRef )
  {
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)VisualTreeNoRef + 8LL))(VisualTreeNoRef);
LABEL_3:
    *a2 = v6;
    return 0LL;
  }
  *a2 = 0LL;
  v8 = (CVisualTree *)CVisualTree::operator new(v5);
  v6 = v8;
  if ( v8 )
  {
    CVisualTree::CVisualTree(v8, g_pComposition, a1);
    ++CSubVisualTree::s_cSubTrees;
    *(_QWORD *)v6 = &CSubVisualTree::`vftable';
    *((_DWORD *)v6 + 629) = 0;
    *((_DWORD *)v6 + 628) = 0;
    *((_DWORD *)v6 + 627) = 0;
    *((_DWORD *)v6 + 626) = 0;
    *((_BYTE *)v6 + 2628) = 0;
    CMILRefCountImpl::AddReference((struct CVisualTree *)((char *)v6 + 8));
    v10 = v6;
  }
  else
  {
    v10 = 0LL;
    v6 = 0LL;
  }
  v11 = CVisual::CalcRootBounds(*((CVisual **)v10 + 9), (float *)v10 + 20, v9);
  v12 = v11;
  if ( v11 >= 0 )
    goto LABEL_3;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\subvisualtree.cpp",
    (const char *)(unsigned int)v11);
  CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v10);
  return v12;
}
