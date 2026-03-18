/*
 * XREFs of ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18005EFA0
 * Callers:
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18005E5AC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18005ED4C (-IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChai.c)
 *     ?GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x18005EEC0 (-GetMPORects@CDxHandleBitmapRealization@@UEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x180210960 (-GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeede.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180027EE0 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BYTE *__fastcall CBitmapRealization::CalcSourceRect(_BYTE *a1)
{
  _BYTE *v1; // rbx
  _BYTE *result; // rax
  int *v3; // rdi
  struct D2D_SIZE_U (__fastcall *v4)(CBitmapRealization *__hidden); // rax
  int v5; // edx
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d
  int v9; // r8d
  int v10; // r10d
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v1 = a1;
  if ( a1[320] )
    return a1 + 304;
  v3 = (int *)(a1 + 156);
  v4 = *(struct D2D_SIZE_U (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)a1 + 48LL);
  if ( v4 == CBitmapRealization::GetTextureSize )
  {
    a1 += 80;
    v4 = *(struct D2D_SIZE_U (__fastcall **)(CBitmapRealization *__hidden))(*((_QWORD *)v1 + 10) + 32LL);
  }
  ((void (__fastcall *)(_BYTE *, int *))v4)(a1, &v11);
  v5 = v11;
  v6 = v12;
  if ( *((_DWORD *)v1 + 75) == 2 )
  {
    if ( v3[2] - *v3 > 0 && v3[3] - v3[1] > 0 )
      goto LABEL_18;
  }
  else if ( *v3 <= v3[2]
         && v3[1] <= v3[3]
         && (TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(v3)
          || v9 >= 0 && v3[1] >= 0 && v10 <= v5 && v3[3] <= v6) )
  {
    v3 = (int *)(v1 + 156);
LABEL_18:
    v6 = *((_DWORD *)v1 + 42);
    v5 = *((_DWORD *)v1 + 41);
    v7 = *((_DWORD *)v1 + 40);
    v8 = *v3;
    goto LABEL_8;
  }
  v7 = 0;
  v8 = 0;
LABEL_8:
  result = v1 + 304;
  *((_DWORD *)v1 + 76) = v8;
  *((_DWORD *)v1 + 77) = v7;
  *((_DWORD *)v1 + 78) = v5;
  *((_DWORD *)v1 + 79) = v6;
  v1[320] = 1;
  return result;
}
