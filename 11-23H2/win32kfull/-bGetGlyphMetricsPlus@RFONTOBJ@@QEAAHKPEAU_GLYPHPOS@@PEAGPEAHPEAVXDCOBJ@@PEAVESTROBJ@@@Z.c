/*
 * XREFs of ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0112998
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C0112748 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1C02D999C (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C02D9C00 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x1C02D9F94 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02DA498 (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 *     ?vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z @ 0x1C02DA970 (-vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x1C02DAB38 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02DAF5C (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 * Callees:
 *     ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C00773D8 (-bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C00C84D4 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C00C8CA4 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00C9544 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C010FD30 (-gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C02B45A4 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C02B5588 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 */

__int64 __fastcall RFONTOBJ::bGetGlyphMetricsPlus(
        RFONTOBJ *this,
        struct RFONTOBJ *a2,
        struct _GLYPHPOS *a3,
        unsigned __int16 *a4,
        int *a5,
        struct XDCOBJ *a6,
        struct ESTROBJ *a7)
{
  unsigned __int16 *v7; // rdi
  struct _GLYPHPOS *v8; // rsi
  __int64 v9; // r14
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  bool v13; // zf
  struct GPRUN *v14; // r15
  _DWORD *v15; // r13
  int v16; // ebp
  __int64 v17; // r8
  struct _GLYPHDATA *LinkMetricsPlus; // rbp
  __int64 v20; // rbp
  struct GPRUN *Run; // rax
  unsigned __int16 *v22; // [rsp+40h] [rbp-38h]
  unsigned __int16 *v23; // [rsp+48h] [rbp-30h]
  unsigned __int16 *v24; // [rsp+80h] [rbp+8h]

  v7 = a4;
  v8 = a3;
  v9 = (unsigned int)a2;
  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL)
    && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2, (__int64)a3, (__int64)a4) )
  {
    return 0LL;
  }
  v11 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 1792LL) & 0x40000000) == 0 || *(_DWORD *)(v11 + 88) != 1 )
  {
    v12 = *(_DWORD **)(v11 + 480);
    v24 = v7;
    v22 = v7;
    v13 = *v12 == 0;
    *a5 = 1;
    if ( v13 )
    {
      for ( ; (_DWORD)v9; LODWORD(v9) = v9 - 1 )
      {
        v8->hg = *(_DWORD *)(*(_QWORD *)this + 460LL);
        v8->pgdf = (GLYPHDEF *)RFONTOBJ::pgdDefault(this);
        ++v8;
      }
    }
    else
    {
      v23 = &v7[v9];
      v14 = (struct GPRUN *)(v12 + 4);
      if ( v7 < v23 )
      {
        v15 = v12 + 5;
        do
        {
          v16 = *v7;
          v17 = (unsigned int)(v16 - *(_DWORD *)v14);
          if ( (unsigned int)v17 >= *v15 )
          {
            Run = RFONTOBJ::gprunFindRun(this, v16);
            v14 = Run;
            v17 = (unsigned int)(v16 - *(_DWORD *)Run);
            v15 = (_DWORD *)((char *)Run + 4);
            if ( (unsigned int)v17 >= *((_DWORD *)Run + 1) )
            {
              LinkMetricsPlus = RFONTOBJ::wpgdGetLinkMetricsPlus(this, a6, a7, v7, v24, v9, a5, 1);
              if ( !LinkMetricsPlus )
                return 0LL;
              goto LABEL_9;
            }
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)Run + 1) + 8 * v17);
          }
          else
          {
            _mm_lfence();
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v17);
          }
          if ( !LinkMetricsPlus )
          {
            v20 = (unsigned int)v17;
            if ( !(unsigned int)RFONTOBJ::bInsertMetricsPlus(
                                  this,
                                  (struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v17),
                                  *v7,
                                  (__int64)a4) )
              return 0LL;
            LinkMetricsPlus = *(struct _GLYPHDATA **)(*((_QWORD *)v14 + 1) + 8 * v20);
          }
LABEL_9:
          if ( !LinkMetricsPlus->gdf.pgb
            && *a5
            && *(_DWORD *)(*(_QWORD *)this + 88LL)
            && !(unsigned int)RFONTOBJ::bInsertGlyphbits(this, LinkMetricsPlus, v7 == v22, (__int64)a4) )
          {
            *a5 = 0;
          }
          ++v7;
          v8->hg = LinkMetricsPlus->hg;
          v8->pgdf = &LinkMetricsPlus->gdf;
          ++v8;
        }
        while ( v7 < v23 );
      }
    }
    return 1LL;
  }
  if ( a5 )
    *a5 = 0;
  return RFONTOBJ::bGetGlyphMetrics(this, (struct RFONTOBJ *)(unsigned int)v9, v8, v7, a6, a7);
}
