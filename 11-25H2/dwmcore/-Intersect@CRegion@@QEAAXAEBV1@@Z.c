/*
 * XREFs of ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x180105B10
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18009E960 (-IsRegionValid@CSecondaryBitmap@@QEAA_NPEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUn.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800CB30C (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180105228 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x180170F18 (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x180173810 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     ?AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x1801E7700 (-AddTransientRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802D5BC0 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802E0340 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180105DE0 (-EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180105FF0 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CRegion::Intersect(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  const struct FastRegion::Internal::CRgnData *v4; // rdx
  const struct FastRegion::Internal::CRgnData *v5; // rcx
  int v6; // eax
  FastRegion::Internal::CRgnData *v7; // rcx
  const struct FastRegion::Internal::CRgnData *v8; // rsi
  int v9; // ebx
  _DWORD *v10; // rbx
  int *v11; // r15
  int v12; // r14d
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  _DWORD *v16; // r8
  __int64 v17; // r9
  _DWORD *v18; // r11
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r9
  HANDLE ProcessHeap; // rax
  FastRegion::Internal::CRgnData *v25; // rax
  int v26; // [rsp+20h] [rbp-E0h]
  FastRegion::Internal::CRgnData *lpMem; // [rsp+28h] [rbp-D8h]
  _BYTE v28[256]; // [rsp+30h] [rbp-D0h] BYREF
  void *retaddr; // [rsp+168h] [rbp+68h]

  v4 = *a2;
  v5 = *this;
  if ( !*(_DWORD *)v4 )
  {
    *(_DWORD *)v5 = 0;
    return;
  }
  if ( *(_DWORD *)v5 )
  {
    v6 = FastRegion::Internal::CRgnData::EstimateSizeIntersect(v5, v4);
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
        goto LABEL_23;
      }
      lpMem = v25;
    }
    FastRegion::Internal::CRgnData::Intersect(v7, *this, *a2);
    v8 = lpMem;
    v9 = 0;
    if ( !*(_DWORD *)lpMem )
    {
      *(_DWORD *)*this = 0;
      goto LABEL_16;
    }
    if ( v28 != (_BYTE *)lpMem )
    {
      lpMem = (FastRegion::Internal::CRgnData *)v28;
      FastRegion::CRegion::FreeMemory(this);
      *this = v8;
      *((_DWORD *)this + 2) = v26;
      goto LABEL_16;
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
        goto LABEL_16;
      }
      FastRegion::CRegion::FreeMemory(this);
      *this = (const struct FastRegion::Internal::CRgnData *)v10;
      *v11 = v12;
    }
    v14 = *(_DWORD *)lpMem;
    v15 = 0;
    *v10 = *(_DWORD *)lpMem;
    v10[1] = *((_DWORD *)lpMem + 1);
    v10[2] = *((_DWORD *)lpMem + 2);
    v16 = &v10[2 * v14 + 3];
    v17 = (__int64)lpMem + *((int *)lpMem + 4) + 12;
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
                         + 4 * (((__int64)v16 - v17) >> 2)
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
      v23 = v17 - (_QWORD)v16;
      do
      {
        *v16 = *(_DWORD *)((char *)v16 + v23);
        ++v16;
        --v22;
      }
      while ( v22 );
    }
    v9 = 0;
LABEL_16:
    if ( v28 != (_BYTE *)lpMem )
    {
      if ( lpMem )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
      }
    }
    if ( v9 >= 0 )
      return;
LABEL_23:
    ModuleFailFastForHRESULT(v9, retaddr);
  }
}
