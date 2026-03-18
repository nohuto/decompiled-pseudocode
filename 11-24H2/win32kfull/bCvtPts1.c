/*
 * XREFs of bCvtPts1 @ 0x1400C5774
 * Callers:
 *     GreAlphaBlend @ 0x140010F88 (GreAlphaBlend.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x140015184 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ?GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x140016D8C (-GrepPolyPatBlt@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     NtGdiSetPixel @ 0x140019850 (NtGdiSetPixel.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     GreExcludeClipRect @ 0x140039FD0 (GreExcludeClipRect.c)
 *     ?GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400C3D24 (-GrepRectVisible@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     GrePatBlt @ 0x1400C4060 (GrePatBlt.c)
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x1400C47DC (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x1400C4DA4 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     NtGdiGetPixel @ 0x1400C51B0 (NtGdiGetPixel.c)
 *     ?Src@BLTRECORD@@QEAAHHHHH@Z @ 0x1400C5620 (-Src@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?Trg@BLTRECORD@@QEAAHHHHH@Z @ 0x1400C5684 (-Trg@BLTRECORD@@QEAAHHHHH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400C56E8 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 *     ?bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z @ 0x1400C5718 (-bXform@DC@@QEBA_NAEBVEXFORMOBJ@@AEAVERECTL@@@Z.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400C5BA4 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     GreGradientFill @ 0x1400C87D4 (GreGradientFill.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400C95C8 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400CCB64 (-GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z @ 0x1400D2E9C (-GrepLineTo@@YAHAEAVXDCOBJ@@HH@Z.c)
 *     NtGdiExtFloodFill @ 0x14015AE80 (NtGdiExtFloodFill.c)
 *     ?GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016E820 (-GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     ?GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016ECA0 (-GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x140172FB0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401A37F4 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     NtGdiPtVisible @ 0x1401EA4C0 (NtGdiPtVisible.c)
 * Callees:
 *     bFToL @ 0x1400E8DB0 (bFToL.c)
 */

__int64 __fastcall bCvtPts1(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  __int64 v4; // rsi
  int *v5; // rdi
  __int64 v6; // rbp
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int i; // eax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  int v18; // r10d
  unsigned int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // r10d
  unsigned int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rax
  _DWORD *v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  _DWORD *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+50h] [rbp+8h] BYREF
  int v35; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v4 = a3;
  LODWORD(a3) = 0;
  v5 = (int *)a2;
  LODWORD(a2) = 0;
  v34 = 0;
  v35 = 0;
  v6 = a1;
  v7 = v3 & 0xB;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 2;
      if ( v9 )
      {
        v10 = v9 - 5;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            if ( v11 == 2 )
            {
              v12 = *(_DWORD *)(a1 + 24);
              v13 = ((*(int *)(a1 + 28) >> 3) + 1) >> 1;
              for ( i = ((v12 >> 3) + 1) >> 1; v4; --v4 )
              {
                *v5 += i;
                v5[1] += v13;
                v5 += 2;
              }
            }
          }
          else
          {
            for ( ; v4; --v4 )
            {
              v16 = (__m128i)COERCE_UNSIGNED_INT((float)*v5);
              v17 = (__m128i)COERCE_UNSIGNED_INT((float)v5[1]);
              *(float *)v16.m128i_i32 = *(float *)v16.m128i_i32 * *(float *)a1;
              *(float *)v17.m128i_i32 = *(float *)v17.m128i_i32 * *(float *)(a1 + 12);
              v18 = _mm_cvtsi128_si32(v16);
              v19 = (unsigned __int8)(v18 >> 23);
              if ( v19 <= 0x9E )
              {
                v20 = v18 & 0x7FFFFFLL | 0x800000;
                v21 = v19 < 0x76 ? v20 >> (118 - (unsigned __int8)v19) : v20 << ((unsigned __int8)v19 - 118);
                a3 = (v21 + 0x80000000LL) >> 32;
                if ( v18 < 0 )
                  LODWORD(a3) = -(int)a3;
              }
              v22 = _mm_cvtsi128_si32(v17);
              v23 = (unsigned __int8)(v22 >> 23);
              if ( v23 <= 0x9E )
              {
                v24 = v22 & 0x7FFFFFLL | 0x800000;
                v25 = v23 < 0x76 ? v24 >> (118 - (unsigned __int8)v23) : v24 << ((unsigned __int8)v23 - 118);
                a2 = (v25 + 0x80000000LL) >> 32;
                if ( v22 < 0 )
                  LODWORD(a2) = -(int)a2;
              }
              *v5 = ((((int)a3 + *(_DWORD *)(a1 + 24)) >> 3) + 1) >> 1;
              v5[1] = ((((int)a2 + *(_DWORD *)(a1 + 28)) >> 3) + 1) >> 1;
              v5 += 2;
            }
          }
        }
        else
        {
          for ( ; v4; --v4 )
          {
            bFToL(a1, &v34, 6LL);
            bFToL(v29, &v35, v30);
            a1 = (unsigned int)((((*(_DWORD *)(v6 + 24) + v34) >> 3) + 1) >> 1);
            *v5 = a1;
            v5[1] = (((v35 + *(_DWORD *)(v6 + 28)) >> 3) + 1) >> 1;
            v5 += 2;
          }
        }
      }
      else
      {
        for ( ; v4; --v4 )
        {
          *v5 += *(_DWORD *)(a1 + 24);
          v5 += 2;
          *(v5 - 1) += *(_DWORD *)(a1 + 28);
        }
      }
    }
    else
    {
      for ( ; v4; --v4 )
      {
        v26 = v5 + 1;
        bFToL(a1, v5, 6LL);
        bFToL(v27, v5 + 1, v28);
        *v5 += *(_DWORD *)(v6 + 24);
        v5 += 2;
        *v26 += *(_DWORD *)(v6 + 28);
      }
    }
  }
  else
  {
    for ( ; v4; --v4 )
    {
      v31 = v5 + 1;
      bFToL(a1, v5, 6LL);
      bFToL(v32, v5 + 1, v33);
      *v5 += *(_DWORD *)(v6 + 24);
      v5 += 2;
      a1 = *(unsigned int *)(v6 + 28);
      *v31 += a1;
    }
  }
  return 1LL;
}
