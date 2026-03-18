/*
 * XREFs of ?BmlGetScaledAspectRatio@@YAHAEBU_D3DKMDT_2DREGION@@@Z @ 0x1402DE95C
 * Callers:
 *     BmlCompareRegionsWithPivot @ 0x1402DDCA8 (BmlCompareRegionsWithPivot.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1402DE6EC (BmlCompareSourceModesWithMonitors.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlGetScaledAspectRatio(const struct _D3DKMDT_2DREGION *a1)
{
  signed int cy; // ecx

  if ( !a1->cy )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 125;
  }
  cy = a1->cy;
  if ( cy )
    return (unsigned int)((signed int)(100 * a1->cx) / cy);
  else
    return 0LL;
}
