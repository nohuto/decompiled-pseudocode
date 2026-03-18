/*
 * XREFs of ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x14019D640
 * Callers:
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1401E2280 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseOverlayId(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v3; // rdi

  v3 = a2;
  if ( a2 >= *(_DWORD *)(*((_QWORD *)this + 2) + 2444LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3417;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"OverlayId < GetAdapter()->m_DriverCaps.MaxOverlays",
      3417LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)this + v3 + 103) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3418;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"m_OverlayOwner[OverlayId] != NULL",
      3418LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_QWORD *)this + v3 + 103) = 0LL;
}
