/*
 * XREFs of _lambda_bab8b68202cb5e83f669dfb82b31add3_::operator() @ 0x18028CFE0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bab8b68202cb5e83f669dfb82b31add3__long_CVisual___CVisualTree___::_Do_call @ 0x18028E230 (std--_Func_impl_no_alloc__lambda_bab8b68202cb5e83f669dfb82b31add3__long_CVisual___C_ea_18028E230.c)
 * Callees:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800B74B0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180175760 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_bab8b68202cb5e83f669dfb82b31add3_::operator()(__int64 *a1, struct CVisual *a2)
{
  __int64 v2; // rbp
  unsigned int v5; // esi
  __int64 *v6; // rbx
  __int64 v7; // rdx
  const struct D2D_RECT_F *v8; // rbx
  CVisualTree *v9; // rdx
  float *v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  struct D2D_RECT_F v14; // [rsp+40h] [rbp-38h] BYREF

  v2 = *a1;
  v5 = 0;
  if ( !CVisualTree::_IsInTree(*(_QWORD *)(*a1 + 112), (__int64)a2, 0) )
  {
    v6 = (__int64 *)a1[1];
    if ( CVisualTree::_IsInTree(*v6, (__int64)a2, 0) )
    {
      v7 = *v6;
      v8 = (const struct D2D_RECT_F *)(*v6 + 80);
      if ( a2 != *(struct CVisual **)(v7 + 72) )
        v8 = (const struct D2D_RECT_F *)((char *)a2 + 152);
      if ( !IsEmpty((const struct D2D_RECT_F *)a1[2])
        && !IsEmpty(v8)
        && v10[2] > v8->left
        && v8->right > *v10
        && v10[3] > v8->top
        && v8->bottom > v10[1] )
      {
        v11 = CDrawingContext::DrawVisualTree(*(CDrawingContext **)a1[3], v9, (__int64)v8, 0LL, 0, 0, a2);
        v5 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x244u, 0LL);
        v12 = a1[4];
        v14 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<0>(v12, v8, &v14.left);
        CMergedRectBase<4>::Add((unsigned int *)(v2 + 2768), &v14);
      }
    }
  }
  return v5;
}
