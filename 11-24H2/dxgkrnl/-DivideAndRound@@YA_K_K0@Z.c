/*
 * XREFs of ?DivideAndRound@@YA_K_K0@Z @ 0x140063A38
 * Callers:
 *     BmlGetMonitorModePreference @ 0x1402DFFEC (BmlGetMonitorModePreference.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x140342580 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x140361958 (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x14037BD70 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     BmlCompareMonitorRegions @ 0x1403F7A68 (BmlCompareMonitorRegions.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DivideAndRound(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  if ( !a2 )
    return -1LL;
  v4 = a1 % a2;
  v5 = a1 / a2;
  result = v5 + 1;
  if ( v4 < a2 - v4 )
    return v5;
  return result;
}
