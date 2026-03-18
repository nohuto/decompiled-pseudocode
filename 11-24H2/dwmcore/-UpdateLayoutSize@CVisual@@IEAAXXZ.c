/*
 * XREFs of ?UpdateLayoutSize@CVisual@@IEAAXXZ @ 0x1801865D0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800BF1FC (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?OnLayoutChanged@CVisual@@AEAAXXZ @ 0x18010FDE0 (-OnLayoutChanged@CVisual@@AEAAXXZ.c)
 *     ?InvalidateWorldTransform@CTreeData@@IEAAXXZ @ 0x180266EC0 (-InvalidateWorldTransform@CTreeData@@IEAAXXZ.c)
 */

void __fastcall CVisual::UpdateLayoutSize(CVisual *this)
{
  __int64 v1; // rax
  float v3; // xmm5_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  __int64 v9; // rcx
  int *v10; // rdx
  float v11; // xmm3_4
  float v12; // xmm4_4
  __int64 v13; // rax
  _QWORD ***v14; // rdi
  float v15; // xmm0_4
  float v16; // xmm1_4
  bool v17; // bp
  char v18; // si
  __int64 v19; // r8
  __int64 v20; // rax
  _BYTE *v21; // rdx
  unsigned int j; // ecx
  _QWORD ***v23; // rsi
  _QWORD **v24; // rsi
  _QWORD *k; // r14
  __int64 v26; // r8
  __int64 v27; // rax
  _BYTE *v28; // rdx
  unsigned int m; // ecx
  _QWORD **v30; // rax
  _QWORD *n; // rcx
  __int64 v32; // rax
  int i; // ecx
  int v34; // r9d
  int *v35; // r8
  float v36[4]; // [rsp+20h] [rbp-78h]

  v1 = *((_QWORD *)this + 11);
  if ( !v1 || (*(_BYTE *)(v1 + 96) & 1) != 0 )
  {
    v3 = 0.0;
    v4 = 0.0;
    v5 = *((float *)this + 32);
    v6 = *((float *)this + 33);
    v7 = *((float *)this + 37);
    v8 = *((float *)this + 36);
    if ( v1 )
    {
      v3 = *(float *)(v1 + 144);
      v4 = *(float *)(v1 + 148);
    }
    v9 = *((_QWORD *)this + 28);
    v10 = (int *)(v9 + 12);
    if ( (*(_DWORD *)(v9 + 4) & 0x10000000) != 0 )
    {
      v34 = *v10;
      v35 = (int *)(v9 + 12);
      if ( (*v10 & 0x7F000000) != 0x4000000 )
      {
        do
        {
          v35 = (int *)((char *)v35 + (v34 & 0xFFFFFF) + 4);
          v34 = *v35;
        }
        while ( (*v35 & 0x7F000000) != 0x4000000 );
      }
      *(_QWORD *)v36 = *(_QWORD *)(v35 + 1);
    }
    else
    {
      *(_QWORD *)v36 = 0LL;
    }
    v11 = (float)(v36[0] * v3) + *((float *)this + 29);
    v12 = (float)(v36[1] * v4) + *((float *)this + 30);
    *((float *)this + 32) = v11;
    *((float *)this + 33) = v12;
    if ( (*(_DWORD *)(v9 + 4) & 0x20000000) != 0 )
    {
      for ( i = *v10; (*v10 & 0x7F000000) != 0x3000000; i = *v10 )
        v10 = (int *)((char *)v10 + (i & 0xFFFFFF) + 4);
      v13 = *(_QWORD *)(v10 + 1);
    }
    else
    {
      v13 = 0LL;
    }
    v14 = 0LL;
    v15 = (float)(*((float *)&v13 + 1) * v4) + *((float *)this + 35);
    v16 = (float)(*(float *)&v13 * v3) + *((float *)this + 34);
    *((float *)this + 37) = v15;
    *((float *)this + 36) = v16;
    if ( v16 < 0.0 )
    {
      *((_DWORD *)this + 36) = 0;
      v16 = 0.0;
    }
    if ( v15 < 0.0 )
    {
      *((_DWORD *)this + 37) = 0;
      v15 = 0.0;
    }
    v17 = v5 != v11 || v6 != v12;
    if ( v8 == v16 && v7 == v15 )
    {
      v18 = 0;
    }
    else
    {
      v32 = *((_QWORD *)this + 31);
      v18 = 1;
      if ( v32 && *(_BYTE *)(v32 + 132) )
        CVisual::OnClipChanged(this);
      CVisual::OnLayoutChanged(this);
    }
    if ( v17 )
    {
      CTreeData::InvalidateWorldTransform((CVisual *)((char *)this + 328));
      v19 = *((_QWORD *)this + 29);
      if ( *(int *)v19 < 0 )
      {
        v20 = *(unsigned int *)(v19 + 4);
        v21 = (_BYTE *)(v19 + 8);
        for ( j = 0; j < (unsigned int)v20; ++v21 )
        {
          if ( *v21 == 1 )
            break;
          ++j;
        }
        if ( j >= (unsigned int)v20 )
          v23 = 0LL;
        else
          v23 = (_QWORD ***)(v20 + 15 + v19 + 8LL * j - (((_BYTE)v20 + 15) & 7));
        v24 = *v23;
        if ( v24 )
        {
          for ( k = *v24; k != v24; k = (_QWORD *)*k )
            CTreeData::InvalidateWorldTransform((CTreeData *)(k - 44));
        }
      }
      *((_BYTE *)this + 465) = 1;
      v26 = *((_QWORD *)this + 29);
      if ( *(int *)v26 < 0 )
      {
        v27 = *(unsigned int *)(v26 + 4);
        v28 = (_BYTE *)(v26 + 8);
        for ( m = 0; m < (unsigned int)v27; ++v28 )
        {
          if ( *v28 == 1 )
            break;
          ++m;
        }
        if ( m < (unsigned int)v27 )
          v14 = (_QWORD ***)(v27 + 15 + v26 + 8LL * m - (((_BYTE)v27 + 15) & 7));
        v30 = *v14;
        if ( *v14 )
        {
          for ( n = *v30; n != v30; n = (_QWORD *)*n )
            *((_BYTE *)n - 215) = 1;
        }
      }
      goto LABEL_33;
    }
    if ( v18 )
LABEL_33:
      *((_BYTE *)this + 96) |= 1u;
  }
}
