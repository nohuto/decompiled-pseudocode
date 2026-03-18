/*
 * XREFs of ?AddWorldBoundsToDirtyRegion@SubTreeContext@CPreComputeContext@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180022A18
 * Callers:
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180230200 (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x180021DBC (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003DB50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180100680 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024183C (-_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 */

__int64 __fastcall CPreComputeContext::SubTreeContext::AddWorldBoundsToDirtyRegion(
        __int64 a1,
        __int64 a2,
        const struct D2D_RECT_F *a3)
{
  __int64 v3; // rcx
  CTreeDirty *v4; // r10
  int v5; // eax
  unsigned int v6; // ebx
  CTreeDirty *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3->right > a3->left && a3->bottom > a3->top )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 320) + 2324LL) )
      return 0;
    if ( IsEmpty(a3) )
    {
      if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(v3) )
        return 0;
      CTreeDirty::SetFullDirty(v8);
      v6 = -2003304438;
      v9 = 241LL;
      v10 = 2291662858LL;
    }
    else
    {
      if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(v3) )
      {
        CTreeDirty::SetFullDirty(v4);
        return 0;
      }
      v5 = CTreeDirty::_Add(v4);
      v6 = v5;
      if ( v5 >= 0 )
        return 0;
      v10 = (unsigned int)v5;
      v9 = 246LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
      (const char *)v10);
    return v6;
  }
  return 0LL;
}
