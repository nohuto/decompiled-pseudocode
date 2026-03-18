/*
 * XREFs of ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D1DF0
 * Callers:
 *     ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801F0DA0 (-HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ @ 0x18004CFCC (-ForceUpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAAJXZ.c)
 *     ?GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E140 (-GetScaledLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005E290 (-GetScaledLetterboxingMargins@CDxHandleBitmapRealization@@UEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD.c)
 *     ?HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18006AC74 (-HasSwapChainAttributes@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ @ 0x1800D2830 (-GetSwapChainRealization@CGlobalCompositionSurfaceInfo@@IEBAPEAVISwapChainRealization@@XZ.c)
 *     ?GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D2870 (-GetScaledLetterboxingMargins@CBitmapRealization@@IEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GetBounds(CCompositionSurfaceBitmap *this, float *a2, __int64 a3)
{
  CGlobalCompositionSurfaceInfo *v3; // rbx
  struct IBitmapRealization *(__fastcall *v7)(CGlobalCompositionSurfaceInfo *); // rax
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 v10; // rax
  char v11; // al
  CGlobalCompositionSurfaceInfo *v12; // rcx
  char v13; // bl
  char (__fastcall *v14)(__int64, __int64); // rax
  struct ISwapChainRealization *SwapChainRealization; // rax
  char (__fastcall *v16)(__int64, __int64); // r8
  char ScaledLetterboxingMargins; // al
  _BYTE v19[64]; // [rsp+20h] [rbp-98h] BYREF
  int v20; // [rsp+60h] [rbp-58h]
  __int128 v21; // [rsp+70h] [rbp-48h] BYREF
  struct D2D_RECT_F v22; // [rsp+80h] [rbp-38h] BYREF

  v3 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  if ( !v3 )
    goto LABEL_25;
  v7 = *(struct IBitmapRealization *(__fastcall **)(CGlobalCompositionSurfaceInfo *))(*(_QWORD *)v3 + 48LL);
  if ( v7 == CGlobalCompositionSurfaceInfo::GetRenderingRealization )
  {
    if ( !*((_QWORD *)v3 + 26) )
      CGlobalCompositionSurfaceInfo::ForceUpdateRenderingRealization(v3);
    v8 = *((_QWORD *)v3 + 26);
    v9 = (__int64 *)(v8 + 8);
    if ( !v8 )
      v9 = 0LL;
  }
  else
  {
    v9 = (__int64 *)v7(v3);
  }
  if ( !v9 )
  {
LABEL_25:
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_QWORD *)a3 = 0LL;
    return 0LL;
  }
  if ( *a2 > 0.0 && a2[1] > 0.0 && CCompositionSurfaceBitmap::HasSwapChainAttributes(this) )
  {
    *(_QWORD *)a3 = 0LL;
    *(float *)(a3 + 8) = *a2;
    *(float *)(a3 + 12) = a2[1];
    return 0LL;
  }
  v10 = *v9;
  v20 = 0;
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, struct D2D_RECT_F *))(v10 + 40))(v9, v19, &v22);
  v12 = (CGlobalCompositionSurfaceInfo *)*((_QWORD *)this + 12);
  v13 = v11;
  v21 = 0LL;
  if ( v12 )
  {
    v14 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 480LL);
    if ( v14 != CGlobalCompositionSurfaceInfo::GetScaledLetterboxingMargins )
    {
      if ( v14 == CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
      {
        ScaledLetterboxingMargins = CDxHandleBitmapRealization::GetScaledLetterboxingMargins(
                                      (__int64)v12,
                                      (__int64)&v21);
        goto LABEL_14;
      }
      if ( v14 == CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins )
        goto LABEL_27;
      goto LABEL_31;
    }
    SwapChainRealization = CGlobalCompositionSurfaceInfo::GetSwapChainRealization(v12);
    if ( SwapChainRealization )
    {
      v16 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)SwapChainRealization + 256LL);
      if ( v16 == CDxHandleBitmapRealization::GetScaledLetterboxingMargins )
      {
        ScaledLetterboxingMargins = CBitmapRealization::GetScaledLetterboxingMargins((char *)SwapChainRealization - 328);
        goto LABEL_14;
      }
      v12 = SwapChainRealization;
      if ( v16 == CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins )
      {
LABEL_27:
        ScaledLetterboxingMargins = CDxHandleYUVBitmapRealization::GetScaledLetterboxingMargins(
                                      (__int64)v12,
                                      (__int64)&v21);
        goto LABEL_14;
      }
      v14 = *(char (__fastcall **)(__int64, __int64))(*(_QWORD *)SwapChainRealization + 256LL);
LABEL_31:
      ScaledLetterboxingMargins = v14((__int64)v12, (__int64)&v21);
LABEL_14:
      if ( ScaledLetterboxingMargins )
      {
        v22.right = v22.right + (float)(*((float *)&v21 + 2) + *(float *)&v21);
        v22.bottom = v22.bottom + (float)(*((float *)&v21 + 3) + *((float *)&v21 + 1));
      }
    }
  }
  if ( v13 )
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v19, &v22, (float *)a3);
  else
    *(struct D2D_RECT_F *)a3 = v22;
  return 0LL;
}
