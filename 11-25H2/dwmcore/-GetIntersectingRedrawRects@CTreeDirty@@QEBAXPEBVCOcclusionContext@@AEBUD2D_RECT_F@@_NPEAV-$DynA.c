/*
 * XREFs of ?GetIntersectingRedrawRects@CTreeDirty@@QEBAXPEBVCOcclusionContext@@AEBUD2D_RECT_F@@_NPEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1802728B4
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180270324 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800A3330 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B1330 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x1800C6870 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z @ 0x1800CBAF0 (-GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1801348B0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

void __fastcall CTreeDirty::GetIntersectingRedrawRects(
        __int64 a1,
        COcclusionContext *a2,
        const __m128i *a3,
        char a4,
        __int64 a5)
{
  unsigned int v9; // r14d
  _QWORD *v10; // r15
  _QWORD *v11; // rdi
  __m128 v12; // xmm1
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  unsigned int j; // edi
  __m128 v21; // xmm1
  FLOAT *v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // edx
  int v25; // eax
  unsigned int i; // [rsp+30h] [rbp-30h]
  unsigned int v27; // [rsp+34h] [rbp-2Ch]
  struct D2D_RECT_F v29; // [rsp+40h] [rbp-20h] BYREF

  *(_DWORD *)(a5 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a5, 0x10u);
  if ( *(_BYTE *)(a1 + 2326) )
  {
    if ( a4 && COcclusionContext::IsCurrent(a2) )
    {
      v9 = 0;
      v27 = *((_DWORD *)a2 + 384);
      for ( i = 0; v9 < *(_DWORD *)(a1 + 2304); i = v9 )
      {
        v10 = (_QWORD *)(a1 + 16LL * v9 + 456);
        v11 = (_QWORD *)*v10;
        if ( (_QWORD *)*v10 != v10 )
        {
          do
          {
            v29 = (struct D2D_RECT_F)_mm_loadu_si128((const __m128i *)(v11 + 3));
            v12 = (__m128)_mm_loadu_si128(a3);
            if ( v12.m128_f32[0] > v29.left )
              LODWORD(v29.left) = v12.m128_i32[0];
            v13 = _mm_shuffle_ps(v12, v12, 85).m128_f32[0];
            if ( v13 > v29.top )
              v29.top = v13;
            v14 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0];
            if ( v29.right > v14 )
              v29.right = v14;
            v15 = _mm_shuffle_ps(v12, v12, 255).m128_f32[0];
            if ( v29.bottom > v15 )
              v29.bottom = v15;
            if ( IsEmpty(&v29) )
            {
              v29.bottom = 0.0;
              v29.right = 0.0;
              v29.top = 0.0;
              v29.left = 0.0;
            }
            if ( !IsEmpty(&v29) )
            {
              v16 = CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)v11, *(const struct CVisualTree **)a1, v27);
              if ( !COcclusionContext::IsOccluded((__int64)a2, &v29.left, v16, 0) )
              {
                v17 = *(_DWORD *)(a5 + 24);
                v18 = v17 + 1;
                if ( v17 + 1 >= v17 )
                {
                  if ( v18 > *(_DWORD *)(a5 + 20) )
                  {
                    v19 = DynArrayImpl<0>::AddMultipleAndSet(a5, 16, 1, &v29);
                    if ( v19 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0xC0u, 0LL);
                  }
                  else
                  {
                    *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16LL * *(unsigned int *)(a5 + 24)) = v29;
                    *(_DWORD *)(a5 + 24) = v18;
                  }
                }
                else
                {
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
                }
              }
            }
            v11 = (_QWORD *)*v11;
          }
          while ( v11 != v10 );
          v9 = i;
        }
        ++v9;
      }
    }
    else
    {
      for ( j = 0; j < *(_DWORD *)(a1 + 2304); ++j )
      {
        v21 = (__m128)_mm_loadu_si128(a3);
        v22 = (FLOAT *)(a1 + 16 * (j + 136LL));
        v29 = (struct D2D_RECT_F)v21;
        if ( *v22 > v21.m128_f32[0] )
        {
          v29.left = *v22;
          v21 = (__m128)v29;
        }
        if ( v22[1] > _mm_shuffle_ps(v21, v21, 85).m128_f32[0] )
        {
          v29.top = v22[1];
          v21 = (__m128)v29;
        }
        if ( _mm_shuffle_ps(v21, v21, 170).m128_f32[0] > v22[2] )
        {
          v29.right = v22[2];
          v21 = (__m128)v29;
        }
        if ( _mm_shuffle_ps(v21, v21, 255).m128_f32[0] > v22[3] )
        {
          v29.bottom = v22[3];
          v21 = (__m128)v29;
        }
        if ( IsEmpty(&v29) )
        {
          v29.bottom = 0.0;
          v29.right = 0.0;
          v29.top = 0.0;
          v29.left = 0.0;
          v21 = 0u;
        }
        if ( !IsEmpty(&v29) )
        {
          v23 = *(_DWORD *)(a5 + 24);
          v24 = v23 + 1;
          if ( v23 + 1 >= v23 )
          {
            if ( v24 > *(_DWORD *)(a5 + 20) )
            {
              v25 = DynArrayImpl<0>::AddMultipleAndSet(a5, 16, 1, &v29);
              if ( v25 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0xC0u, 0LL);
            }
            else
            {
              *(__m128 *)(*(_QWORD *)a5 + 16LL * *(unsigned int *)(a5 + 24)) = v21;
              *(_DWORD *)(a5 + 24) = v24;
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0xB5u, 0LL);
          }
        }
      }
    }
  }
}
