/*
 * XREFs of vIFIMetricsToEnumLogFontExDvW @ 0x1400F8E98
 * Callers:
 *     bInitSystemFont @ 0x1403E964C (bInitSystemFont.c)
 *     bInitOneStockFontInternal @ 0x1403EA6C8 (bInitOneStockFontInternal.c)
 * Callees:
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1400F8E50 (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?vLookupScript@@YAXKPEAGK@Z @ 0x1400F8F34 (-vLookupScript@@YAXKPEAGK@Z.c)
 *     ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x1400F9A00 (-vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall vIFIMetricsToEnumLogFontExDvW(__int64 a1, struct _IFIMETRICS *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rbx
  unsigned int *v6; // rdx

  vIFIMetricsToEnumLogFontW((struct tagENUMLOGFONTW *)a1, a2);
  vLookupScript(a2->jWinCharSet, (unsigned __int16 *)(a1 + 284), v4);
  LODWORD(v5) = 0;
  if ( ((a2->flInfo & 0x4000) != 0 || IsVariableFont(a2)) && a2->cjIfiExtra > 0xC )
  {
    v6 = (ULONG *)((char *)&a2->cjThis + a2[1].dpwszStyleName);
    v5 = v6[1];
    if ( (unsigned int)v5 > 0x10 )
      v5 = 16LL;
    memmove((void *)(a1 + 348), v6, 4 * v5 + 8);
  }
  else
  {
    *(_DWORD *)(a1 + 348) = 134248036;
  }
  *(_DWORD *)(a1 + 352) = v5;
}
