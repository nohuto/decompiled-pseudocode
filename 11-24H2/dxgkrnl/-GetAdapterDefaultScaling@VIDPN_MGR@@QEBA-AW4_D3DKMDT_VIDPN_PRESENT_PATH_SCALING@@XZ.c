/*
 * XREFs of ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1403EDFA0
 * Callers:
 *     ?DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14025841C (-DmmGetDefaultScaling@@YAJQEAXPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402D71F0 (DxgkGetAdapterDefaultScaling.c)
 *     EnforceDriverModelScalingPolicy @ 0x1402D8E14 (EnforceDriverModelScalingPolicy.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlPinPathContentScaling @ 0x14038B9E0 (BmlPinPathContentScaling.c)
 *     BmlInternalTryPinningScaling @ 0x14038C2E8 (BmlInternalTryPinningScaling.c)
 *     _EnforceDriverModelScalingPolicy @ 0x1403E5DC0 (_EnforceDriverModelScalingPolicy.c)
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
