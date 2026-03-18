/*
 * XREFs of ?CalcSourceRect@CBitmapRealization@@IEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18002C920
 * Callers:
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x18002C31C (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 *     ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18002C7A4 (-IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChai.c)
 *     ?GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18021C370 (-GetSourceRect@CDxHandleBitmapRealization@@UEBAAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeede.c)
 *     ?GetMPORects@CBitmapRealization@@IEBAXAEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@11@Z @ 0x180247C34 (-GetMPORects@CBitmapRealization@@IEBAXAEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180061220 (-IsEmpty@-$TMilRect@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

unsigned int *__fastcall CBitmapRealization::CalcSourceRect(unsigned int *a1)
{
  unsigned int *v1; // rbx
  unsigned int *result; // rax
  unsigned int *v3; // rdi
  struct D2D_SIZE_U (__fastcall *v4)(CBitmapRealization *__hidden); // rax
  signed int v5; // edx
  signed int v6; // r9d
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  __int64 v9; // r8
  int v10; // r8d
  signed int v11; // r10d
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1;
  if ( *((_BYTE *)a1 + 320) )
    return a1 + 76;
  v3 = a1 + 39;
  v4 = *(struct D2D_SIZE_U (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)a1 + 48LL);
  if ( v4 == CBitmapRealization::GetTextureSize )
  {
    a1 += 20;
    v4 = *(struct D2D_SIZE_U (__fastcall **)(CBitmapRealization *__hidden))(*((_QWORD *)v1 + 10) + 32LL);
  }
  ((void (__fastcall *)(unsigned int *, __int64 *))v4)(a1, &v12);
  v5 = v12;
  v6 = HIDWORD(v12);
  if ( v1[75] == 2 )
  {
    if ( (int)(v3[2] - *v3) > 0 && (int)(v3[3] - v3[1]) > 0 )
      goto LABEL_18;
  }
  else
  {
    v9 = *v3;
    if ( (int)v9 <= (int)v3[2]
      && (int)v3[1] <= (int)v3[3]
      && ((unsigned __int8)TMilRect<int,tagRECT,D2D_POINTANDSIZE_L,RectUniqueness::_CMilRectL_>::IsEmpty(
                             v3,
                             v12,
                             v9,
                             HIDWORD(v12))
       || v10 >= 0 && (v3[1] & 0x80000000) == 0 && v11 <= v5 && (int)v3[3] <= v6) )
    {
      v3 = v1 + 39;
LABEL_18:
      v6 = v1[42];
      v5 = v1[41];
      v7 = v1[40];
      v8 = *v3;
      goto LABEL_8;
    }
  }
  v7 = 0;
  v8 = 0;
LABEL_8:
  result = v1 + 76;
  v1[76] = v8;
  v1[77] = v7;
  v1[78] = v5;
  v1[79] = v6;
  *((_BYTE *)v1 + 320) = 1;
  return result;
}
