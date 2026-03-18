/*
 * XREFs of ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180186168
 * Callers:
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180037500 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18003A510 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18009E420 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A0D70 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x1800B0870 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z @ 0x1800C39A0 (-EnsureWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@@Z.c)
 *     ?push_back@?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBQEAVCVisual@@@Z @ 0x1801862D0 (-push_back@-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_p.c)
 *     ??1?$vector_facade@PEAVCVisual@@V?$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180186560 (--1-$vector_facade@PEAVCVisual@@V-$buffer_impl@PEAVCVisual@@$0EA@$00Vliberal_expansion_policy@de.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisualTree::EnsureVisualTransform(CVisual **this, struct CVisual *a2)
{
  CGlobalComposition *CurrentFrameId; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool *v7; // r8
  unsigned int v8; // edi
  CVisual *TransformParent; // rax
  _BYTE *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  CVisual *v13; // rbx
  __int64 **TreeData; // rax
  struct CVisual *v16; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v17; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE *v18; // [rsp+30h] [rbp-D0h]
  __int64 *v19; // [rsp+38h] [rbp-C8h]
  _BYTE v20[512]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+240h] [rbp+140h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+168h]

  v17 = v20;
  v18 = v20;
  v19 = &v21;
  CurrentFrameId = GetCurrentFrameId();
  v8 = 0;
  if ( CVisualTree::_IsInTree(v6, v5, 0) )
  {
    while ( a2 != this[9] )
    {
      TransformParent = CVisual::GetTransformParent(a2, this, v7);
      v16 = TransformParent;
      if ( !TransformParent )
      {
        TransformParent = (CVisual *)*((_QWORD *)a2 + 11);
        v16 = TransformParent;
      }
      if ( CVisual::EnsureTreeData(TransformParent, (void **)this)[28] >= (void **)CurrentFrameId )
        break;
      detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::push_back(
        &v17,
        &v16);
      a2 = v16;
    }
    v10 = v17;
    v11 = (v18 - v17) >> 3;
    v12 = (int)v11;
    if ( (int)v11 > 0 )
    {
      while ( 1 )
      {
        v13 = *(CVisual **)&v10[8 * v12 - 8];
        TreeData = CVisual::FindTreeData(v13, (const struct CVisualTree *)this);
        CVisual::EnsureWorldTransform(v13, (const struct CVisualTree *)this, (RTL_SRWLOCK *)TreeData);
        if ( --v12 <= 0 )
          break;
        v10 = v17;
      }
    }
  }
  else
  {
    v8 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x59,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualtree.cpp",
      (const char *)0x80070057LL);
  }
  detail::vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>::~vector_facade<CVisual *,detail::buffer_impl<CVisual *,64,1,detail::liberal_expansion_policy>>(&v17);
  return v8;
}
