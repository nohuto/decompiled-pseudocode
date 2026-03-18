/*
 * XREFs of BmlIsSecondaryHardwareClonePath @ 0x1403C90E8
 * Callers:
 *     _BmlGetPathModeListForPath @ 0x1402DC9A4 (_BmlGetPathModeListForPath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x140365024 (BmlFunctionalizePath.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSecondaryHardwareClonePath(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int i; // r9d

  for ( i = 0; ; ++i )
  {
    if ( i >= a2 )
      return 0;
    if ( *(_DWORD *)(*(_QWORD *)(120LL * i + a1 + 16) + 24LL) == *(_DWORD *)(*(_QWORD *)(120LL * a2 + a1 + 16) + 24LL) )
      break;
  }
  if ( a3 )
    *a3 = i;
  return 1;
}
