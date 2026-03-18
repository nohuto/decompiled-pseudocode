/*
 * XREFs of ?GetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAII@Z @ 0x140031634
 * Callers:
 *     ?DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@@Z @ 0x1403D2A74 (-DmmGetCurrentIntegerVSyncFromClientVidPnSource@@YAJPEAXIPEAIPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x140031C38 (-IsCoreResourceSharedOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::GetLastCddIntegerVSync(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v2; // rdi

  v2 = a2;
  if ( !ADAPTER_DISPLAY::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6565;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"IsCoreResourceSharedOwner()", 6565LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)v2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6566;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6566LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(unsigned int *)(3984 * v2 + *((_QWORD *)this + 16) + 1076);
}
