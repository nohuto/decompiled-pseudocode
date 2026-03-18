/*
 * XREFs of ?DrawContentBorders@CCompositionSurfaceBitmap@@SAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@1AEBU_D3DCOLORVALUE@@@Z @ 0x1800296B0
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18002A7A0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@.c)
 *     ?DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18002B41C (-DrawLetterboxingMarginsInternal@CCompositionSurfaceBitmap@@AEAAJPEAVCDrawingContext@@AEBV-$TMil.c)
 *     ?Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801E2D20 (-Draw@CSwapchainRenderStrategy@@UEBAJPEAVCSurfaceBrush@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::DrawContentBorders(__int64 a1, float *a2, float *a3, __int64 a4)
{
  float v4; // xmm1_4
  unsigned int v5; // ebx
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  __int64 v16; // rax
  int v17; // eax
  __int64 *v18; // rcx
  float v19; // xmm0_4
  int v20; // xmm1_4
  __int64 v21; // rax
  int v22; // eax
  unsigned int v24; // xmm1_4
  __int64 (__fastcall *v25)(__int64, __int128 *, __int64); // rax
  int v26; // eax
  float v27; // xmm3_4
  __int64 v28; // rax
  int v29; // eax
  __int128 v30; // [rsp+30h] [rbp-28h] BYREF

  v4 = a3[1];
  v30 = 0LL;
  v5 = 0;
  if ( v4 <= a2[1] )
    goto LABEL_2;
  v18 = (__int64 *)(a1 + 16);
  *((float *)&v30 + 1) = a2[1];
  v19 = *a2;
  *((float *)&v30 + 3) = v4;
  v20 = *((_DWORD *)a2 + 2);
  v21 = *v18;
  *(float *)&v30 = v19;
  DWORD2(v30) = v20;
  v22 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v21 + 16))(v18, &v30, a4);
  v5 = v22;
  if ( v22 >= 0 )
  {
LABEL_2:
    v10 = a2[3];
    if ( v10 <= a3[3]
      || (*((float *)&v30 + 1) = a3[3],
          v24 = *((_DWORD *)a2 + 2),
          v25 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)(a1 + 16) + 16LL),
          *(float *)&v30 = *a2,
          *((_QWORD *)&v30 + 1) = __PAIR64__(LODWORD(v10), v24),
          v26 = v25(a1 + 16, &v30, a4),
          v5 = v26,
          v26 >= 0) )
    {
      v11 = *a2;
      v12 = *a3;
      if ( *a3 <= *a2
        || (v27 = a3[3], v27 <= a3[1])
        || (*((float *)&v30 + 1) = a3[1],
            v28 = *(_QWORD *)(a1 + 16),
            *(float *)&v30 = v11,
            *((_QWORD *)&v30 + 1) = __PAIR64__(LODWORD(v27), LODWORD(v12)),
            v29 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(v28 + 16))(a1 + 16, &v30, a4),
            v5 = v29,
            v29 >= 0) )
      {
        v13 = a2[2];
        v14 = a3[2];
        if ( v13 > v14 )
        {
          v15 = a3[3];
          if ( v15 > a3[1] )
          {
            *((float *)&v30 + 1) = a3[1];
            v16 = *(_QWORD *)(a1 + 16);
            *(float *)&v30 = v14;
            *((_QWORD *)&v30 + 1) = __PAIR64__(LODWORD(v15), LODWORD(v13));
            v17 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64))(v16 + 16))(a1 + 16, &v30, a4);
            v5 = v17;
            if ( v17 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x2B2u, 0LL);
          }
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x2A6u, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x29Au, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x28Fu, 0LL);
  }
  return v5;
}
