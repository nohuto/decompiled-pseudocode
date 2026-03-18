/*
 * XREFs of ?DrawCrosshair@CCursorVisual@@AEBAJPEAVCDrawingContext@@@Z @ 0x180299E64
 * Callers:
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18029A990 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV?$span@$$CBUD2D_RECT_F@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18007466C (-FillRectanglesWithSolidColor@CDrawingContext@@QEAAJAEBV-$span@$$CBUD2D_RECT_F@@$0-0@gsl@@AEBU_D.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z @ 0x1801FA2CC (-Contains@@YA_NAEBUD2D_RECT_F@@AEBUD2D_POINT_2F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetCurrentTargetDesktopScale@CDrawingContext@@QEBA?BMXZ @ 0x18029A684 (-GetCurrentTargetDesktopScale@CDrawingContext@@QEBA-BMXZ.c)
 *     ?GetCurrentTargetTreeBounds@CDrawingContext@@QEBA?BV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18029A6FC (-GetCurrentTargetTreeBounds@CDrawingContext@@QEBA-BV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     roundf_0 @ 0x1802E8908 (roundf_0.c)
 */

__int64 __fastcall CCursorVisual::DrawCrosshair(CCursorVisual *this, struct CDrawingContext *a2)
{
  __int128 v2; // xmm0
  __int128 v4; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v9; // r8
  __int64 v10; // rdi
  float CurrentTargetDesktopScale; // xmm11_4
  float v12; // xmm6_4
  float v13; // xmm0_4
  float v14; // xmm13_4
  float v15; // xmm12_4
  FLOAT left; // xmm10_4
  FLOAT top; // xmm9_4
  FLOAT right; // xmm8_4
  FLOAT bottom; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  __int64 v22; // rdi
  int v23; // ebx
  __int64 v24; // rdx
  int v26[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 *v27; // [rsp+30h] [rbp-D8h]
  struct D2D_RECT_F v28; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+58h] [rbp-B0h]
  __int128 v31; // [rsp+68h] [rbp-A0h]
  __int128 v32; // [rsp+78h] [rbp-90h]
  int v33; // [rsp+88h] [rbp-80h]
  _DWORD v34[16]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  v2 = *(_OWORD *)((char *)this + 600);
  v4 = *(_OWORD *)((char *)this + 616);
  v33 = *((_DWORD *)this + 166);
  v29 = v2;
  v6 = *(_OWORD *)((char *)this + 632);
  v30 = v4;
  v7 = *(_OWORD *)((char *)this + 648);
  v31 = v6;
  v32 = v7;
  if ( CMILMatrix::Is2DAxisAlignedPreserving((CMILMatrix *)&v29) )
  {
    if ( CMILMatrix::Invert((CMILMatrix *)&v29, v8, v9) )
    {
      CDrawingContext::GetCurrentTargetTreeBounds(a2, &v28);
      if ( !IsEmpty(&v28) )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v29, &v28, &v28.left);
        v10 = *((_QWORD *)this + 87);
        if ( Contains(&v28, (const struct D2D_POINT_2F *)(v10 + 212)) )
        {
          CurrentTargetDesktopScale = CDrawingContext::GetCurrentTargetDesktopScale(a2);
          v12 = roundf_0(CurrentTargetDesktopScale * 3.0);
          v13 = roundf_0(CurrentTargetDesktopScale * 20.0);
          v14 = *(float *)(v10 + 216);
          v15 = *(float *)(v10 + 212);
          left = v28.left;
          top = v28.top;
          right = v28.right;
          v34[0] = LODWORD(v28.left);
          v34[5] = LODWORD(v28.top);
          *(float *)&v34[7] = v14 - v13;
          v34[10] = LODWORD(v28.right);
          *(float *)&v34[2] = v15 - v13;
          *(float *)&v34[1] = v14 - v12;
          *(float *)&v34[9] = v14 - v12;
          *(float *)&v34[13] = v14 + v13;
          bottom = v28.bottom;
          *(float *)&v34[3] = v14 + v12;
          *(float *)&v34[4] = v15 - v12;
          *(float *)&v34[6] = v15 + v12;
          *(float *)&v34[8] = v15 + v13;
          *(float *)&v34[11] = v14 + v12;
          *(float *)&v34[12] = v15 - v12;
          *(float *)&v34[14] = v15 + v12;
          v34[15] = LODWORD(v28.bottom);
          v20 = roundf_0(CurrentTargetDesktopScale + CurrentTargetDesktopScale);
          v21 = roundf_0(CurrentTargetDesktopScale * 21.0);
          *(FLOAT *)&v29 = left;
          *((FLOAT *)&v30 + 1) = top;
          *((FLOAT *)&v31 + 2) = right;
          *((float *)&v29 + 2) = v15 - v21;
          *((float *)&v29 + 1) = v14 - v20;
          *((float *)&v29 + 3) = v14 + v20;
          *(float *)&v30 = v15 - v20;
          *((float *)&v30 + 3) = v14 - v21;
          *(float *)&v31 = v15 + v21;
          *((float *)&v30 + 2) = v15 + v20;
          *((float *)&v31 + 1) = v14 - v20;
          *((float *)&v31 + 3) = v14 + v20;
          v22 = *((_QWORD *)this + 87);
          *(float *)&v32 = v15 - v20;
          *((float *)&v32 + 2) = v15 + v20;
          *((FLOAT *)&v32 + 3) = bottom;
          v28.left = 1.0;
          *((float *)&v32 + 1) = v14 + v21;
          v28.bottom = *(FLOAT *)(v22 + 208);
          v28.top = 1.0;
          v28.right = 1.0;
          *(_QWORD *)v26 = 4LL;
          v27 = (__int128 *)v34;
          v23 = CDrawingContext::FillRectanglesWithSolidColor(a2, (__int64)v26, (__int64)&v28);
          if ( v23 < 0 )
          {
            v24 = 132LL;
LABEL_7:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v24,
              (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\global\\cursorvisual.cpp",
              (const char *)(unsigned int)v23);
            return (unsigned int)v23;
          }
          *(_QWORD *)v26 = 4LL;
          v27 = &v29;
          v23 = CDrawingContext::FillRectanglesWithSolidColor(a2, (__int64)v26, v22 + 196);
          if ( v23 < 0 )
          {
            v24 = 133LL;
            goto LABEL_7;
          }
        }
      }
    }
  }
  return 0LL;
}
