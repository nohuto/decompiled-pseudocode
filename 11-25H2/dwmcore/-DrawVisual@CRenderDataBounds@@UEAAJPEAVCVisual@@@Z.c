/*
 * XREFs of ?DrawVisual@CRenderDataBounds@@UEAAJPEAVCVisual@@@Z @ 0x1801EDDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x180098EA0 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180109514 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EE2F8 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderDataBounds::DrawVisual(CRenderDataBounds *this, struct CVisual *a2)
{
  CVisualTree *v4; // rbx
  CVisualTree *v6; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = 0LL;
    CVisual::GetVisualTree(a2, &v6);
    v4 = v6;
    if ( (int)CVisualTree::Clean(v6, 0LL) < 0 )
    {
      *((_BYTE *)this + 96) = 1;
      *(_OWORD *)((char *)this + 8) = TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::sc_rcInfinite;
    }
    else
    {
      CRenderDataBounds::AddBounds(this, (char *)a2 + 152);
    }
    if ( v4 )
      (*(void (__fastcall **)(CVisualTree *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return 0LL;
}
