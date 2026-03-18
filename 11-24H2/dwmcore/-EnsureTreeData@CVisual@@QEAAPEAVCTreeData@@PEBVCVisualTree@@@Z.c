/*
 * XREFs of ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800A0D70
 * Callers:
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000A138 (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x18003B380 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z @ 0x18003B800 (-DirtyBoundsForTransformParentChild@CPreWalkVisual@@CAXPEAVCVisual@@PEBVCVisualTree@@@Z.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180048BB8 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800F7980 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 *     ?EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z @ 0x180186168 (-EnsureVisualTransform@CVisualTree@@QEBAJPEAVCVisual@@@Z.c)
 *     ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1802027F4 (-InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ??0CTreeData@@IEAA@XZ @ 0x1800A0C10 (--0CTreeData@@IEAA@XZ.c)
 *     ?Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z @ 0x1800A2CC0 (-Initialize@CTreeData@@MEAAXPEAVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void ***__fastcall CVisual::EnsureTreeData(CVisual *this, void **a2)
{
  int **v2; // rsi
  unsigned int v4; // ebp
  void ***v6; // rbx
  int **v7; // r8
  int *v9; // r9
  __int64 v10; // rax
  _BYTE *v11; // rdx
  __int64 i; // rcx
  __int64 ****v13; // rcx
  __int64 ***v14; // rcx
  __int64 **j; // rax
  unsigned int *v16; // r9
  int v17; // r10d
  __int64 v18; // r8
  _BYTE *v19; // r11
  unsigned int v20; // eax
  _BYTE *v21; // rcx
  void ****v22; // rbx
  void **v23; // rax
  void (__fastcall *v24)(CVisualTreeData *, struct CVisualTree *, struct CVisual *); // rax
  HANDLE ProcessHeap; // rax
  CTreeData *v26; // rax
  _QWORD *v27; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (int **)((char *)this + 232);
  v4 = 0;
  v6 = 0LL;
  if ( (*((unsigned __int8 (__fastcall **)(void **))*a2 + 23))(a2) )
  {
    v6 = (void ***)((char *)this + 328);
    goto LABEL_3;
  }
  v9 = *v2;
  v7 = v2;
  if ( **v2 < 0 )
  {
    v10 = (unsigned int)v9[1];
    v11 = v9 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v10; ++v11 )
    {
      if ( *v11 == 1 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i >= (unsigned int)v10 )
      v13 = 0LL;
    else
      v13 = (__int64 ****)((char *)v9 + 8 * i - (((_BYTE)v10 + 15) & 7) + v10 + 15);
    v14 = *v13;
    if ( v14 )
    {
      for ( j = *v14; ; j = (__int64 **)*j )
      {
        v2 = v7;
        if ( j == (__int64 **)v14 )
          break;
        if ( j[4] == (__int64 *)a2 )
        {
          v6 = (void ***)(j - 44);
          break;
        }
      }
    }
LABEL_3:
    v7 = v2;
    if ( v6 )
      return v6;
  }
  v16 = (unsigned int *)*v7;
  v17 = **v7;
  if ( (v17 & 0x10000000) == 0 )
    goto LABEL_30;
  v18 = v16[1];
  v19 = v16 + 2;
  v20 = 0;
  if ( (_DWORD)v18 )
  {
    v21 = v16 + 2;
    do
    {
      if ( *v21 == 4 )
        break;
      ++v20;
      ++v21;
    }
    while ( v20 < (unsigned int)v18 );
  }
  v22 = v20 >= (unsigned int)v18 ? 0LL : (void ****)((char *)v16 + 8LL * v20 - (((_BYTE)v18 + 15) & 7) + v18 + 15);
  v6 = *v22;
  if ( v6 )
  {
    *v16 = v17 & 0xEFFFFFFF;
    if ( (_DWORD)v18 )
    {
      do
      {
        if ( *v19 == 4 )
          break;
        ++v4;
        ++v19;
      }
      while ( v4 < (unsigned int)v18 );
    }
    if ( v4 < (unsigned int)v18 )
      *((_BYTE *)v16 + v4 + 8) = 0;
    v23 = *v6;
  }
  else
  {
LABEL_30:
    ProcessHeap = GetProcessHeap();
    v26 = (CTreeData *)HeapAlloc(ProcessHeap, 0, 0x188uLL);
    v6 = (void ***)v26;
    if ( !v26 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    CTreeData::CTreeData(v26);
    v23 = &CVisualTreeData::`vftable';
    v27[48] = 0LL;
    *v27 = &CVisualTreeData::`vftable';
  }
  v24 = (void (__fastcall *)(CVisualTreeData *, struct CVisualTree *, struct CVisual *))v23[1];
  if ( v24 == CVisualTreeData::Initialize )
  {
    v6[48] = a2;
    CTreeData::Initialize((CTreeData *)v6, 0LL, this);
  }
  else
  {
    v24((CVisualTreeData *)v6, (struct CVisualTree *)a2, this);
  }
  return v6;
}
