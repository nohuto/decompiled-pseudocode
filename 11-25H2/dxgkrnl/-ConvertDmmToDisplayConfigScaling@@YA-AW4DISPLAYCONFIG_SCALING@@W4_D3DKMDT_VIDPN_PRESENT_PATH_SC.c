/*
 * XREFs of ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1402E8BE8
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1402E7D24 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1402E85B8 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ConvertDmmToDisplayConfigScaling(unsigned int a1)
{
  if ( a1 == 1 || a1 == 2 || a1 == 3 || a1 == 4 || a1 == 5 )
    return a1;
  if ( a1 == 253 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 938;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Scaling != D3DKMDT_VPPS_PREFERRED",
      938LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 128LL;
}
