/*
 * XREFs of ?Append@CVisualTreePath@@QEAAJPEBVCVisual@@PEBVCVisualTree@@@Z @ 0x18001DE40
 * Callers:
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V?$buffer_impl@UVisualTreePathUnit@CVisualTreePath@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVisualTreePathUnit@CVisualTreePath@@_K0@Z @ 0x180009080 (-reserve_region@-$vector_facade@UVisualTreePathUnit@CVisualTreePath@@V-$buffer_impl@UVisualTreeP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVisualTreePath::Append(
        const struct CVisual ***this,
        const struct CVisual *a2,
        const struct CVisualTree *a3)
{
  const struct CVisual **v3; // rax
  const struct CVisual *v4; // r9
  const struct CVisual **v5; // rdx
  signed __int64 v7; // rax
  const struct CVisual *v8; // rax
  int v9[4]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *this;
  v4 = a2;
  *(_QWORD *)v9 = a2;
  v5 = this[1];
  *(_QWORD *)&v9[2] = a3;
  while ( v3 != v5 )
  {
    if ( *v3 == v4 && v3[1] == a3 )
      goto LABEL_5;
    v3 += 2;
  }
  v7 = (char *)v5 - (char *)*this;
  if ( v4 )
  {
    if ( v7 )
    {
      v8 = v4;
      while ( v4 )
      {
        if ( v4 == *((const struct CVisual **)*(v5 - 1) + 9) )
          goto LABEL_18;
        if ( v8 )
        {
          v8 = (const struct CVisual *)*((_QWORD *)v8 + 11);
          if ( v8 )
          {
            if ( v4 == v8 )
              break;
            v8 = (const struct CVisual *)*((_QWORD *)v8 + 11);
            if ( v4 == v8 )
              break;
          }
        }
        v4 = (const struct CVisual *)*((_QWORD *)v4 + 11);
      }
    }
    goto LABEL_5;
  }
  if ( v7 )
  {
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\visualtreepath.cpp",
      (const char *)0x8000FFFFLL,
      v9[0]);
    return 2147549183LL;
  }
LABEL_18:
  *(_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
               (detail::liberal_expansion_policy *)this,
               ((char *)v5 - (char *)*this) >> 4,
               1uLL) = *(_OWORD *)v9;
  return 0LL;
}
