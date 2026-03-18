/*
 * XREFs of ?EstimateSizeIntersect@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180105DE0
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180105228 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?Intersect@CRegion@@QEAAXAEBV1@@Z @ 0x180105B10 (-Intersect@CRegion@@QEAAXAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FastRegion::Internal::CRgnData::EstimateSizeIntersect(
        const struct FastRegion::Internal::CRgnData *a1,
        const struct FastRegion::Internal::CRgnData *a2)
{
  __int64 v2; // r8
  int *v3; // rax
  int *v4; // r10
  int *v5; // r11
  __int64 v6; // rdx
  char *v7; // rsi
  unsigned int v8; // r9d
  int v9; // ecx
  int *v10; // rbp
  int v11; // edx
  int *v12; // r8
  char *v13; // rax
  int v14; // edx
  int v15; // edx
  int v16; // r11d
  int v17; // r10d
  char *v18; // rdx
  char *v19; // rbx
  int *v20; // rdi
  char *v22; // rbx
  int v23; // ecx
  int v24; // edx

  v2 = *(int *)a1;
  v3 = (int *)((char *)a1 + 12);
  v4 = (int *)((char *)a2 + 12);
  v5 = v3;
  v6 = *(int *)a2;
  v7 = (char *)a1 + 8 * v2 + 12;
  v8 = 8 * (v6 + v2) + 12;
  v9 = *v4;
  v10 = &v4[2 * v6];
  v11 = *v3;
  if ( *v3 < *v4 )
  {
    v13 = (char *)(v3 + 2);
    while ( 1 )
    {
      v22 = v13;
      if ( *(_DWORD *)v13 >= v9 )
        break;
      v13 += 8;
      if ( v13 == v7 )
        return v8;
    }
    v12 = v4 + 2;
    if ( *(_DWORD *)v13 > v9 )
    {
      v14 = *((_DWORD *)v13 + 1) + v4[3] - v4[1] - *((_DWORD *)v13 - 1) - ((_DWORD)v13 - 8) + 8;
    }
    else
    {
      v13 += 8;
      if ( v13 == v7 )
        return v8;
      v14 = *((_DWORD *)v13 + 1) + v4[3] - v4[1] - *((_DWORD *)v22 + 1) - (_DWORD)v22 + 8;
    }
    goto LABEL_5;
  }
  v12 = v4 + 2;
  if ( v11 <= v9 )
  {
    v13 = (char *)(v3 + 2);
LABEL_4:
    v14 = (_DWORD)v12 + *((_DWORD *)v13 + 1) + v12[1] - v4[1] - v5[1] - (_DWORD)v4 - (_DWORD)v5;
LABEL_5:
    v15 = (_DWORD)v13 + v14;
LABEL_6:
    v16 = *v12;
LABEL_7:
    v17 = *(_DWORD *)v13;
    while ( 2 )
    {
      for ( v8 += v15;
            ;
            v8 += (_DWORD)v13
                + (_DWORD)v12
                + *((_DWORD *)v13 + 1)
                + v12[1]
                - v20[1]
                - *((_DWORD *)v18 + 1)
                - (_DWORD)v20
                - (_DWORD)v18 )
      {
        v18 = v13;
        v19 = v13;
        v20 = v12;
        if ( v17 < v16 )
        {
          v13 += 8;
          if ( v13 == v7 )
            return v8;
          v15 = (_DWORD)v13 + v12[1] + *((_DWORD *)v13 + 1) - *(v12 - 1) - *((_DWORD *)v19 + 1) + 8 - (_DWORD)v19;
          goto LABEL_7;
        }
        v12 += 2;
        if ( v17 > v16 )
          break;
        v13 += 8;
        if ( v13 == v7 || v12 == v10 )
          return v8;
        v17 = *(_DWORD *)v13;
        v16 = *v12;
      }
      if ( v12 != v10 )
      {
        v16 = *v12;
        v15 = (_DWORD)v12 + *((_DWORD *)v13 + 1) + v12[1] - v20[1] - *((_DWORD *)v13 - 1) - (_DWORD)v20 + 8;
        continue;
      }
      return v8;
    }
  }
  while ( 1 )
  {
    v23 = *v12;
    v4 = v12;
    if ( v11 < *v12 )
    {
      v24 = v3[3] - *(v12 - 1);
      v13 = (char *)(v3 + 2);
      v15 = (_DWORD)v13 + v12[1] + v24 - v5[1] + 8 - (_DWORD)v5;
      goto LABEL_6;
    }
    v12 += 2;
    if ( v11 <= v23 )
      break;
    if ( v12 == v10 )
      return v8;
  }
  v13 = (char *)(v3 + 2);
  if ( v12 != v10 )
    goto LABEL_4;
  return v8;
}
