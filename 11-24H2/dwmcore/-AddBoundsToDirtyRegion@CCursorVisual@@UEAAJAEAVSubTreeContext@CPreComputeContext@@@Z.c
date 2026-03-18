/*
 * XREFs of ?AddBoundsToDirtyRegion@CCursorVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z @ 0x18028FB30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z @ 0x18001E4B0 (-AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z.c)
 *     ?AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180020930 (-AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 */

__int64 __fastcall CCursorVisual::AddBoundsToDirtyRegion(
        CCursorVisual *this,
        struct CPreComputeContext::SubTreeContext *a2)
{
  float *v2; // rdi
  float *v4; // r14
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // esi
  int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (float *)*((_QWORD *)this + 90);
  v4 = (float *)*((_QWORD *)this + 91);
  if ( v2 == v4 || (unsigned int)CPtrArray<CVisual>::GetCount((_QWORD *)this + 10) )
  {
    v10 = CVisual::AddBoundsToDirtyRegion(this, a2);
    if ( v10 < 0 )
    {
      v11 = 76LL;
      goto LABEL_10;
    }
  }
  else
  {
    if ( this != *(CCursorVisual **)(v6 + 72) )
    {
      while ( v2 != v4 )
      {
        v7 = CPreComputeContext::SubTreeContext::AddRectToDirtyRegion((__int64)a2, v2, (__int64)this);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3E,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
            (const char *)(unsigned int)v7);
          return v8;
        }
        v2 += 6;
      }
      return 0LL;
    }
    v10 = CPreComputeContext::SubTreeContext::AddRectToDirtyRegion((__int64)a2, (float *)(v6 + 80), (__int64)this);
    if ( v10 < 0 )
    {
      v11 = 69LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
  }
  return 0LL;
}
