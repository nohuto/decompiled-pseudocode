/*
 * XREFs of ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180109860
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180109750 (-CollectAdditionalDirtyRects@CWindowNode@@UEAAJPEBVCVisualTree@@PEAVCTreeDirty@@AEBVCMILMatrix@@.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsWellOrdered@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180056C90 (-IsWellOrdered@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?SetFullDirty@CTreeDirty@@QEAAXXZ @ 0x180096EA4 (-SetFullDirty@CTreeDirty@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ @ 0x180109D58 (-GetAdditionalDirtyRects@CVisual@@QEBAPEAVCMergedDirtyRect@@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18010A060 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18012D730 (-AdjustContentWorldBounds@CVisual@@AEBA_NPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAN.c)
 *     ?Reset@CMergedDirtyRect@@QEAAXXZ @ 0x1801E78BC (-Reset@CMergedDirtyRect@@QEAAXXZ.c)
 *     ?_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180248DB0 (-_Add@CTreeDirty@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?Optimize@?$CMergedRectBase@$03@@AEAAXXZ @ 0x1802899A8 (-Optimize@-$CMergedRectBase@$03@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVisual::CollectAdditionalDirtyRects(
        CVisual *a1,
        __int64 a2,
        CTreeDirty *a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // ebx
  struct CMergedDirtyRect *AdditionalDirtyRects; // rsi
  __int64 v8; // r10
  unsigned int v9; // r12d
  unsigned int i; // edi
  unsigned int *v11; // rdi
  unsigned int v12; // esi
  _DWORD *v13; // r12
  unsigned int j; // edi
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm4_4
  float v21; // xmm2_4
  float v22; // xmm7_4
  float v23; // xmm5_4
  float v24; // xmm3_4
  float v25; // xmm6_4
  int v26; // eax
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm4_4
  float v32; // xmm2_4
  float v33; // xmm7_4
  float v34; // xmm5_4
  float v35; // xmm3_4
  float v36; // xmm6_4
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r9
  struct D2D_RECT_F v44; // [rsp+48h] [rbp-31h] BYREF
  __int128 v45; // [rsp+58h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  v6 = 0;
  AdditionalDirtyRects = CVisual::GetAdditionalDirtyRects(a1);
  if ( !AdditionalDirtyRects
    || *(_QWORD *)AdditionalDirtyRects != GetCurrentFrameId()
    || !*((_DWORD *)AdditionalDirtyRects + 45) && !*((_DWORD *)AdditionalDirtyRects + 2) )
  {
    return v6;
  }
  if ( !*((_BYTE *)AdditionalDirtyRects + 176) )
  {
    CMergedRectBase<4>::Optimize((char *)AdditionalDirtyRects + 8);
    v8 = a4;
  }
  v9 = *((_DWORD *)AdditionalDirtyRects + 2);
  if ( AdditionalDirtyRects == (struct CMergedDirtyRect *)-12LL && MEMORY[0xFFFFFFFFFFFFFFFC] )
  {
LABEL_66:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= v9 )
    {
      if ( *(_QWORD *)AdditionalDirtyRects != GetCurrentFrameId() )
        CMergedDirtyRect::Reset(AdditionalDirtyRects);
      v11 = (unsigned int *)((char *)AdditionalDirtyRects + 180);
      if ( !*((_BYTE *)AdditionalDirtyRects + 348) )
        CMergedRectBase<4>::Optimize((char *)AdditionalDirtyRects + 180);
      v12 = *v11;
      v13 = v11 + 1;
      if ( v11 != (unsigned int *)-4LL || !MEMORY[0xFFFFFFFFFFFFFFFC] )
      {
        for ( j = 0; ; ++j )
        {
          if ( j >= v12 )
            return v6;
          v45 = 0LL;
          v44 = *(struct D2D_RECT_F *)&v13[4 * j];
          CMILMatrix::Transform2DBoundsHelper<1>(a4, &v44, (float *)&v45);
          if ( (unsigned __int8)CVisual::AdjustContentWorldBounds(a1) )
          {
            v27 = *(float *)&v45;
            if ( a5 )
            {
              v28 = *(float *)a5;
              if ( *(float *)a5 > *(float *)&v45 )
              {
                LODWORD(v45) = *(_DWORD *)a5;
                v27 = v28;
              }
              v29 = *((float *)&v45 + 1);
              v30 = *(float *)(a5 + 4);
              v31 = *((float *)&v45 + 1);
              if ( v30 > *((float *)&v45 + 1) )
              {
                DWORD1(v45) = *(_DWORD *)(a5 + 4);
                v29 = v30;
                v31 = v30;
              }
              v32 = *((float *)&v45 + 2);
              v33 = v31;
              v34 = *((float *)&v45 + 2);
              if ( *((float *)&v45 + 2) > *(float *)(a5 + 8) )
              {
                DWORD2(v45) = *(_DWORD *)(a5 + 8);
                v32 = *((float *)&v45 + 2);
                v34 = *((float *)&v45 + 2);
              }
              v35 = *((float *)&v45 + 3);
              v36 = *((float *)&v45 + 3);
              if ( *((float *)&v45 + 3) > *(float *)(a5 + 12) )
              {
                v33 = v31;
                HIDWORD(v45) = *(_DWORD *)(a5 + 12);
                v35 = *((float *)&v45 + 3);
                v36 = *((float *)&v45 + 3);
              }
              if ( v34 <= v27 || v36 <= v33 )
              {
                v35 = 0.0;
                v32 = 0.0;
                v29 = 0.0;
                v27 = 0.0;
                v45 = 0uLL;
              }
            }
            else
            {
              v35 = *((float *)&v45 + 3);
              v32 = *((float *)&v45 + 2);
              v29 = *((float *)&v45 + 1);
            }
            if ( v32 > v27 && v35 > v29 )
            {
              if ( !*((_BYTE *)a3 + 2324) )
              {
                if ( v32 <= v27 || v35 <= v29 )
                {
                  if ( !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered((float *)&v45) )
                  {
                    CTreeDirty::SetFullDirty(a3);
                    v6 = -2003304438;
                    v40 = 241LL;
                    v41 = 2291662858LL;
LABEL_86:
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)v40,
                      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
                      (const char *)v41);
                    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xE42u, 0LL);
                    return v6;
                  }
                }
                else if ( (v27 > -3.4028235e38 || v32 < 3.4028235e38) && (v29 > -3.4028235e38 || v35 < 3.4028235e38) )
                {
                  v37 = CTreeDirty::_Add(a3);
                  v6 = v37;
                  if ( v37 < 0 )
                  {
                    v41 = (unsigned int)v37;
                    v40 = 246LL;
                    goto LABEL_86;
                  }
                }
                else
                {
                  CTreeDirty::SetFullDirty(a3);
                }
              }
              v6 = 0;
            }
          }
        }
      }
      goto LABEL_66;
    }
    v45 = 0LL;
    v44 = *(struct D2D_RECT_F *)((char *)AdditionalDirtyRects + 16 * i + 12);
    CMILMatrix::Transform2DBoundsHelper<1>(v8, &v44, (float *)&v45);
    if ( (unsigned __int8)CVisual::AdjustContentWorldBounds(a1) )
    {
      v16 = *(float *)&v45;
      if ( a5 )
      {
        v17 = *(float *)a5;
        if ( *(float *)a5 > *(float *)&v45 )
        {
          LODWORD(v45) = *(_DWORD *)a5;
          v16 = v17;
        }
        v18 = *((float *)&v45 + 1);
        v19 = *(float *)(a5 + 4);
        v20 = *((float *)&v45 + 1);
        if ( v19 > *((float *)&v45 + 1) )
        {
          DWORD1(v45) = *(_DWORD *)(a5 + 4);
          v18 = v19;
          v20 = v19;
        }
        v21 = *((float *)&v45 + 2);
        v22 = v20;
        v23 = *((float *)&v45 + 2);
        if ( *((float *)&v45 + 2) > *(float *)(a5 + 8) )
        {
          DWORD2(v45) = *(_DWORD *)(a5 + 8);
          v21 = *((float *)&v45 + 2);
          v23 = *((float *)&v45 + 2);
        }
        v24 = *((float *)&v45 + 3);
        v25 = *((float *)&v45 + 3);
        if ( *((float *)&v45 + 3) > *(float *)(a5 + 12) )
        {
          v22 = v20;
          HIDWORD(v45) = *(_DWORD *)(a5 + 12);
          v24 = *((float *)&v45 + 3);
          v25 = *((float *)&v45 + 3);
        }
        if ( v23 <= v16 || v25 <= v22 )
        {
          v24 = 0.0;
          v21 = 0.0;
          v18 = 0.0;
          v16 = 0.0;
          v45 = 0uLL;
        }
      }
      else
      {
        v24 = *((float *)&v45 + 3);
        v21 = *((float *)&v45 + 2);
        v18 = *((float *)&v45 + 1);
      }
      if ( v21 > v16 && v24 > v18 )
        break;
    }
LABEL_38:
    v8 = a4;
  }
  if ( *((_BYTE *)a3 + 2324) )
    goto LABEL_37;
  if ( v21 <= v16 || v24 <= v18 )
  {
    if ( !TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::IsWellOrdered((float *)&v45) )
    {
      CTreeDirty::SetFullDirty(a3);
      v6 = -2003304438;
      v38 = 241LL;
      v39 = 2291662858LL;
      goto LABEL_85;
    }
    goto LABEL_37;
  }
  if ( v16 <= -3.4028235e38 && v21 >= 3.4028235e38 || v18 <= -3.4028235e38 && v24 >= 3.4028235e38 )
  {
    CTreeDirty::SetFullDirty(a3);
    goto LABEL_37;
  }
  v26 = CTreeDirty::_Add(a3);
  v6 = v26;
  if ( v26 >= 0 )
  {
LABEL_37:
    v6 = 0;
    goto LABEL_38;
  }
  v39 = (unsigned int)v26;
  v38 = 246LL;
LABEL_85:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v38,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\treedirty.cpp",
    (const char *)v39);
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xE28u, 0LL);
  return v6;
}
