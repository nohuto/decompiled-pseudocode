/*
 * XREFs of ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180066BD0
 * Callers:
 *     ?OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800653E0 (-OccludeBy@CMegaRectBatchCommand@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z @ 0x180065810 (-AddValidRegion@CSwapChainBuffer@@UEAAXAEBVCRegion@@@Z.c)
 *     ?ComputeOcclusion@CMegaRectCollection@@QEAAXXZ @ 0x180066460 (-ComputeOcclusion@CMegaRectCollection@@QEAAXXZ.c)
 *     ?Subtract@CRegion@@QEAAXAEBV1@@Z @ 0x1800668C0 (-Subtract@CRegion@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeSubtract(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  char *v3; // rax
  int *v4; // r9
  char *v5; // r11
  __int64 v6; // rdx
  char *v7; // rbx
  unsigned int v8; // r10d
  int v9; // ecx
  int *v10; // rbp
  int v11; // edx
  int *v12; // r8
  char *v13; // rax
  int v14; // ecx
  int v15; // ecx
  int v16; // r9d
  int v17; // edx
  char *v18; // rdi
  char *v19; // r11
  int *v20; // rsi
  int v21; // ecx
  int v23; // ecx
  int i; // ecx
  char *v25; // rdi
  int v26; // edx
  int v27; // edx
  char *v28; // rdx
  char *j; // rax
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx

  v2 = *(int *)a1;
  v3 = (char *)a1 + 12;
  v4 = (int *)((char *)a2 + 12);
  v5 = (char *)a1 + 12;
  v6 = *(int *)a2;
  v7 = (char *)a1 + 8 * v2 + 12;
  v8 = 8 * (v6 + v2) + 12;
  v9 = *((_DWORD *)a1 + 3);
  v10 = &v4[2 * v6];
  v11 = *v4;
  if ( v9 < *v4 )
  {
    v23 = *((_DWORD *)v3 + 3);
    v13 = v3 + 8;
    for ( i = v23 - *((_DWORD *)v5 + 1) - (_DWORD)v5; ; i = *((_DWORD *)v13 + 1) - *((_DWORD *)v25 + 1) - (_DWORD)v25 )
    {
      v8 += (_DWORD)v13 + i;
      v25 = v13;
      if ( *(_DWORD *)v13 >= v11 )
        break;
      v13 += 8;
      if ( v13 == v7 )
        return v8;
    }
    v12 = v4 + 2;
    if ( *(_DWORD *)v13 > v11 )
    {
      v8 += *((_DWORD *)v13 + 1) + v4[3] - v4[1] - *((_DWORD *)v13 - 1) + 16;
      goto LABEL_7;
    }
    v13 += 8;
    if ( v13 == v7 )
      return v8;
    v15 = *((_DWORD *)v13 + 1) + v4[3] - v4[1] - *((_DWORD *)v25 + 1) - (_DWORD)v25 + 8;
LABEL_6:
    v8 += (_DWORD)v13 + v15;
LABEL_7:
    v16 = *v12;
LABEL_8:
    v17 = *(_DWORD *)v13;
    while ( 1 )
    {
      v18 = v13;
      v19 = v13;
      v20 = v12;
      if ( v17 < v16 )
      {
        v13 += 8;
        if ( v13 == v7 )
          return v8;
        v8 += (_DWORD)v13 + v12[1] + *((_DWORD *)v13 + 1) - *(v12 - 1) - *((_DWORD *)v19 + 1) + 8 - (_DWORD)v19;
        goto LABEL_8;
      }
      v12 += 2;
      if ( v17 <= v16 )
      {
        v13 += 8;
        if ( v13 == v7 )
          return v8;
        if ( v12 == v10 )
        {
          v21 = (_DWORD)v13 + *((_DWORD *)v13 + 1) - *((_DWORD *)v19 + 1) - (_DWORD)v18;
          goto LABEL_25;
        }
        v14 = *((_DWORD *)v13 + 1) + v12[1] - v20[1] - *((_DWORD *)v18 + 1) - (_DWORD)v20 - (_DWORD)v18;
        goto LABEL_5;
      }
      if ( v12 == v10 )
        break;
      v16 = *v12;
      v8 += (_DWORD)v12 + *((_DWORD *)v13 + 1) + v12[1] - v20[1] - *((_DWORD *)v13 - 1) - (_DWORD)v20 + 8;
    }
    v21 = *((_DWORD *)v13 + 1) + 8 - *((_DWORD *)v13 - 1);
    goto LABEL_25;
  }
  v12 = v4 + 2;
  if ( v9 <= v11 )
  {
    v13 = v3 + 8;
LABEL_4:
    v14 = *((_DWORD *)v13 + 1) + v12[1] - v4[1] - *((_DWORD *)v5 + 1) - (_DWORD)v4 - (_DWORD)v5;
LABEL_5:
    v15 = (_DWORD)v12 + v14;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v26 = *v12;
    v4 = v12;
    if ( v9 < *v12 )
    {
      v27 = *((_DWORD *)v3 + 3) - *(v12 - 1);
      v13 = v3 + 8;
      v8 += (_DWORD)v13 + v12[1] + v27 - *((_DWORD *)v5 + 1) + 8 - (_DWORD)v5;
      goto LABEL_7;
    }
    v12 += 2;
    if ( v9 <= v26 )
      break;
    if ( v12 == v10 )
    {
      v32 = *((_DWORD *)v3 + 3);
      v13 = v3 + 8;
      v21 = (_DWORD)v13 + v32 - *((_DWORD *)v5 + 1) - (_DWORD)v5;
      goto LABEL_25;
    }
  }
  v13 = v3 + 8;
  if ( v12 != v10 )
    goto LABEL_4;
  v21 = (_DWORD)v13 + *((_DWORD *)v13 + 1) - *((_DWORD *)v5 + 1) - (_DWORD)v5;
LABEL_25:
  v28 = v13;
  v8 += v21;
  for ( j = v13 + 8; j != v7; v8 += v31 )
  {
    v30 = *((_DWORD *)v28 + 3) - *((_DWORD *)v28 + 1) - (_DWORD)v28;
    v28 += 8;
    v31 = (_DWORD)j + v30;
    j += 8;
  }
  return v8;
}
