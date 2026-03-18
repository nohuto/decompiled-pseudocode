/*
 * XREFs of ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18029A990
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFrameTargetTime@CComposition@@QEBA_KXZ @ 0x1800320D0 (-GetFrameTargetTime@CComposition@@QEBA_KXZ.c)
 *     ?DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVMILMatrix3x2@@_NHM@Z @ 0x180073B4C (-DrawBitmapRealization@CDrawingContext@@QEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUD2D_RECT_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800D2B10 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180117D20 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180118380 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     gsl::final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___::_final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___ @ 0x180299BE4 (gsl--final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___--_final_action__lambda_f5980df7b8a.c)
 *     ?DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z @ 0x180299E64 (-DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z.c)
 *     ?HasVisibleCursor@CCursorVisual@@UEBA_NXZ @ 0x18029A7E0 (-HasVisibleCursor@CCursorVisual@@UEBA_NXZ.c)
 *     ?EnsureCompositionResources@CCursorState@@QEAAXXZ @ 0x1802BC170 (-EnsureCompositionResources@CCursorState@@QEAAXXZ.c)
 */

__int64 __fastcall CCursorVisual::RenderContent(
        CComposition **this,
        struct CDrawingContext *a2,
        struct CD3DDevice *(__fastcall *a3)(CD2DResource *this))
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 FrameTargetTime; // r12
  int v8; // eax
  __int64 v9; // rdx
  __int64 **v10; // r15
  __int64 *i; // rbx
  int v12; // r14d
  __int64 v13; // rcx
  float v14; // xmm1_4
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  float v17; // xmm0_4
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD v21[2]; // [rsp+48h] [rbp-19h] BYREF
  char v22; // [rsp+58h] [rbp-9h]
  int v23; // [rsp+60h] [rbp-1h] BYREF
  __int128 v24; // [rsp+64h] [rbp+3h]
  __int128 v25; // [rsp+74h] [rbp+13h]
  int v26; // [rsp+84h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]
  char v28; // [rsp+E0h] [rbp+7Fh] BYREF

  v5 = CVisual::RenderContent((CVisual *)this, a2, a3);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v28 = 0;
    v21[0] = &v28;
    v21[1] = a2;
    v22 = 1;
    if ( this[87] )
    {
      FrameTargetTime = CComposition::GetFrameTargetTime(this[3]);
      if ( *((_BYTE *)this[87] + 112) )
      {
        v8 = CCursorVisual::DrawCrosshair((CCursorVisual *)this, a2);
        v6 = v8;
        if ( v8 < 0 )
        {
          v9 = 319LL;
LABEL_33:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v9,
            (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
            (const char *)(unsigned int)v8);
LABEL_41:
          gsl::final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___::_final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___((__int64)v21);
          return v6;
        }
      }
      v10 = (__int64 **)*((_QWORD *)this[87] + 32);
      for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
      {
        if ( *((_BYTE *)i + 32) )
        {
          if ( !v28 )
          {
            v23 = 8;
            v25 = 0LL;
            LODWORD(v25) = 2;
            v26 = 0;
            v24 = 0LL;
            v12 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v23, 1);
            if ( v12 < 0 )
            {
              v18 = 331LL;
LABEL_24:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v18,
                (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
                (const char *)(unsigned int)v12);
              v6 = v12;
              goto LABEL_41;
            }
            v28 = 1;
          }
        }
        else if ( v28 )
        {
          CDrawingContext::PopRenderOptionsInternal(a2, 1);
          v28 = 0;
        }
        v13 = FrameTargetTime - i[2];
        if ( v13 < 0 )
        {
          v15 = v13 & 1 | ((FrameTargetTime - i[2]) >> 1);
          v14 = (float)(int)v15 + (float)(int)v15;
        }
        else
        {
          v14 = (float)(int)v13;
        }
        v16 = *((_QWORD *)this[87] + 34);
        if ( ((5 * v16) & 0x4000000000000000LL) != 0 )
          v17 = (float)(int)((unsigned __int64)(10 * v16) >> 1) + (float)(int)((unsigned __int64)(10 * v16) >> 1);
        else
          v17 = (float)(10 * v16);
        v12 = CDrawingContext::DrawBitmapRealization(
                a2,
                (struct IBitmapRealization *)i[3],
                (struct D2D_RECT_F *)((char *)i + 36),
                (const struct D2D1::Matrix3x2F *)((char *)i + 52),
                0,
                0,
                COERCE_INT(1.0 - (float)(v14 / v17)));
        if ( v12 < 0 )
        {
          v18 = 349LL;
          goto LABEL_24;
        }
      }
      if ( CCursorVisual::HasVisibleCursor((CCursorVisual *)this) )
      {
        v19 = *((_QWORD *)a2 + 6);
        if ( !v19 || *(CComposition ***)(v19 + 19608) != this )
        {
          if ( *((_BYTE *)this[87] + 81) )
          {
            if ( !v28 )
            {
              v23 = 8;
              v25 = 0LL;
              LODWORD(v25) = 2;
              v26 = 0;
              v24 = 0LL;
              v8 = CDrawingContext::PushRenderOptionsInternal(a2, 0LL, (const struct MilRenderOptions *)&v23, 1);
              v6 = v8;
              if ( v8 < 0 )
              {
                v9 = 361LL;
                goto LABEL_33;
              }
              v28 = 1;
            }
          }
          else if ( v28 )
          {
            CDrawingContext::PopRenderOptionsInternal(a2, 1);
            v28 = 0;
          }
          CCursorState::EnsureCompositionResources(this[87]);
          v8 = CDrawingContext::DrawBitmapRealization(
                 a2,
                 *((struct IBitmapRealization **)this[87] + 15),
                 (struct D2D_RECT_F *)this[87] + 8,
                 (CComposition *)((char *)this[87] + 144),
                 0,
                 0,
                 (int)`CVisual::SetOpacityInternal'::`2'::sc_defaultValue);
          v6 = v8;
          if ( v8 < 0 )
          {
            v9 = 377LL;
            goto LABEL_33;
          }
          this[88] = (CComposition *)*((_QWORD *)this[3] + 111);
        }
      }
    }
    v6 = 0;
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x129,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
