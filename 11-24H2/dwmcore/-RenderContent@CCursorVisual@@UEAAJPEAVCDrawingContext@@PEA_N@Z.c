/*
 * XREFs of ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802908E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800500C0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x18006DA94 (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_ea_18006DA94.c)
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800F3A90 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800F5410 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800F5A70 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     gsl::final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___::_final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___ @ 0x18028FA04 (gsl--final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___--_final_action__lambda_f5980df7b8a.c)
 *     ?DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z @ 0x18028FC64 (-DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x1802906F0 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 *     ?IsSoftwareCursor@CDrawingContext@@QEBA_NPEBVCCursorVisual@@@Z @ 0x18029077C (-IsSoftwareCursor@CDrawingContext@@QEBA_NPEBVCCursorVisual@@@Z.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802B269C (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 *     ?GetSnappedShapeRect@CCursorState@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1802B2F28 (-GetSnappedShapeRect@CCursorState@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?GetTrailPointOpacity@CCursorState@@QEBAMAEBUTrailPoint@1@_K@Z @ 0x1802B2F7C (-GetTrailPointOpacity@CCursorState@@QEBAMAEBUTrailPoint@1@_K@Z.c)
 */

__int64 __fastcall CCursorVisual::RenderContent(
        CComposition **this,
        struct CDrawingContext *a2,
        struct CD3DDevice *(__fastcall *a3)(CD2DResource *__hidden this))
{
  int v5; // eax
  int v6; // r14d
  unsigned int v7; // ebx
  unsigned __int64 FrameTargetTime; // r13
  int v9; // eax
  __int64 v10; // rdx
  __int64 **v11; // r12
  __int64 *v12; // rbx
  int v13; // xmm0_4
  __int64 v14; // rdx
  struct D2D_RECT_F *SnappedShapeRect; // rax
  __int64 v16; // rcx
  int v18; // [rsp+20h] [rbp-59h]
  char v19; // [rsp+40h] [rbp-39h] BYREF
  int v20; // [rsp+48h] [rbp-31h] BYREF
  __int128 v21; // [rsp+4Ch] [rbp-2Dh]
  __int128 v22; // [rsp+5Ch] [rbp-1Dh]
  int v23; // [rsp+6Ch] [rbp-Dh]
  _QWORD v24[2]; // [rsp+70h] [rbp-9h] BYREF
  char v25; // [rsp+80h] [rbp+7h]
  _BYTE v26[16]; // [rsp+88h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v5 = CVisual::RenderContent((CVisual *)this, a2, a3);
  v6 = 0;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v19 = 0;
    v24[0] = &v19;
    v24[1] = a2;
    v25 = 1;
    if ( this[88] )
    {
      FrameTargetTime = CComposition::GetFrameTargetTime(this[3]);
      if ( *((_BYTE *)this[88] + 112) )
      {
        v9 = CCursorVisual::DrawCrosshair((CCursorVisual *)this, a2);
        v7 = v9;
        if ( v9 < 0 )
        {
          v10 = 325LL;
LABEL_26:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
            (const char *)(unsigned int)v9);
LABEL_34:
          gsl::final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___::_final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___((__int64)v24);
          return v7;
        }
      }
      v11 = (__int64 **)*((_QWORD *)this[88] + 32);
      v12 = *v11;
      while ( v12 != (__int64 *)v11 )
      {
        if ( *((_BYTE *)v12 + 32) )
        {
          if ( !v19 )
          {
            v20 = 8;
            v22 = 0LL;
            LODWORD(v22) = 2;
            v23 = 0;
            v21 = 0LL;
            v6 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v20, 1);
            if ( v6 < 0 )
            {
              v14 = 337LL;
LABEL_18:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v14,
                (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
                (const char *)(unsigned int)v6);
              goto LABEL_33;
            }
            v19 = 1;
          }
        }
        else if ( v19 )
        {
          CDrawingContext::PopRenderOptionsInternal(a2, 1);
          v19 = 0;
        }
        *(float *)&v13 = CCursorState::GetTrailPointOpacity(
                           this[88],
                           (const struct CCursorState::TrailPoint *)(v12 + 2),
                           FrameTargetTime);
        v6 = CDrawingContext::DrawBitmapRealization(
               a2,
               (struct IBitmapRealization *)v12[3],
               (struct D2D_RECT_F *)((char *)v12 + 36),
               (const struct D2D1::Matrix3x2F *)((char *)v12 + 52),
               v18,
               0,
               v13);
        if ( v6 < 0 )
        {
          v14 = 356LL;
          goto LABEL_18;
        }
        v12 = (__int64 *)*v12;
        v6 = 0;
      }
      if ( CCursorVisual::HasVisibleCursor((CCursorVisual *)this)
        && CDrawingContext::IsSoftwareCursor(a2, (const struct CCursorVisual *)this) )
      {
        if ( *((_BYTE *)this[88] + 81) )
        {
          if ( !v19 )
          {
            v20 = 8;
            v22 = 0LL;
            LODWORD(v22) = 2;
            v23 = 0;
            v21 = 0LL;
            v9 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v20, 1);
            v7 = v9;
            if ( v9 < 0 )
            {
              v10 = 368LL;
              goto LABEL_26;
            }
            v19 = 1;
          }
        }
        else if ( v19 )
        {
          CDrawingContext::PopRenderOptionsInternal(a2, 1);
          v19 = 0;
        }
        CCursorState::EnsureCompositionResources(this[88]);
        SnappedShapeRect = (struct D2D_RECT_F *)CCursorState::GetSnappedShapeRect(this[88], v26);
        v9 = CDrawingContext::DrawBitmapRealization(
               a2,
               *(struct IBitmapRealization **)(v16 + 120),
               SnappedShapeRect,
               (const struct D2D1::Matrix3x2F *)(v16 + 144),
               v18,
               0,
               (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
        v7 = v9;
        if ( v9 < 0 )
        {
          v10 = 385LL;
          goto LABEL_26;
        }
        this[89] = (CComposition *)*((_QWORD *)this[3] + 111);
      }
    }
LABEL_33:
    v7 = v6;
    goto LABEL_34;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12F,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
    (const char *)(unsigned int)v5);
  return v7;
}
