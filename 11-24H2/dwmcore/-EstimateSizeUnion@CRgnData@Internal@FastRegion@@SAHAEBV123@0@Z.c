/*
 * XREFs of ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x18002AFC0
 * Callers:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z @ 0x180027F20 (-AddInvalidRegion@CD2DBitmapCache@@QEAAXAEBVCRegion@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180029D60 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x18002A8A0 (-AddInvalidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18002AB70 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002C7D0 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x18002EDA0 (-AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x18003DB90 (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?UpdateClientBounds@CVisualTree@@IEAAXXZ @ 0x18003E330 (-UpdateClientBounds@CVisualTree@@IEAAXXZ.c)
 *     ?AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z @ 0x1801724A0 (-AddRectangle@CRegion@@QEAAXAEBUtagRECT@@@Z.c)
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x1801BAACC (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeUnion(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // rdx
  char *v5; // rax
  int v6; // r10d
  char *v7; // r11
  _DWORD *v8; // rdi
  char *v9; // rbx
  int v10; // ecx
  _DWORD *v11; // rsi
  int v12; // edx
  unsigned int v13; // r8d
  int v14; // ecx
  _DWORD *v15; // r9
  int v16; // ecx
  char *v17; // rax
  int v18; // ecx
  int v19; // ecx
  int v20; // r10d
  int v21; // edx
  char *v22; // rdi
  char *v23; // r11
  _DWORD *v24; // rbp
  int v26; // ecx
  int i; // ecx
  char *v28; // r10
  char *v29; // r10
  int v30; // ecx
  char *v31; // rdx
  char *k; // rax
  int v33; // ecx
  int v34; // ecx
  int j; // ecx
  int v36; // ecx
  _DWORD *v37; // rdx
  int v38; // edx
  int v39; // edx
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // rcx
  _DWORD *m; // r9
  int v44; // eax
  int v45; // eax
  int v46; // ecx
  int v47; // ecx

  v2 = *(int *)a1;
  v3 = (_DWORD *)((char *)a2 + 12);
  v4 = *(int *)a2;
  v5 = (char *)a1 + 12;
  v6 = *((_DWORD *)a1 + 3);
  v7 = (char *)a1 + 12;
  v8 = v3;
  v9 = (char *)a1 + 8 * v2 + 12;
  v10 = v4 + v2;
  v11 = &v3[2 * v4];
  v12 = *v3;
  v13 = 8 * v10 + 12;
  if ( v6 < *v3 )
  {
    v26 = *((_DWORD *)v5 + 3);
    v17 = v5 + 8;
    for ( i = v26 - *((_DWORD *)v7 + 1) - (_DWORD)v7; ; i = *((_DWORD *)v17 + 1) - *((_DWORD *)v28 + 1) - (_DWORD)v28 )
    {
      v13 += (_DWORD)v17 + i;
      v28 = v17;
      if ( *(_DWORD *)v17 >= v12 )
        break;
      v17 += 8;
      if ( v17 == v9 )
      {
        v40 = v3[3];
        v15 = v3 + 2;
        v41 = v40 - v8[1] - (_DWORD)v8;
        goto LABEL_32;
      }
    }
    v15 = v3 + 2;
    if ( *(_DWORD *)v17 > v12 )
    {
      v13 += (_DWORD)v15 + *((_DWORD *)v17 + 1) + v15[1] - v8[1] - *((_DWORD *)v17 - 1) - (_DWORD)v8 + 8;
      goto LABEL_6;
    }
    v17 += 8;
    if ( v17 != v9 )
    {
      v19 = *((_DWORD *)v17 + 1) + v15[1] - v8[1] - *((_DWORD *)v28 + 1) - (_DWORD)v8 - (_DWORD)v28;
      goto LABEL_5;
    }
    v41 = v15[1] - v8[1] - (_DWORD)v8;
    goto LABEL_32;
  }
  v14 = v3[3];
  v15 = v3 + 2;
  v16 = v14 - v8[1];
  if ( v6 > v12 )
  {
    for ( j = v16 - (_DWORD)v8; ; j = v15[1] - v37[1] - (_DWORD)v37 )
    {
      v13 += (_DWORD)v15 + j;
      v36 = *v15;
      v37 = v15;
      if ( v6 < *v15 )
      {
        v38 = *((_DWORD *)v5 + 3) - *(v15 - 1);
        v17 = v5 + 8;
        v13 += (_DWORD)v17 + v15[1] + v38 - *((_DWORD *)v7 + 1) + 8 - (_DWORD)v7;
        goto LABEL_6;
      }
      v15 += 2;
      if ( v6 <= v36 )
        break;
      if ( v15 == v11 )
      {
        v46 = *((_DWORD *)v5 + 3);
        v17 = v5 + 8;
        v30 = v46 - *((_DWORD *)v7 + 1) - (_DWORD)v7;
        goto LABEL_21;
      }
    }
    v17 = v5 + 8;
    if ( v15 == v11 )
    {
      v30 = *((_DWORD *)v17 + 1) - *((_DWORD *)v7 + 1) - (_DWORD)v7;
LABEL_21:
      v31 = v17;
      v13 += (_DWORD)v17 + v30;
      for ( k = v17 + 8; k != v9; v13 += v34 )
      {
        v33 = *((_DWORD *)v31 + 3) - *((_DWORD *)v31 + 1) - (_DWORD)v31;
        v31 += 8;
        v34 = (_DWORD)k + v33;
        k += 8;
      }
      return v13;
    }
    v18 = *((_DWORD *)v17 + 1) + v15[1] - v37[1] - *((_DWORD *)v7 + 1) - (_DWORD)v37;
  }
  else
  {
    v17 = v5 + 8;
    v18 = *((_DWORD *)v17 + 1) + v16 - *((_DWORD *)v7 + 1) - (_DWORD)v8;
  }
  v19 = v18 - (_DWORD)v7;
LABEL_5:
  while ( 2 )
  {
    v13 += (_DWORD)v17 + (_DWORD)v15 + v19;
LABEL_6:
    v20 = *v15;
LABEL_7:
    v21 = *(_DWORD *)v17;
    while ( 1 )
    {
      v22 = v17;
      v23 = v17;
      v24 = v15;
      if ( v21 < v20 )
      {
        v39 = v15[1];
        v17 += 8;
        if ( v17 == v9 )
        {
          v13 += v39 - *(v15 - 1) + 8;
          goto LABEL_33;
        }
        v13 += (_DWORD)v17 + v39 + *((_DWORD *)v17 + 1) - *(v15 - 1) - *((_DWORD *)v23 + 1) + 8 - (_DWORD)v23;
        goto LABEL_7;
      }
      v15 += 2;
      if ( v21 <= v20 )
        break;
      v29 = v17 - 8;
      if ( v15 == v11 )
      {
        v30 = *((_DWORD *)v17 + 1) - *((_DWORD *)v29 + 1) - (_DWORD)v29;
        goto LABEL_21;
      }
      v47 = v15[1] - v24[1] - *((_DWORD *)v29 + 1) - (_DWORD)v29;
      v20 = *v15;
      v13 += (_DWORD)v17 + *((_DWORD *)v17 + 1) + (_DWORD)v15 + v47 - (_DWORD)v24;
    }
    v17 += 8;
    if ( v17 != v9 )
    {
      if ( v15 != v11 )
      {
        v19 = *((_DWORD *)v17 + 1) + v15[1] - v24[1] - *((_DWORD *)v22 + 1) - (_DWORD)v24 - (_DWORD)v22;
        continue;
      }
      v30 = *((_DWORD *)v17 + 1) - *((_DWORD *)v22 + 1) - (_DWORD)v22;
      goto LABEL_21;
    }
    break;
  }
  if ( v15 == v11 )
    return v13;
  v41 = v15[1] - v24[1] - (_DWORD)v24;
LABEL_32:
  v13 += (_DWORD)v15 + v41;
LABEL_33:
  v42 = v15;
  for ( m = v15 + 2; m != v11; v13 += v45 )
  {
    v44 = v42[3] - v42[1] - (_DWORD)v42;
    v42 += 2;
    v45 = (_DWORD)m + v44;
    m += 2;
  }
  return v13;
}
