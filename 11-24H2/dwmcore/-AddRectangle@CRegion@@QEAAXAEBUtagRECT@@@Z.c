/*
 * XREFs of ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB240 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800F7980 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180171F24 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 *     ?AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x1801723F0 (-AddOcclusionRegion@CLegacyRenderTarget@@UEBA_NPEAVCRegion@@@Z.c)
 *     ?AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z @ 0x1801728D0 (-AddOcclusionRegion@CDDisplayRenderTarget@@UEBA_NPEAVCRegion@@@Z.c)
 *     ?AddTightDirtyRect@?$CTargetDirtyBase@$07@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180172990 (-AddTightDirtyRect@-$CTargetDirtyBase@$07@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ @ 0x180172CD0 (-GetContentRegion@CPrimitiveGroupDrawListGenerator@@QEAAPEBVCRegion@@XZ.c)
 *     ?BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x180172D2C (-BuildCommandList@CComputeScribbleFramebuffer@@AEAAJPEAVCComputeScribbleStopwatch@@PEAUIDComposi.c)
 *     ?AddTightDeviceDirtyRect@?$CTargetDirtyBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1538 (-AddTightDeviceDirtyRect@-$CTargetDirtyBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x1802317DC (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18027EEC0 (-AddTightDirtyRect@CMonitorDirty@@MEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?GetContentBounds@CCursorVisual@@UEAAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180290020 (-GetContentBounds@CCursorVisual@@UEAAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002AFC0 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002B300 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z @ 0x18002EC00 (-CopyData@CRegion@FastRegion@@IEAAJPEBVCRgnData@Internal@2@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18003DFB0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CRegion::AddRectangle(const struct FastRegion::Internal::CRgnData **this, const struct tagRECT *a2)
{
  LONG right; // r9d
  LONG left; // r10d
  LONG top; // r8d
  _DWORD *v6; // rbx
  unsigned int v7; // ecx
  int v8; // r12d
  int v9; // edi
  int v10; // esp
  int *v11; // r15
  signed int v12; // r14d
  int v13; // eax
  int v14; // r10d
  signed int v15; // r8d
  char *v16; // r11
  char *v17; // rax
  _DWORD *v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r11
  void *v23; // rbx
  HANDLE ProcessHeap; // rax
  int v25; // eax
  FastRegion::Internal::CRgnData *v26; // rcx
  int v27; // r14d
  const struct FastRegion::Internal::CRgnData *v28; // rbx
  FastRegion::Internal::CRgnData *v29; // rax
  LPVOID lpMem; // [rsp+28h] [rbp-E0h] BYREF
  int v31; // [rsp+30h] [rbp-D8h] BYREF
  LONG v32; // [rsp+34h] [rbp-D4h]
  LONG v33; // [rsp+38h] [rbp-D0h]
  LONG v34; // [rsp+3Ch] [rbp-CCh] BYREF
  signed int v35; // [rsp+40h] [rbp-C8h]
  _DWORD v36[2]; // [rsp+44h] [rbp-C4h] BYREF
  _DWORD v37[5]; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v38; // [rsp+78h] [rbp-90h]
  FastRegion::Internal::CRgnData *v39; // [rsp+80h] [rbp-88h]
  _BYTE v40[256]; // [rsp+88h] [rbp-80h] BYREF
  void *retaddr; // [rsp+1C0h] [rbp+B8h]

  right = a2->right;
  left = a2->left;
  top = a2->top;
  lpMem = &v31;
  if ( left >= right || top >= a2->bottom )
    return;
  v36[0] = a2->bottom;
  v6 = *this;
  v7 = (unsigned int)v37 - (unsigned int)v36;
  v34 = top;
  v32 = left;
  v8 = 2;
  v33 = right;
  v31 = 2;
  v36[1] = v7 + 8;
  v35 = (unsigned int)v37 - (unsigned int)&v34;
  v37[0] = left;
  v37[1] = right;
  if ( *v6 )
  {
    v25 = FastRegion::Internal::CRgnData::EstimateSizeUnion(
            (const struct FastRegion::Internal::CRgnData *)v6,
            (const struct FastRegion::Internal::CRgnData *)&v31);
    v26 = (FastRegion::Internal::CRgnData *)v40;
    v39 = (FastRegion::Internal::CRgnData *)v40;
    LODWORD(v38) = v25;
    if ( (unsigned __int64)v25 > 0x100 )
    {
      v29 = (FastRegion::Internal::CRgnData *)MIDL_user_allocate(v25);
      v26 = v29;
      if ( !v29 )
      {
        if ( v40 != (_BYTE *)v39 )
          operator delete(v39);
        v9 = -2147024882;
        goto LABEL_15;
      }
      v39 = v29;
    }
    FastRegion::Internal::CRgnData::Union(v26, *this, (const struct FastRegion::Internal::CRgnData *)lpMem);
    v9 = 0;
    if ( *(_DWORD *)v39 )
    {
      if ( v40 == (_BYTE *)v39 )
      {
        v9 = FastRegion::CRegion::CopyData(this, v39);
      }
      else
      {
        v27 = v38;
        v28 = v39;
        LODWORD(v38) = 0;
        v39 = (FastRegion::Internal::CRgnData *)v40;
        FastRegion::CRegion::FreeMemory(this);
        *this = v28;
        *((_DWORD *)this + 2) = v27;
      }
    }
    else
    {
      *(_DWORD *)*this = 0;
    }
    if ( v40 != (_BYTE *)v39 )
      operator delete(v39);
  }
  else
  {
    v9 = 0;
    if ( this != (const struct FastRegion::Internal::CRgnData **)&lpMem )
    {
      v11 = (int *)(this + 1);
      v12 = v7 - ((unsigned int)v37 - (unsigned int)&v34) - (unsigned int)&v34 + v10 + 96;
      v13 = 60;
      if ( this + 1 != (const struct FastRegion::Internal::CRgnData **)v6 )
        v13 = *v11;
      if ( v13 >= v12 )
        goto LABEL_8;
      v6 = MIDL_user_allocate(v12);
      if ( v6 )
      {
        FastRegion::CRegion::FreeMemory(this);
        v8 = v31;
        *this = (const struct FastRegion::Internal::CRgnData *)v6;
        *v11 = v12;
LABEL_8:
        *v6 = v8;
        v14 = 0;
        v6[1] = v32;
        v6[2] = v33;
        v15 = v35;
        v16 = (char *)&v34 + v35;
        v17 = (char *)&v6[2 * v8 + 3];
        if ( v8 > 0 )
        {
          v18 = v6 + 3;
          do
          {
            *v18 = *(_DWORD *)((char *)v18 + (char *)&v31 - (char *)v6);
            v18 += 2;
            v19 = v14++;
            v6[2 * v19 + 4] = (unsigned int)(&v34 + 2 * v19)
                            + 4 * ((v17 - v16) >> 2)
                            + *(&v34 + 2 * v19 + 1)
                            - ((_DWORD)v6
                             + 8 * v19
                             + 12);
          }
          while ( v14 < *v6 );
          v15 = v35;
        }
        v20 = (unsigned __int64)(int)((unsigned int)&v34
                                    + 8 * (v31 - 1)
                                    + *(&v34 + 2 * v31 - 1)
                                    - v15
                                    - (unsigned int)&v34) >> 2;
        v21 = (int)v20;
        if ( (int)v20 > 0 )
        {
          v22 = v16 - v17;
          do
          {
            *(_DWORD *)v17 = *(_DWORD *)&v17[v22];
            v17 += 4;
            --v21;
          }
          while ( v21 );
        }
        goto LABEL_15;
      }
      v9 = -2147024882;
    }
  }
LABEL_15:
  v23 = lpMem;
  if ( &v31 != lpMem && lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v23);
  }
  if ( v9 < 0 )
    ModuleFailFastForHRESULT(v9, retaddr);
}
