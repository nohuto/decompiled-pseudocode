/*
 * XREFs of ?GetDisplayOnlyDriverIgnoreMonitorFreqCheck@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14008F8B0
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1400451EC (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverIgnoreMonitorFreqCheck(ADAPTER_DISPLAY *this)
{
  unsigned int v1; // ebx
  DXGADAPTER *v3; // rcx

  v1 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 3128LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7043;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsDisplayOnlyAdapter()",
      7043LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 111) )
    return 1LL;
  v3 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( (*((_DWORD *)v3 + 111) & 0x100) != 0 )
    return 0LL;
  LOBYTE(v1) = !DXGADAPTER::SupportHWVSync(v3);
  return v1;
}
