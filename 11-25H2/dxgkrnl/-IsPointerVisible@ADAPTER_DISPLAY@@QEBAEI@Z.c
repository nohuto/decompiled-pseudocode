/*
 * XREFs of ?IsPointerVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14005C018
 * Callers:
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1401BE158 (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1403137F8 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int8 __fastcall ADAPTER_DISPLAY::IsPointerVisible(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6118;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"VidPnSourceId < m_NumVidPnSources",
      6118LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(_BYTE *)(3984 * v3 + *((_QWORD *)this + 16) + 766);
}
