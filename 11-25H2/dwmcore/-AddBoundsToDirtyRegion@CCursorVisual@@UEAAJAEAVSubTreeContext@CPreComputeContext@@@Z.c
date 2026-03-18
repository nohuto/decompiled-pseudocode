/*
 * XREFs of ?AddBoundsToDirtyRegion@CCursorVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z @ 0x180299D10
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x18009B3F0 (-AddRectToDirtyRegion@SubTreeContext@CPreComputeContext@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUD.c)
 *     ?AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z @ 0x18009B700 (-AddBoundsToDirtyRegion@CVisual@@UEAAJAEAVSubTreeContext@CPreComputeContext@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 */

__int64 __fastcall CCursorVisual::AddBoundsToDirtyRegion(
        CCursorVisual *this,
        struct CPreComputeContext::SubTreeContext *a2)
{
  __int64 v2; // rdi
  __int64 v4; // r14
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // esi
  int v10; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *((_QWORD *)this + 89);
  v4 = *((_QWORD *)this + 90);
  if ( v2 == v4 || (unsigned int)CPtrArray<CVisual>::GetCount((_QWORD *)this + 10) )
  {
    v10 = CVisual::AddBoundsToDirtyRegion(this, a2);
    if ( v10 < 0 )
    {
      v11 = 74LL;
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
            (void *)0x3C,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
            (const char *)(unsigned int)v7);
          return v8;
        }
        v2 += 24LL;
      }
      return 0LL;
    }
    v10 = CPreComputeContext::SubTreeContext::AddRectToDirtyRegion((__int64)a2, v6 + 80, (__int64)this);
    if ( v10 < 0 )
    {
      v11 = 67LL;
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
