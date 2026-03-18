/*
 * XREFs of ?SetClipPoints@ClipPlaneIterator@@AEAAJPEBUD2D_POINT_2F@@IPEBW4D2D1_POLYGON_EDGE_FLAG@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1802014FC
 * Callers:
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@@Z @ 0x180201220 (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z @ 0x18002FCEC (-RemoveAt@-$DynArray@URoudTripRequestTracker@CComposition@@$0A@@@QEAAJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TransformPoints@MILMatrix3x2@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z @ 0x1801F0388 (-TransformPoints@MILMatrix3x2@@QEBAXPEBUD2D_POINT_2F@@PEAU2@I@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?RemoveAt@?$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z @ 0x18028570C (-RemoveAt@-$DynArray@W4D2D1_POLYGON_EDGE_FLAG@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::SetClipPoints(
        ClipPlaneIterator *this,
        const struct D2D_POINT_2F *a2,
        unsigned int a3,
        const enum D2D1_POLYGON_EDGE_FLAG *a4,
        const struct D2D_MATRIX_3X2_F *a5)
{
  const struct D2D_POINT_2F *v6; // rdi
  __int64 v8; // rax
  FLOAT x; // xmm0_4
  FLOAT y; // xmm1_4
  int v11; // eax
  const enum D2D1_POLYGON_EDGE_FLAG *v12; // r15
  __int64 v13; // r12
  unsigned int v14; // eax
  __m128 x_low; // xmm6
  __m128 y_low; // xmm7
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // r8d
  int v20; // eax
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edi
  unsigned int i; // edx
  float *v25; // rax
  __int64 v26; // r8
  float *v27; // rcx
  float v28; // xmm3_4
  float v29; // xmm4_4
  unsigned int v30; // ecx
  float v31; // xmm0_4
  float *v32; // rax
  float v33; // xmm2_4
  unsigned int v34; // edi
  unsigned int v35; // ecx
  unsigned int v36; // eax
  int v37; // r9d
  _BYTE *v39; // rcx
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // rdi
  struct D2D_POINT_2F *v43; // rdx
  FLOAT dy; // xmm1_4
  unsigned int j; // esi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdx
  int v49; // xmm1_4
  _BYTE *v50; // rdx
  __int64 v51; // rdx
  int v52; // xmm1_4
  unsigned int v53; // edx
  unsigned int v54; // eax
  unsigned int v55; // eax
  unsigned int v56; // r8d
  int v57; // eax
  int v58; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v59; // [rsp+38h] [rbp-48h]
  __int128 v60; // [rsp+40h] [rbp-40h] BYREF
  FLOAT dx; // [rsp+50h] [rbp-30h]
  FLOAT v62; // [rsp+54h] [rbp-2Ch]

  v6 = a2;
  if ( a3 >= 3 )
  {
    v8 = a3 - 1;
    x = a2[v8].x;
    y = a2[v8].y;
    if ( a4 )
      v11 = *((_DWORD *)a4 + v8);
    else
      v11 = 0;
    v58 = v11;
    v12 = a4;
    v13 = a3;
    while ( 1 )
    {
      v14 = *((_DWORD *)this + 12);
      x_low = (__m128)LODWORD(v6->x);
      y_low = (__m128)LODWORD(v6->y);
      *(_QWORD *)&v60 = __PAIR64__(LODWORD(y), LODWORD(x));
      v17 = v14 + 1;
      *((_QWORD *)&v60 + 1) = __PAIR64__(y_low.m128_u32[0], x_low.m128_u32[0]);
      if ( v14 + 1 < v14 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else if ( v17 > *((_DWORD *)this + 11) )
      {
        v21 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 24, 16, 1, &v60);
        if ( v21 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0xC0u, 0LL);
      }
      else
      {
        *(_OWORD *)(*((_QWORD *)this + 3) + 16LL * v14) = v60;
        *((_DWORD *)this + 12) = v17;
      }
      if ( a4 )
      {
        v18 = *((_DWORD *)this + 20);
        v19 = v18 + 1;
        if ( v18 + 1 < v18 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
        }
        else if ( v19 > *((_DWORD *)this + 19) )
        {
          v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 4, 1, &v58);
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0xC0u, 0LL);
        }
        else
        {
          *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * v18) = v58;
          *((_DWORD *)this + 20) = v19;
        }
        v58 = *(_DWORD *)v12;
      }
      ++v6;
      v12 = (const enum D2D1_POLYGON_EDGE_FLAG *)((char *)v12 + 4);
      v59 = _mm_unpacklo_ps(x_low, y_low).m128_u64[0];
      if ( !--v13 )
        break;
      y = *((FLOAT *)&v59 + 1);
      LODWORD(x) = v59;
    }
    v22 = *((_DWORD *)this + 12);
    v23 = 0;
    for ( i = v22; v23 < v22; i = v22 )
    {
      v25 = (float *)(*((_QWORD *)this + 3) + 16LL * v23);
      if ( (float)((float)((float)(v25[3] - v25[1]) * (float)(v25[3] - v25[1]))
                 + (float)((float)(v25[2] - *v25) * (float)(v25[2] - *v25))) <= 1.0e-12 )
      {
        DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt((__int64 *)this + 3, v23);
        if ( a4 )
          DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((char *)this + 56, v23);
        --v23;
      }
      v22 = *((_DWORD *)this + 12);
      ++v23;
    }
    if ( v22 < 3 )
    {
      *((_DWORD *)this + 12) = 0;
    }
    else
    {
      v26 = *((_QWORD *)this + 3);
      v27 = (float *)(v26 + 16LL * (v22 - 1));
      v28 = v27[2] - *v27;
      v29 = v27[3] - v27[1];
      v30 = 0;
      if ( !i )
        goto LABEL_24;
      v32 = (float *)(v26 + 12);
      do
      {
        v33 = (float)(v28 * (float)(*v32 - *(v32 - 2))) - (float)(v29 * (float)(*(v32 - 1) - *(v32 - 3)));
        if ( COERCE_FLOAT(LODWORD(v33) & _xmm) > 0.000001 )
          break;
        ++v30;
        v32 += 4;
      }
      while ( v30 < i );
      if ( v33 > 0.0 )
        v31 = FLOAT_N1_0;
      else
LABEL_24:
        v31 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
      v34 = 0;
      *((float *)this + 4) = v31;
      if ( a4 && *((_DWORD *)this + 12) )
      {
        v39 = (_BYTE *)*((_QWORD *)this + 7);
        v40 = *((unsigned int *)this + 12);
        do
        {
          v41 = v34++;
          if ( (*v39 & 1) == 0 )
            v34 = v41;
          v39 += 4;
          --v40;
        }
        while ( v40 );
      }
      v35 = *((_DWORD *)this + 12);
      v36 = v35 - v34;
      if ( v34 )
      {
        if ( v36 )
        {
          if ( v36 > 4 )
          {
            if ( v34 >= 2 )
            {
              for ( j = 1; j < v35; ++j )
              {
                v46 = *((_QWORD *)this + 7);
                if ( (*(_BYTE *)(v46 + 4LL * j) & 1) != 0 && (*(_BYTE *)(v46 + 4LL * (j - 1)) & 1) != 0 )
                {
                  v47 = *((_QWORD *)this + 3);
                  v48 = 2LL * (j - 1);
                  v49 = *(_DWORD *)(v47 + 16LL * j + 12);
                  *(_DWORD *)(v47 + 8 * v48 + 8) = *(_DWORD *)(v47 + 16LL * j + 8);
                  *(_DWORD *)(v47 + 8 * v48 + 12) = v49;
                  DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt((__int64 *)this + 3, j);
                  DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((char *)this + 56, j);
                  --v34;
                  --j;
                }
                v35 = *((_DWORD *)this + 12);
              }
              if ( v34 >= 2 )
              {
                v50 = (_BYTE *)*((_QWORD *)this + 7);
                if ( (*v50 & 1) != 0 && (v50[4 * (*((_DWORD *)this + 20) - 1)] & 1) != 0 )
                {
                  v51 = *((_QWORD *)this + 3);
                  v52 = *(_DWORD *)(v51 + 16LL * (unsigned int)(*((_DWORD *)this + 12) - 1) + 4);
                  *(_DWORD *)(v51 + 8) = *(_DWORD *)(v51 + 16LL * (unsigned int)(*((_DWORD *)this + 12) - 1));
                  *(_DWORD *)(v51 + 12) = v52;
                  v35 = *((_DWORD *)this + 12) - 1;
                  --*((_DWORD *)this + 20);
                  *((_DWORD *)this + 12) = v35;
                }
              }
            }
            v53 = 0;
            v58 = 0;
            if ( v35 )
            {
              v54 = 0;
              do
              {
                if ( (*(_BYTE *)(*((_QWORD *)this + 7) + 4LL * v54) & 1) != 0 )
                {
                  v55 = *((_DWORD *)this + 28);
                  v56 = v55 + 1;
                  if ( v55 + 1 >= v55 )
                  {
                    if ( v56 > *((_DWORD *)this + 27) )
                    {
                      v57 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 4, 1, &v58);
                      if ( v57 < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v57, 0xC0u, 0LL);
                    }
                    else
                    {
                      *(_DWORD *)(*((_QWORD *)this + 11) + 4LL * *((unsigned int *)this + 28)) = v53;
                      *((_DWORD *)this + 28) = v56;
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
                  }
                  v53 = v58;
                }
                v54 = ++v53;
                v58 = v53;
              }
              while ( v53 < *((_DWORD *)this + 12) );
            }
          }
          else
          {
            v42 = 0LL;
            if ( v35 )
            {
              do
              {
                if ( (*(_BYTE *)(*((_QWORD *)this + 7) + 4 * v42) & 1) != 0 )
                {
                  DynArray<CComposition::RoudTripRequestTracker,0>::RemoveAt((__int64 *)this + 3, v42);
                  DynArray<enum D2D1_POLYGON_EDGE_FLAG,0>::RemoveAt((char *)this + 56, (unsigned int)v42);
                  LODWORD(v42) = v42 - 1;
                }
                v42 = (unsigned int)(v42 + 1);
              }
              while ( (unsigned int)v42 < *((_DWORD *)this + 12) );
            }
          }
        }
        else
        {
          *(_BYTE *)this = 1;
          *((_DWORD *)this + 12) = 0;
          *((_DWORD *)this + 20) = 0;
        }
      }
      v37 = *((_DWORD *)this + 12);
      if ( v37 )
      {
        v43 = (struct D2D_POINT_2F *)*((_QWORD *)this + 3);
        dy = a5->dy;
        v60 = *(_OWORD *)&a5->m11;
        dx = a5->dx;
        v62 = dy;
        MILMatrix3x2::TransformPoints((MILMatrix3x2 *)&v60, v43, v43, 2 * v37);
      }
    }
  }
  return 0LL;
}
