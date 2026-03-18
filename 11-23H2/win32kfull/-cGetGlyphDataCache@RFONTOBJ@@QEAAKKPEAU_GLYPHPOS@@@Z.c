/*
 * XREFs of ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C02FD430
 * Callers:
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C02B3E78 (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02D9160 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02D980C (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     STROBJ_bEnum @ 0x1C02DB0F0 (STROBJ_bEnum.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C00C8CA4 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 */

unsigned __int64 __fastcall RFONTOBJ::cGetGlyphDataCache(
        RFONTOBJ *this,
        unsigned int a2,
        struct _GLYPHPOS *a3,
        __int64 a4)
{
  struct _GLYPHPOS *v7; // rbx
  struct _GLYPHPOS *v8; // rsi
  struct _GLYPHDATA *pgdf; // rdx

  if ( !*(_DWORD *)(*(_QWORD *)this + 88LL) )
    return a2;
  v7 = a3;
  v8 = &a3[a2];
  if ( a3 < v8 )
  {
    do
    {
      pgdf = (struct _GLYPHDATA *)v7->pgdf;
      if ( !pgdf->gdf.pgb && !(unsigned int)RFONTOBJ::bInsertGlyphbits(this, pgdf, v7 == a3, a4) )
        break;
      ++v7;
    }
    while ( v7 < v8 );
  }
  return 0xAAAAAAAAAAAAAAABuLL * (((char *)v7 - (char *)a3) >> 3);
}
