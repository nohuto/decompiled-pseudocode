/*
 * XREFs of ?AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180020930
 * Callers:
 *     ?AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@@Z @ 0x180020830 (-AddLocalBoundsToSubTreesDirtyRegion@CPreComputeContext@@AEAAJPEAVCVisual@@@Z.c)
 *     ?AddBoundsToDirtyRegion@CCursorVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z @ 0x18028FB30 (-AddBoundsToDirtyRegion@CCursorVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18001F160 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3.c)
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x180021DBC (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     ?IsInfinite@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003DB50 (-IsInfinite@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180100680 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024183C (-_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CPreComputeContext::SubTreeContext::AddRectToDirtyRegion(__int64 a1, float *a2, __int64 a3)
{
  int v3; // eax
  void *v6; // rcx
  float right; // xmm4_4
  float left; // xmm3_4
  float bottom; // xmm2_4
  float top; // xmm1_4
  int v11; // ecx
  float v12; // xmm0_4
  int v13; // eax
  float v14; // xmm6_4
  FLOAT v15; // xmm5_4
  FLOAT v16; // xmm0_4
  FLOAT v17; // xmm7_4
  float v18; // xmm8_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  FLOAT v21; // xmm4_4
  CTreeDirty *v22; // r10
  int v23; // eax
  int v24; // ebx
  CTreeDirty *v26; // r10
  struct D2D_RECT_F v27; // [rsp+20h] [rbp-29h] BYREF
  __int64 v28; // [rsp+30h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v3 = *(_DWORD *)(a1 + 280);
  v28 = 0LL;
  v27 = 0LL;
  if ( v3 )
    v6 = (void *)(*(_QWORD *)(a1 + 272) + 68LL * (unsigned int)(v3 - 1));
  else
    v6 = &CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>((__int64)v6, a2, &v27.left);
  right = v27.right;
  left = v27.left;
  bottom = v27.bottom;
  top = v27.top;
  if ( v27.right > v27.left && v27.bottom > v27.top )
  {
    v11 = *(_DWORD *)(a3 + 96);
    if ( *(_DWORD *)(a1 + 336) || (v11 & 0x200) != 0 )
    {
      v12 = FLOAT_4_0;
    }
    else if ( (v11 & 0x800) != 0 )
    {
      v12 = FLOAT_0_5;
    }
    else
    {
      v12 = 0.0;
    }
    if ( (v11 & 0x1000) != 0 )
      v12 = v12 + 0.5;
    if ( v12 != 0.0 )
    {
      left = v27.left - v12;
      top = v27.top - v12;
      right = v27.right + v12;
      bottom = v27.bottom + v12;
    }
  }
  v13 = *(_DWORD *)(a1 + 304);
  if ( v13 )
  {
    v27 = *(struct D2D_RECT_F *)(*(_QWORD *)(a1 + 296) + 16LL * (unsigned int)(v13 - 1));
    v14 = v27.left;
    if ( left > v27.left )
      v14 = left;
    v15 = v27.top;
    v16 = v27.top;
    if ( top > v27.top )
    {
      v15 = top;
      v16 = top;
    }
    v17 = v27.right;
    v18 = v16;
    v19 = v27.right;
    if ( v27.right > right )
    {
      v17 = right;
      v19 = right;
    }
    v20 = v27.bottom;
    v21 = v27.bottom;
    if ( v27.bottom > bottom )
    {
      v20 = bottom;
      v18 = v16;
      v21 = bottom;
    }
    bottom = v21;
    if ( v19 <= v14 || v20 <= v18 )
    {
      v17 = 0.0;
      v15 = 0.0;
      v14 = 0.0;
      bottom = 0.0;
    }
    left = v14;
    right = v17;
    v27.left = v14;
    top = v15;
    v27.right = v17;
    v27.top = v15;
  }
  else
  {
    v27.left = left;
    v27.top = top;
    v27.right = right;
  }
  v27.bottom = bottom;
  if ( right <= left || bottom <= top )
    return 0LL;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 320) + 2324LL) )
    goto LABEL_31;
  if ( IsEmpty(&v27) )
  {
    if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(&v27) )
      goto LABEL_31;
    CTreeDirty::SetFullDirty(v26);
    v24 = -2003304438;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
      (const char *)0x8898000ALL);
  }
  else
  {
    if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&v27) )
    {
      CTreeDirty::SetFullDirty(v22);
      goto LABEL_31;
    }
    v23 = CTreeDirty::_Add(v22);
    v24 = v23;
    if ( v23 >= 0 )
    {
LABEL_31:
      v24 = 0;
      goto LABEL_32;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
      (const char *)(unsigned int)v23);
  }
LABEL_32:
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)(unsigned int)v24);
    return (unsigned int)v24;
  }
  return 0LL;
}
