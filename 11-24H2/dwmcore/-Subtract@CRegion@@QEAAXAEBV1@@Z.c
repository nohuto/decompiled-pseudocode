/*
 * XREFs of ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x18002D580
 * Callers:
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180023574 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?CalcDesktopClip@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180027A6C (-CalcDesktopClip@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gs.c)
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002C7D0 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x18006522C (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180171F24 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18027AD9C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180284788 (-CalcVisibleArea@CArrayBasedCoverageSet@@QEBA_KAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802C7D80 (-NotifyRenderedRect@CCompSwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DR.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802D8364 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002D890 (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002DB30 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CRegion::Subtract(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  const struct FastRegion::Internal::CRgnData *v8; // rsi
  int v9; // edi
  _DWORD *v10; // r14
  int *v11; // r15
  int v12; // ebp
  int v13; // eax
  int v14; // edx
  int v15; // r11d
  __int64 v16; // r9
  _DWORD *v17; // rax
  _DWORD *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r9
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v25; // rax
  int v26; // [rsp+20h] [rbp-148h]
  FastRegion::Internal::CRgnData *lpMem; // [rsp+28h] [rbp-140h]
  _BYTE v28[256]; // [rsp+30h] [rbp-138h] BYREF
  void *retaddr; // [rsp+168h] [rbp+0h]

  v4 = *a2;
  if ( !*(_DWORD *)v4 )
    return;
  v5 = *this;
  if ( !*(_DWORD *)v5 )
    return;
  v6 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(v5, v4);
  v7 = (FastRegion::Internal::CRgnData *)v28;
  lpMem = (FastRegion::Internal::CRgnData *)v28;
  v26 = v6;
  if ( (unsigned __int64)v6 > 0x100 )
  {
    v25 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v6);
    v7 = v25;
    if ( !v25 )
    {
      v9 = -2147024882;
      goto LABEL_19;
    }
    lpMem = v25;
  }
  FastRegion::Internal::CRgnData::Subtract(v7, *this, *a2);
  v8 = lpMem;
  v9 = 0;
  if ( !*(_DWORD *)lpMem )
  {
    *(_DWORD *)*this = 0;
    goto LABEL_15;
  }
  if ( v28 != (_BYTE *)lpMem )
  {
    lpMem = (FastRegion::Internal::CRgnData *)v28;
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = v8;
    *((_DWORD *)this + 2) = v26;
    goto LABEL_15;
  }
  v10 = *this;
  v11 = (int *)(this + 1);
  v12 = *((_DWORD *)lpMem + 2 * *(_DWORD *)lpMem + 2)
      + 8 * *(_DWORD *)lpMem
      - *((_DWORD *)lpMem + 4)
      - 12
      + 8 * (*(_DWORD *)lpMem - 1)
      + 24;
  v13 = 60;
  if ( this + 1 != (const struct FastRegion::Internal::CRgnData **)*this )
    v13 = *v11;
  if ( v13 < v12 )
  {
    v10 = MIDL_user_allocate(v12);
    if ( !v10 )
    {
      v9 = -2147024882;
      goto LABEL_15;
    }
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)this);
    *this = (const struct FastRegion::Internal::CRgnData *)v10;
    *v11 = v12;
  }
  v14 = *(_DWORD *)lpMem;
  *v10 = *(_DWORD *)lpMem;
  v15 = 0;
  v10[1] = *((_DWORD *)lpMem + 1);
  v10[2] = *((_DWORD *)lpMem + 2);
  v16 = (__int64)lpMem + *((int *)lpMem + 4) + 12;
  v17 = &v10[2 * v14 + 3];
  if ( v14 > 0 )
  {
    v18 = v10 + 3;
    do
    {
      *v18 = *(_DWORD *)((char *)v18 + lpMem - (FastRegion::Internal::CRgnData *)v10);
      v18 += 2;
      v19 = v15++;
      v10[2 * v19 + 4] = (_DWORD)lpMem
                       + 8 * v19
                       + 4 * (((__int64)v17 - v16) >> 2)
                       + *((_DWORD *)lpMem + 2 * v19 + 4)
                       - ((_DWORD)v10
                        + 8 * v19);
    }
    while ( v15 < *v10 );
  }
  v20 = (__int64)lpMem + 8 * *(_DWORD *)lpMem + 4;
  v21 = (unsigned __int64)((int)v20 + *(_DWORD *)(v20 + 4) - *((_DWORD *)lpMem + 4) - ((int)lpMem + 12)) >> 2;
  v22 = (int)v21;
  if ( (int)v21 > 0 )
  {
    v23 = v16 - (_QWORD)v17;
    do
    {
      *v17 = *(_DWORD *)((char *)v17 + v23);
      ++v17;
      --v22;
    }
    while ( v22 );
  }
LABEL_15:
  if ( v28 != (_BYTE *)lpMem )
  {
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpMem);
    }
  }
  if ( v9 < 0 )
LABEL_19:
    ModuleFailFastForHRESULT(v9, retaddr);
}
