/*
 * XREFs of ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x14019FA90
 * Callers:
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1401E74B0 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseOverlayId(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v3; // rdi

  v3 = a2;
  if ( a2 >= *(_DWORD *)(*((_QWORD *)this + 2) + 2444LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3416;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"OverlayId < GetAdapter()->m_DriverCaps.MaxOverlays",
      3416LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_QWORD *)this + v3 + 103) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3417;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_OverlayOwner[OverlayId] != NULL",
      3417LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *((_QWORD *)this + v3 + 103) = 0LL;
}
