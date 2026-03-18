/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1403F40A0
 * Callers:
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1402515E4 (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlInternalTryPinningScaling @ 0x1402D3678 (BmlInternalTryPinningScaling.c)
 *     BmlPinPathContentScaling @ 0x1402D43AC (BmlPinPathContentScaling.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402E8C80 (DxgkGetAdapterDefaultScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x140359DB0 (EnforceDriverModelScalingPolicy.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1403EC474 (_EnforceDriverModelScalingPolicy.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::GetAdapterDefaultScaling(VIDPN_MGR *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  result = 255LL;
  if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 3004LL) >= 1105 )
    return 4LL;
  return result;
}
