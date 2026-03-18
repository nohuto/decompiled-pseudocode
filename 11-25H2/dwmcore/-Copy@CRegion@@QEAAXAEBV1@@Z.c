/*
 * XREFs of ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180173370
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004C4F0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004F5D0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z @ 0x180170F18 (-ConvertDesktopAndAppPlanes@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@0@Z.c)
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1801714A0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x180173330 (-SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 *     ?GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVCMergedRect@@@Z @ 0x180173810 (-GetComputeScribbleInvalidRects@CScribbleSwapChain@@UEAAJAEBVCMILMatrix@@AEBV-$TMilRect@IUMilRec.c)
 *     ?BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z @ 0x1801E970C (-BuildFromCRegion@CRegionShape@@QEAAXAEBVCRegion@@@Z.c)
 *     ?CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ @ 0x1802D0950 (-CopyFrontToBackBuffer@CCompSwapChain@@UEAAJXZ.c)
 *     ?Present@CCompSwapChain@@QEAAJII@Z @ 0x1802D1160 (-Present@CCompSwapChain@@QEAAJII@Z.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x1802E0340 (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180099AE0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CRegion::Copy(FastRegion::CRegion **this, FastRegion::CRegion **a2)
{
  int *v2; // rbx
  int v4; // r8d
  CRegion *v5; // rdi
  int *v6; // r15
  int v7; // eax
  int v8; // ebp
  int v9; // ecx
  int v10; // r10d
  __int64 v11; // r11
  _DWORD *v12; // rax
  _DWORD *v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r11
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( this != a2 )
  {
    v2 = (int *)*a2;
    v4 = *(_DWORD *)*a2;
    if ( v4 )
    {
      v5 = *this;
      v6 = (int *)(this + 1);
      v7 = 60;
      v8 = v2[2 * v4 + 2] + 8 * v4 - 12 - v2[4] + 8 * (v4 - 1) + 24;
      if ( this + 1 != (FastRegion::CRegion **)*this )
        v7 = *v6;
      if ( v7 < v8 )
      {
        v5 = (CRegion *)MIDL_user_allocate(v8);
        if ( !v5 )
          ModuleFailFastForHRESULT(-2147024882, retaddr);
        FastRegion::CRegion::FreeMemory(this);
        *this = v5;
        *v6 = v8;
      }
      v9 = *v2;
      v10 = 0;
      *(_DWORD *)v5 = *v2;
      *((_DWORD *)v5 + 1) = v2[1];
      *((_DWORD *)v5 + 2) = v2[2];
      v11 = (__int64)v2 + v2[4] + 12;
      v12 = (_DWORD *)((char *)v5 + 8 * v9 + 12);
      if ( v9 > 0 )
      {
        v13 = (_DWORD *)((char *)v5 + 12);
        do
        {
          *v13 = *(_DWORD *)((char *)v13 + (char *)v2 - (char *)v5);
          v13 += 2;
          v14 = v10++;
          *((_DWORD *)v5 + 2 * v14 + 4) = (_DWORD)v2
                                        + 8 * v14
                                        + 4 * (((__int64)v12 - v11) >> 2)
                                        + v2[2 * v14 + 4]
                                        - ((_DWORD)v5
                                         + 8 * v14);
        }
        while ( v10 < *(_DWORD *)v5 );
      }
      v15 = (__int64)&v2[2 * *v2 + 1];
      v16 = (unsigned __int64)((int)v15 + *(_DWORD *)(v15 + 4) - v2[4] - ((int)v2 + 12)) >> 2;
      v17 = (int)v16;
      if ( (int)v16 > 0 )
      {
        v18 = v11 - (_QWORD)v12;
        do
        {
          *v12 = *(_DWORD *)((char *)v12 + v18);
          ++v12;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
  }
}
