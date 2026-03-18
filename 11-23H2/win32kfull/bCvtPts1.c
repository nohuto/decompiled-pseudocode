/*
 * XREFs of bCvtPts1 @ 0x1C00F80F0
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C0049090 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     GreGetAppClipBox @ 0x1C00BAD80 (GreGetAppClipBox.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00BBED0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     GreRectVisible @ 0x1C00BD078 (GreRectVisible.c)
 *     GreExcludeClipRect @ 0x1C00BD4B0 (GreExcludeClipRect.c)
 *     NtGdiPatBlt @ 0x1C00BD720 (NtGdiPatBlt.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00BDAA4 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1C00BEBE0 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1C00C363C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     GreDrawStream @ 0x1C00FA480 (GreDrawStream.c)
 *     NtGdiAlphaBlend @ 0x1C00FBB30 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C0100110 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0105030 (NtGdiBitBltInternal.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C01078D0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     bFToL @ 0x1C0078740 (bFToL.c)
 */

__int64 __fastcall bCvtPts1(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // rsi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  float v10; // xmm1_4
  unsigned int v11; // r8d
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  unsigned int v16; // r8d
  _DWORD *v17; // rbx
  float v18; // xmm1_4
  unsigned int v19; // r8d
  _DWORD *v20; // rbx
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm3_4
  unsigned int v26; // r8d
  int v27; // [rsp+40h] [rbp+8h] BYREF
  int v28; // [rsp+58h] [rbp+20h] BYREF

  v27 = 0;
  v3 = a3;
  v28 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0xB) != 0 )
  {
    switch ( *(_DWORD *)(a1 + 32) & 0xB )
    {
      case 1:
        if ( a3 )
        {
          do
          {
            v17 = a2 + 1;
            v18 = (float)(16 * a2[1]) * *(float *)(a1 + 12);
            bFToL((float)(16 * *a2) * *(float *)a1, a2, 6u);
            bFToL(v18, a2 + 1, v19);
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *v17 += *(_DWORD *)(a1 + 28);
            --v3;
          }
          while ( v3 );
        }
        break;
      case 3:
        if ( a3 )
        {
          do
          {
            *a2 += *(_DWORD *)(a1 + 24);
            a2 += 2;
            *(a2 - 1) += *(_DWORD *)(a1 + 28);
            --v3;
          }
          while ( v3 );
        }
        break;
      case 8:
        if ( a3 )
        {
          do
          {
            v12 = (float)*a2;
            v13 = (float)a2[1];
            v14 = (float)(v13 * *(float *)(a1 + 8)) + (float)(v12 * *(float *)a1);
            v15 = (float)(v12 * *(float *)(a1 + 4)) + (float)(v13 * *(float *)(a1 + 12));
            bFToL(v14, &v27, 6u);
            bFToL(v15, &v28, v16);
            *a2 = (((*(_DWORD *)(a1 + 24) + v27) >> 3) + 1) >> 1;
            a2[1] = (((v28 + *(_DWORD *)(a1 + 28)) >> 3) + 1) >> 1;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 9:
        if ( a3 )
        {
          do
          {
            v10 = (float)a2[1] * *(float *)(a1 + 12);
            bFToL((float)*a2 * *(float *)a1, &v27, 6u);
            bFToL(v10, &v28, v11);
            *a2 = (((*(_DWORD *)(a1 + 24) + v27) >> 3) + 1) >> 1;
            a2 += 2;
            *(a2 - 1) = (((v28 + *(_DWORD *)(a1 + 28)) >> 3) + 1) >> 1;
            --v3;
          }
          while ( v3 );
        }
        break;
      case 11:
        v6 = *(_DWORD *)(a1 + 24);
        v7 = ((*(int *)(a1 + 28) >> 3) + 1) >> 1;
        v8 = ((v6 >> 3) + 1) >> 1;
        if ( a3 )
        {
          do
          {
            *a2 += v8;
            a2[1] += v7;
            a2 += 2;
            --v3;
          }
          while ( v3 );
        }
        break;
    }
  }
  else if ( a3 )
  {
    do
    {
      v20 = a2 + 1;
      v21 = (float)(16 * *a2);
      v22 = (float)(16 * a2[1]);
      v23 = v22 * *(float *)(a1 + 12);
      v24 = (float)(v22 * *(float *)(a1 + 8)) + (float)(v21 * *(float *)a1);
      v25 = (float)(v21 * *(float *)(a1 + 4)) + v23;
      bFToL(v24, a2, 6u);
      bFToL(v25, a2 + 1, v26);
      *a2 += *(_DWORD *)(a1 + 24);
      a2 += 2;
      *v20 += *(_DWORD *)(a1 + 28);
      --v3;
    }
    while ( v3 );
  }
  return 1LL;
}
