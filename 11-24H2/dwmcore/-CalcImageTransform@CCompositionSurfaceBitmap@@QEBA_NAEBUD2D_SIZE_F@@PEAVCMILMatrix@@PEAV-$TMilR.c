/*
 * XREFs of ?CalcImageTransform@CCompositionSurfaceBitmap@@QEBA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2090
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006A920 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180173270 (-GetDirtyRegion@CSwapchainRenderStrategy@@UEBA_NPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@PEAVCRectangl.c)
 *     ?DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18021333C (-DrawLetterboxingMargins@CCompositionSurfaceBitmap@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180236BA0 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180236DE0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18004CFCC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E140 (-GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E290 (-GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18006AC74 (-HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ @ 0x1800D2830 (-GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ.c)
 *     ?GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2870 (-GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180177658 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::CalcImageTransform(
        CCompositionSurfaceBitmap *this,
        float *a2,
        __int64 a3,
        _QWORD *a4)
{
  CGlobalCompositionSurfaceInfo *v4; // rbx
  unsigned __int8 v5; // si
  struct IBitmapRealization *(__fastcall *v10)(CGlobalCompositionSurfaceInfo *); // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  CGlobalCompositionSurfaceInfo *v13; // rcx
  __int64 (*v14)(void); // rax
  struct ISwapChainRealization *SwapChainRealization; // rax
  unsigned __int8 v16; // al
  CGlobalCompositionSurfaceInfo *v17; // r8
  float v18; // xmm6_4
  char (__fastcall *v19)(__int64, __int64); // rax
  struct ISwapChainRealization *v20; // rax
  char (__fastcall *v21)(__int64, __int64); // r8
  char ScaledLetterboxingMargins; // al
  char v23; // bl
  float v25; // xmm4_4
  float v26; // xmm7_4
  char v27; // cl
  float v28; // xmm0_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  float v31; // xmm2_4
  float v32; // xmm4_4
  int v33; // ecx
  float left; // xmm1_4
  float top; // xmm0_4
  float right; // xmm3_4
  float bottom; // xmm2_4
  float v38; // xmm4_4
  float v39; // xmm2_4
  float v40; // xmm3_4
  float v41; // xmm0_4
  float v42; // xmm1_4
  float v43; // xmm0_4
  char v44; // al
  __int64 v45; // rcx
  float v46; // xmm5_4
  int v47; // [rsp+48h] [rbp-99h]
  struct D2D_RECT_F v48; // [rsp+50h] [rbp-91h] BYREF
  __int128 v49; // [rsp+68h] [rbp-79h] BYREF
  __int128 v50; // [rsp+78h] [rbp-69h]
  __int128 v51; // [rsp+88h] [rbp-59h]
  __int128 v52; // [rsp+98h] [rbp-49h]
  int v53; // [rsp+A8h] [rbp-39h]
  __int128 v54; // [rsp+B8h] [rbp-29h] BYREF
  __int128 v55; // [rsp+C8h] [rbp-19h] BYREF

  v4 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  v5 = 0;
  if ( !v4 )
    goto LABEL_50;
  v10 = *(struct IBitmapRealization *(__fastcall **)(CGlobalCompositionSurfaceInfo *))(*(_QWORD *)v4 + 48LL);
  if ( v10 == CGlobalCompositionSurfaceInfo::GetRenderingRealization )
  {
    if ( !*((_QWORD *)v4 + 26) )
      CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(v4);
    v11 = *((_QWORD *)v4 + 26);
    v12 = v11 + 8;
    if ( !v11 )
      v12 = 0LL;
  }
  else
  {
    v12 = (__int64)v10(v4);
  }
  if ( !v12 )
  {
LABEL_50:
    *(_QWORD *)a3 = 1065353216LL;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_DWORD *)(a3 + 16) = 0;
    *(_QWORD *)(a3 + 20) = 1065353216LL;
    *(_QWORD *)(a3 + 28) = 0LL;
    *(_DWORD *)(a3 + 36) = 0;
    *(_QWORD *)(a3 + 40) = 1065353216LL;
    *(_QWORD *)(a3 + 48) = 0LL;
    *(_DWORD *)(a3 + 56) = 0;
    *(_DWORD *)(a3 + 60) = 1065353216;
    v44 = *(_BYTE *)(a3 + 65);
    *(_BYTE *)(a3 + 64) = -86;
    *(_BYTE *)(a3 + 65) = v44 & 0xC0 | 0x29;
    a4[1] = 0LL;
    *a4 = 0LL;
    return v5;
  }
  v13 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  if ( !v13 )
    goto LABEL_56;
  v14 = *(__int64 (**)(void))(*(_QWORD *)v13 + 456LL);
  if ( (char *)v14 == (char *)&CGlobalCompositionSurfaceInfo::GetSizePreference )
  {
    SwapChainRealization = CGlobalCompositionSurfaceInfo::GetSwapChainRealization(v13);
    if ( SwapChainRealization )
    {
      v14 = *(__int64 (**)(void))(*(_QWORD *)SwapChainRealization + 104LL);
      goto LABEL_12;
    }
LABEL_56:
    v47 = 1;
    goto LABEL_13;
  }
LABEL_12:
  v47 = v14();
LABEL_13:
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v12 + 40LL))(v12, a3, a4);
  v17 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  v5 = v16;
  v18 = 0.0;
  v54 = 0LL;
  if ( !v17 )
    goto LABEL_53;
  v19 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 480LL);
  if ( v19 != CGlobalCompositionSurfaceInfo::GetScaledLetterboxingMargins )
  {
    if ( v19 == CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
    {
      ScaledLetterboxingMargins = CDxHandleBitmapRealization::GetScaledLetterboxingMargins((__int64)v17, (__int64)&v54);
      goto LABEL_18;
    }
    v45 = (__int64)v17;
    if ( v19 == CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins )
      goto LABEL_52;
    goto LABEL_58;
  }
  v20 = CGlobalCompositionSurfaceInfo::GetSwapChainRealization(v17);
  if ( !v20 )
  {
LABEL_53:
    v23 = 0;
    goto LABEL_19;
  }
  v21 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 256LL);
  if ( v21 == CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
  {
    ScaledLetterboxingMargins = CBitmapRealization::GetScaledLetterboxingMargins((char *)v20 - 328);
    goto LABEL_18;
  }
  v45 = (__int64)v20;
  if ( v21 == CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins )
  {
LABEL_52:
    ScaledLetterboxingMargins = CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(v45, (__int64)&v54);
    goto LABEL_18;
  }
  v19 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 256LL);
LABEL_58:
  ScaledLetterboxingMargins = v19(v45, (__int64)&v54);
LABEL_18:
  v23 = ScaledLetterboxingMargins;
  if ( ScaledLetterboxingMargins )
  {
    v25 = *(float *)&v54;
    v26 = *((float *)&v54 + 1);
    if ( COERCE_FLOAT(v54 & _xmm) >= 0.000081380211
      || COERCE_FLOAT(DWORD1(v54) & _xmm) >= 0.000081380211
      || 0.000081380211 <= 0.0 )
    {
      v27 = *(_BYTE *)(a3 + 65);
      v28 = *((float *)&v54 + 1) * *(float *)(a3 + 24);
      v29 = (float)((float)(*(float *)&v54 * *(float *)(a3 + 4)) + (float)(*((float *)&v54 + 1) * *(float *)(a3 + 20)))
          + (float)(*(float *)(a3 + 36) * 0.0);
      v30 = *(float *)(a3 + 40) * 0.0;
      *(float *)(a3 + 48) = (float)((float)((float)(*((float *)&v54 + 1) * *(float *)(a3 + 16))
                                          + (float)(*(float *)&v54 * *(float *)a3))
                                  + (float)(*(float *)(a3 + 32) * 0.0))
                          + *(float *)(a3 + 48);
      v31 = (float)(v25 * *(float *)(a3 + 8)) + v28;
      *(float *)(a3 + 52) = v29 + *(float *)(a3 + 52);
      *(float *)(a3 + 56) = (float)(v31 + v30) + *(float *)(a3 + 56);
      if ( (char)(4 * v27) >> 6 == 1 )
      {
LABEL_25:
        v32 = v25 * *(float *)(a3 + 12);
        v5 = 1;
        *(_DWORD *)(a3 + 64) = 0;
        *(float *)(a3 + 60) = (float)((float)(v32 + (float)(v26 * *(float *)(a3 + 28)))
                                    + (float)(*(float *)(a3 + 44) * 0.0))
                            + *(float *)(a3 + 60);
        goto LABEL_19;
      }
      if ( (char)(4 * v27) >> 6 >= 0 )
      {
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(
                            (float)((float)((float)(COERCE_FLOAT(*(_DWORD *)(a3 + 28) & _xmm) * 61440.0)
                                          + (float)(COERCE_FLOAT(*(_DWORD *)(a3 + 12) & _xmm) * 61440.0))
                                  + COERCE_FLOAT(*(_DWORD *)(a3 + 60) & _xmm))
                          - 1.0) & _xmm) >= 0.000081380211 )
          goto LABEL_25;
        LODWORD(v43) = *(_DWORD *)(a3 + 44) & _xmm;
        *(_BYTE *)(a3 + 65) = v27 | 0x30;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v43 * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
          goto LABEL_25;
      }
      else if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*(_DWORD *)(a3 + 44) & _xmm) * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
      {
        goto LABEL_25;
      }
      *(_BYTE *)(a3 + 64) &= 0xFCu;
    }
    v5 = 1;
  }
LABEL_19:
  if ( *a2 > 0.0 && a2[1] > 0.0 )
  {
    if ( CCompositionSurfaceBitmap::HasSwapChainAttributes(this) )
    {
      v33 = v47;
      if ( v47 != 1 )
      {
        v55 = 0LL;
        v48 = *(struct D2D_RECT_F *)a4;
        left = v48.left;
        top = v48.top;
        right = v48.right;
        bottom = v48.bottom;
        if ( v23 )
        {
          left = v48.left - *(float *)&v54;
          top = v48.top - *((float *)&v54 + 1);
          right = v48.right + *((float *)&v54 + 2);
          bottom = v48.bottom + *((float *)&v54 + 3);
          v48.left = v48.left - *(float *)&v54;
          v48.top = v48.top - *((float *)&v54 + 1);
          v48.right = v48.right + *((float *)&v54 + 2);
          v48.bottom = v48.bottom + *((float *)&v54 + 3);
        }
        if ( v5 )
        {
          CMILMatrix::Transform2DBoundsHelper<0>(a3, &v48, (float *)&v55);
          bottom = *((float *)&v55 + 3);
          right = *((float *)&v55 + 2);
          top = *((float *)&v55 + 1);
          left = *(float *)&v55;
          v33 = v47;
        }
        if ( right > left && bottom > top )
        {
          v38 = *a2;
          v39 = bottom - top;
          v40 = right - left;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(*a2 - v40) & _xmm) > 0.00390625
            || COERCE_FLOAT(COERCE_UNSIGNED_INT(a2[1] - v39) & _xmm) > 0.00390625 )
          {
            v53 = 0;
            v50 = _xmm;
            v49 = _xmm;
            v52 = *(__int128 *)&_xmm.r;
            v51 = _xmm;
            v41 = a2[1];
            LOBYTE(v53) = -86;
            *(_WORD *)((char *)&v53 + 1) = 41;
            v42 = v38 / v40;
            if ( v33 )
            {
              v46 = 0.0;
              if ( v41 < (float)(v42 * v39) )
              {
                v42 = v41 / v39;
                v18 = (float)(v38 - (float)((float)(v41 / v39) * v40)) * 0.5;
              }
              else
              {
                v46 = (float)(v41 - (float)(v42 * v39)) * 0.5;
              }
              v53 = 10632;
              *(float *)&v49 = v42;
              *((float *)&v50 + 1) = v42;
              *(_QWORD *)&v52 = __PAIR64__(LODWORD(v46), LODWORD(v18));
            }
            else
            {
              CMILMatrix::SetScale((CMILMatrix *)&v49, v42, v41 / v39, 1.0, 0.0, 0.0, 0.0);
            }
            CMILMatrix::Multiply((CMILMatrix *)a3, (const struct CMILMatrix *)&v49);
            return 1;
          }
        }
      }
    }
  }
  return v5;
}
