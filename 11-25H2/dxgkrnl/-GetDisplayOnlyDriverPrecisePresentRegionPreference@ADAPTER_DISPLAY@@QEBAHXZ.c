/*
 * XREFs of ?GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14004D66C
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031E518 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverPrecisePresentRegionPreference(ADAPTER_DISPLAY *this)
{
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 3128LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7019;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsDisplayOnlyAdapter()",
      7019LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *((unsigned int *)this + 108);
}
