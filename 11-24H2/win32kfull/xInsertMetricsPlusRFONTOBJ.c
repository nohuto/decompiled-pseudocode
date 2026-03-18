/*
 * XREFs of xInsertMetricsPlusRFONTOBJ @ 0x1400ACD2C
 * Callers:
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400AC448 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1400AD4E8 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400AE8F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVUDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400AEEE0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVUDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z @ 0x1400AF620 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@AEAVUDCOBJ@@PEAVESTROBJ@@GKKPEAHHH@Z.c)
 * Callees:
 *     ?QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU_GLYPHBITS@@@Z @ 0x1400AC380 (-QueryGlyphMetricsPlusBits@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAPEAU_GLYPHDATA@@PEAPEAU.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1400B0338 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400B03C4 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400B0484 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400B1B20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z @ 0x140126220 (-pgbCheckGlyphCache@RFONTOBJ@@QEAAPEAX_K@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x140126B60 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xInsertMetricsPlusRFONTOBJ(RFONTOBJ *this, struct _GLYPHDATA **a2, unsigned __int16 a3)
{
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  unsigned int v13; // eax
  struct _GLYPHDATA *v15; // rcx
  unsigned int v16; // ebx
  void *v17; // rax
  struct _GLYPHDATA *v18; // rcx
  void *v19; // r13
  unsigned int FontData; // eax
  __int64 v21; // rcx
  unsigned __int16 v22; // [rsp+40h] [rbp-59h] BYREF
  struct _GLYPHDATA *v23; // [rsp+48h] [rbp-51h] BYREF
  struct _GLYPHBITS *v24; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v25[3]; // [rsp+58h] [rbp-41h] BYREF
  struct _GLYPHDATA v26; // [rsp+70h] [rbp-29h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) != 0 )
  {
    LODWORD(v23) = 0;
    v22 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v22, 1u, (unsigned int *)&v23, 0, 0);
    v7 = (unsigned int)v23;
  }
  else
  {
    v7 = a3;
  }
  v8 = *(_QWORD *)this;
  if ( v7 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
  {
    v15 = *(struct _GLYPHDATA **)(v6 + 8);
    if ( v15 )
    {
      *a2 = v15;
      return 1LL;
    }
  }
  if ( !*(_DWORD *)(v8 + 88) )
    return RFONTOBJ::bInsertMetrics(this, a2, a3);
  if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
  {
    if ( *(_DWORD *)(*(_QWORD *)this + 88LL) == 2 )
      return RFONTOBJ::bInsertMetricsPlusPath(this, a2, a3);
    v25[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
    v12 = *(_QWORD *)(v25[0] + 96LL);
    if ( v12 == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v10, v9, v11) + 96) + 24152LL) )
    {
      v23 = 0LL;
      v24 = 0LL;
      v13 = *(_DWORD *)(v8 + 640);
      *(_DWORD *)(v8 + 652) = 6;
      if ( (unsigned int)PFFOBJ::QueryGlyphMetricsPlusBits(
                           (PFFOBJ *)v25,
                           *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                           *(struct _FONTOBJ **)this,
                           v7,
                           v13,
                           &v23,
                           &v24) != -1 )
      {
        v23->gdf.pgb = v24;
        *a2 = v23;
        return 1LL;
      }
      return 0LL;
    }
    memset_0(&v26, 0, sizeof(v26));
    if ( *(_QWORD *)(v8 + 632) <= *(_QWORD *)(v8 + 592) - *(_QWORD *)(v8 + 584) )
    {
      v16 = *(_DWORD *)(v8 + 632);
      goto LABEL_19;
    }
    v16 = PFFOBJ::QueryFontData(
            (PFFOBJ *)v25,
            *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
            *(struct _FONTOBJ **)this,
            1u,
            v7,
            &v26,
            0LL,
            0);
    if ( v16 != -1 )
    {
LABEL_19:
      v17 = RFONTOBJ::pgbCheckGlyphCache(this, v16);
      v18 = &v26;
      v19 = v17;
      if ( !*(_DWORD *)(*(_QWORD *)this + 648LL) )
        v18 = *(struct _GLYPHDATA **)(v8 + 512);
      FontData = PFFOBJ::QueryFontData(
                   (PFFOBJ *)v25,
                   *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL),
                   *(struct _FONTOBJ **)this,
                   1u,
                   v7,
                   v18,
                   v17,
                   v16);
      if ( FontData != -1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)this + 648LL) )
        {
          v21 = *(_QWORD *)(v8 + 512);
          *(_OWORD *)v21 = *(_OWORD *)&v26.gdf.pgb;
          *(_QWORD *)(v21 + 16) = *(_QWORD *)&v26.fxA;
        }
        *a2 = *(struct _GLYPHDATA **)(v8 + 512);
        *(_QWORD *)(v8 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 648LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
        if ( v19 )
          *(_QWORD *)(v8 + 584) += FontData;
        return 1LL;
      }
    }
  }
  return 0LL;
}
