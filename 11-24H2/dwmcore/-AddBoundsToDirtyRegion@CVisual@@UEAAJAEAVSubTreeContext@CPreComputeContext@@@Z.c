/*
 * XREFs of ?AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z @ 0x18001E4B0
 * Callers:
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

__int64 __fastcall CVisual::AddBoundsToDirtyRegion(CVisual *this, struct CPreComputeContext::SubTreeContext *a2)
{
  __int64 v3; // rcx
  char *v5; // rdx
  int v6; // eax
  void *v7; // rcx
  float right; // xmm3_4
  float left; // xmm4_4
  float bottom; // xmm2_4
  float top; // xmm1_4
  int v12; // ecx
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm6_4
  FLOAT v16; // xmm5_4
  FLOAT v17; // xmm0_4
  FLOAT v18; // xmm7_4
  float v19; // xmm4_4
  float v20; // xmm1_4
  float v21; // xmm3_4
  FLOAT v22; // xmm9_4
  CTreeDirty *v23; // r10
  int v24; // eax
  unsigned int v25; // ebx
  CTreeDirty *v27; // r10
  struct D2D_RECT_F v28; // [rsp+20h] [rbp-19h] BYREF
  __int64 v29; // [rsp+30h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  v3 = *((_QWORD *)a2 + 41);
  v29 = 0LL;
  v28 = 0LL;
  v5 = (char *)(v3 + 80);
  if ( this != *(CVisual **)(v3 + 72) )
    v5 = (char *)this + 152;
  v6 = *((_DWORD *)a2 + 70);
  if ( v6 )
    v7 = (void *)(*((_QWORD *)a2 + 34) + 68LL * (unsigned int)(v6 - 1));
  else
    v7 = &CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>(v7, v5, &v28);
  right = v28.right;
  left = v28.left;
  bottom = v28.bottom;
  top = v28.top;
  if ( v28.right > v28.left && v28.bottom > v28.top )
  {
    v12 = *((_DWORD *)this + 24);
    if ( *((_DWORD *)a2 + 84) || (v12 & 0x200) != 0 )
    {
      v13 = FLOAT_4_0;
    }
    else if ( (v12 & 0x800) != 0 )
    {
      v13 = FLOAT_0_5;
    }
    else
    {
      v13 = 0.0;
    }
    if ( (v12 & 0x1000) != 0 )
      v13 = v13 + 0.5;
    if ( v13 != 0.0 )
    {
      left = v28.left - v13;
      top = v28.top - v13;
      right = v28.right + v13;
      bottom = v28.bottom + v13;
    }
  }
  v14 = *((_DWORD *)a2 + 76);
  if ( v14 )
  {
    v28 = *(struct D2D_RECT_F *)(*((_QWORD *)a2 + 37) + 16LL * (unsigned int)(v14 - 1));
    v15 = v28.left;
    if ( left > v28.left )
      v15 = left;
    v16 = v28.top;
    v17 = v28.top;
    if ( top > v28.top )
    {
      v16 = top;
      v17 = top;
    }
    v18 = v28.right;
    v19 = v17;
    v20 = v28.right;
    if ( v28.right > right )
    {
      v18 = right;
      v20 = right;
    }
    v21 = v28.bottom;
    v22 = v28.bottom;
    if ( v28.bottom > bottom )
    {
      v21 = bottom;
      v19 = v17;
      v22 = bottom;
    }
    bottom = v22;
    if ( v20 <= v15 || v21 <= v19 )
    {
      v18 = 0.0;
      v16 = 0.0;
      v15 = 0.0;
      bottom = 0.0;
    }
    left = v15;
    v28.left = v15;
    right = v18;
    top = v16;
    v28.right = v18;
    v28.top = v16;
  }
  else
  {
    v28.left = left;
    v28.top = top;
    v28.right = right;
  }
  v28.bottom = bottom;
  if ( right <= left || bottom <= top )
    return 0LL;
  if ( *(_BYTE *)(*((_QWORD *)a2 + 40) + 2324LL) )
    goto LABEL_33;
  if ( IsEmpty(&v28) )
  {
    if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered(&v28) )
      goto LABEL_33;
    CTreeDirty::SetFullDirty(v27);
    v25 = -2003304438;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF1,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
      (const char *)0x8898000ALL);
  }
  else
  {
    if ( (unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsInfinite(&v28) )
    {
      CTreeDirty::SetFullDirty(v23);
      goto LABEL_33;
    }
    v24 = CTreeDirty::_Add(v23);
    v25 = v24;
    if ( v24 >= 0 )
    {
LABEL_33:
      v25 = 0;
      goto LABEL_34;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF6,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
      (const char *)(unsigned int)v24);
  }
LABEL_34:
  if ( (v25 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\precomputecontext.cpp",
      (const char *)v25);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC9,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\resources\\Visual.h",
      (const char *)v25);
    return v25;
  }
  return 0LL;
}
