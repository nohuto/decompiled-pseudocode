/*
 * XREFs of xInsertMetricsRFONTOBJ @ 0x1400B0180
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z @ 0x1400AF42C (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGAEAVUDCOBJ@@_NPEAVESTROBJ@@@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1400B0484 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B04DC (-GrepGetCharABCWidthsW@@YAHAEAVUDCOBJ@@IKPEAGKPEAXW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?bCheckMetricsCache@RFONTOBJ@@QEAAHXZ @ 0x1400B0338 (-bCheckMetricsCache@RFONTOBJ@@QEAAHXZ.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1400B03C4 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400B1B20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall xInsertMetricsRFONTOBJ(RFONTOBJ *this, _QWORD *a2, unsigned __int16 a3)
{
  __int64 v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rbp
  BOOL v9; // r14d
  bool v10; // zf
  struct _GLYPHDATA *v11; // rax
  __int64 v12; // rax
  __int64 v14; // rcx
  unsigned __int16 v15; // [rsp+40h] [rbp-98h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-90h] BYREF
  __int64 v17; // [rsp+50h] [rbp-88h] BYREF
  struct _GLYPHDATA v18; // [rsp+60h] [rbp-78h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  if ( (*(_DWORD *)(*(_QWORD *)this + 84LL) & 2) != 0 )
  {
    v16 = 0;
    v15 = a3;
    RFONTOBJ::vXlatGlyphArray(this, &v15, 1u, &v16, 0, 0);
    v6 = v16;
  }
  else
  {
    v6 = a3;
  }
  v7 = *(_QWORD *)this;
  if ( v6 == *(_DWORD *)(*(_QWORD *)this + 456LL) )
  {
    v14 = *(_QWORD *)(v5 + 8);
    if ( v14 )
    {
      *a2 = v14;
      return 1LL;
    }
  }
  if ( (unsigned int)RFONTOBJ::bCheckMetricsCache(this) )
  {
    v8 = *(_QWORD *)this;
    v9 = *(_DWORD *)(*(_QWORD *)this + 88LL) == 2;
    memset_0(&v18, 0, sizeof(v18));
    v10 = *(_DWORD *)(v8 + 648) == 0;
    v17 = *(_QWORD *)(v8 + 128);
    v11 = &v18;
    if ( v10 )
      v11 = *(struct _GLYPHDATA **)(v7 + 512);
    if ( (unsigned int)PFFOBJ::QueryFontData(
                         (PFFOBJ *)&v17,
                         *(struct DHPDEV__ **)(v8 + 112),
                         (struct _FONTOBJ *)v8,
                         v9 + 1,
                         v6,
                         v11,
                         0LL,
                         0) != -1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)this + 648LL) )
      {
        v12 = *(_QWORD *)(v7 + 512);
        *(_OWORD *)v12 = *(_OWORD *)&v18.gdf.pgb;
        *(_QWORD *)(v12 + 16) = *(_QWORD *)&v18.fxA;
      }
      **(_QWORD **)(v7 + 512) = 0LL;
      *a2 = *(_QWORD *)(v7 + 512);
      *(_QWORD *)(v7 + 512) += (-(__int64)(*(_DWORD *)(*(_QWORD *)this + 648LL) != 0) & 0xFFFFFFFFFFFFFFD8uLL) + 64;
      return 1LL;
    }
  }
  return 0LL;
}
