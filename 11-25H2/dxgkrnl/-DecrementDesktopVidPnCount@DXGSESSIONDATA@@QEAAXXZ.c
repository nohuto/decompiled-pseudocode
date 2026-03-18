/*
 * XREFs of ?DecrementDesktopVidPnCount@DXGSESSIONDATA@@QEAAXXZ @ 0x14005C314
 * Callers:
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x140198C50 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?SetPartOfDesktop@DISPLAY_SOURCE@@QEAAXE@Z @ 0x1403F5890 (-SetPartOfDesktop@DISPLAY_SOURCE@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGSESSIONDATA::DecrementDesktopVidPnCount(DXGSESSIONDATA *this)
{
  if ( *((int *)this + 4632) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 455;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_DesktopVidPnCount > 0", 455LL, 0LL, 0LL, 0LL, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 4632);
}
