/*
 * XREFs of ?GetDisplayOnlyDriverPrecisePresentRegionPreference@ADAPTER_DISPLAY@@QEBAHXZ @ 0x14004D00C
 * Callers:
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14034F110 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayOnlyDriverPrecisePresentRegionPreference(ADAPTER_DISPLAY *this)
{
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 3128LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 7042;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetAdapter()->IsDisplayOnlyAdapter()",
      7042LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *((unsigned int *)this + 110);
}
