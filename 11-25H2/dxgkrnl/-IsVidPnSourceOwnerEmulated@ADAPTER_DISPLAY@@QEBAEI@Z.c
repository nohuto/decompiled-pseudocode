/*
 * XREFs of ?IsVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14006B3BC
 * Callers:
 *     DxgkAdjustFullscreenGamma @ 0x1401A92D0 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
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
    WdLogGlobalForLineNumber = 6479;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 6479LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6480;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6480LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *((_QWORD *)this + 16);
  if ( *(_DWORD *)(3984 * v2 + v5 + 736) != 1 || !*(_QWORD *)(3984 * v2 + v5 + 744) )
    return 0;
  return v4;
}
