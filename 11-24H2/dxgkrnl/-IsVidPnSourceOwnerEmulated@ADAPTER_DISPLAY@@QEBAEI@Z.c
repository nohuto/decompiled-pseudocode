/*
 * XREFs of ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14006AFDC
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1401AB7D0 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031B58 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

char __fastcall ADAPTER_DISPLAY::IsVidPnSourceOwnerEmulated(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // rsi
  char v4; // bl
  __int64 v5; // rax

  v2 = a2;
  v4 = 1;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6502;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 6502LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6503;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6503LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *((_QWORD *)this + 16);
  if ( *(_DWORD *)(4024 * v2 + v5 + 736) != 1 || !*(_QWORD *)(4024 * v2 + v5 + 744) )
    return 0;
  return v4;
}
